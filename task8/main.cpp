#include <iostream>
#include <cmath>

class Point{
    double x;
    double y;
    public:
    Point();
    Point(double x);
    Point(double x, double y);
    double getX() const;
    double getY() const;

    Point& setX(double xx);
    Point& setY(double yy);
    Point& transX(double dx);
    Point& transY(double dy);
    Point& transXY(double dx ,double dy);
    static double dist(const Point& p, const Point& q);
};
Point::Point() {
    x = 0;
    y = 0;
}
Point::Point(double x) {
    this->x=x;
    y=0;
}
Point::Point(double x, double y) {
    this->x=x;
    this->y=y;
}
double Point::getX() const {
    return this->x;
}
double Point::getY() const {
    return this->y ;
}
Point &Point::setX(double xx) {
    this->x=xx;
    return *this;
}
Point &Point::setY(double yy) {
    this->y=yy;
    return *this;
}
Point &Point::transX(double dx) {
    this->x+=dx;
    return *this;
}
Point &Point::transY(double dy) {
    this->y+=dy;
    return *this;
}
Point &Point::transXY(double dx, double dy) {
    this->y+=dy;
    this->x+=dx;
    return *this;
}
 double Point::dist(const Point &p, const Point &q) {
     double dx = q.x - p.x;
     double dy = q.y - p.y;
     return std::sqrt(dx * dx + dy * dy);
}

int main() {

    Point p;
    Point q(1);
    Point r(1,2);
    p.transXY(5,6);
    q.transX(-1).transY(-1).transXY(2,2);
    r.setX(10).transY(-8);
    std::cout << Point::dist(p,q) << std::endl;
    std::cout << Point::dist(p,r) << std::endl;

}
