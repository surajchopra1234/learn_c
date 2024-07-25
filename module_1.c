#include <stdio.h>
#include <unistd.h>

int main() {
    /**
     * ==================== First C Program ====================>
     */

    // printf("Hello, World!\n");
    // printf("Hello, World!");

    // The puts() function adds a newline character at the end of the string.
    // puts("Hello, World!");
    // puts("Hello, World!");

    /**
     * ==================== Tokens ====================>
     */

    // char name[15] = "Farm House";

    // size  :  Variable
    // char  :  Data Type
    // 'M'   :  Literal

    // char size = 'M';
    // int personItServes = 2;
    // float retailPrice = 365.8;

    // ".1" means 1 decimal place after the point.

    // printf("Yay! You have ordered a %s pizza of size %c that serves %d.\n"
    //        "Please pay Rs. %.1f to the delivery person.", name, size, personItServes, retailPrice);

    // Primary data types - char, int, long, float, double
    // Derived data types - array, pointer, string
    // User defined data types - structure, union, enum

    // char (1 byte) (%c)
    // int (2,4 bytes) (%d)
    // long (4,8 bytes) (%ld)
    // float (4 bytes) (%f)
    // double (8 bytes) (%lf)

    // printf("%d", sizeof(int));

    // Variable is also called as an identifier.
    // Literal is also called as a constant value.

    // const float PI = 3.14;
    // PI = 7.88; // Error

    // C have 32 reserved keywords.

    // Everything in C except the white spaces is a token.

    /**
     * ==================== User Input ====================>
     */

    // char name[30];
    // char size;
    // int personItServes;
    // float retailPrice;

    // Enter key represents the newline character (\n).

    // printf("Enter pizza name:");
    // "%s"         :  It will read the string until the space is encountered.
    // "%[^\n]%*c"  :  It will read the string until the newline character is encountered.
    // scanf("%[^\n]%*c", name);

    // printf("Enter the size of the pizza as either 'S', 'M' or 'L':");
    // scanf("%c", &size);

    // size = getchar();  // Input
    // putchar(size);     // Output

    // printf("Enter the number of persons it serves:");
    // scanf("%d", &personItServes);

    // printf("Enter retail price:");
    // scanf("%f", &retailPrice);

    // printf("\nGenerating message...\n\n");
    // The usleep() function is used to suspend execution of the calling thread. (microseconds)
    // usleep(1000000);

    // printf("Yay! You have ordered a %s pizza of size %c that "
    //        "serves %d. \nPlease pay Rs. %.1f to the delivery person.\n", name, size, personItServes, retailPrice);

    // printf("\nSending SMS...\n");
    // usleep(1000000);

    // printf("\n **********SMS SENT********** \n");

    /**
     * ==================== Operators ====================>
     */

    // Operator is a symbol that tells the compiler to perform specific mathematical or logical operations.
    // Operand is a variable or a value on which the operator operates.
    // sizeof() is also an operator.

    // Types of Operators:

    //
    // (1).Arithmetic Operators =>
    //

    // Examples: +, -, *, /, % (Modulus)

    // Precedence: {*, /, %} > {+, -}
    // Associativity: Left to Right

    // Parentheses () has the highest precedence.

    // printf("%d", 3 + 1 - 7 * 5 % 3 / 2);
    // => 3 + 1 - 35 % 3 / 2
    // => 3 + 1 - 2 / 2
    // => 3 + 1 - 1
    // => 4 - 1
    // => 3

    //
    // (2).Relational Operators =>
    //

    // Examples: >, <, >=, <=, ==, !=

    // If the condition is true, the relational operator returns 1.
    // If the condition is false, the relational operator returns 0.

    // int x = 2;
    // int y = 3;
    // int z = 3;

    // int r1 = x > y;   // False: r1 = 0
    // int r2 = y >= x;  // True: 	r2 = 1
    // int r3 = x < y;   // True:	 r3 = 1
    // int r4 = y <= x;  // False:	r4 = 0
    // int r5 = y == z;  // True:	 r5 = 1
    // int r6 = z != x;  // True:	 r6 = 1

    //
    // (3).Logical Operators =>
    //

    // Examples: &&, ||, !

    // Precedence: ! > && > ||
    // Associativity: Left to Right

    // Logical AND (&&) - Returns true if both the operands are true.
    // Logical OR (||) - Returns true if any one of the operands is true.
    // Logical NOT (!) - Returns true if the operand is false.

    // int r1 = y > x && z >= y;
    // printf("The value of r1: %d\n", r1); // r1 = 1

    // int r2 = x > y || y > z || y == z || y != x;
    // printf("The value of r2: %d\n", r2); // r2 = 1

    // int r3 = !(x > y);
    // printf("The value of r3: %d\n", r3); // r3 = 1

    //
    // (4).Assignment Operators =>
    //

    // Examples: =, +=, -=, *=, /=, %=

    // Associativity: Right to Left

    // float bill = 2000.0;
    // float tax = 100.0;

    // bill += tax; // bill = bill + tax;
    // printf("Total bill is: %.1f\n", bill);

    // int number = 10;
    // int x = 3;

    // number *= x; // number = number * x;
    // printf("Multiplication result: %d", number);

    //
    // (5).Increment and Decrement Operators =>
    //

    // Examples: ++, --

    // Postfix: x++ (First use the value of x and then increment)
    // Prefix: ++x (First increment the value of x and then use)

    // Associativity: Left to Right

    // int age = 10;
    // int postfixAge = age++; // int postfixAge = age; age = age + 1;
    // int prefixAge = ++age; // age = age + 1; int prefixAge = age;

    // printf("Postfix age: %d\n", postfixAge);  // 10
    // printf("Prefix age: %d", prefixAge);      // 12

    // int age = 10;
    // printf("%d\n", age++);          // 10
    // printf("%d\n", age);            // 11
    // printf("%d\n", ++age);          // 12
    // printf("%d\n", age);            // 12
    // printf("%d\n", age-- + --age);  // 12 + 10 = 22

    //
    // (6).Special Operators =>
    //

    // Examples: sizeof(), & (Address of), * (Value at address), ?: (Ternary Operator)

    //
    // (7).Bitwise Operators =>
    //

    // Examples: &, |, ^, ~, <<, >>

    // Unary Operators - Operators that require only one operand.
    // Examples: ++, --, sizeof(), &, *, !

    // Binary Operators - Operators that require two operands.
    // Examples: +, -, *, /, %, >, <, >=, <=, ==

    // Ternary Operator - It requires three operands.
    // Example: ?: (Conditional Operator) (condition) ? expression1 : expression2)

    /**
     * ==================== Conditional Statements ====================>
     */

    //
    // (1).If-else statement =>
    //

    // float retailPrice;
    // float payableAmount;

    // puts("Enter retail price: ");
    // scanf("%f", &retailPrice);

    // if (retailPrice >= 500) {
    //     puts("Eligible for discount");
    //     payableAmount = retailPrice * 0.9;
    // } else {
    //     puts("Not eligible for discount");
    //     payableAmount = retailPrice;
    // }

    // printf("Discount availed: Rs %.1f \n", retailPrice - payableAmount);
    // printf("Net payable amount: Rs %.1f \n", payableAmount);

    //
    // (2).Ternary Operator =>
    //

    // payableAmount = retailPrice >= 500 ? retailPrice * 0.9 : retailPrice;

    // printf("Discount availed: Rs %.1f\n", retailPrice - payableAmount);
    // printf("Net payable amount: Rs %.1f\n", payableAmount);

    //
    // (3).Else-if ladder statement =>
    //

    // if (retailPrice >= 100 && retailPrice < 500)
    //     payableAmount = retailPrice * 0.95;
    // else if (retailPrice >= 500 && retailPrice < 750)
    //     payableAmount = retailPrice * 0.9;
    // else if (retailPrice >= 750 && retailPrice < 1000)
    //     payableAmount = retailPrice * 0.85;
    // else if (retailPrice >= 1000)
    //     payableAmount = retailPrice * 0.8;
    // else
    //     payableAmount = retailPrice;

    // printf("Discount availed: %.1f\n", retailPrice - payableAmount);
    // printf("Net Payable amount: %.1f", payableAmount);

    //
    // (4).Switch-case statement =>
    //

    // int rating;

    // puts("Enter your rating:");
    // scanf("%d", &rating);

    // switch (rating) {
    //     case 0:
    //         puts("You had very poor experience. We will call you shortly to know what went wrong.");
    //         break;
    //     case 1:
    //         puts("You had poor experience. We will call you shortly to know what went wrong.");
    //         break;
    //     case 2:
    //         puts("Thank you for your feedback. We will call you shortly to know what went wrong.");
    //         break;
    //     case 3:
    //         puts("Thank you for your feedback. We're constantly working to improve pizza quality.");
    //         break;
    //     case 4:
    //     case 5:
    //         puts("Yay! Thank you for your feedback. We would love to serve you again.");
    //         break;
    //     default:
    //         puts("Invalid input.");
    // }

    // The data type of the variable in the switch-case statement should be int, char or long.

    // Algorithm - The step by step method to solve a problem.
    // Flowchart - A graphical representation of an algorithm.

    /**
     * ==================== Miscellaneous Concepts ====================>
     */

    //
    // Why char is classified as an integer data type?
    //

    // Note: char, int and long are integer data types.

    // It represents characters using integer values based on the ASCII.
    // Each character is stored as a numerical value in memory.

    // Small alphabets (a-z)    : 97 to 122
    // Capital alphabets (A-Z)  : 65 to 90
    // Numbers (0-9)            : 48 to 57

    // char letter = 'A';
    // printf("%d", letter);

    //
    // Escape Sequences or Escape Characters =>
    //

    // When a character is preceded by a backslash (\), it is called an escape sequence.

    // Newline (\n)
    // Tab (\t)
    // Single Quote (\')
    // Double Quote (\")
    // Backslash (\\)

    //
    // Type Conversion =>
    //

    // (1).Implicit Type Conversion (Automatic)

    // int radius = 300;
    // double newRadius = radius;
    // printf("%lf\n", newRadius);

    // (2).Explicit Type Conversion (Manual)

    // double diameter = 4.67;
    // int newDiameter = (int) diameter;
    // printf("%d", newDiameter);

    //
    // Clean input buffer =>
    //

    // Buffer is a temporary storage area where input and output data is stored.
    // Types - Input Buffer and Output Buffer

    // char name[40], gender;
    // int age, id;

    // puts("Enter name: ");
    // scanf("%s", name);
    // printf("%s", name);

    // Clean input buffer as required.
    // while (getchar() != '\n');

    // puts("\nEnter id: ");
    // scanf("%d", &id);
    // printf("%d", id);

    // Clean input buffer as required.
    // while (getchar() != '\n');

    // puts("\nEnter gender: 'M' or 'F' ");
    // scanf("%c", &gender);
    // printf("%c", gender);

    // puts("\nEnter age: ");
    // scanf("%d", &age);
    // printf("%d", age);

    /**
     * ==================== Best Practices ====================>
     */

    // The first character of the variable name should be an alphabet or an underscore.
    // Spaces are not allowed in variable names.
    // Variable names are case-sensitive.
    // Except underscore no other special symbols are allowed in the middle of the variable name.

    // Camel Case - firstName, lastName, dateOfBirth
    // Snake Case - first_name, last_name, date_of_birth
    // Kebeb Case - first-name, last-name, date-of-birth (Used for file names)

    //
    // Note: For switch-case statement =>
    //

    // char symbol = '+';

    // switch (symbol) {
    //     default:
    //         puts("Invalid Symbol");
    //     case '!':
    //         puts("Exclamation");
    //         break;
    //     case '@':
    //         puts("At the rate");
    //         break;
    // }

    return 0;
}
