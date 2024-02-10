#ifndef POINT3D_H
#define POINT3D_H

namespace Geometry
{
    class Point3D
    {
    public:
        Point3D();
        Point3D(double, double, double);
        ~Point3D() = default;

        double x() const;
        double y() const;
        double z() const;

        void setX(double);
        void setY(double);
        void setZ(double);

    private:
        double mX;
        double mY;
        double mZ;
    };
}
#endif