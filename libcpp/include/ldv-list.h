#ifndef _LDV_LIST_H_
#define _LDV_LIST_H_


/* List conception types. */
struct ldv_list_element;
typedef struct ldv_list_element ldv_list;
typedef struct ldv_list_element *ldv_list_ptr;
typedef struct ldv_list_element **ldv_list_ptr_ptr;


extern ldv_list_ptr ldv_list_delete (ldv_list_ptr_ptr, ldv_list_ptr);
extern void ldv_list_delete_all (ldv_list_ptr);
extern void *ldv_list_get_data (ldv_list_ptr);
extern ldv_list_ptr ldv_list_get_next (ldv_list_ptr);
extern ldv_list_ptr ldv_list_get_last (ldv_list_ptr);
extern ldv_list_ptr ldv_list_get_prev (ldv_list_ptr, ldv_list_ptr);
extern ldv_list_ptr ldv_list_insert_data (ldv_list_ptr, void *);
extern unsigned int ldv_list_len (ldv_list_ptr);
extern void ldv_list_push_back (ldv_list_ptr_ptr, void *);
extern ldv_list_ptr ldv_list_push_front (ldv_list_ptr, void *);
extern ldv_list_ptr ldv_list_reverse (ldv_list_ptr);
extern void ldv_list_set_data (ldv_list_ptr, void *);
extern ldv_list_ptr ldv_list_splice (ldv_list_ptr, ldv_list_ptr);

#endif /* _LDV_LIST_H_ */
