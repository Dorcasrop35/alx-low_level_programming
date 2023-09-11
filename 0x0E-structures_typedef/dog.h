#include <stdio.h>

// Define a structure named 'Person' to represent a person's information
struct Person {
    char name[50];  // Name of the person
    int age;        // Age of the person
};

int main(void) {
    // Declare and initialize a variable of type 'struct Person'
    struct Person person1;
    
    // Fill in the information for person1
    strcpy(person1.name, "John");
    person1.age = 30;
    
    // Print the information
    printf("Person's Name: %s\n", person1.name);
    printf("Person's Age: %d\n", person1.age);
    
    return 0;
}
