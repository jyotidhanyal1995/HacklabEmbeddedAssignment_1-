#include <stdio.h>
#include <unistd.h> // for sleep function

// Define the states of the traffic light
#define GREEN      0
#define RED        1
#define YELLOW     2
char PRESENT_STATE ;


// Function to handle state changes and control the traffic light
void controlTrafficLight() {
            PRESENT_STATE = GREEN;
	    int time = 0;
           //state is change with switch cases
   	    while (1) {
		switch (PRESENT_STATE)
	       	{
		    case GREEN:
			printf("Traffic Light: GREEN\n");
			printf("GO\n");
		        sleep(6 * 60); // Wait for 6 minutes i.e 360 sec

			PRESENT_STATE = YELLOW; // changes to the next state
			break;

		    case YELLOW:
			printf("Traffic Light: YELLOW\n");
			printf("WAIT\n");
			sleep(10); // Wait for 10 seconds

			PRESENT_STATE = RED; // changes to the next state
			break;
		    case RED:
			printf("Traffic Light: RED\n");
			printf("STOP");
			sleep(2 * 60); // Wait for 2 minutes

			PRESENT_STATE = GREEN; // back to the first state
			break;
		}
	    }
}

int main() {
    //function call for cotrolTrafficlight
        controlTrafficLight();

	    return 0;
}
