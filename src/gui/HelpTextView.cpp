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

#include "HelpTextView.h"

HelpTextView::HelpTextView(BaseObjectType *object, const Glib::RefPtr<Gtk::Builder> &builder)
: Gtk::TextView(object), m_builder(builder){
	this->set_editable(false);
	this->set_wrap_mode(Gtk::WRAP_WORD);
	auto buffer = this->get_buffer();
	auto headingTag = buffer->create_tag("h");
	headingTag->property_size_points() = 16.0;
	buffer->insert_with_tag(buffer->end(), "FIT Calc - Help\n", headingTag);
	buffer->insert_with_tag(buffer->end(), "Interface\n", headingTag);
	buffer->insert(buffer->end(),
	               "\nUser interface contains 3 areas:\n"
	               "\t- History overview\n"
	               "\t- Input field\n"
	               "\t- On-screen keyboard\n\n"
	);
	buffer->insert_with_tag(buffer->end(), "History overview\n", headingTag);
	buffer->insert(buffer->end(), "\nHistory overview contains previously calculated results.\n\n");
	buffer->insert_with_tag(buffer->end(), "Input field\n", headingTag);
	buffer->insert(buffer->end(), "\nInput field can be used for entering input to the calculator. You can enter it form your computer keyboard, or by mouse using onscreen keyboard.\n\n");
	buffer->insert_with_tag(buffer->end(), "On-screen keyboard\n", headingTag);
	buffer->insert(buffer->end(), "\nOn-screen keyboard can be used for entering simple input. Each character is added to the end of the line in the input field.\n\n");
	buffer->insert_with_tag(buffer->end(), "Functions\n", headingTag);
	buffer->insert(buffer->end(), "\nCalculator evaluates equations in order to mathematical precedence rules.\n\n");
	buffer->insert(buffer->end(),
					"Following functions are included:\n"
					"ln  - natural logarithm\n"
					"log - decimal logarithm\n"
					"|x| - absolute value\n"
					"√   - nth root/square roor\n"
					"xⁿ  - power\n"
					"x⁻¹ - negative power\n"
					"x!  - factorial\n\n"
					"mod - remainder of division (this is operator)\n\n"
					"Goniometric:\n"
					"sin - sine\n"
					"cos - cosine\n"
					"tan - tangent\n\n"
					"Percentage:\n"
					"%   - can be used for calculation of precentage\n\n");
	buffer->insert_with_tag(buffer->end(), "Usage\n", headingTag);
	buffer->insert(buffer->end(), 
					"\nFunctions:\n"
					"function(value)\n"
					"examle: sin(5)\n\n"
					"Operations:\n"
					"number1 operation number2\n"
					"example: 5 + 4\n\n"
					"Percentage:\n"
					"number + percentage%\n"
					"example: 10 + 20%\n");
}
