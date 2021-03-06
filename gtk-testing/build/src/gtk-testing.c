/* gtk-testing.c generated by valac 0.24.0, the Vala compiler
 * generated from gtk-testing.vala, do not modify */

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

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <float.h>
#include <math.h>

typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

struct _Block1Data {
	int _ref_count_;
	GtkButton* button;
	GtkButton* hello_button;
	GtkLabel* hello_label;
	GtkLabel* rotate_label;
};



gint _vala_main (gchar** args, int args_length1);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self);
static void __lambda3_ (Block1Data* _data1_);
static void ___lambda3__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void __lambda4_ (Block1Data* _data1_);
static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void __lambda5_ (Block1Data* _data1_);
static void ___lambda5__gtk_button_clicked (GtkButton* _sender, gpointer self);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	return _data1_;
#line 63 "gtk-testing.c"
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		_g_object_unref0 (_data1_->rotate_label);
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		_g_object_unref0 (_data1_->hello_label);
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		_g_object_unref0 (_data1_->hello_button);
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		_g_object_unref0 (_data1_->button);
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		g_slice_free (Block1Data, _data1_);
#line 82 "gtk-testing.c"
	}
}


static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender, gpointer self) {
#line 34 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_main_quit ();
#line 90 "gtk-testing.c"
}


static gchar* string_to_utf8 (const gchar* self, int* result_length1) {
	gchar* result = NULL;
	gchar* _result_ = NULL;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gchar* _tmp2_ = NULL;
	gint _result__length1 = 0;
	gint __result__size_ = 0;
	gint _tmp3_ = 0;
	gchar* _tmp4_ = NULL;
	gint _tmp4__length1 = 0;
	gint _tmp5_ = 0;
	gint _tmp6_ = 0;
	gchar* _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
#line 1303 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1304 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp0_ = strlen (self);
#line 1304 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp1_ = _tmp0_;
#line 1304 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp2_ = g_new0 (gchar, _tmp1_ + 1);
#line 1304 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_result_ = _tmp2_;
#line 1304 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_result__length1 = _tmp1_ + 1;
#line 1304 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	__result__size_ = _result__length1;
#line 1305 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp3_ = _result__length1;
#line 1305 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_result__length1 = _tmp3_ - 1;
#line 1306 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp4_ = _result_;
#line 1306 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp4__length1 = _result__length1;
#line 1306 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp5_ = strlen (self);
#line 1306 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp6_ = _tmp5_;
#line 1306 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	memcpy (_tmp4_, self, (gsize) _tmp6_);
#line 1307 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp7_ = _result_;
#line 1307 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	_tmp7__length1 = _result__length1;
#line 1307 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	if (result_length1) {
#line 1307 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
		*result_length1 = _tmp7__length1;
#line 145 "gtk-testing.c"
	}
#line 1307 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	result = _tmp7_;
#line 1307 "/usr/share/vala-0.24/vapi/glib-2.0.vapi"
	return result;
#line 151 "gtk-testing.c"
}


static void __lambda3_ (Block1Data* _data1_) {
	gchar* chararray = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gchar* _tmp3_ = NULL;
	gint chararray_length1 = 0;
	gint _chararray_size_ = 0;
	GString* temp = NULL;
	GString* _tmp4_ = NULL;
	GString* _tmp15_ = NULL;
	const gchar* _tmp16_ = NULL;
#line 44 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp0_ = gtk_button_get_label (_data1_->button);
#line 44 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp1_ = _tmp0_;
#line 44 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp3_ = string_to_utf8 (_tmp1_, &_tmp2_);
#line 44 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	chararray = _tmp3_;
#line 44 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	chararray_length1 = _tmp2_;
#line 44 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_chararray_size_ = chararray_length1;
#line 45 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp4_ = g_string_new ("");
#line 45 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	temp = _tmp4_;
#line 183 "gtk-testing.c"
	{
		gint i = 0;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		i = 0;
#line 188 "gtk-testing.c"
		{
			gboolean _tmp5_ = FALSE;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
			_tmp5_ = TRUE;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
			while (TRUE) {
#line 195 "gtk-testing.c"
				gint _tmp7_ = 0;
				gchar* _tmp8_ = NULL;
				gint _tmp8__length1 = 0;
				GString* _tmp9_ = NULL;
				gchar* _tmp10_ = NULL;
				gint _tmp10__length1 = 0;
				gint _tmp11_ = 0;
				gchar _tmp12_ = '\0';
				gchar* _tmp13_ = NULL;
				gchar* _tmp14_ = NULL;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				if (!_tmp5_) {
#line 208 "gtk-testing.c"
					gint _tmp6_ = 0;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
					_tmp6_ = i;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
					i = _tmp6_ + 1;
#line 214 "gtk-testing.c"
				}
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp5_ = FALSE;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp7_ = i;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp8_ = chararray;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp8__length1 = chararray_length1;
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				if (!(_tmp7_ < _tmp8__length1)) {
#line 46 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
					break;
#line 228 "gtk-testing.c"
				}
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp9_ = temp;
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp10_ = chararray;
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp10__length1 = chararray_length1;
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp11_ = i;
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp12_ = _tmp10_[_tmp11_];
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp13_ = g_strdup_printf ("%c", _tmp12_);
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_tmp14_ = _tmp13_;
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				g_string_prepend (_tmp9_, _tmp14_);
#line 47 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
				_g_free0 (_tmp14_);
#line 248 "gtk-testing.c"
			}
		}
	}
#line 49 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp15_ = temp;
#line 49 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp16_ = _tmp15_->str;
#line 49 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_button_set_label (_data1_->button, _tmp16_);
#line 43 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_string_free0 (temp);
#line 43 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	chararray = (g_free (chararray), NULL);
#line 262 "gtk-testing.c"
}


