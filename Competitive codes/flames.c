#include<stdio.h>
#define max 50
int counter(char *a,char *b,int countA,int countB)
{
    int tempA=0,tempB=0,k=0,l=0,resultA,resultB;
        for(int i=0;i<countB;i++) //anjana
        {
            for(int j=0;j<countA;j++) //ranjith
            {
                if(a[i]==b[j])
                {
                    a[i]='\0';
                    b[j]='\0';
                    break;
                }
            }
        }
        while(k<countA)
        {
            if(a[k]=='\0')
            {
                tempA++;
            }
            k++;
        }
        while(l<countB)
        {
            if(b[l]=='\0')
            {
                tempB++;
            }
            l++;
        }
        resultA = countA - tempA;
        resultB = countB -tempB;
    return resultA+resultB;
}

char flames(int count) {
    char arr[] = "flames";
    int arr_len = 6;
    int current_index = 0;

    while (arr_len > 1) {
        int remove_index = (current_index + count - 1) % arr_len;
        for (int i = remove_index; i < arr_len - 1; i++) {
            arr[i] = arr[i + 1];
        }
        current_index = remove_index;
        arr_len--;
    }

    return arr[0];
}

int main()
{
    char a[max],b[max];
    int countA=0,countB=0;
    printf("Enter two persons\n");
    scanf("%s%s",a,b);
    printf("Names:\n");
    printf("%s\n%s\n",a,b);
    while(a[countA]!='\0')
    {
        countA++;
    }
    while(b[countB]!='\0')
    {
        countB++;
    }
    int count=counter(a,b,countA,countB);
    printf("%d\n",count);
    char result=flames(count);
    printf("ANS:%c\n",result);
    return 0;
}