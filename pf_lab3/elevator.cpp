#include <stdio.h>

int main()
{
    int people, weight;
    printf("Enter number of people: ");
    scanf("%d", &people);
    printf("Enter total weight: ");
    scanf("%d", &weight);
    if (people <= 10 && weight <= 1000) {
        printf("Elevator can operate normally.");
    }
    else if (people > 10 && weight > 1000) {
        printf("Entry denied Both people limit and weight limit exceeded.");
    }
    else if (weight > 1000) {
        printf("Entry denied due to Overweight.");
    }
    else {
        printf("Entry denied due to Maximum people limit exceeded.");
    }
    return 0;
}
