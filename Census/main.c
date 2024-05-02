//#include <stdio.h>
//struct census
//{
//    char city[];
//    long long int polulation;
//    float literacy;
//};
//struct census person1;
//struct census person2;
//struct census person3;

#include <stdio.h>
#include <stdlib.h>
struct census {
    char city[20];
    long population;
    float literacy;
};
void sort_alphabetically(struct census cities[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(cities[i].city, cities[j].city) > 0) {
                struct census temp = cities[i];
                cities[i] = cities[j];
                cities[j] = temp;
            }
        }
    }
}
void sort_by_literacy(struct census cities[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cities[i].literacy < cities[j].literacy) {
                struct census temp = cities[i];
                cities[i] = cities[j];
                cities[j] = temp;
            }
        }
    }
}
void sort_by_population(struct census cities[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cities[i].population < cities[j].population) {
                struct census temp = cities[i];
                cities[i] = cities[j];
                cities[j] = temp;
            }
        }
    }
}
void display_list(struct census cities[], int n) {
    for (int i = 0; i < n; i++) {
        printf("City: %s\n", cities[i].city);
        printf("Population: %ld\n", cities[i].population);
        printf("Literacy: %.2f\n", cities[i].literacy);
        printf("\n");
    }
("\n");

}
int main() {
    struct census cities[5];

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        strcpy(cities[i].city, "City ");
        itoa(i + 1, cities[i].city + 5, 10);
        cities[i].population = rand() % 1000000 + 1;
        cities[i].literacy = (float) rand()/RAND_MAX * 100;
    }

    printf("List sorted alphabetically:\n");
    sort_alphabetically(cities, 5);
    display_list(cities, 5);

    printf("List sorted by literacy level:\n");
    sort_by_literacy(cities, 5);
    display_list(cities, 5);

    printf("List sorted by population:\n");
    sort_by_population(cities, 5);
    display_list(cities, 5);
    return 0;
}









































//Define a structure named census with the following three members:
//    * a charcter array city[] to store names
//    * a long integer to store population of the city
//    * a float member to store the literacy level
//    write a c program to do the following:
//        *to read details of 5 cities randomly using an array variable
//        *to sort list alphabetically
//        *to sort the list based on literacy level
//        *to sort the list based on population
//        *to display sorted lists
