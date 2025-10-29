#include<stdio.h>
int main() {
    char c;
    scanf("%c", &c);

    // Convert to lowercase for case-insensitive comparison
    c = tolower(c);

    switch(c) {
        case 'v':
            printf("Violet");
            break;
        case 'i':
            printf("Indigo");
            break;
        case 'b':
            printf("Blue");
            break;
        case 'g':
            printf("Green");
            break;
        case 'y':
            printf("Yellow");
            break;
        case 'o':
            printf("Orange");
            break;
        case 'r':
            printf("Red");
            break;
        default:
            printf("-1");
    }
    return 0;
}

