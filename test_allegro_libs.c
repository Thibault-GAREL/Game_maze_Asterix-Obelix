#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

int main() {
    printf("✓ stdio.h OK\n");
    printf("✓ allegro5/allegro.h OK\n");
    printf("✓ allegro5/allegro_image.h OK\n");
    printf("✓ allegro5/allegro_font.h OK\n");
    printf("✓ allegro5/allegro_ttf.h OK\n");

    // Tester les fonctions principales
    if (!al_init()) {
        printf("✗ al_init() échoué\n");
        return 1;
    }
    printf("✓ al_init() OK\n");

    if (!al_init_image_addon()) {
        printf("✗ al_init_image_addon() échoué\n");
        return 1;
    }
    printf("✓ al_init_image_addon() OK\n");

    al_init_font_addon();
    printf("✓ al_init_font_addon() OK\n");

    printf("\n🎉 Toutes les librairies Allegro sont correctement installées !\n");
    return 0;
}
