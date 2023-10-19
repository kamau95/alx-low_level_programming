#include <stdio.h>

int main(void)
{
char str1[20] = "captain";
char str2[10] = "America";
int i = 0, j = 0;
while(str1[i] != '\0')
{
	i++;
}
while(str2[j] != '\0')
{
str1[i] = str2[j];
i++;
j++;

}
str1[i] = '\0';
printf("%s", str1);
}
