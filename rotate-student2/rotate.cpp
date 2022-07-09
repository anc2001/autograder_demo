#include "rotate.h"

rotate::rotate() {}

glm::vec3 rotate::rotate_vector_xz(glm::vec3 to_rotate, float angle) {
    float cosine = glm::cos(angle);
    float sine = glm::sin(angle);
    glm::mat3x3 rotation_matrix = glm::mat3x3(0.f);
    rotation_matrix[0] = glm::vec3(cosine, 0, -sine);
    rotation_matrix[1] = glm::vec3(0, 1, 0);
    rotation_matrix[2] = glm::vec3(sine, 0, cosine);
    return rotation_matrix * to_rotate;
}
