// SPDX-License-Identifier: GPL-2.0-only
//! \file PentaLedger.hpp
//! \author Joe Turner <joe.turner@infinity-surge.com>
//!
//! \copyright
//! Copyright (c) 2024 Joe Turner.
//!
//! This program is free software; you can redistribute it and/or
//! modify it under the terms of the GNU General Public License
//! as published by the Free Software Foundation; either version 2
//! of the License, or (at your option) any later version.
//! 
//! This program is distributed in the hope that it will be useful,
//! but WITHOUT ANY WARRANTY; without even the implied warranty of
//! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//! GNU General Public License for more details.
//! 
//! You should have received a copy of the GNU General Public License
//! along with this program; If not, see <http://www.gnu.org/licenses/>.
#ifndef _FILE_HEADER_HPP_
#define _FILE_HEADER_HPP_

//! Record pointer 
//! uses long which is dependant on 32/64bit architecture.
typedef long RPTR;  //!< b-tree and node address

//! Database Flat File Header Structure
typedef struct fhdr {
    //! \brief Magic Identifier
    //! Magic identifier to identify a file as a database flat file.
    //! Value must be "CDB" followed by a null.
    char magic[4];

    //! \brief Database file version number
    unsigned short version;

    //! \brief Location of first free record
    RPTR first_record;

    //! \brief Next record
    RPTR next_record;

    //! \brief Record Length
    int record_length;
} FHEADER;

//! Macro to calculate record location given logical record
//! number
#define flocate(r,l) ((long)(sizeof(FHEADER)+(((r)-1)*(l))))

void init_file_header(FHEADER *h, int len);

#endif
