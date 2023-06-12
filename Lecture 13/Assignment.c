#include <stdio.h>
#include <math.h>

//Define a structure for a line
struct line {
    //Define a structure for a point
    struct point {
        float x;
        float y;
    } point1, point2;

    //Store the midpoint of the line
    float* midpoint;

    //Store the slope of the line
    float slope;

    //Store the distance between the two points of the line
    float distance;
};

//Function to calculate the slope of a line
float slopeSolving(struct line line1);

//Function to calculate the slope of a line
float slopeSolving(struct line line1) {
    float slope = (line1.point1.y - line1.point2.y) / (line1.point1.x - line1.point2.x);
    return slope;
}

//Function to calculate the midpoint of a line
float* midpointSolving(struct line line1);

//Function to calculate the midpoint of a line
float* midpointSolving(struct line line1) {
    //Declare a static array to store the midpoint coordinates
    static float midpoint[2];

    //Calculate the x-coordinate of the midpoint
    midpoint[0] = (line1.point1.x + line1.point2.x) / 2;

    //Calculate the y-coordinate of the midpoint
    midpoint[1] = (line1.point1.y + line1.point2.y) / 2;

    //Return the address of the midpoint array
    return midpoint;
}

//Function to calculate the distance between two points of a line
float distanceSolving(struct line line1);

//Function to calculate the distance between two points of a line
float distanceSolving(struct line line1) {
    float distance = sqrt(pow(line1.point1.x - line1.point2.x, 2) + pow(line1.point1.y - line1.point2.y, 2));
    return distance;
}

//Function to print the equation of a line in slope-intercept form
void SlopeInterceptFormSolving(struct line line1);

//Function to print the equation of a line in slope-intercept form
void SlopeInterceptFormSolving(struct line line1) {
    //Calculate the y-intercept of the line
    float b = line1.point1.y - line1.slope * line1.point1.x;

    //Print the equation of the line in slope-intercept form
    printf("y = %fx + (%f)\n", line1.slope, b);
}

int main() {
    //Create a line object
    struct line line1;

    //Prompt the user to enter the coordinates of point1
    printf("Enter x and y for point1: ");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);

    //Prompt the user to enter the coordinates of point2
    printf("Enter x and y for point2: ");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);

    //Calculate and store the slope of the line
    line1.slope = slopeSolving(line1);

    //Calculate and store the midpoint of the line
    line1.midpoint = midpointSolving(line1);

    //Calculate and store the distance between the two points of the line
    line1.distance = distanceSolving(line1);

    //Print the slope of the line
    printf("Slope: %f\n", line1.slope);

    //Print the coordinates of the midpoint of the line
    printf("Midpoint: %f %f\n", line1.midpoint[0], line1.midpoint[1]);

    //Print the distance between the two points of the line
    printf("Distance between 2 points: %f\n", line1.distance);

    //Print the equation of the line in slope-intercept form
    SlopeInterceptFormSolving(line1);

    return 0;
}
