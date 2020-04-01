#include "cfl_misc.h"
#include <FL/Fl_Chart.H>
#include <FL/Fl_Clock.H>
#include <FL/Fl_Image.H>
#include <FL/Fl_Spinner.H>
#include <cstring>
#include <string>

WIDGET_DEFINE(Fl_Spinner)

double Fl_Spinner_minimum(Fl_Spinner *self) { return self->minimum(); }
void Fl_Spinner_set_minimum(Fl_Spinner *self, double a) { self->minimum(a); }
double Fl_Spinner_maximum(Fl_Spinner *self) { return self->maximum(); }
void Fl_Spinner_set_maximum(Fl_Spinner *self, double a) { self->maximum(a); }
void Fl_Spinner_set_range(Fl_Spinner *self, double a, double b) {
  self->range(a, b);
}
void Fl_Spinner_set_step(Fl_Spinner *self, double a) { self->step(a); }
double Fl_Spinner_step(Fl_Spinner *self) { return self->step(); }
int Fl_Spinner_maxsize(const Fl_Spinner *self) { return self->maximum_size(); }
void Fl_Spinner_Fl_Spinner_set_maxsize(Fl_Spinner *self, int m) {
  self->maximum_size(m);
}
int Fl_Spinner_text_font(const Fl_Spinner *self) { return self->textfont(); }
void Fl_Spinner_set_text_font(Fl_Spinner *self, int s) { self->textfont(s); }
int Fl_Spinner_text_size(const Fl_Spinner *self) { return self->textsize(); }
void Fl_Spinner_set_textsize(Fl_Spinner *self, int s) { self->textsize(s); }
unsigned int Fl_Spinner_text_color(const Fl_Spinner *self) {
  return self->textcolor();
}
void Fl_Spinner_set_text_color(Fl_Spinner *self, unsigned int n) {
  self->textcolor(n);
}

WIDGET_DEFINE(Fl_Clock)

WIDGET_DEFINE(Fl_Chart)

void Fl_Chart_clear(Fl_Chart *self) { self->clear(); }

void Fl_Chart_add(Fl_Chart *self, double val, const char *str, unsigned col) {
  self->add(val, str, col);
}

void Fl_Chart_insert(Fl_Chart *self, int ind, double val, const char *str,
                     unsigned col) {
  self->insert(ind, val, str, col);
}

void Fl_Chart_replace(Fl_Chart *self, int ind, double val, const char *str,
                      unsigned col) {
  self->replace(ind, val, str, col);
}

void Fl_Chart_set_bounds(Fl_Chart *self, double a, double b) {
  self->bounds(a, b);
}

int Fl_Chart_size(const Fl_Chart *self) { return self->size(); }

void Fl_Chart_set_size(Fl_Chart *self, int W, int H) { self->size(W, H); }

int Fl_Chart_maxsize(const Fl_Chart *self) { return self->maxsize(); }

void Fl_Chart_Fl_Chart_set_maxsize(Fl_Chart *self, int m) { self->maxsize(m); }

int Fl_Chart_text_font(const Fl_Chart *self) { return self->textfont(); }

void Fl_Chart_set_text_font(Fl_Chart *self, int s) { self->textfont(s); }

int Fl_Chart_text_size(const Fl_Chart *self) { return self->textsize(); }

void Fl_Chart_set_textsize(Fl_Chart *self, int s) { self->textsize(s); }

unsigned int Fl_Chart_text_color(const Fl_Chart *self) {
  return self->textcolor();
}

void Fl_Chart_set_text_color(Fl_Chart *self, unsigned int n) {
  self->textcolor(n);
}

int Fl_Chart_is_autosize(const Fl_Chart *self) { return self->autosize(); }

void Fl_Chart_make_autosize(Fl_Chart *self, int n) { self->autosize(n); }