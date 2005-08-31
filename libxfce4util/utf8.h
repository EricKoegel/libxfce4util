/* $Id$ */
/*-
 * Copyright (c) 2003 Olivier Fourdan <fourdan@xfce.org>
 * All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#if !defined(LIBXFCE4UTIL_INSIDE_LIBXFCE4UTIL_H) && !defined(LIBXFCE4UTIL_COMPILATION)
#error "Only <libxfce4util/libxfce4util.h> can be included directly, this file may disappear or change contents"
#endif

#ifndef __LIBXFCE4UTIL_UTF8_H__
#define __LIBXFCE4UTIL_UTF8_H__

#include <glib.h>

G_BEGIN_DECLS

#ifndef XFCE_DISABLE_DEPRECATED
gchar *utf8_string_remove_controls (gchar       *str,
                                    gssize       max_len,
                                    const gchar *end) G_GNUC_DEPRECATED;
#endif

gchar *xfce_utf8_remove_controls   (gchar       *str,
                                    gssize       max_len,
                                    const gchar *end);

G_END_DECLS

#endif	/* !__LIBXFCE4UTIL_UTF8_H__ */
