/* Copyright (C) 2010-2012
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

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "diagnostic-core.h"

#include "ldv-cbe-core.h"


#define LDV_SPACES_PER_INDENT_LEVEL 2


/* A file where the LDV c backend will place its output. */
static const char *ldv_c_backend_out_fname;
/* A stream where the LDV c backend will place its output. */
static FILE *ldv_c_backend_out_stream;

/* This variable keeps the last printed character to perform indentation.
   I believe that all end of lines will be putted into a format string not to
   a variable arguments list. */
static char ldv_c_backend_last_char;

/* This flag says whether a space before some identifier should be printed. */
static bool ldv_c_backend_padding;

/* A counter of actual source code lines for a file parsed. Counting begins with
   1, is automatically increased in depend on printed new lines and may be set
   up by means of actual line directive printed. */
static unsigned int ldv_c_backend_current_line = 1;

/* A level of line directives to be printed. */
static int ldv_c_backend_lines_level;

/* A flag specifies whether operands should be dumped. */
static bool ldv_dump_ops;


void
ldv_c_backend_current_line_set (unsigned int current_line)
{
  ldv_c_backend_current_line = current_line;
}

bool
ldv_c_backend_is_current_line (unsigned int current_line)
{
  return (current_line == ldv_c_backend_current_line);
}

bool 
ldv_c_backend_is_lines_level (int lines_level)
{
  return (lines_level == ldv_c_backend_lines_level);
}

void
ldv_c_backend_padding_cancel (void)
{
  ldv_c_backend_padding = false;
}

void
ldv_c_backend_padding_force (void)
{
  ldv_c_backend_padding = true;
}

void
ldv_c_backend_print (unsigned int indent_level, bool padding, const char *format, ...)
{
  unsigned int i;
  va_list ap;
  const char *c;

  /* Print indentation spaces if so just at the beginning of the line. */
  if (ldv_c_backend_last_char == '\n')
    for (i = 0; i < indent_level * LDV_SPACES_PER_INDENT_LEVEL; i++)
      fprintf (ldv_c_backend_out_stream, " ");

  /* Print an optional space before some identifier. */
  if (padding)
    {
      if (ldv_c_backend_padding)
        fprintf (ldv_c_backend_out_stream, " ");
      else
        ldv_c_backend_padding = true;
    }
  else
    ldv_c_backend_padding = false;

  /* Print information itself. */
  va_start (ap, format);
  vfprintf (ldv_c_backend_out_stream, format, ap);
  va_end (ap);

  /* Flush buffer to stream to obtain intermediate results imediately.
     Note that this very slows the total processing time. */
  /* fflush (ldv_c_backend_out_stream); */
  
  ldv_c_backend_last_char = format[strlen (format) - 1];
  
  /* Count the current line. */
  for (c = format; *c; c++)
    if (*c == '\n')
      ldv_c_backend_current_line++;
}

void
ldv_cbe_handle_options (void)
{
  const char *lines_level_str;
  
  if ((ldv_c_backend_out_fname = getenv ("LDV_C_BACKEND_OUT")))
    if (!(ldv_c_backend_out_stream = fopen (ldv_c_backend_out_fname, "w")))
      fatal_error ("can't open file '%s' for write: %m", ldv_c_backend_out_fname);
      
  if ((lines_level_str = getenv ("LDV_C_BACKEND_LINES_LEVEL")))
    ldv_c_backend_lines_level = atoi (lines_level_str);
  else
    ldv_c_backend_lines_level = LDV_C_BACKEND_LINES_LEVEL_USEFUL;
  
  if (getenv ("LDV_C_BACKEND_DUMP_OPS"))
    ldv_dump_ops = true;
}

bool
ldv_is_c_backend_enabled (void)
{
  if (ldv_c_backend_out_fname)
    return true;

  return false;
}

bool
ldv_is_dump_ops (void)
{
  return (ldv_dump_ops == true);
}

const char *
ldv_cbe_itoa (unsigned int n)
{
  int int_digits, order;
  char *str = NULL;
  
  /* Obtain the number of digits that are contained in unsigned integer number. */
  for (int_digits = 1, order = 10.0; n / order > 1.0; int_digits++, order *= 10) ;

  str = (char *) xmalloc (int_digits + 1);
  
  sprintf (str, "%d", n);
  
  return str;    
}
