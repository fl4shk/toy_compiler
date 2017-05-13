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

#ifndef symbol_table_class_hpp
#define symbol_table_class_hpp

#include "token_types.hpp"

namespace toy
{


class symbol
{
private:		// variables
	string_view internal_name;
	tok internal_typ = 0;
	int internal_val = 0;
	
private:		// functions
	gen_setter_by_con_ref(name);
	gen_setter_by_val(typ);
	
	
public:		// functions
	inline symbol()
	{
	}
	inline symbol( const symbol& to_copy ) = default;
	inline symbol( const string_view& s_name, tok s_typ, int s_val )
	{
		set_name(s_name);
		set_typ(s_typ);
		set_val(s_val);
	}
	virtual inline ~symbol()
	{
	}
	
	inline symbol& operator = ( const symbol& to_copy ) = default;
	
	gen_setter_by_val(val);
	
	gen_getter_by_con_ref(name);
	gen_getter_by_val(typ);
	gen_getter_by_val(val);
};

class symbol_table
{
private:		// variables
	// Prevent duplicate std::strings, should be okay, not the fastest
	// thing I could ever do, though.
	std::unordered_set<std::string> internal_str_set;
	std::unordered_map< string_view, symbol > internal_table;
	
	
private:		// functions
	gen_getter_by_ref(str_set);
	gen_getter_by_ref(table);
	
	string_view get_name( std::string&& name_as_str );
	
public:		// functions
	inline symbol_table()
	{
	}
	inline symbol_table( const symbol_table& to_copy ) = delete;
	virtual inline ~symbol_table()
	{
	}
	symbol_table& operator = ( const symbol_table& to_copy ) = delete;
	
	
	symbol& enter( std::string&& name_as_str, tok typ, int val );
	bool find( symbol*& ret, const std::string& name_as_str );
	void erase( const std::string& name_as_str );
	
	inline auto cbegin() const
	{
		return table().cbegin();
	}
	inline auto cend() const
	{
		return table().cend();
	}
	
	gen_getter_by_con_ref(str_set);
	gen_getter_by_con_ref(table);
	
};


}


#endif		// symbol_table_class_hpp
