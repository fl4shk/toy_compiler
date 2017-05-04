// This file is part of toy_compiler.
// 
// Copyright 2017 by Andrew Clark (FL4SHK).
// 
// toy_compiler is free software: you can redistribute it and/or
// modify it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
// 
// toy_compiler is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along
// with toy_compiler.  If not, see <http://www.gnu.org/licenses/>.

#ifndef token_types_hpp
#define token_types_hpp

#include <iostream>
#include "liborangepower_src/gen_getter_setter_defines.hpp"

namespace toy
{

enum class hi_tok
{
	tadd = '+',
	tsub = '-',
	tand = '&',
	tor  = '|',
	txor = '^',
	tgt  = '>',
	tlt  = '<',
	teq  = '=',
	
	tge  = 9001,
	tle,
	tne,
	tlsl,
	tlsr,
	tasr,
	
	tld,
	tst,
	tsel,
	tkill,
	
	tword,
	tint,
	tuint,
	
	tif,
	telse,
	twhile,
	tbreak,
	tundef,
};

}

gen_enum_ostm_sl_decl
std::ostream& operator << ( std::ostream& ostm, toy::tok t );


#endif		// token_types_hpp
