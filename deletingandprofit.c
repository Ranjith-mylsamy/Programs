#include <stdio.h>
int main()
{
   int array[100], position,positionsec,positiontrd,positionfr, c, n,profit;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];
   }
   if(array[position-1]<array[position-2])
   {
    profit=array[position-1];
   }
   else
   {
    profit=array[position-2];
   }
   printf("Enter the second location where you wish to delete element\n");
   scanf("%d", &positionsec);
   for(c=positionsec-1;c<n-2;c++)
   {
    array[c]=array[c+1];
   }
   
   if(array[position-1]<array[position-2])
   {
    profit=profit+array[position-1];
   }
   else
   {
    profit=array[position-2];
   }

    printf("Enter the third location where you wish to delete element\n");
   scanf("%d", &positiontrd);
   for(c=positiontrd-1;c<n-3;c++)
   {
    array[c]=array[c+1];
   }
  

     if(array[position-1]<array[position-2])
   {
    profit=profit+array[position-1];
   }
   else
   {
    profit=array[position-2];
   }


printf("Enter the fourth location where you wish to delete element\n");
   scanf("%d", &positionfr);
   for(c=positionfr-1;c<n-4;c++)
   {
    array[c]=array[c+1];
   }
  
   if(sizeof(array[position])==4)
   {
    profit=profit+0;
   }
   else
   {
       if(array[position-1]<array[position-2])
   {
    profit=profit+array[position-1];
   }
   else
   {
    profit=array[position-2];
   }
   }
    printf("%d\n",profit);
   return 0;
}