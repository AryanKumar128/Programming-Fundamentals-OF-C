/* Write C program to print A to Z alphabets in star pattern */


#include <stdio.h>

int main() {
    int r, c;
    char ch;

    // printing alphabets A to Z in star pattern
    for (ch = 'A'; ch <= 'Z'; ch++) {

        printf("\n\nPattern for %c:\n", ch);

        for (r = 1; r <= 7; r++) {
            for (c = 1; c <= 7; c++) {

                switch (ch) {

                    case 'A':                                           // A
                        if ((c == 1 || c == 7) && r > 1 ||
                            (r == 1 && c > 1 && c < 7) ||
                            r == 4)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'B':                                           // B
                        if (c == 1 ||
                            (r == 1 || r == 4 || r == 7) && c < 7 ||
                            (c == 7 && r != 1 && r != 4 && r != 7))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'C':                                           // C
                        if ((r == 1 || r == 7) && c > 1 ||
                            (c == 1 && r > 1 && r < 7))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'D':                                           // D
                        if (c == 1 ||
                            (r == 1 || r == 7) && c < 6 ||
                            (c == 6 && r > 1 && r < 7))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'E':                                           // E
                        if (c == 1 || r == 1 || r == 4 || r == 7)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'F':                                           // F
                        if (c == 1 || r == 1 || r == 4)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'G':                                           // G
                        if ((r == 1 || r == 7) && c > 1 ||
                            (c == 1 && r > 1 && r < 7) ||
                            (r == 4 && c >= 4) ||
                            (c == 7 && r >= 4))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'H':                                           // H
                        if (c == 1 || c == 7 || r == 4)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'I':                                           // I
                        if (r == 1 || r == 7 || c == 4)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'J':                                           // J
                        if (r == 1 ||
                            (c == 4 && r < 7) ||
                            (r == 7 && c > 1 && c < 4) ||
                            (c == 1 && r >= 5))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'K':                                           // K
                        if (c == 1 || r + c == 8 || r == c)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'L':                                           // L
                        if (c == 1 || r == 7)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'M':                                           // M
                        if (c == 1 || c == 7 ||
                            (r == c && r <= 4) ||
                            (r + c == 8 && r <= 4))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'N':                                           // N
                        if (c == 1 || c == 7 || r == c)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'O':                                           // O
                        if ((r == 1 || r == 7) && c > 1 && c < 7 ||
                            (c == 1 || c == 7) && r > 1 && r < 7)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'P':                                           // P
                        if (c == 1 ||
                            (r == 1 && c < 7) ||
                            (r == 4 && c < 7) ||
                            (c == 7 && r > 1 && r < 4))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'Q':                                           // Q
                        if ((r == 1 || r == 7) && c > 1 && c < 7 ||
                            (c == 1 || c == 7) && r > 1 && r < 7 ||
                            (r == c && r >= 4))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'R':                                           // R
                        if (c == 1 ||
                            (r == 1 && c < 7) ||
                            (r == 4 && c < 7) ||
                            (c == 7 && r > 1 && r < 4) ||
                            (r - c == 3))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'S':                                           // S
                        if ((r == 1 && c > 1) ||
                            (r == 4 && c > 1 && c < 7) ||
                            (r == 7 && c < 7) ||
                            (c == 1 && r > 1 && r < 4) ||
                            (c == 7 && r > 4 && r < 7))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'T':                                           // T
                        if (r == 1 || c == 4)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'U':                                           // U
                        if ((c == 1 || c == 7) && r < 7 ||
                            (r == 7 && c > 1 && c < 7))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'V':                                           // V
                        if ((r == c && r <= 4) ||
                            (r + c == 8 && r <= 4) ||
                            (r >= 4 && (c == 3 || c == 5) && r < 7))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'W':                                           // W
                        if (c == 1 || c == 7 ||
                            (r >= 4 && (r == c || r + c == 8)))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'X':                                           // X
                        if (r == c || r + c == 8)
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'Y':                                           // Y
                        if ((r == c && r <= 4) ||
                            (r + c == 8 && r <= 4) ||
                            (c == 4 && r >= 4))
                            printf("*");
                        else
                            printf(" ");
                        break;

                    case 'Z':                                           // Z
                        if (r == 1 || r == 7 || r + c == 8)
                            printf("*");
                        else
                            printf(" ");
                        break;
                }

            }
            printf("\n");
        }
    }

    return 0;
}