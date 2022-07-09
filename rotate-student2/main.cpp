#include <QCoreApplication>
#include <iostream>
#include "rotate.h"
#include "glm/glm.hpp"
#include "glm/gtx/string_cast.hpp"
#include "glm/gtc/epsilon.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::string mode = argv[0];

    rotate rotation_class = rotate();
    float epsilon = 1e-5;
    //Test 1
    glm::vec3 rot_0 = rotation_class.rotate_vector_xz(glm::vec3(1, 0, 0), glm::radians(0.0));
    glm::vec3 test = glm::epsilonEqual(glm::vec3(1, 0, 0), rot_0, epsilon);
    if  (test.x == 1 && test.y == 1 && test.z == 1) {
        std::cout << "Test 1 passed!" << std::endl;
    } else {
        std::cout << "Test 1 failed!" << std::endl;
    }

    glm::vec3 rot_90 = rotation_class.rotate_vector_xz(glm::vec3(1, 0, 0), glm::radians(90.0));
    test = glm::epsilonEqual(glm::vec3(0, 0, 1), rot_90, epsilon);
    if  (test.x == 1 && test.y == 1 && test.z == 1) {
        std::cout << "Test 2 passed!" << std::endl;
    } else {
        std::cout << "Test 2 failed!" << std::endl;
    }

    glm::vec3 rot_180 = rotation_class.rotate_vector_xz(glm::vec3(1, 0, 0), glm::radians(180.0));
    test = glm::epsilonEqual(glm::vec3(-1, 0, 0), rot_180, epsilon);
    if  (test.x == 1 && test.y == 1 && test.z == 1) {
        std::cout << "Test 3 passed!" << std::endl;
    } else {
        std::cout << "Test 3 failed!" << std::endl;
    }

    glm::vec3 rot_270 = rotation_class.rotate_vector_xz(glm::vec3(1, 0, 0), glm::radians(270.0));
    test = glm::epsilonEqual(glm::vec3(0, 0, -1), rot_270, epsilon);
    if  (test.x == 1 && test.y == 1 && test.z == 1) {
        std::cout << "Test 4 passed!" << std::endl;
    } else {
        std::cout << "Test 4 failed!" << std::endl;
    }

    a.quit();
//    return a.exec();
}
