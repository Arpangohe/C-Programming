#include <iostream>

int main() {
    float totalMarks, obtainedMarks, percentage;

    // Input total marks and obtained marks
    std::cout << "Enter the total marks: ";
    std::cin >> totalMarks;
    std::cout << "Enter the obtained marks: ";
    std::cin >> obtainedMarks;

    // Check if total marks is zero
    if (totalMarks <= 0) {
        std::cout << "Total marks cannot be zero or negative." << std::endl;
    } else {
        // Calculate percentage
        percentage = (obtainedMarks / totalMarks) * 100;
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }

    return 0;
}
