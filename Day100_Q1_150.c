#include <stdio.h>
#include <string.h>

// 1. Define the Structure
struct Student {
    int id;
    char name[50];
    float percentage;
};

int main() {
    // 2. Create a struct variable
    struct Student s1;
    
    // 3. Create a pointer to the struct
    struct Student *ptr;
    
    // 4. Initialize the pointer (point it to s1's address)
    ptr = &s1;

    // --- MODIFYING DATA ---
    // Using the arrow operator (->) to assign values to s1 via the pointer
    ptr->id = 101;
    strcpy(ptr->name, "Alice Smith"); // We use strcpy for string assignment
    ptr->percentage = 92.5;

    // --- DISPLAYING DATA ---
    printf("Student Details (Accessed via Pointer):\n");
    printf("---------------------------------------\n");
    
    // Using -> to access members for printing
    printf("ID         : %d\n", ptr->id);
    printf("Name       : %s\n", ptr->name);
    printf("Percentage : %.2f%%\n", ptr->percentage);

    // --- MODIFYING DATA AGAIN ---
    // Let's update the percentage using the pointer
    printf("\nUpdating percentage...\n");
    ptr->percentage = 95.0;

    printf("New Percentage: %.2f%%\n", ptr->percentage);

    return 0;
}