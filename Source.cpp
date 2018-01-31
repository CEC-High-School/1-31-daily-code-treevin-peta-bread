#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>

int main() {
	al_init();
	al_init_primitives_addon(); //initialize helper library
	ALLEGRO_DISPLAY *display = al_create_display(800, 800);
	al_clear_to_color(al_map_rgb(255, 255, 255));

	al_draw_filled_rectangle(100, 100, 700, 400, al_map_rgb(255, 0, 0));
	al_draw_filled_circle(250, 400, 100, al_map_rgb(0, 255, 0)); 
	al_draw_filled_circle(550, 400, 100, al_map_rgb(0, 255, 0));
	al_draw_filled_triangle(150, 250, 250, 250, 200, 150, al_map_rgb(0, 0, 255));
	al_draw_filled_triangle(650, 250, 550, 250, 600, 150, al_map_rgb(0, 0, 255));

	al_flip_display();
	al_rest(10);
	al_destroy_display(display);
}
