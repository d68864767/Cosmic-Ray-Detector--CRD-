```c
#include <stdio.h>
#include <stdlib.h>

// Include necessary libraries for your microcontroller and sensors

// Define pins for sensors
#define DETECTOR_PIN ...
#define SIGNAL_PROCESSING_PIN ...

// Define variables to store data
volatile int cosmic_ray_count = 0;
volatile int cosmic_ray_data[...];

// Interrupt service routine for cosmic ray detection
void cosmic_ray_isr() {
    // Code to read data from the detector and signal processing circuits
    // Increment cosmic ray count
    cosmic_ray_count++;
    // Store data in cosmic_ray_data array
}

// Function to initialize microcontroller and sensors
void setup() {
    // Code to initialize microcontroller
    // Code to initialize sensors
    // Set up interrupt for cosmic ray detection
}

// Function to log data
void log_data() {
    // Code to write cosmic_ray_count and cosmic_ray_data to storage
}

// Main function
int main() {
    setup();

    while(1) {
        // Code to update user interface
        // Code to log data at regular intervals
    }

    return 0;
}
```
