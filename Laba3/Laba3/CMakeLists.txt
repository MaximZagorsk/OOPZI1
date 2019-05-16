# CMakeList.txt: проект CMake для Laba3; включите исходный код и определения
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник для исполняемого файла этого проекта.
add_executable (for "head/Header.h" "for/task1.c" "for/task2.c" "for/task3.c" "for/task4.c" "for/task5.c" "for/task6.c" )

add_executable (while "head/Header.h" "while/task1.c" "while/task2.c" "while/task3.c" "while/task4.c" "while/task5.c" "while/task6.c" )

add_executable (dowhile "head/Header.h" "dowhile/task1.c" "dowhile/task2.c" "dowhile/task3.c" "dowhile/task4.c" "dowhile/task5.c" "dowhile/task6.c")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
