#include <stdio.h>
#include <stdlib.h>

#define NUM_CANDIDATES 5

int count[NUM_CANDIDATES];

int read_ballot()
{
    int input;
    scanf(" %d ", &input);
    if (input < 1 || input > NUM_CANDIDATES)
        {
          return -1;
        }
    else
        {
          return input;
        }
}

void count_votes()
{
    for (int i = 0; i < NUM_CANDIDATES; i++)
        {
        count[i] = 0;
        }
    int num_ballots = read_ballot();
    while (num_ballots--)
        {
        int candidate_number = read_ballot();
        count[candidate_number - 1]++;
        }
}

void print_results()
{

    for (int i = 0; i < NUM_CANDIDATES; i++)
        {
        printf("Candidate %d: %d votes\n", i + 1, count[i]);
        }
    int spoilt_ballots = 0;
    while (read_ballot() != -1)
    {
        spoilt_ballots++;
    }
    printf("Spoilt ballots: %d\n", spoilt_ballots);
}

int main()
{
    count_votes();
    print_results();
    return 0;
}
