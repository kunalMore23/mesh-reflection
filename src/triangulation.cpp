#include "../headers/triangulation.h"

Geometry::Triangulation::Triangulation(triangleList inTriangulation)
    :   mTriangulation(inTriangulation)
{

}

triangleList Geometry::Triangulation::getTriangulation() const
{
    return mTriangulation;
}