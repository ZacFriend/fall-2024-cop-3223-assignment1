// Assignment 1
// Author: Zachary Friend
// Class: COP 3223, Professor Parra
// Date: 9/8/24
// Purpose: Calculate numbers with using fracturing method
// instead of main()
// Input: various numbers
// Output: printed distance, perimeter, area, width, and height

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to ask for user input and return the value
double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

// Function to calculate and print the distance between two points
double calculateDistance() {
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// Function to calculate and print the perimeter using distance
double calculatePerimeter() {
    double diameter = calculateDistance();
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    // Return the difficulty level (1.0 - 5.0)
    return 1.0; 
}

// Function to calculate and print the area using distance
double calculateArea() {
    double diameter = calculateDistance();
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    // Return the difficulty level (1.0 - 5.0)
    return 1.5; 
}

// Function to calculate and print the width
double calculateWidth() {
    double x1 = askForUserInput("Enter x1: ");
    double x2 = askForUserInput("Enter x2: ");
    
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    // Return difficulty level (1.0 - 5.0)
    return 1.0; 
}

// Function to calculate and print the height
double calculateHeight() {
    double y1 = askForUserInput("Enter y1: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    // Return the difficulty level (1.0 - 5.0)
    return 2.0; 
}

// Main function to call all previous calculations
int main() {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}