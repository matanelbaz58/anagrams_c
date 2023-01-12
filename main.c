#include <stdio.h>
#include<string.h>
#include <stdbool.h>
//Given two strings s1 and s2,check if they're anagrams.
bool anagrams(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2))
        return false;
    int arr[26] = {0};
    int i;
    int len_a = strlen(s1);
    for (i = 0; i < len_a; i++) {
        arr[*s1 - 'a']++;
        arr[*s2 - 'a']--;
        s1++;
        s2++;
    }
    for (i = 0; i < 26; i++) {
        if (arr[i] != 0)
            return false;
    }
    return true;

}


int main() {
    char *s1 = "matanlernc";
    char *s2 = "ncermtaanl";
    printf("%s", anagrams(s1, s2) ? "true" : "false");

    return 0;
}
