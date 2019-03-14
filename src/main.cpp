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

#include <gtkmm.h>

/**
 * Main program's function
 * @param argc Count of arguments
 * @param argv Array of arguments
 * @return Execution status
 */
int main(int argc, char *argv[]) {
	auto app = Gtk::Application::create(argc, argv, "cz.fitcalc.main");
	Gtk::Window window;
	window.set_default_size(512, 512);
	window.set_title("FIT Calc");
	auto label = Gtk::Label("Ahoj, jsem kostra projektu do IVS.");
	window.add(label);
	label.show();
	return app->run(window);
}
