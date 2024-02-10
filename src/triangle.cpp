#include "../headers/triangle.h"

Geometry::Triangle::Triangle(Geometry::Point3D inP1, Geometry::Point3D inP2, Geometry::Point3D inP3)
    :   mP1(inP1),
        mP2(inP2),
        mP3(inP3)
{

}

Geometry::Point3D Geometry::Triangle::p1() const
{
    return mP1;
}

Geometry::Point3D Geometry::Triangle::p2() const
{
    return mP2;
}

Geometry::Point3D Geometry::Triangle::p3() const
{
    return mP3;
}

void Geometry::Triangle::setP1(Point3D inP1)
{
    
}

void Geometry::Triangle::setP2(Point3D inP2) 
{
    
}

void Geometry::Triangle::setP3(Point3D inP3)
{
    
}