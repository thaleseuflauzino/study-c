#include <stdio.h>
void Q2(char *str){
    int n = strlen(str);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            printf("str[j %d]: %c\n", j, str[j]);
            printf("str[i %d]: %c\n", j, str[i]);
            if (str[j] > str[i])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }    
        }  
    }
}
int main() {
    char str[] = "thales";
    printf("String antes da ordenacao: %s\n", str);
    Q2(str);
    printf("String depois da ordenacao: %s\n", str);
    return 0;
}