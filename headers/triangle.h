#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point3D.h"
using Point3D = Geometry::Point3D;

namespace Geometry
{
    class Triangle
    {
    public:
        Triangle(Geometry::Point3D, Geometry::Point3D, Geometry::Point3D);
        Triangle() = default;
        ~Triangle() = default;

        Geometry::Point3D p1() const;
        Geometry::Point3D p2() const;
        Geometry::Point3D p3() const;

        void setP1(Geometry::Point3D);
        void setP2(Geometry::Point3D);
        void setP3(Geometry::Point3D);

    private:
        Geometry::Point3D mP1;
        Geometry::Point3D mP2;
        Geometry::Point3D mP3;
    };
}
#endif