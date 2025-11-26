#include <stdio.h>

int mergeTwoLists(int list1[], int list2[]);

int main()
{
    int list1[] = {1, 2, 4}, list2[] = {1, 3, 4};

    mergeTwoLists(list1, list2);

    return 0;
}

int mergeTwoLists(int list1[], int list2[])
{
    int newList[100];
    int length = sizeof(list1) / sizeof(list1[0]), j = 0;

    for (int i = 0; i < length; i++)
    {
        newList[j] = list1[i];
        newList[j + 1] = list2[i];
        j += 2;
    }

    int newLength = sizeof(newList) / sizeof(newList[0]);

    for (int i = 0; i < length; i++)
    {
        printf("%d\t", newList[i]);
    }

    // return newList;
}