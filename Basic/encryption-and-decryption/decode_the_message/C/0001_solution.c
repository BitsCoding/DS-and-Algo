#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        while (n--) {
            int x;
            scanf("%x", &x);  // Taking input of hex code as decimal number.
            char ch[4] = {};  // To store 3 characters corresponding to code.
            for (int i = 2; i >= 0; i--) {
                ch[i] = x % 256;  // extracting last two digits of code
                x /= 256;         // removing last two digtis of code
            }
            printf("%s", ch);
        }
        printf("\n");
    }
    return 0;
}