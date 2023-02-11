#include <algorithm>
#include <ostream>
#include <iosfwd>
#include <iostream>

class Segment {
    double A, B;
public:
    Segment(double A, double B) : A(A), B(B) {

    }

    Segment operator*(double d) const {
        return Segment(A * d, B * d);
    }

    Segment operator/(double d) const {
        return Segment(A / d, B / d);
    }

    Segment operator+(double d) const {
        return Segment(A + d, B + d);
    }

    Segment operator-(double d) const {
        return Segment(A - d, B - d);
    }

    Segment operator+(const Segment& other) const {
        return Segment(std::min(A, other.A), std::max(B, other.B));
    }

    bool operator()(double d) const {
        return d >= A && d <= B;
    }

    friend std::ostream& operator<<(std::ostream& os, const Segment& seg) {
        os << "[" << seg.A << "," << seg.B << "]";
        return os;
    }
};

int main() {
    using std::cout; using std::endl;
    Segment seg{2,3};
    Segment s = (seg-2)/2 + seg;
    s = s*2;
    s = s/3;
    s = s+1;
    cout << s << endl << std::boolalpha;
    for (double x = 0.5; x < 4; x += 1)
        cout << "x=" << x << ": " << s(x) << endl;
}