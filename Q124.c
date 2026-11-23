/*Q124: Take two filenames from the user – a source file and a destination file.
 Copy all the content from the source file to the destination file using fgetc() and fputc().


Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char source[100], destination[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    fp1 = fopen(source, "r");
    fp2 = fopen(destination, "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully to %s\n", destination);

    fclose(fp1);
    fclose(fp2);

    return 0;
}