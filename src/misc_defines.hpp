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

#ifndef misc_defines_hpp
#define misc_defines_hpp


// Getters

#ifndef gen_generic_getter_by_val
// By value
#define gen_generic_getter_by_val( prefix, suffix ) \
inline auto suffix() const \
{ \
	return prefix##_##suffix; \
}
#endif

#ifndef gen_getter_by_val
// By value
#define gen_getter_by_val( suffix ) \
gen_generic_getter_by_val( internal, suffix )
#endif



#ifndef gen_generic_getter_by_con_ref
// By constant reference
#define gen_generic_getter_by_con_ref( prefix, suffix ) \
inline const auto& suffix() const \
{ \
	return prefix##_##suffix; \
}
#endif

#ifndef gen_getter_by_con_ref
// By constant reference
#define gen_getter_by_con_ref( suffix ) \
gen_generic_getter_by_con_ref( internal, suffix )
#endif



#ifndef gen_generic_getter_by_ref
// By reference
#define gen_generic_getter_by_ref( prefix, suffix ) \
inline auto& suffix() \
{ \
	return prefix##_##suffix; \
}
#endif

#ifndef gen_getter_by_ref
// By reference
#define gen_getter_by_ref( suffix ) \
gen_generic_getter_by_ref( internal, suffix )
#endif



// Setters

#ifndef gen_generic_setter_by_val
// By value
#define gen_generic_setter_by_val( prefix, suffix ) \
inline auto set_##suffix( decltype(prefix##_##suffix) to_copy ) \
{ \
	prefix##_##suffix = to_copy; \
	return prefix##_##suffix; \
}
#endif

#ifndef gen_setter_by_val
// By value
#define gen_setter_by_val( suffix ) \
gen_generic_setter_by_val( internal, suffix )
#endif



#ifndef gen_generic_setter_by_con_ref
// By const reference
#define gen_generic_setter_by_con_ref( prefix, suffix ) \
inline const auto& set_##suffix \
	( const decltype(prefix##_##suffix)& to_copy ) \
{ \
	prefix##_##suffix = to_copy; \
	return prefix##_##suffix; \
}
#endif

#ifndef gen_setter_by_con_ref
// By const reference
#define gen_setter_by_con_ref( suffix ) \
gen_generic_setter_by_con_ref( internal, suffix )
#endif



#ifndef gen_generic_setter_by_rval_ref
// By rvalue reference
#define gen_generic_setter_by_rval_ref( prefix, suffix ) \
inline const auto& set_##suffix \
	( decltype(prefix##_##suffix)&& to_move ) \
{ \
	prefix##_##suffix = std::move(to_move); \
	return prefix##_##suffix; \
}
#endif

#ifndef gen_setter_by_rval_ref
// By rvalue reference
#define gen_setter_by_rval_ref( suffix ) \
gen_generic_setter_by_rval_ref( internal, suffix )
#endif




#endif		// misc_defines_hpp
