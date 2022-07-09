PROJECT_NAME=rotate
cmake -G Ninja -DCMAKE_PREFIX_PATH=/opt/Qt/6.2.4/gcc_64 -S ${PROJECT_NAME} -B ${PROJECT_NAME}
cmake --build ${PROJECT_NAME}
${PROJECT_NAME}/rotate
cp ${PROJECT_NAME}/rotate.cpp rotate.cpp
cp ${PROJECT_NAME}/rotate.h rotate.h

ls | grep ${PROJECT_NAME}- > student_list.txt

cat student_list.txt | while read line
do 
    echo "running tests for" ${line}
    # This will need to change to not something so janky 
    rm -f ${PROJECT_NAME}/rotate.cpp
    rm -f ${PROJECT_NAME}/rotate.h
    cp ${line}/rotate.cpp ${PROJECT_NAME}/rotate.cpp
    cp ${line}/rotate.h ${PROJECT_NAME}/rotate.h
    cmake -G Ninja -DCMAKE_PREFIX_PATH=/opt/Qt/6.2.4/gcc_64 -S ${PROJECT_NAME} -B ${PROJECT_NAME}
    cmake --build ${PROJECT_NAME}
    ${PROJECT_NAME}/rotate
done

cp rotate.cpp ${PROJECT_NAME}/rotate.cpp 
cp rotate.h ${PROJECT_NAME}/rotate.h 