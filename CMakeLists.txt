cmake_minimum_required(VERSION 3.10)
project(PROJET C)

set(CMAKE_C_STANDARD 99)

add_executable(PROJET ALLEGRO/Allegro_Main.c ALLEGRO/Gc.c ALLEGRO/Gc.h ALLEGRO/Menu.c ALLEGRO/fonction_t.h ALLEGRO/fonction_t.c)

target_link_libraries(PROJET -lmingw32 -lallegro-5.0.10-monolith-md-debug)
