#ifndef ROTATE_H
#define ROTATE_H
#include "glm/glm.hpp"
#include "glm/trigonometric.hpp"

class rotate
{
public:
    rotate();
    glm::vec3 rotate_vector_xz(glm::vec3, float angle);
};

#endif // ROTATE_H
