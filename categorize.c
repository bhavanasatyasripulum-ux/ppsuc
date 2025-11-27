#include<stdio.h>
int main()
{
    float height;
    scanf("%f",&height);
    if (height<150.0)
    {
        printf("Person is Dwarf.
");
    }
    else if(height>150.0 && height<=165.0)
    {
        printf("Person is average heighted.
");
    }
    else if(height>165.0 && height<=195.0)
    {
        printf("Person is taller.
");
    }
    else
    {
        printf("Abnormal height.
");
    }
    return 0;
}