static void ___lambda3__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 43 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	__lambda3_ (self);
#line 269 "gtk-testing.c"
}


static void __lambda4_ (Block1Data* _data1_) {
#line 71 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_label_set_label (_data1_->hello_label, "Hello World!");
#line 72 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _data1_->hello_button, FALSE);
#line 278 "gtk-testing.c"
}


static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 70 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	__lambda4_ (self);
#line 285 "gtk-testing.c"
}


static void __lambda5_ (Block1Data* _data1_) {
	gdouble _tmp0_ = 0.0;
	gdouble _tmp1_ = 0.0;
	gdouble _tmp2_ = 0.0;
#line 79 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp1_ = gtk_label_get_angle (_data1_->rotate_label);
#line 79 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp2_ = _tmp1_;
#line 79 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	if (_tmp2_ == ((gdouble) 270)) {
#line 79 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		_tmp0_ = (gdouble) 0;
#line 301 "gtk-testing.c"
	} else {
		gdouble _tmp3_ = 0.0;
		gdouble _tmp4_ = 0.0;
#line 79 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		_tmp3_ = gtk_label_get_angle (_data1_->rotate_label);
#line 79 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		_tmp4_ = _tmp3_;
#line 79 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
		_tmp0_ = _tmp4_ + 90;
#line 311 "gtk-testing.c"
	}
#line 79 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_label_set_angle (_data1_->rotate_label, _tmp0_);
#line 315 "gtk-testing.c"
}


