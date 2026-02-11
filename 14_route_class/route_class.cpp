#include <string>
#include <iostream>

typedef struct {
    std::string source;
    std::string destination;
    int length;
} Route;

int main() {
    Route spring_trip;
    spring_trip.source = "Lakeland";
    spring_trip.destination = "Tokyo";
    spring_trip.length = 7250;

    spring_trip.destination = "New York";
    // This causes an issue
}