/* -*- mode: C; c-file-style: "gnu" -*- */
/* test.h  unit test routines
 *
 * Copyright (C) 2003 Red Hat, Inc.
 *
 * Licensed under the Academic Free License version 1.2
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef BUS_TEST_H
#define BUS_TEST_H

#include <config.h>

#ifdef DBUS_BUILD_TESTS

#include <dbus/dbus.h>
#include <dbus/dbus-string.h>
#include "connection.h"

dbus_bool_t bus_dispatch_test        (const DBusString             *test_data_dir);
dbus_bool_t bus_policy_test          (const DBusString             *test_data_dir);
dbus_bool_t bus_config_parser_test   (const DBusString             *test_data_dir);
dbus_bool_t bus_setup_debug_client   (DBusConnection               *connection);
void        bus_test_clients_foreach (BusConnectionForeachFunction  function,
                                      void                         *data);
dbus_bool_t bus_test_client_listed   (DBusConnection               *connection);
void        bus_test_flush_bus       (BusContext                   *context);

#endif

#endif /* BUS_TEST_H */