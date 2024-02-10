#ifndef TRIANGULATION_H
#define TRIANGULATION_H
#include <vector>
#include "triangle.h"

using triangleList = std::vector<Geometry::Triangle>;

namespace Geometry
{
    class Triangulation
    {
        public:
            Triangulation(triangleList inTriangulation);
            ~Triangulation() = default;

            triangleList getTriangulation() const;

        private:
            triangleList mTriangulation;
    };
}

#endif