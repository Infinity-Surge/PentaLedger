package main

import (
	"fmt"
	"net/http"
	"time"

	"pentaledger.infinity-surge.com/internal/data"
)

func (app *application) createCompanyHandler(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintln(w, "create a new Company")
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
