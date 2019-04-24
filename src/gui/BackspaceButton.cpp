/*
 * Copyright (C) 2019 Radim Lipka <xlipka02@stud.fit.vutbr.cz>
 * Copyright (C) 2019 Roman Ondráček <xondra58@stud.fit.vutbr.cz>
 * Copyright (C) 2019 Pavel Raur <xraurp00@stud.fit.vutbr.cz>
 * Copyright (C) 2019 David Reinhart <xreinh00@stud.fit.vutbr.cz>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "BackspaceButton.h"

BackspaceButton::BackspaceButton(BaseObjectType *object, const Glib::RefPtr<Gtk::Builder> &builder)
		: Gtk::Button(object), m_builder(builder) {
	m_builder->get_widget("text_entry", m_textEntry);
	this->signal_pressed().connect(sigc::mem_fun(*this, &BackspaceButton::onButtonClick));
}

void BackspaceButton::onButtonClick() {
	Glib::ustring text = m_textEntry->get_text();
	text = text.substr(0, text.size() - 1);
	m_textEntry->set_text(text);
}
