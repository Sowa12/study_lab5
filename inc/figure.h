#pragma once
#include <cstdint>

namespace editor
{

    /// @brief Color representation class
    class Color
    {
        uint8_t _r;
        uint8_t _g;
        uint8_t _b;

    public:
        /// @brief Default constructor
        Color();
        /// @brief Copy constructor
        /// @param  
        Color(const Color &);
        /// @brief Costructor acceptiong RGB palette
        /// @param r red color (0-255)
        /// @param g green color (0-255)
        /// @param b black color (0-255)
        Color(uint8_t r, uint8_t g, uint8_t b);

        ~Color() = default;
    };

    struct Coordinate
    {
        uint32_t _x;
        uint32_t _y;
    };

    /// @brief Basic Figure class
    class IFigure
    {
        Color _color;

    public:
        explicit IFigure(const Color &color);
        virtual ~IFigure() {};
    };

    class Line : public IFigure {
        Coordinate _point1;
        Coordinate _point2;
        public:
        Line(const Color& color, const Coordinate& point1, const Coordinate& point2);
    };
    
    class Circle : public IFigure
    {
        double _radius;
        Coordinate _center;

    public:
        Circle(const Color &coolor, const Coordinate &center, double radius);
        ~Circle() = default;
    };

    class Rectangle : public IFigure
    {
        Coordinate _left_bottom;
        Coordinate _right_top;

    public:
        Rectangle(const Color &color, const Coordinate &left_bottom, const Coordinate &right_top);
        ~Rectangle() = default;
    };
};