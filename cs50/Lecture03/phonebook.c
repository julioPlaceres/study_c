#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];
    
    people[0].name = "Julio";
    people[0].number = "+1(315)878-4223";

    people[1].name = "Savi";
    people[1].number = "+1(407)123-4233";

    string name = get_string("Who's phone number would you like to know: ");

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Here's %s phone number: %s\n", name, people[i].number);
            return 0;
        }
    }
    printf("User %s not found in PhoneBook\n", name);
    return 1;
}