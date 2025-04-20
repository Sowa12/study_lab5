#include <figure.h>
#include <sstream>

namespace editor {
    Color::Color() : _r{0}, _g{0}, _b{0} {};

    Color::Color(const Color& rhs) {
        _r = rhs._r;
        _g = rhs._g;
        _b = rhs._b;
    }

    Color::Color(uint8_t r_, uint8_t g_, uint8_t b_) : _r{r_}, _g{g_}, _b{b_} {}

    IFigure::IFigure(const Color& color_) : _color{color_} {}

    Line::Line(const Color& color_, const Coordinate& point1_, const Coordinate& point2_) :
            IFigure(color_), _point1{point1_}, _point2{point2_} {}


    Circle::Circle(const Color& color_, const Coordinate& center_, double radius_) :
            IFigure(color_), _radius{radius_},  _center{center_} {}

    Rectangle::Rectangle(const Color& color_, const Coordinate &left_bottom, const Coordinate &right_top) :
            IFigure(color_), _left_bottom{left_bottom}, _right_top{right_top} {};
};
