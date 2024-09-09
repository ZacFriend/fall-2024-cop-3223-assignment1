// Assignment 1
// Author: Zachary Friend
// Class: COP 3223, Professor Parra
// Date: 9/8/24
// Purpose: 
// Input: 
// Output: 




#include <stdio.h>
#include <math.h>

#define PI 3.14159

double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

double calculateDistance() {
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);
    
    return distance;
}

double calculatePerimeter() {
    double diameter = calculateDistance();
    double perimeter = PI * diameter;
    printf("The perimeter of the circle is %lf\n", perimeter);
    
    return 1.0; 
}

double calculateArea() {
    double diameter = calculateDistance();
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the circle is %lf\n", area);
    
    return 1.5; 
}

double calculateWidth() {
    double x1 = askForUserInput("Enter x1: ");
    double x2 = askForUserInput("Enter x2: ");
    
    double width = fabs(x2 - x1);
    printf("The width of the circle is %lf\n", width);
    
    return 1.0; 
}

double calculateHeight() {
    double y1 = askForUserInput("Enter y1: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double height = fabs(y2 - y1);
    printf("The height of the circle is %lf\n", height);
    
    return 2.0; 
}

int main() {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}