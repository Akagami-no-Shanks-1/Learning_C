#include <stdio.h>
#include <string.h>
/*Structure is a user-defined data type that allows to combine data items of different kinds. */
struct player
{
    char name[30];
    int age;
    char rank[5];
    float health;
    float power;
    float mana;
    char status[10];
};

void DisplayPlayer(struct player p)
{
    // This is how we pass struct to a function.
    printf("Player Details:\nName: %s\nAge: %d\nRank: %s\nHealth: %.2f\nPower: %.2f\nMana: %.2f\nStatus: %s\n\n", p.name, p.age, p.rank, p.health, p.power, p.mana, p.status);
}

/*We can also do struct1 = struct2;
Example , here p3 = p1; Now p3 will be a copy of p1*/
/*Sizeof(p1) gives the size of the structure in bytes. It is the sum of the sizes of all the data types of the structure.*/

int main()
{
    struct player p1 = {"Sung Jinwoo", 20, "B", 1000.0, 2500.0, 500.0, "Alive"}; // Define multiple data in the structure
    struct player p2 = {"Thomas Andre", 42, "S", 50000.0, 75000.0, 30000.0, "Alive"};

    if (p1.health == 0)
    {
        strcpy(p1.status, "Dead");
    }
    if (p2.health == 0)
    {
        strcpy(p2.status, "Dead");
    }
    // Print the data in the structure
    DisplayPlayer(p1);
    DisplayPlayer(p2);

    return 0;
}
