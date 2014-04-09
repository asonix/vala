class Demo.HelloWorld : GLib.Object {
    public static int main(string[] args) {
        stdout.printf("Hello, World\n");
        // Comment
        /*
        Long comment
        Types:
            Byte, char, uchar
            unichar
            int, uint
            long, ulong
            short, ushort
            int8, int16, int32, int64
            float, double
            bool
            struct
            enum
        // atomic types
        unichar c = 'u';
        float percentile = 0.75f;
        const double MU_BOHR = 927.400915E-26;
        bool the_box_has_crashed = false;

        ulong nbytes = sizeof(int32); // nbytes is 4 (32/8)
        string text = "A string literal"; // UTF-8
        string verbatim = """This verbatim string doesn't process escape sequences, allowes for "quotes," \backslashes\ etc.""";

        // String templates can have embedded variables
        int a = 6; b = 7;
        string s = @"$a * $b = $(a * b)"; // "6 * 7 = 42"

        // Slicing strings
        string greeting = "Hello, world";
        string s1 = greeting[7:12]; // "world"
        string s2 = greeting[-4:-2]; // "or"

        if ("help" in "I am really confused please help me") {
            stdout.printf("yup yup yup");
        }

        // arrays
        int[] a = new int[10];
        int[] b = { 2, 4, 6, 8 };

        // slicing arrays
        int[] c = b[1:3]; // { 4, 6 } (copies data)
        unowned int[] d = b[1:3]; // { 4, 6 } (references data)

        // multidimensional arrays
        int[,] e = new int[3,4];
        int[,] f = {{2, 4, 6, 8},
                    {3, 5, 7, 9},
                    {1, 3, 5, 7}};
        f[2,3] = 42; // sets last value of last subarray to 42

        // lengths of multidimensional arrays
        int[,] arr = new int[4,5];
        int r = arr.length[0];
        int t = arr.length[1];

        // cannot create mono-dimensional array from multidimensional array
        // can append to array
        int[] q = {};
        q += 12;
        q += 5;
        q += 37;

        // can resize array (throws out excess content)
        int[] u = new int[5];
        u.resize(12);
        */
        // int[] yeee = new int[5]; can be resized
        // int yeee[5]; cannot be resized

        // making a class
        /*
        class Track : GLib.Object {             // subclassing GLib.Object
            public double mass;                 // public field
            public double name { get; set; }    // public property
            private bool terminated = false;    // private field
            public void terminate() {           // public method
                terminated = true;
            }
        }
        class Whoop {
            public double whoop;
            private int yeah;
        }
        */
        // type casting
        /*
        int i = 10;
        float j = (float) i;

        // type inference
        var pp = new Person();      // Person p = new Persion();
        var ss = "hello";           // string s = "hello";
        var ll = new List<int>();   // List<int> l = new List<int>();
        var ii = 10;                // int i = 10;

        var name = "Riley";
        // replace %s with name if name is null use "unknown person"
        stdout.printf("Hello %s!\n", name ?? "unkown person");

        // for loops
        int[] ttt = { 0, 1, 2 };
        for (var i = 0; i < 10; i++) {
            // some code
        }
        foreach (var i in ttt) {
            // some code
        }
        int qqq = 3;
        switch(qqq) {
            case 0:
                // yeah
            case 1:
                // hella
                break;
            case 2:
            case 3:
                // snappers
                break;
            default:
                // you betcha
                break;
        }
        */
        // all functions are methods for some reason
        // int this_is_a_method(int arg1; Object arg2) {
            // return 1;
        // }
        // dont give two methods the same name

        // calling methods
        // void f(int x, string s = "hello", double z = 0.5) {}
        // f(2); // f(2, "hi"); f(2, "hi", 0.75); would also work

        // text and foo may be null, but bar is required
        // string? method_name(string? text, Foo? foo, Bar bar) {
            // return "yeah";
        // }

        // delagates allow code to be passed as objects
        // delagates allow functions to be passed to a function and run later
        // delagates may be used locally (inside a class) as well
        // delagate void DelegateType(int a);
        // void f1(int a) {
            //code
        // }
        // void f2(DelagateType d, int a) {
            // d(a);
        // }
        // void main() {
            // f2(f1, 5);
        // }

        // anonymous methods (lambda expressions, function literals, closures) can be used

        // can define namespaces with
        // namespace NameSpaceName {
            // public double a;
        // }
        // can call namespaces with using NameSpaceName;
        // gtk is common namespace to be used

        // structs
        // struct StructName {
            // public int a;
        // }
        // structs can have limited methods
        // structs can have public and private values
        // initialising structs
        // StructName c1 = StructName();
        // or
        // var c2 = StructName();
        // var c3 = StructName() {
            // a = 0;
        // };
        // StructName c4 = { 5 };

        // objects
        // public class TheThing {
            // public int yea = 0;
        // }
        // TheThing t = new TheThing();
        // t.yea = 7;

        // constructors and destructors
        // public class Button : Object {
            // public string x;
            // public string yea;
            // public Button() {
            // }
            // public Button.with_label(string label) {
                // this.x = label;
            // }
            // public Button.from_stock(string stock_id) {
                // this.yea = stock_id;
            // }
            // ~Button() {
                // stdout.printf("destructing");
            // }
        // }
        // new Button();
        // new Button.with_label("whoop");
        // new Button.from_stock(Gtk.STOCK_OK);

        // signals
        // public class Yeahh : GLib.Object {
            // public signal void sig_1(int a);
        // } // REQUIRES MORE RESEARCH

        /*class Person : Object {
            private int _age = 32;
            public int age { // instead of writing public get and set functions
                // get { return _age; }
                set { _age = value; }
            }
        }
        var alice = new Person();
        alice.age = alice.age + 1; // works
        alice.age++; // works

        class Jared : Object {
            public int age { get; set; default = 32; }
        }
        var yoo = new Jared();
        yoo.age = yoo.age + 1; // works
        yoo.age++; // works
        */
        // descriptions
        /* class Ten {
            [Description(nick = "age in years", blurb = "This is the person's age in years")]
            public int age { get; set; default = 32; }
        }

        // notify
        obj.notify.connect(s, p) => {
            stdout.printf("Property '%s' has changed!\n", p.name);
        }); // s is signal's source, p is property information
        obj.notify["age"].connect((s, p) => {
            stdout.printf("age has changed\n");
        }); // only alerts when p.age changes
        // can disable notifications in class with [CCode(notify = false)]
        */
        return 0;
    }
}
