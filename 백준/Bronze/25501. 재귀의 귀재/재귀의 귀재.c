#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r, int *n) {
    *n += 1;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1, n);
}

int isPalindrome(const char *s, int* n) {
    return recursion(s, 0, strlen(s)-1, n);
}

int main(){
    int t, boolean;
    char str[1001];
    int n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        scanf("%s", str);
        n = 0;
        boolean = isPalindrome(str, &n);
        printf("%d %d\n", boolean, n);
    }
    return 0;
}