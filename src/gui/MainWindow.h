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

#pragma once

#include <gtkmm.h>
#include "BackspaceButton.h"
#include "CleanButton.h"
#include "EqualsButton.h"
#include "InputButton.h"
#include "MenuBar.h"
#include "antlr4-runtime.h"

/**
 * Main application's window
 */
class MainWindow : public Gtk::ApplicationWindow {

public:
	/**
	 * Constructor
	 * @param object Application window object
	 * @param builder GTKmm builder
	 */
	MainWindow(BaseObjectType *object, const Glib::RefPtr<Gtk::Builder> &builder);

private:
	/**
	 * Create buttons
	 */
	void createButtons();

	/// GTKmm builder
	Glib::RefPtr<Gtk::Builder> m_builder;
	/// Backspace button
	BackspaceButton *m_backspaceButton = nullptr;
	/// Input clean button
	CleanButton *m_cleanButton = nullptr;
	/// Equals button
	EqualsButton *m_equalsButton = nullptr;
	/// Input button
	InputButton *m_inputButton = nullptr;
	/// Menu bar
	MenuBar *m_menuBar = nullptr;
	/// Input buttons
	std::map<std::string, std::string> m_buttons = {
			// Numbers
			{"button_zero",          "0"},
			{"button_one",           "1"},
			{"button_two",           "2"},
			{"button_three",         "3"},
			{"button_four",          "4"},
			{"button_five",          "5"},
			{"button_six",           "6"},
			{"button_seven",         "7"},
			{"button_eight",         "8"},
			{"button_nine",          "9"},
			{"button_comma",         ","},
			// Constants
			{"button_pi",            "π"},
			{"button_euler",         "ℯ"},
			// Parentheses
			{"button_left_bracket",  "("},
			{"button_right_bracket", ")"},
			{"button_abs",           "||"},
			// Operations
			{"button_add",           "+"},
			{"button_subtract",      "-"},
			{"button_multiply",      "*"},
			{"button_divide",        "/"},
			{"button_mod",           "mod"},
			{"button_factorial",     "!"},
			{"button_power",         "^"},
			{"button_root",          "√"},
			{"button_percentage",    "%"},
			{"button_inversion",     "^-1"},
			// Functions
			{"button_sin",           "sin()"},
			{"button_cos",           "cos()"},
			{"button_tan",           "tan()"},
			{"button_log",           "log()"},
			{"button_ln",            "ln()"},
	};
};
