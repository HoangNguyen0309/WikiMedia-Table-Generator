#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//char alphabet[28] = {'A', 'B', 'C', 'D', 'E', 'F'};
    FILE* fp;
    fp = fopen("sample.txt", "r");
    char buffer[200];
    char buffer2[200][200];
    int length = 0;
    int a = 1;
    
    while(fgets(buffer, 200, fp) != NULL) {
    	buffer2[a][0] = '|';    
        strcat(buffer2[a], buffer);
        printf("%s", buffer2[a]);
        length++;
        a = a + 2;
    }
    fclose(fp);
    //length = a;
    //length = length * 2;
    //printf("%d\n", length);
    
    for (int i  = 0; i < a; i = i + 2) {
    	//buffer2[i] = "|-\n";
        strcpy(buffer2[i], "|-\n");
    }
    for (int i = 0; i < length; i++) {
    	//printf("%s", buffer2[i]);
    }
    
    FILE * fp2;
    fp2 = fopen("bruh.txt", "w");
    for (int i = 0; i < a; i++) {
    	fputs(buffer2[i], fp2);
    }
    fclose(fp2);
}