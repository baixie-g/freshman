#include <stdio.h>
#include <string.h>
char find_min(char str[], int len)
{
	int p = 0;
	char min = str[0];
	for (; p <= len; p++) {
		if (str[p] < min && str[p] != '\0')
			min = str[p];
	}
	return min;
}

void read_line(char str[])
{
	int i = 0, ch;
	while ((ch = getchar()) != '\n') {
		str[i++] = ch;
	}
	str[i] = '\0';
}

int main()
{
	char str1[999], str2[999], str3[999], str4[999];
	read_line(str1);
	read_line(str2);
	int i, j, len1, len2, len3;
	len1 = strlen(str1);
	len2 = strlen(str2);
	for (i = 0; i < len2; i++) {
		char a = str2[i];
		for (j = 0; j < len1; j++) {
			if (str1[j] == a)
				str1[j] = '\0';
		}
	}
	for (i = 0, j = 0; i < len1; i++) {
		if (str1[i] != '\0')
			str3[j++] = str1[i];
	}
	str3[j] = '\0';/*ÎÞÐò*/
	if (j == 0)
		printf("null");
	else {
		len3 = strlen(str3);
		for (i = 0, j = 0; i < len3; j++, len3--) {
			str4[j] = find_min(str3, len3);
			while (str3[i] != find_min(str3, len3))
				i++;
			str3[i] = '\0';
		}
		str4[j] = '\0';
		printf("%s", str4);
	}
	return 0;
}
