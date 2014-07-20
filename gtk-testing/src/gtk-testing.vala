/* Copyright 2014 Riley Trautman
*
* This file is part of GTK Testing.
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


public static int main (string[] args) {
    Gtk.init (ref args);

    //Set up headerbar
    var headerbar = new Gtk.HeaderBar();
    headerbar.show_close_button = true;

    //Create window
    var window = new Gtk.Window ();
    window.set_titlebar(headerbar);
    window.title = "Hello Again Again Again!";
    window.set_border_width (12);
    window.set_position (Gtk.WindowPosition.CENTER);
    window.set_default_size (350, 350);
    window.destroy.connect (Gtk.main_quit);

    //Create grid
    var grid = new Gtk.Grid ();
    grid.orientation = Gtk.Orientation.VERTICAL;
    grid.row_spacing = 6;

    //Create button
    var button = new Gtk.Button.with_label ("testing");
    button.clicked.connect (() => {
        var chararray = button.label.to_utf8 ();
        var temp = new StringBuilder ();
        for (int i = 0; i < chararray.length; i++) {
            temp.prepend (chararray[i].to_string ());
        }
        button.label = temp.str;
    });

    var gridtwo = new Gtk.Grid ();
    gridtwo.column_spacing = 6;

    grid.add (new Gtk.Label ("Label 1"));
    grid.add (new Gtk.Label ("Label 2"));
    grid.add (button);

    gridtwo.add (new Gtk.Label ("Label 3"));
    gridtwo.add (grid);
    gridtwo.add (new Gtk.Label ("Label 4"));

    var layout = new Gtk.Grid ();
    layout.column_spacing = 6;
    layout.row_spacing = 6;

    var hello_button = new Gtk.Button.with_label ("Say Hello");
    var hello_label = new Gtk.Label (null);

    hello_button.clicked.connect (() => {
        hello_label.label = "Hello World!";
        hello_button.sensitive = false;
    });

    var rotate_button = new Gtk.Button.with_label ("Rotate");
    var rotate_label = new Gtk.Label ("Horizontal");

    rotate_button.clicked.connect (() => {
        rotate_label.angle = (rotate_label.angle == 270) ? 0 : rotate_label.angle + 90;
    });

    layout.attach (hello_button, 0, 0, 1, 1);
    layout.attach_next_to (hello_label, hello_button, Gtk.PositionType.RIGHT, 1, 1);
    layout.attach (rotate_button, 0, 1, 1, 1);
    layout.attach_next_to (rotate_label, rotate_button, Gtk.PositionType.RIGHT, 1, 1);
    layout.attach (gridtwo, 0, 2, 2, 2);

    window.add (layout);
    window.show_all ();

    Gtk.main ();
    return 0;
}

