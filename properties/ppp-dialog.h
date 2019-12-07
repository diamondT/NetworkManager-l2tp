/***************************************************************************
 *
 * Copyright (C) 2008 Dan Williams, <dcbw@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 **************************************************************************/

#ifndef _PPP_DIALOG_H_
#define _PPP_DIALOG_H_

#include <gtk/gtk.h>

GtkWidget *ppp_dialog_new (GHashTable *hash, const char *authtype);

GHashTable *ppp_dialog_new_hash_from_connection (NMConnection *connection, GError **error);

GHashTable *ppp_dialog_new_hash_from_dialog (GtkWidget *dialog, GError **error);

#endif
