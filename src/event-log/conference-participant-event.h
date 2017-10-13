/*
 * conference-participant-event.h
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

#ifndef _CONFERENCE_PARTICIPANT_EVENT_H_
#define _CONFERENCE_PARTICIPANT_EVENT_H_

#include "conference-event.h"

// =============================================================================

LINPHONE_BEGIN_NAMESPACE

class ConferenceParticipantEventPrivate;

class LINPHONE_PUBLIC ConferenceParticipantEvent : public ConferenceEvent {
public:
	ConferenceParticipantEvent (
		Type type,
		const Address &conferenceAddress,
		const Address &participantAddress
	);
	ConferenceParticipantEvent (const ConferenceParticipantEvent &src);

	ConferenceParticipantEvent &operator= (const ConferenceParticipantEvent &src);

	const Address &getParticipantAddress () const;

private:
	L_DECLARE_PRIVATE(ConferenceParticipantEvent);
};

LINPHONE_END_NAMESPACE

#endif // ifndef _CONFERENCE_PARTICIPANT_EVENT_H_