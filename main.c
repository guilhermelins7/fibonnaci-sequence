#include <stdio.h>

void displayFibonnaci(int terms)
{
    int index, fibonnaciTerms[terms];

    fibonnaciTerms[0] = 0;
    fibonnaciTerms[1] = 1; // defining the first two terms of the sequence in array.

    for (int index = 2, first = 1, second = 0; index < terms; index++, first++, second++) // Creating the fibonnaci sequence
    {
        fibonnaciTerms[index] = fibonnaciTerms[first] + fibonnaciTerms[second];
    }

    printf("The requested number of terms was %d.\nThe Fibonnaci sequence is:\n", terms); // display informations

    for (index = 0; index < terms;) // display sequence
    {
        printf("%d", fibonnaciTerms[index]);
        index++;
        if (index == terms) printf(".\n");
        else printf(", ");
    }
}

int requestTerms()
{
    int terms;

    do {
    printf("Please, inform how many terms of the Fibonacci sequence should be displayed.\n");
    scanf("%d", &terms);
    } while ((terms <= 0) && printf("Invalid number, enter a positive value.\n") && fflush(stdin));

    return terms;
}

int main()
{
    int terms;
     
    terms = requestTerms();
    displayFibonnaci(terms);

    return 0;
}
