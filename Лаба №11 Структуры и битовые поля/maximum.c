#include <stdio.h>
#include <string.h>

struct WORKER
{
    char surname[50];
    char nameFathersname[50];
    char position[50];
    int yearOfAdmission;
};

int main()
{
    struct WORKER workers[10];
    int i, j;
    struct WORKER exchange;

    printf("Enter employee details:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Worker %d:\n", i + 1);
        printf("Surname: ");
        scanf("%s", workers[i].surname);
        printf("Name and Father's name initials: ");
        scanf("%s", workers[i].nameFathersname);
        printf("Position: ");
        scanf("%s", workers[i].position);
        printf("Year of admission : ");
        scanf("%d", &workers[i].yearOfAdmission);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(workers[i].surname, workers[j].surname) > 0)
            {
                exchange = workers[i];
                workers[i] = workers[j];
                workers[j] = exchange;
            }
        }
    }

    printf("\nEmployees in alphabetical order:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s %s \t%s \tyear of admission: \t%d\n", workers[i].surname, workers[i].nameFathersname, workers[i].position, workers[i].yearOfAdmission);
    }

    int counter = 0;
    int needExperiense;
    printf("Enter the required length of service\n");
    scanf("%d", &needExperiense);
    int EXP[10];
    for (i = 0; i < 10; i++)
    {
        EXP[i] = 2023 - workers[i].yearOfAdmission;
    }
    for (i = 0; i < 10; i++)
    {
        if (EXP[i] > needExperiense)
        {
            printf("%s\n", workers[i].surname);
            counter++;
        }
    }
    if (counter == 0)
    {
        printf("There are no such employees");
    }

    return 777;
}