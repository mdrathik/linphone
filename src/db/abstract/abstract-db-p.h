/*
 * abstract-db-p.h
 * Copyright (C) 2010-2017 Belledonne Communications SARL
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _ABSTRACT_DB_P_H_
#define _ABSTRACT_DB_P_H_

#include "abstract-db.h"
#include "db/provider/db-session.h"
#include "object/object-p.h"

// =============================================================================

LINPHONE_BEGIN_NAMESPACE

class AbstractDbPrivate : public ObjectPrivate {
public:
	AbstractDbPrivate () = default;

	DbSession dbSession;

private:
	AbstractDb::Backend backend;

	L_DECLARE_PUBLIC(AbstractDb);
};

LINPHONE_END_NAMESPACE

#endif // ifndef _ABSTRACT_DB_P_H_