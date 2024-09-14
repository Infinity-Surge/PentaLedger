package data

import (
	"time"
)

type Company struct {
	ID           int64     `json:"id"`            // unique integer ID for the company
	CreatedAt    time.Time `json:"created_at"`    // Timestamp for when the company record was created.
	LastModified time.Time `json:"last_modified"` // Timestamp of last modification
	CompanyName  string    `json:"company_name"`  // company name
	LegalName    string    `json:"legal_name"`    // Legal company name
}
