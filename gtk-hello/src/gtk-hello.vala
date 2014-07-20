int main(string[] args) {
    Gtk.init(ref args);

    //Create window
    var window = new Gtk.Window();
    window.title = "Hello World!";
    window.set_border_width(12);
    window.set_position(Gtk.WindowPosition.CENTER);
    window.set_default_size(350, 70);
    window.destroy.connect(Gtk.main_quit);

    //Create button
    var button_hello = new Gtk.Button.with_label("Click me!");
    button_hello.clicked.connect(() => {
        button_hello.label = "Hello World!";
        button_hello.set_sensitive(false);
    });

    window.add(button_hello);
    window.show_all();

    //Other required things
    Gtk.main();
    return 0;
}
