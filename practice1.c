#include <stdio.h>
#include <math.h>
// This is practice problem 1 modified
int main()
{
    while (1)
    {
        int shape, subshape, radius, length, width, base, height; // This is the variable declaration section

        printf("=====2D Shapes=====\n");
        printf("Circle: 1\n Rectangle: 2\n Square: 3\n Switch to 3D: 4\n");
        printf("Chose shape to find area/volume of or 0 to quit: ");
        scanf("%d", &shape); // This takes input from user to chose the shape

        if (shape == 0)
        {
            break; // This breaks the loop if user chooses to quit
        }

        switch (shape)
        {
        case 1:
            printf("Enter the radius of the circle: "); // This takes input from user for radius of circle
            scanf("%d", &radius);
            printf("Area of Circle = %.2f\n", 3.14 * pow(radius, 2)); // This calculates area of circle pi*r^2
            break;

        case 2:
            printf("Enter length of the rectangle: "); // This takes input for the length of rectangle
            scanf("%d", &length);
            printf("Enter width of the rectangle: "); // This takes input for the width of rectangle
            scanf("%d", &width);
            printf("Area of Rectangle = %d\n", length * width); // This calculates area of rectangle length*width
            break;

        case 3:
            printf("Enter the side of the Square: "); // This takes input for the side of square
            scanf("%d", &length);
            printf("Area of Square = %d\n", length * length); // This calculates area of square side^2
            break;

        case 4:
            printf("=====3D Shapes=====\n");
            printf("Sphere: 1\n Cylinder: 2\n Cone: 3\n Cuboid: 4\n Cube: 5\n");
            printf("Chose 3D shape for volume and Surface area: ");
            scanf("%d", &subshape); // This takes input for the 3D shape

            switch (subshape)
            {
            case 1:
                printf("Enter the radius of the sphere: "); // This takes input for the radius of sphere
                scanf("%d", &radius);
                printf("Volume of Sphere = %.2f\n", (4.0 / 3.0) * 3.14 * pow(radius, 3)); // This calculates volume of sphere (4/3)*pi*r^3
                printf("Surface Area of Sphere = %.2f\n", 4.0 * 3.14 * pow(radius, 2));   // This calculates surface area of sphere 4*pi*r^2
                break;
            case 2:
                printf("Enter the radius of the cylinder: "); // This takes input for the radius of cylinder
                scanf("%d", &radius);
                printf("Enter the height of the cylinder: "); // This takes input for the height of cylinder
                scanf("%d", &height);
                printf("Volume of Cylinder = %.2f\n", 3.14 * pow(radius, 2) * height);                // This calculates volume of cylinder pi*r^2*h
                printf("Surface Area of Cylinder = %.2f\n", 2.0 * 3.14 * radius * (radius + height)); // This calculates surface area of cylinder 2*pi*r*(r+h)
                break;
            case 3:
                printf("Enter the radius of the cone: "); // This takes input for the radius of cone
                scanf("%d", &radius);
                printf("Enter the height of the cone: "); // This takes input for the height of cone
                scanf("%d", &height);
                printf("Volume of Cone = %.2f\n", (1.0 / 3.0) * 3.14 * pow(radius, 2) * height);                           // This calculates volume of cone (1/3)*pi*r^2*h
                printf("Surface Area of Cone = %.2f\n", 3.14 * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)))); // This calculates surface area of cone pi*r*(r+l) where l is slant height
                break;
            case 4:
                printf("Enter the length of the cuboid: "); // This takes input for the length of cuboid
                scanf("%d", &length);
                printf("Enter the width of the cuboid: "); // This takes input for the width of cuboid
                scanf("%d", &width);
                printf("Enter the height of the cuboid: "); // This takes input for the height of cuboid
                scanf("%d", &height);
                printf("Volume of Cuboid = %d\n", length * width * height);                                       // This calculates volume of cuboid length*width*height
                printf("Surface Area of Cuboid = %d\n", 2 * (length * width + width * height + length * height)); // This calculates surface area of cuboid 2*(lw + wh + lh)
                break;
            case 5:
                printf("Enter the side of the cube: "); // This takes input for the side of cube
                scanf("%d", &length);
                printf("Volume of Cube = %d\n", pow(length, 3));           // This calculates volume of cube side^3
                printf("Surface Area of Cube = %d\n", 6 * pow(length, 2)); // This calculates surface area of cube 6*side^2
                break;
            default:
                printf("Invalid 3D shape selection. Please try again.\n"); // This handles invalid input for 3D shape selection
                break;
            }
            break;
        default:
            printf("Invalid shape selection. Please try again.\n"); // This handles invalid input for shape selection
            break;
        }
    }
    return 0; // This returns 0 to indicate successful execution of the program
}