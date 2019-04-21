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

#include "MainWindow.h"


MainWindow::MainWindow(BaseObjectType *object, const Glib::RefPtr<Gtk::Builder> &builder)
	: Gtk::ApplicationWindow(object), m_builder(builder) {
	this->set_title("FIT Calc");
	m_builder->get_widget_derived("menu_bar", m_menuBar);
	m_builder->get_widget("text_entry", m_textEntry);
	Gtk::Button *button = nullptr;
	for (auto btnValues : m_buttons) {
		m_builder->get_widget(btnValues.first, button);
		button->signal_pressed().connect(
				sigc::bind<Glib::ustring>(sigc::mem_fun(*this, &MainWindow::onButtonClick), btnValues.second));
	}
	
	m_builder->get_widget("button_clean", button);
	button->signal_pressed().connect(
				sigc::mem_fun(*this, &MainWindow::onButtonClean));
	
	m_builder->get_widget("button_backspace", button);
	button->signal_pressed().connect(
				sigc::mem_fun(*this, &MainWindow::onButtonBackspace));

	m_builder->get_widget("button_equation", button);
	button->signal_pressed().connect(
				sigc::mem_fun(*this, &MainWindow::onButtonEquation));

}

void MainWindow::onButtonClick(std::string input) {
	Glib::ustring text = m_textEntry->get_text();
	text.append(input);
	m_textEntry->set_text(text);
}

void MainWindow::onButtonClean() {
	m_textEntry->set_text("");
}

void MainWindow::onButtonBackspace() {
	Glib::ustring text = m_textEntry->get_text();
	text = text.substr(0, text.size() -1);
	m_textEntry->set_text(text);
}

void MainWindow::onButtonEquation() {
	Glib::ustring text = m_textEntry->get_text();
	antlr4::ANTLRInputStream input(text);
	calculatorLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	calculatorParser parser(&tokens);
	MathErrorListener mathErrorListener;
	lexer.removeErrorListeners();
	lexer.addErrorListener(&mathErrorListener);
	parser.removeErrorListeners();
	parser.addErrorListener(&mathErrorListener);
	calculatorParser::InputContext* expresion = parser.input();
	MathVisitor visitor;
	double result = visitor.visit(expresion);
	m_textEntry->set_text(std::to_string(result));
}
