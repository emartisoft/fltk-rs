use fltk::*;

fn main() {
    let app = app::App::default();
    let font = app.load_font("font.ttf").unwrap();
    let mut wind = window::Window::new(300, 200, 400, 300, "Fonts");
    let mut frame = frame::Frame::new(0, 0, 400, 100, &font);
    frame.set_label_size(30);
    frame.set_label_font(Font::by_name(&font));
    wind.set_color(Color::White);
    wind.end();
    wind.show();
    while app.wait() {}
}
