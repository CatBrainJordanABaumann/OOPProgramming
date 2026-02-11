#include <string>
#include <iostream>

// Create Lecture structure description
typedef struct {
    std::string title;
    int duration;
} Lecture;

// Create a function with Lecture as input parameter
std::string lectureToStr(const Lecture& lecture);

int main() {
    // Create a Lecture object
    Lecture oop_lecture;
    
    // Set the attributes of the Lecture object
    oop_lecture.title = "Classes and Objects";
    oop_lecture.duration = 50 * 60;

    std::cout << lectureToStr(oop_lecture) << std::endl;

    return 0;
}

std::string lectureToStr(const Lecture& lecture) {
    return "Title:\t\t" + lecture.title + '\n'
        + "Duration:\t" + std::to_string(lecture.duration);
}