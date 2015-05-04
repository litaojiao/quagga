/* json support for quagga
 *  * Copyright (C) 2015 Donald Sharp, CumulusNetworks.com
 *
 *  This file is part of GNU Zebra.
 *
 *  GNU Zebra is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; either version 2, or (at your option) any
 *  later version.
 *
 *  GNU Zebra is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Zebra; see the file COPYING.  If not, write to the Free
 *  Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.  */

#include <config.h>
#if !defined(HAVE_JSON)

#include <stdio.h>
#include <lib/json.h>

json_object *
json_object_new_object (void)
{
  return NULL;
}

json_object *
json_object_new_array (void)
{
  return NULL;
}

json_object *
json_object_new_int (int value)
{
  return NULL;
}

json_object *
json_object_new_string (const char *str)
{
  return NULL;
}

void
json_object_object_add (json_object *a, const char *str, json_object *b)
{
  return;
}

void json_object_put (json_object *obj)
{
  return;
}

char *
json_object_to_json_string (json_object *obj)
{
  return NULL;
}

void json_object_array_add (json_object *obj1, json_object *obj2)
{
  return;
}

json_object *json_object_new_boolean(json_bool b)
{
  return NULL;
}
#endif
