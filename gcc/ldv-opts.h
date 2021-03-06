/* Copyright (C) 2009-2012
   Institute for System Programming, Russian Academy of Sciences (ISPRAS).

This file is part of C Instrumentation Framework.

C Instrumentation Framework is free software: you can redistribute it and/or
modify it under the terms of the GNU General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your option)
any later version.

C Instrumentation Framework is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along with
C Instrumentation Framework.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef _LDV_OPTS_H_
#define _LDV_OPTS_H_


enum ldv_arg_signs
{
  LDV_ARG_SIGN_VARIABLE_ID = 1,
  LDV_ARG_SIGN_SIMPLE_ID,
  LDV_ARG_SIGN_COMPLEX_ID
};


extern enum ldv_arg_signs ldv_get_arg_sign_algo (void);
extern int ldv_get_ldv_stage (void);
extern void ldv_handle_options (void);
extern bool ldv (void);
extern bool ldv_aspect_preprocessing (void);
extern bool ldv_file_preparation (void);
extern bool ldv_macro_instrumentation (void);
extern bool ldv_instrumentation (void);
extern bool ldv_compilation (void);


#endif /* _LDV_OPTS_H_ */