static void ___lambda5__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 78 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	__lambda5_ (self);
#line 322 "gtk-testing.c"
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	Block1Data* _data1_;
	GtkHeaderBar* headerbar = NULL;
	GtkHeaderBar* _tmp0_ = NULL;
	GtkWindow* window = NULL;
	GtkWindow* _tmp1_ = NULL;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp2_ = NULL;
	GtkButton* _tmp3_ = NULL;
	GtkGrid* gridtwo = NULL;
	GtkGrid* _tmp4_ = NULL;
	GtkLabel* _tmp5_ = NULL;
	GtkLabel* _tmp6_ = NULL;
	GtkLabel* _tmp7_ = NULL;
	GtkLabel* _tmp8_ = NULL;
	GtkLabel* _tmp9_ = NULL;
	GtkLabel* _tmp10_ = NULL;
	GtkLabel* _tmp11_ = NULL;
	GtkLabel* _tmp12_ = NULL;
	GtkGrid* layout = NULL;
	GtkGrid* _tmp13_ = NULL;
	GtkButton* _tmp14_ = NULL;
	GtkLabel* _tmp15_ = NULL;
	GtkButton* rotate_button = NULL;
	GtkButton* _tmp16_ = NULL;
	GtkLabel* _tmp17_ = NULL;
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_data1_->_ref_count_ = 1;
#line 21 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_init (&args_length1, &args);
#line 24 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp0_ = (GtkHeaderBar*) gtk_header_bar_new ();
#line 24 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp0_);
#line 24 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	headerbar = _tmp0_;
#line 25 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_header_bar_set_show_close_button (headerbar, TRUE);
#line 28 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp1_ = (GtkWindow*) gtk_window_new (GTK_WINDOW_TOPLEVEL);
#line 28 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp1_);
#line 28 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	window = _tmp1_;
#line 29 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_window_set_titlebar (window, (GtkWidget*) headerbar);
#line 30 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_window_set_title (window, "Hello Again Again Again!");
#line 31 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_container_set_border_width ((GtkContainer*) window, (guint) 12);
#line 32 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_window_set_position (window, GTK_WIN_POS_CENTER);
#line 33 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_window_set_default_size (window, 350, 350);
#line 34 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_signal_connect ((GtkWidget*) window, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
#line 37 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp2_ = (GtkGrid*) gtk_grid_new ();
#line 37 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp2_);
#line 37 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	grid = _tmp2_;
#line 38 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_orientable_set_orientation ((GtkOrientable*) grid, GTK_ORIENTATION_VERTICAL);
#line 39 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_set_row_spacing (grid, 6);
#line 42 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp3_ = (GtkButton*) gtk_button_new_with_label ("testing");
#line 42 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp3_);
#line 42 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_data1_->button = _tmp3_;
#line 43 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_signal_connect_data (_data1_->button, "clicked", (GCallback) ___lambda3__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 52 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp4_ = (GtkGrid*) gtk_grid_new ();
#line 52 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp4_);
#line 52 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gridtwo = _tmp4_;
#line 53 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_set_column_spacing (gridtwo, 6);
#line 55 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp5_ = (GtkLabel*) gtk_label_new ("Label 1");
#line 55 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp5_);
#line 55 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp6_ = _tmp5_;
#line 55 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_container_add ((GtkContainer*) grid, (GtkWidget*) _tmp6_);
#line 55 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (_tmp6_);
#line 56 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp7_ = (GtkLabel*) gtk_label_new ("Label 2");
#line 56 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp7_);
#line 56 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp8_ = _tmp7_;
#line 56 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_container_add ((GtkContainer*) grid, (GtkWidget*) _tmp8_);
#line 56 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (_tmp8_);
#line 57 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_container_add ((GtkContainer*) grid, (GtkWidget*) _data1_->button);
#line 59 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp9_ = (GtkLabel*) gtk_label_new ("Label 3");
#line 59 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp9_);
#line 59 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp10_ = _tmp9_;
#line 59 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_container_add ((GtkContainer*) gridtwo, (GtkWidget*) _tmp10_);
#line 59 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (_tmp10_);
#line 60 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_container_add ((GtkContainer*) gridtwo, (GtkWidget*) grid);
#line 61 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp11_ = (GtkLabel*) gtk_label_new ("Label 4");
#line 61 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp11_);
#line 61 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp12_ = _tmp11_;
#line 61 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_container_add ((GtkContainer*) gridtwo, (GtkWidget*) _tmp12_);
#line 61 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (_tmp12_);
#line 63 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp13_ = (GtkGrid*) gtk_grid_new ();
#line 63 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp13_);
#line 63 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	layout = _tmp13_;
#line 64 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_set_column_spacing (layout, 6);
#line 65 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_set_row_spacing (layout, 6);
#line 67 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp14_ = (GtkButton*) gtk_button_new_with_label ("Say Hello");
#line 67 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp14_);
#line 67 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_data1_->hello_button = _tmp14_;
#line 68 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp15_ = (GtkLabel*) gtk_label_new (NULL);
#line 68 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp15_);
#line 68 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_data1_->hello_label = _tmp15_;
#line 70 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_signal_connect_data (_data1_->hello_button, "clicked", (GCallback) ___lambda4__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 75 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp16_ = (GtkButton*) gtk_button_new_with_label ("Rotate");
#line 75 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp16_);
#line 75 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	rotate_button = _tmp16_;
#line 76 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_tmp17_ = (GtkLabel*) gtk_label_new ("Horizontal");
#line 76 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_object_ref_sink (_tmp17_);
#line 76 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_data1_->rotate_label = _tmp17_;
#line 78 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	g_signal_connect_data (rotate_button, "clicked", (GCallback) ___lambda5__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 82 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_attach (layout, (GtkWidget*) _data1_->hello_button, 0, 0, 1, 1);
#line 83 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_attach_next_to (layout, (GtkWidget*) _data1_->hello_label, (GtkWidget*) _data1_->hello_button, GTK_POS_RIGHT, 1, 1);
#line 84 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_attach (layout, (GtkWidget*) rotate_button, 0, 1, 1, 1);
#line 85 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_attach_next_to (layout, (GtkWidget*) _data1_->rotate_label, (GtkWidget*) rotate_button, GTK_POS_RIGHT, 1, 1);
#line 86 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_grid_attach (layout, (GtkWidget*) gridtwo, 0, 2, 2, 2);
#line 88 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_container_add ((GtkContainer*) window, (GtkWidget*) layout);
#line 89 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_widget_show_all ((GtkWidget*) window);
#line 91 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	gtk_main ();
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	result = 0;
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (rotate_button);
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (layout);
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (gridtwo);
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (grid);
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (window);
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_g_object_unref0 (headerbar);
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	block1_data_unref (_data1_);
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	_data1_ = NULL;
#line 92 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	return result;
#line 529 "gtk-testing.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 20 "/home/riley/git/vala/gtk-testing/src/gtk-testing.vala"
	return _vala_main (argv, argc);
#line 539 "gtk-testing.c"
}



