#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

// Function declaration or prototype

// void sum(int, int);
// int sum(int, int);
// double getAverage(float [], int);
// void greetUser(int);
// long findFactorial(int);

// Memory occupied = 28 Bytes
// struct Employee {
//     int id;         // 4 Bytes
//     char name[20];  // 20 Bytes
//     float salary;   // 4 Bytes
// };

// Memory occupied = 20 Bytes
// union Employee {
//     int id;         // 4 Bytes
//     char name[20];  // 20 Bytes
//     float salary;   // 4 Bytes
// };

// enum TrafficLight {
//     RED, YELLOW, GREEN
// };

int main() {
    /**
     * ==================== Loops ====================>
     */

    // A loop statement allows us to execute a statement or a group of statements
    // multiple times based on a condition.
    // Loops are also called as iterators.

    // Types of loops:

    //
    // (1).For loop statement =>
    //

    // int num;
    // puts("Enter the value of n:");
    // scanf("%d", &num);

    // for (int i = 1; i <= num; i++) {
    //     if (i % 2 != 0)
    //         printf("%d\n", i);
    // }

    //
    // (2).While loop statement =>
    //

    // int counter = 1;

    // while (counter <= 10) {
    //     printf("%d\n", counter);
    //     counter++;
    // }

    // int num = 5;
    // long factorial = 1;

    // while (num > 0) {
    //     factorial *= num;
    //     num--;
    // }

    // printf("Factorial is: %ld", factorial);

    //
    // (3).Do-While loop statement =>
    //

    // int counter = 1;

    // do {
    //     printf("%d\n", counter);
    //     counter++;
    // } while (counter <= 10);

    // float num, sum = 0;

    // do {
    //     puts("Enter a number: ");
    //     scanf("%f", &num);
    //     sum += num;
    // } while (num != 0);

    // printf("The sum is: %.3f", sum);

    // Use for loop if number of iterations is fixed.
    // Use while loop if number of iterations is not fixed.
    // Use do-while loop if you want to execute the loop at least once.

    //
    // Palindrome number =>
    //

    // int num, reversedNumber = 0, remainder;

    // printf("Enter a number:");
    // scanf("%d", &num);

    // int originalNum = num;

    // do {
    //     remainder = num % 10;
    //     reversedNumber = (reversedNumber * 10) + remainder;
    //     num = num / 10;
    // } while (num > 0);

    // if (originalNum == reversedNumber)
    //     printf("Palindrome.");
    // else
    //     printf("Not a palindrome.");

    /**
     * ==================== Loop Control Statements ====================>
     */

    // (1).Break keyword
    // The break statement is used to terminate the loop immediately.

    // (2).Continue keyword
    // The continue statement is used to skip the current iteration and continue with the next iteration.

    // (3).Goto keyword
    // The goto statement is used to transfer control to a different part of the program.

    // int i;
    // double number, sum = 0;

    // for (i = 1; i <= 10; i++) {
    //     printf("Enter number %d:", i);
    //     scanf("%lf", &number);

    //     if (number < 0)
    //         goto my_label; // break;

    //     if (number > 1000) {
    //         puts("Number greater than 1000 is not allowed.");
    //         continue;
    //     }

    //     sum += number;
    // }

    // my_label:
    // printf("Sum = %.2lf", sum);

    /**
     * ==================== Arrays ====================>
     */

    // Array is a collection of similar data types.
    // Accessing elements beyond the size of the array results in undefined behavior.

    //
    // Different ways to initialize an array =>
    //

    // Method (1): Specify the size of the array and then initialize the elements.
    // long scoresOne[5] = {980, 903, 785, 761, 701};

    // Method (2): Just declare the array and then initialize the elements.
    // long scoresTwo[] = {980, 903, 785, 761, 701};

    // Method (3): Just declaring size.
    // long scoresThree[5];
    // scoresThree[0] = 980;
    // scoresThree[1] = 903;
    // scoresThree[2] = 785;
    // scoresThree[3] = 761;
    // scoresThree[4] = 701;

    //
    // Diving into arrays =>
    //

    // We can use loops to iterate over the elements of an array.
    // for (int i = 0; i < 5; i++) {
    //     printf("%ld\n", scoresOne[i]);
    // }

    // User input using arrays.
    // long scoresTwo[5];

    // for (int i = 0; i < 5; i++) {
    //     printf("Enter the value for index %d:", i);
    //     scanf("%ld", &scoresTwo[i]);
    // }

    // puts("Printing elements of scoresTwo:");
    // for (int i = 0; i < 5; i++) {
    //     printf("%ld\n", scoresTwo[i]);
    // }

    //
    // Memory allocation =>
    //

    // Array elements are stored in contiguous memory locations.
    // long scoresOne[5] = {980, 903, 785, 761, 701};

    // for (int i = 0; i < 5; i++) {
    //     printf("%ld\n", &scoresOne[i]);
    // }

    //
    // Two-dimensional arrays =>
    //

    // A two-dimensional array is an array of arrays.

    // Syntax: data_type array_name[rows][columns];
    // A two-dimensional array is similar to a matrix.

    // Number of columns must be specified.

    // int arr[3][5] = {
    //     {98, 54, 12, 76, 99},
    //     {87, 75, 11, 33, 45},
    //     {17, 15, 23, 21, 67}
    // };

    // Modify the element in the 2D array.
    // arr[2][4] = 100;

    // Print the elements of the 2D array.
    // for (int r = 0; r < 3; r++) {
    //     for (int c = 0; c < 5; c++) {
    //         printf("%d ", arr[r][c]);
    //     }
    //     printf("\n");
    // }

    /**
    * ==================== Strings ====================>
    */

    // A string is a array of characters that is terminated by a null character '\0'.

    // Example: char name[3] = "hi";
    // Internal representation: { 'h', 'i', '\0' }

    // Various ways to declare a string.

    // char str1[3] = "hi";
    // char str2[10] = "hi";
    // char str3[] = "hi";
    // char str4[] = {'h', 'i', '\0'};
    // char str5[3] = {'h', 'i', '\0'};
    // char str6[3] = {'h', 'i'}; // Not a string. It is a normal character array.

    // User input using strings.

    // While taking input from the user, we dont use & operator with string because
    // the name of the array itself is the address of the first element of the array.

    // char name[40];
    // puts("Enter your name:");
    // scanf("%[^\n]%*c", name);
    // printf("%s", name);

    // Commonly used string functions.

    //
    // (1).strcat =>
    //

    // Appends a copy of the source string to the destination string.

    // char destination[50] = "Hello ";
    // char source[50] = "World!";
    // strcat(destination, source);
    // printf("strcat: %s\n", destination);

    //
    // (2).strcmp =>
    //

    // Compares two strings lexicographically.
    // Lexicographically means comparing two strings character by character.

    // It returns 0 if both strings are equal.
    // It the difference between the ASCII values of the first non-matching characters.


    // char str1[10] = "hello";
    // char str2[10] = "heLlo";
    // int result = strcmp(str1, str2);
    // printf("strcmp: result: %d\n", result);
    // if (result == 0)
    //     puts("Strings are equal.");
    // else
    //     puts("Strings are unequal.");

    //
    // (3).strcpy =>
    //

    // Copies the source string to the destination string.

    // char dest[50] = "Old Value";
    // char src[50] = "New Value!";
    // strcpy(dest, src);
    // printf("strcpy: %s\n", dest);

    //
    // (4).strlen =>
    //

    // Gives you the length of the string. It doesn't count null character.

    // char name[] = "Rakesh Sharma";
    // int length = strlen(name);
    // printf("strlen: length of string: %d\n", length);

    /**
     * ==================== Functions ====================>
     */

    // Function call
    // 2 and 3 are actual parameters/arguments.
    // sum(2, 3);

    // int sum1 = sum(2, 3);
    // printf("Sum is %d", sum1);

    // float numbers[5] = {983, 2.9, 34, 433, 1000.567};
    // double avg = getAverage(numbers, 5);
    // printf("Average value is: %.3lf ", avg);

    // Documentation section
    // Link section
    // Global declaration section
    // main function (Program body)
    // Subprogram section

    /**
    * ==================== Recursion ====================>
    */

    // Recursion is the process where a function calls itself.
    // Infinite recursion can lead to stack overflow error.

    // greetUser(5);

    // long result = findFactorial(5);
    // printf("Factorial is: %ld \n", result);

    // Terminating condition is used to avoid stack overflow error.

    /**
     * ==================== Pointers ====================>
     */

    // Pointer is a variable that stores the address of another variable.
    // Syntax: data_type *pointer_variable_name;
    // Example: int *p = &num;

    // Operators: & (Address of) and * (Value at)

    // The data type of the pointer must match the data type of the variable
    // whose address is stored in the pointer.

    // int num = 20;
    // int *p = &num;
    // p contains the address of num.

    // printf("Address of 'num': %ld\n", &num);
    // printf("Address stored in 'p': %ld\n", p);
    // printf("Value of '*p': %d\n", *p);

    //
    // Increment and decrement operations on pointers =>
    //

    // Increment and decrement of a pointer depends on the data type of the pointer.

    // float values[] = {10.5, 100.9, 200, 4.1, 989.38, 2.3};
    // float *ptr;
    // ptr = values; // ptr = &values[0];

    // for (int i = 0; i <= 5; i++) {
    //     printf("Value at index %d = %.2f\n", i, *ptr);
    //     // Increment the pointer by the size of the data type.
    //     ptr++; // ptr = ptr + 1;
    // }

    /**
     * ==================== Memory Management ====================>
     */

    // Static memory allocation - Memory is allocated at compile time.
    // Dynamic memory allocation - Memory is allocated at runtime.

    // (1).malloc function - Allocates memory block of specified size.
    // (2).calloc function - Allocates memory block of specified size and initializes it to zero.
    // (3).free function - Deallocates the memory block.
    // (4).realloc function - Reallocates the memory block.

    // int n, *ptr;
    // puts("Enter n:");
    // scanf("%d", &n);

    // ptr = (int *) malloc(n * sizeof(int));
    // ptr = (int *) calloc(n, sizeof(int));

    // if (ptr == NULL) {
    //     puts("Memory allocation failed.");
    //     exit(0);
    // } else {
    //     for (int i = 0; i < n; i++) {
    //         ptr[i] = i + 1;
    //     }
    //     printf("The values present in the allocated memory block: ");
    //     for (int i = 0; i < n; i++) {
    //         printf("%d ", ptr[i]);
    //     }

    //     int c, newSize;
    //     puts("\nEnter the number of more values you want to enter: ");
    //     scanf("%d", &c);
    //     newSize = c + n;

    //     // Dynamically re-allocate memory using realloc().
    //     ptr = (int *) realloc(ptr, newSize * sizeof(int));

    //     for (int i = n; i < newSize; i++) {
    //         ptr[i] = i + 1;
    //     }
    //     printf("The final values stored in the allocated memory block: ");
    //     for (int i = 0; i < newSize; i++) {
    //         printf("%d ", ptr[i]);
    //     }
    // }

    // Free the allocated memory.
    // free(ptr);

    /**
     * ==================== User Defined Data Types ====================>
     */

    //
    // (1).Structures =>
    //

    // Structure is a user-defined data type that allows you to combine data items of different data types.

    // struct Employee e1;

    // e1.id = 1;
    // strcpy(e1.name, "Peter");
    // e1.salary = 23000;

    // printf("Employee details: \nEmployee ID: %d \nName: %s \nSalary: Rs. %0.2f\n\n", e1.id, e1.name, e1.salary);

    //
    // (2).Unions =>
    //

    // Union is a user-defined data type that allows you to store different data types in the same memory location.
    // Union only stores the value of the last assigned member.

    // union Employee e1, e2;

    // e1.id = 1;
    // printf(" Employee ID: %d \n", e1.id);
    // strcpy(e1.name, "Peter");
    // printf(" Name: %s \n", e1.name);
    // e1.salary = 23000;
    // printf(" Salary: Rs. %0.2f\n\n", e1.salary);

    //
    // (3).Enum =>
    //

    // Enum is a user-defined data type that consists of integral constants.
    // Example: enum TrafficLight {RED, YELLOW, GREEN};
    // Red = 0, Yellow = 1, Green = 2

    // enum TrafficLight signal;

    // signal = RED;
    // printf("Red = %d, Yellow = %d, Green = %d\n\n", RED, YELLOW, GREEN);

    // switch (signal) {
    //     case RED:
    //         puts("Stop");
    //         break;
    //     case YELLOW:
    //         puts("Proceed with caution");
    //         break;
    //     case GREEN:
    //         puts("Go");
    //         break;
    //     default:
    //         puts("No color found");
    // }

    /**
     * ==================== Miscellaneous Concepts ====================>
     */

    // %p format specifier - Used to print the address of a variable (Hexadecimal format).
    // Example: printf("Address of num: %p \n", &num);

    // Pass by value - The actual value is passed to the function.
    // The actual value is copied to the formal parameter.
    // It doesn't affect the actual value.

    // Pass by reference - The address of the actual value is passed to the function.
    // The actual value is not copied.
    // It affects the actual value.

    // Local variables - Variables declared inside a function.
    // Global variables - Variables declared outside all functions.
    // Local variables are first priority than global variables.

    // Random number functions
    // srand() - Seeds the random number generator.
    // rand() - Generates a random number.

    // srand(time(NULL));
    // int randomNum = (rand() % 6) + 1; // 1, 2, 3, 4, 5, 6

    // puts("Rolling the dice...");
    // printf("You got: %d", randomNum);

    return 0;
}

// Function definition

// void sum(int num1, int num2) {
//     // num1 and num2 are formal parameters/arguments.
//     int s = num1 + num2;
//     printf("Sum of %d and %d is %d.", num1, num2, s);
// }

// int sum(int num1, int num2) {
//     return num1 + num2;
// }

// double getAverage(float arr[], int size) {
//     double avg, sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     avg = sum / size;
//     return avg;
// }

// void greetUser(int num) {
//     if (num > 0) {
//         puts("Welcome");
//         greetUser(--num);
//     }
// }

// long findFactorial(int num) {
//     if (num > 0)
//         return num * findFactorial(num - 1);
//     else
//         return 1;
// }
