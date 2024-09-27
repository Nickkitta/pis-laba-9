#include <stdio.h>
struct catalog
{
    char autor[50];
    char name[50];
    int year;
    char group[50];
};

int main()
{
    struct catalog first = {"Senkevich", "Flood", 1978, "F"};
    struct catalog second = {"Landau", "Mechanics", 1989, "E"};
    struct catalog third = {"Doil", "Marsupials", 1990, "R"};
    printf("Notes: F - fiction; E-educational literature; R - reference literature\n");
    printf("%s    \t%s    \t%d    \t%s    \n", first.autor, first.name, first.year, first.group);
    printf("%s    \t%s    \t%d    \t%s    \n", second.autor, second.name, second.year, second.group);
    printf("%s    \t%s    \t%d    \t%s    \n", third.autor, third.name, third.year, third.group);
    printf("hello");
    // as
    // sa
    return 777;
}