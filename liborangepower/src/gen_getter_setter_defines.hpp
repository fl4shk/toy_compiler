#ifndef liborangepower_gen_getter_setter_defines_hpp
#define liborangepower_gen_getter_setter_defines_hpp


// Getters

#ifndef gen_generic_getter_by_val
// By value
#define gen_generic_getter_by_val( prefix, suffix ) \
inline decltype(prefix##_##suffix) suffix() const \
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
inline const decltype(prefix##_##suffix)& suffix() const \
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
inline decltype(prefix##_##suffix)& suffix() \
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
inline decltype(prefix##_##suffix) set_##suffix( decltype(prefix##_##suffix) to_copy ) \
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
inline const decltype(prefix##_##suffix)& set_##suffix \
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
inline const decltype(prefix##_##suffix)& set_##suffix \
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


#ifndef gen_enum_ostm_sl_decl
#define gen_enum_ostm_sl_decl
#endif


#endif		// liborangepower_gen_getter_setter_defines_hpp
