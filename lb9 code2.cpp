#include <iostream>
#include <ctime>
using namespace std;
void delay() {
    clock_t start_time = clock();
    const double delay_duration = 2.0; // Delay duration in seconds

    // Calculate the required number of clock ticks for the delay duration
    clock_t delay_ticks = static_cast<clock_t>(delay_duration * CLOCKS_PER_SEC);

    while (clock() - start_time < delay_ticks) {
        // Wait until the required time has elapsed
    }
}

int main() {
    cout<<"Once a fellow met a fellow\n";
    cout<<"And after two seconds...\n";
    delay();
    cout<<"They become friends";
    return 0;
}

