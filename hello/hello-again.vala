/* Copyright 2014 Riley Trautman
*
* This file is part of Hello Again.
*
* Hello Again is free software: you can redistribute it
* and/or modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* Hello Again is distributed in the hope that it will be
* useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with Hello Again. If not, see http://www.gnu.org/licenses/.
*/

int main(string[] args) {
    Gtk.init(ref args);

    //Create window
    var window = new Gtk.Window();
    window.title = "Hello Again!";
    window.set_border_width(12);
    window.set_position(Gtk.WindowPosition.CENTER);
    window.set_default_size(350, 350);
    window.destroy.connect(Gtk.main_quit);

    //Create label
    var label = new Gtk.Label("Hello Again World!");

    window.add(label);
    window.show_all();

    //Other required things
    Gtk.main();
    return 0;
}
