#include <stdio.h>
#include <string.h>

void convertToBinary(int decimal) {
    int binary[8];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int countOnes(int decimal) {
    int count = 0;

    while (decimal > 0) {
        if (decimal % 2 == 1) {
            count++;
        }
        decimal = decimal / 2;
    }

    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    for (int i = 0; i < length-1; i++) {
        int ascii = (int)str[i];
        printf("Character: %c\n", str[i]);
        printf("ASCII value: %d\n", ascii);
        printf("Binary representation: ");
        convertToBinary(ascii);
        printf("\n");
        printf("Number of ones: %d\n", countOnes(ascii));
        printf("\n");
    }

    return 0;
}