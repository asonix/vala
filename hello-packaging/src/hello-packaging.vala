/* Copyright 2014 Riley Trautman
*
* This file is part of Hello Packaging.
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

void println(string test) {
    stdout.printf("%s\n", test);
}

int main(string[] args) {
    Gtk.init(ref args);

    //Create window
    var window = new Gtk.Window();
    window.title = "Hello Again Again!";
    window.set_border_width(12);
    window.set_position(Gtk.WindowPosition.CENTER);
    window.set_default_size(350, 350);
    window.destroy.connect(Gtk.main_quit);

    //Create button
    var button = new Gtk.Button.with_label("testing");
    button.clicked.connect(() => {
        var chararray = button.label.to_utf8();
        var temp = new StringBuilder();
        for (int i = 0; i < chararray.length; i++) {
            temp.prepend(chararray[i].to_string());
        }
        button.label = temp.str;
    });

    window.add(button);
    window.show_all();

    Gtk.main();
    return 0;
}
