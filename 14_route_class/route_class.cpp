#include <string>
#include <iostream>
#include <cstdlib> // For rand call

class Route {
    // Access specifier:
private:
    std::string source;
    std::string destination;
    int length;

    void updateLength() {
        length = (source == "-" || destination == "-") ? 0 : rand() % 900 + 50;
    }

public:
    // Constructors should be public
    // Constructors have no return type (not even void)
    // Constructors have the same name as their class
    // No argument constructor
    /*Route() {
        length = 0;
    }*/

    // No argument constructor (second version)
    Route() : length(0), source("-"), destination("-") { }

    // Constructor with arguments
    Route(const std::string&& source, const std::string&& destination) :
        source(source), destination(destination) {
        updateLength();
    }

    // Method print
    void print() {
        std::cout << source << " -> " << destination
            << ": " << length << std::endl;
    }

    // Get functions (getters, accessor functions)
    std::string getSource() {
        return source;
    }
    
    std::string getDestination() {
        return destination;
    }

    int getLength() {
        return length;
    }

    // Set functions (setters, mutator functions)
    void setSource(const std::string&& new_source) {
        source = new_source;
        updateLength();
    }
    
    void setDestination(const std::string&& new_destination) {
        destination = new_destination;
        updateLength();
    }
};

int main() {
    srand(time(0));
    
    Route spring_trip;
    spring_trip.print();

    spring_trip.setSource("Lakeland");
    spring_trip.setDestination("Tokyo");
    spring_trip.print();

    spring_trip.setDestination("New York");
    spring_trip.print();

    Route summer_trip("Lakeland", "Los Angeles");
    summer_trip.print();
}