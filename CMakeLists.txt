cmake_minimum_required(VERSION 3.10)
project(PROJET C)

set(CMAKE_C_STANDARD 99)

add_executable(PROJET ALLEGRO/.c/Allegro_Main.c ALLEGRO/.c/Gc.c ALLEGRO/.h/Gc.h ALLEGRO/.c/Menu.c ALLEGRO/.h/fonction_t.h ALLEGRO/.c/fonction_t.c)

target_link_libraries(PROJET -lmingw32 -lallegro-5.0.10-monolith-md-debug)
