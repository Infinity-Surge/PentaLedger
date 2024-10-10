package main

import (
	"encoding/json"
	"fmt"
	"net/http"
	"time"

	"pentaledger.infinity-surge.com/internal/data"
)

func (app *application) createCompanyHandler(w http.ResponseWriter, r *http.Request) {
	// Declare an anonymous struct to hold the information that we expect to be in the
	// HTTP request body (note that the field names and types in the struct are a subset
	// of the Movie struct that we created earlier). This struct will be our *target
	// decode destination*.
	var input struct {
		ID           int64     `json:"id"`            // unique integer ID for the company
		CreatedAt    time.Time `json:"created_at"`    // Timestamp for when the company record was created.
		LastModified time.Time `json:"last_modified"` // Timestamp of last modification
		CompanyName  string    `json:"company_name"`  // company name
		LegalName    string    `json:"legal_name"`    // Legal company name
	}

	// Initialize a new json.Decoder instance which reads from the request body, and
	// then use the Decode() method to decode the body contents into the input struct.
	// Importantly, notice that when we call Decode() we pass a *pointer* to the input
	// struct as the target decode destination. If there was an error during decoding,
	// we also use our generic errorResponse() helper to send the client a 400 Bad
	// Request response containing the error message.
	err := json.NewDecoder(r.Body).Decode(&input)
	if err != nil {
		app.errorResponse(w, r, http.StatusBadRequest, err.Error())
		return
	}

	// Dump the contents of the input struct in a HTTP response.
	fmt.Fprintf(w, "%+v\n", input)
}

// Add a showCompanyHandler for the "GET /v1/company/:id" endpoint. For now, we retrieve
// the interpolated "id" parameter from the current URL and include it in a placeholder
// response.
func (app *application) showCompanyHandler(w http.ResponseWriter, r *http.Request) {
	id, err := app.readIDParam(r)
	if err != nil {
		http.NotFound(w, r)
		return
	}

	company := data.Company{
		ID:           id,
		CreatedAt:    time.Now(),
		LastModified: time.Now(),
		CompanyName:  "Infinity Surge",
		LegalName:    "Infinity Surge Inc.",
	}

	// Encode the struct to JSON and send it as the HTTP response.
	err = app.writeJSON(w, http.StatusOK, envelope{"company": company}, nil)
	if err != nil {
		app.notFoundResponse(w, r)
	}
}
