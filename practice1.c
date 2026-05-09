#include <stdio.h>
// This is practice problem 1 modified
int main()
{
    int shape, radius, length, width, base, height; // This is the variable declaration section

    printf("Chose shape to find area/volume of:\n");
    printf("Circle: 1\n Rectangle: 2\n Square: 3\n Switch to 3D: 4\n");
    scanf("%d", &shape); // This takes input from user to chose the shape

    if (shape == 1)
    {
        printf("Enter the radius of the circle:"); // This takes input from user for radius of circle
        scanf("%d", &radius);
        printf("Area of Circle = %.2f", 3.14 * radius * radius); // This calculates area of circle pi*r^2
    }
    else if (shape == 2)
    {
        printf("Enter length of the rectangle:"); // This takes input for the length of rectangle
        scanf("%d", &length);
        printf("Enter width of the rectangle:"); // This takes input for the width of rectangle
        scanf("%d", &width);
        printf("Area of Rectangle = %d", length * width); // This calculates area of rectangle length*width
    }
    else if (shape == 3)
    {
        printf("Enter the side of the Square:"); // This takes input for the side of square
        scanf("%d", &length);
        printf("Area of Square = %d", length * length); // This calculates area of square side^2
    }
    else if (shape == 4)
    {
        printf("Cylinder: 11\n Cone: 12\n Sphere: 13\n Cuboid: 21\n Cube: 31\n");
        scanf("%d", &shape);
        if (shape == 11)
        {
            printf("Enter the radius of the cylinder:"); // This takes input for the radius of cylinder
            scanf("%d", &radius);
            printf("Enter the height of the cylinder:"); // This takes input for the height of cylinder
            scanf("%d", &height);
            printf("Volume of the cylinder = %.2f\n", 3.14 * radius * radius * height);             // This calculates volume of cylinder pi*r^2*h
            printf("Surface area of the cylinder = %.2f\n", 2 * 3.14 * radius * (radius + height)); // This calculates surface area of cylinder 2*pi*r*(r+h)
        }
        else if (shape == 12)
        {
            printf("Enter the radius of the cone:"); // This takes input for the radius of cone
            scanf("%d", &radius);
            printf("Enter the height of the cone:"); // This takes input for the height of cone
            scanf("%d", &height);
            printf("Volume of the cone = %.2f\n", (3.14 * radius * radius * height) / 3); // This calculates volume of cone (pi*r^2*h)/3
            printf("Surface area of the cone = %.2f\n", 3.14 * radius * (radius + sqrt(height * height + radius * radius)));
            // This calculates surface area of cone pi*r*(r+l) where l is the slant height calculated using Pythagorean theorem
        }
        printf("Rest coming soon...");
    }
    return 0;
}