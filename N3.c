#include <stdio.h>
#include <ctype.h>

int main() {
    int count = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if (isdigit(c)) {
            int num = 0;
            while (isdigit(c)) {
                num = num * 10 + (c - '0');
                c = getchar();
            }
            count++;
            if (c == '.') {
                // If there is a decimal point, we consider the number after it as a separate integer
                c = getchar();
                if (isdigit(c)) {
                    count++;
                }
            }
        }
    }

// Write the count to a text file
    FILE *fp = fopen("count.txt", "w");
    fprintf(fp, "Number of integers: %d", count);
    fclose(fp);

    return 0;
}