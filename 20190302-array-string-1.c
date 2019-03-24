#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input_checker_character;
    char input_string[300];
    int i, input_string_length;
    int sum = 0;
    int j = 0;
    int output_position;

    do {
        printf("Please input string (Not more than 300 characters): ");
        scanf("%[^\n]", input_string);
        
        input_string_length = strlen(input_string);

        if (input_string_length > 300) {
            printf("\nNot more than 300 characters dude! Please input the text again\n");
        }
    } while (input_string_length > 300);

    // Print input values
    printf("\nYour input string = %s\n", input_string);
    printf("Your string length = %d\n", input_string_length);


    printf("Please input the checker character: ");
    scanf(" %c", &input_checker_character);

    char input_string_array_manipulated[input_string_length];
    int input_checker_positions[input_string_length];

    for (i = 0; i < input_string_length; i++) {
        input_string_array_manipulated[i] = tolower(input_string[i]);

        if (input_checker_character == input_string_array_manipulated[i]) {
            input_checker_positions[j] = i;
            sum++;
            j++;
        }
    }

    if (sum > 0) {
        printf("\nThere is/are %d \"%c\" in the sentenses.\n", sum, input_checker_character);
        printf("Position:");

        for(i = 0; i < sum; i++) {
            output_position = input_checker_positions[i];
            if (i > 0) {
                printf(",");
            }
            printf(" %d", output_position);
        }
        printf("\n");
    } else {
        printf("\nNot found.\n");
    }

    return 0;
}