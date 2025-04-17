/* Synchronize traffic lights by calculating the delay needed for subsequent lights 
based on road speed, distance, and car acceleration. (traffic lights will turn green 3s before the car reach it)*/

#include <stdio.h>

int main(void) {
	float 
    max_speed, // street max speed
    acc, // car acceleration
    t_light_dist, // distance between traffic lights
    time_until_maxs,  // time until max speed
    time_until_tlights, // time until the traffic lights after reaching max speed
    num_dist; // distance moved in non-uniform motion
	
	printf("Type the street max speed: \n> ");
	scanf("%f", &max_speed);
    max_speed /= 3.6;
	printf("Type the car acceleration: \n> ");
	scanf("%f", &acc);
    acc /= 3.6;
	printf("Type the distance for the next traffic lights (m): \n> ");
	scanf("%f", &t_light_dist);

	
    // non-uniform motion
	time_until_maxs = max_speed / acc; 
    num_dist = acc * time_until_maxs * time_until_maxs * 0.5;
    // uniform motion
    time_until_tlights = (t_light_dist - num_dist) / max_speed;

    printf("The next traffic light should open in %.2fs", time_until_maxs + time_until_tlights - 3);

	return 0;
}
