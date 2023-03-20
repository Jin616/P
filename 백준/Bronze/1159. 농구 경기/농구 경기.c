#include <stdio.h>

int main() {
    int n, count = 0;
    int player_count[26] = {0};
    char player_name[31];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", player_name);
        player_count[player_name[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if(player_count[i] >= 5) {
            printf("%c", 'a' + i);
            count++;
        }
    }
    if (count == 0)
        printf("PREDAJA");
    return 0;
}