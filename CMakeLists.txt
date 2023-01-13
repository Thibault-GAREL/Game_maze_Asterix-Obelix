cmake_minimum_required(VERSION 3.10)
project(PROJET C)

set(CMAKE_C_STANDARD 99)

add_executable(PROJET ALLEGRO/.c/Allegro_Main.c ALLEGRO/.c/Button.c ALLEGRO/.c/fonction_t.c ALLEGRO/.c/Gc.c ALLEGRO/.c/main.c ALLEGRO/.c/MainMatth.c ALLEGRO/.c/Menu.c ALLEGRO/.c/Part.c ALLEGRO/.c/Party.c ALLEGRO/.c/Plateau.c ALLEGRO/.c/Player.c ALLEGRO/.c/utils.c ALLEGRO/.h/Button.h ALLEGRO/.h/fonction_t.h ALLEGRO/.h/Gc.h ALLEGRO/.h/Global.h ALLEGRO/.h/Menu.h ALLEGRO/.h/Part.h ALLEGRO/.h/Party.h ALLEGRO/.h/Plateau.h ALLEGRO/.h/Player.h ALLEGRO/.h/utils.h)

target_link_libraries(PROJET -lmingw32 -lallegro-5.0.10-monolith-md-debug)
