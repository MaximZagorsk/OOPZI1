
add_executable(task1 "exe/Task1.c"   )

add_executable(task2 "exe/Task2.c"   )

add_executable(task3 "exe/Task3.c"   )

add_executable(task4 "exe/Task4.c"   )

add_executable(task5 "exe/Task5_main.c" "exe/Task5_func.c"  )

add_executable(task6 "exe/Task6_main.c" "exe/Task6_func.c"  )

add_executable(task7 "head/func.h" "exe/Task7_main.c" "exe/Task7_func.c"  )

add_executable(task8 "exe/Task8.c" "head/func.h"  )

target_link_libraries(task8 tlib)





