/*
 * Copyright (c) 2006 Peter Tummeltshammer for the Spiral project (www.spiral.net)
 * Copyright (c) 2006 Carnegie Mellon University
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef TABLE_H
#define TABLE_H

#include "chains.h"

void   init_table(const char *);
chain *get_chain_table(coeff_t c);
void   delete_table();

chain * read_chain(istream &fin);

#endif
