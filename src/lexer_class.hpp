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

#ifndef lexer_class_hpp
#define lexer_class_hpp

#include "misc_includes.hpp"
#include "token_types.hpp"



namespace toy
{

class lexer
{
private:		// variables
	
	size_t internal_lineno = 1;
	tok internal_nextc = ' ';
	tok internal_nextt = ' ';
	
	
private:		// functions
	gen_setter_by_val(nextc);
	gen_setter_by_val(nextt);
	
public:		// functions
	gen_getter_by_val(nextc);
	gen_getter_by_val(nextt);
	
};

}

#endif		// lexer_class_hpp
