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

#include "misc_includes.hpp"

namespace toy
{

typedef s32 tok;

enum class tok_defn : tok
{
	arith_add  = '+',
	arith_sub  = '-',
	
	bit_and    = '&',
	bit_or     = '|',
	bit_xor    = '^',
	bit_not    = '~',
	
	op_assign  = '=',
	log_not    = '!',
	cmp_gt     = '>',
	cmp_lt     = '<',
	
	
	// ==
	cmp_eq     = 9001,
	
	// >=
	cmp_ge,
	
	// <=
	cmp_le,
	
	// !=
	cmp_ne,
	
	
	// <<
	arith_lsl,
	
	//// >>
	//arith_lsr,
	
	// >>
	arith_asr,
	
	
	typ_int,
	//typ_uint,
	
	
	lex_number,
	lex_ident,
	
	
	//key_if,
	//key_else,
	//key_while,
	//key_break,
	//key_undef,
	
	
	// Tuple operations
	//top_ld,
	//top_st,
	//top_sel,
	//top_kill,
	
	
};
template< typename type >
inline tok cast_typ( type typ )
{
	return static_cast<tok>(typ);
}

}



#endif		// token_types_hpp
