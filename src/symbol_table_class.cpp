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


#include "symbol_table_class.hpp"


namespace toy
{


string_view symbol_table::get_name( std::string&& name_as_str )
{
	return string_view(*str_set().insert(std::move(name_as_str)).first);
}


symbol& symbol_table::enter( std::string&& name_as_str, tok typ, int val )
{
	string_view name = get_name(std::move(name_as_str));
	
	return table().insert( { name, symbol( name, typ, val ) } ).first
		->second;
}
bool symbol_table::find( symbol*& ret, const std::string& name_as_str )
{
	auto temp = table().find(string_view(name_as_str));
	
	if ( temp == table().end() )
	{
		ret = nullptr;
		return false;
	}
	
	ret = &(temp->second);
	return true;
}

void symbol_table::erase( const std::string& name_as_str )
{
	str_set().erase(name_as_str);
	table().erase(string_view(name_as_str));
}



}
