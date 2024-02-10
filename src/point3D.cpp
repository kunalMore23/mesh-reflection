#include "../headers/point3D.h"

Geometry::Point3D::Point3D()
    : mX(0.0),
      mY(0.0),
      mZ(0.0)
{
}

Geometry::Point3D::Point3D(double inX, double inY, double inZ)
    : mX(inX),
      mY(inY),
      mZ(inZ)
{
}

double Geometry::Point3D::x() const
{
    return mX;
}

double Geometry::Point3D::y() const
{
    return mY;
}

double Geometry::Point3D::z() const
{
    return mZ;
}

void Geometry::Point3D::setX(double inX)
{
    mX = inX;
}

void Geometry::Point3D::setY(double inY) 
{
    mY = inY;
}

void Geometry::Point3D::setZ(double inZ)
{
    mZ = inZ;
}