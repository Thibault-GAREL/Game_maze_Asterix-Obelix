//
// Created by RobinK on 25/12/2022.
//

#ifndef PROJET_MAINMOUV_H
#define PROJET_MAINMOUV_H

#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>

#endif //PROJET_MAINMOUV_H


void error(const char*txt)
{
    ALLEGRO_DISPLAY*d;
    d = al_is_system_installed() ? al_get_current_display() : NULL;
    al_show_native_message_box(d, "error", txt, NULL, NULL, 0);
    exit(EXIT_FAILURE);
}


#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <stdio.h>
/*
int main(int argc, char **argv) {
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP *image = NULL;
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    ALLEGRO_EVENT event;

    // Initialisation d'Allegro et du module d'images
    al_init();
    al_init_image_addon();

    // Création de la fenêtre d'affichage
    display = al_create_display(640, 480);
    if (!display) {
        fprintf(stderr, "failed to create display!\n");
        return -1;
    }

    // Chargement de l'image
    image = al_load_bitmap("..\\Import\\tuile_1.png");
    if (!image) {
        fprintf(stderr, "failed to load image!\n");
        al_destroy_display(display);
        return -1;
    }

    // Dessin de l'image sur l'écran
    al_draw_bitmap(image, 0, 0, 0);

    // Mise à jour de l'affichage
    al_flip_display();

    // Création de la file d'événements
    event_queue = al_create_event_queue();

    // Attente de la fermeture de la fenêtre
    al_wait_for_event(event_queue, &event);

    // Nettoyage
    al_destroy_bitmap(image);
    al_destroy_display(display);

    return 0;
}
*/