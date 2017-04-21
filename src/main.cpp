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

#include "misc_includes.hpp"

#include "lex_class.hpp"
#include "token_types.hpp"

using toy::tok;
using std::ostream;

ostream& operator << ( ostream& os, tok t )
{
	return ( os << static_cast<int>(t) );
}

int main( int argc, char** argv )
{
	printout( tok::tadd, " ", tok::tge, " ", tok::tle, " ", tok::tasr, 
		"\n" );
	
	return 0;
}
