/*
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
Input 1:
s = "abcabcbb"
Output 1:
3
Explanation 1:
The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Input 2:
s = "bbbbb"
Output 2:
1
Explanation 2:
The answer is "b", with the length of 1.
Input 3:
s = "pwwkew"
Output 3:
3
Explanation 3:
The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int maxLength = 0;
    int freq[26] = {0};
    int left = 0;
    for(int right = 0; str[right] != '\0'; right++){
        freq[str[right] - 'a']++;
        while(freq[str[right] - 'a'] > 1){
            freq[str[left] - 'a']--;
            left++;
        }
        int currentLength = right - left + 1;
        if(currentLength > maxLength){
            maxLength = currentLength;
        }
    }
    printf("Length of the longest substring without repeating characters: %d\n", maxLength);
    return 0;
}