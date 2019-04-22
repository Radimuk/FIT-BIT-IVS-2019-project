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

#include "EqualsButton.h"

EqualsButton::EqualsButton(BaseObjectType *object, const Glib::RefPtr<Gtk::Builder> &builder)
		: Gtk::Button(object), m_builder(builder) {
	m_builder->get_widget("text_entry", m_textEntry);
	this->signal_pressed().connect(sigc::mem_fun(*this, &EqualsButton::onButtonClick));
}

void EqualsButton::onButtonClick() {
	Glib::ustring text = m_textEntry->get_text();
	if (text.empty()) {
		return;
	}
	try {
		antlr4::ANTLRInputStream input(text);
		calculatorLexer lexer(&input);
		// Register custom error listener
		lexer.removeErrorListeners();
		lexer.addErrorListener(&m_customErrorListener);
		antlr4::CommonTokenStream tokens(&lexer);
		calculatorParser parser(&tokens);
		// Register custom error listener
		parser.removeErrorListeners();
		parser.addErrorListener(&m_customErrorListener);
		calculatorParser::InputContext *expresion = parser.input();
		MathVisitor visitor;
		double result = visitor.visit(expresion);
		m_textEntry->set_text(std::to_string(result));
	} catch (const std::exception &e) {
		m_textEntry->set_text(e.what());
	}
}
