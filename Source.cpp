#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>

int main() {
	al_init();
	al_init_primitives_addon(); //initialize helper library
	ALLEGRO_DISPLAY *display = al_create_display(800, 800);
	al_clear_to_color(al_map_rgb(255, 255, 255));

	al_draw_filled_rectangle(100, 100, 700, 400, al_map_rgb(255, 165, 0));
	al_draw_rectangle(100, 400, 700, 700, al_map_rgb(0, 0, 0), 5);
	al_draw_filled_circle(250, 400, 100, al_map_rgb(255, 0, 0)); 
	al_draw_filled_circle(550, 400, 100, al_map_rgb(255, 0, 0));
	al_draw_filled_circle(250, 400, 50, al_map_rgb(0, 0, 0));
	al_draw_filled_circle(550, 400, 50, al_map_rgb(0, 0, 0));
	al_draw_filled_circle(400, 600, 50, al_map_rgb(0, 255, 0));
	al_draw_filled_triangle(200, 250, 300, 250, 250, 150, al_map_rgb(0, 0, 255));
	al_draw_filled_triangle(600, 250, 500, 250, 550, 150, al_map_rgb(0, 0, 255));

	al_flip_display();
	al_rest(10);
	al_destroy_display(display);
}
