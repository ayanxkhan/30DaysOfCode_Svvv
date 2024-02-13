// #include <bits/stdc++.h>
// int main()
// {
//      int a[8],i,s=0,g,l;
//      float avg;
//      printf("Enter 8 Numbers:\n");
//      for(i=0;i<8;i++)
//      {
//           scanf("%d",&a[i]);
//           s=s+a[i];
//           avg=s/8.0;
//      }
//      printf("Sum of Array Elements = %d\n",s);
//      printf("Average of Elements   = %.2f\n",avg);
//      g=a[0];
//      for(i=0;i<8;i++)
//           if(a[i]>g)
//                g=a[i];
//      printf("Greatest Element      = %d\n",g);
//      l=a[0];
//      for(i=0;i<8;i++)
//           if(a[i]<l)
//                l=a[i];
//      printf("Lowest Element        = %d",l);
//      return 0;
// }

#include <bits./stdc++.h>
using namespace std;
int main()
{

    int arr[5];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of array are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i] << endl;
    }

    // sum and avg
    int sum = 0;
    float avg;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
        avg = sum / 5;
    }
    cout << "Sum af array is: " << sum << endl;
    cout << "Avg af array is: " << avg << endl;

    int largestNo, smallestNo;

    largestNo = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largestNo)
            largestNo = arr[i];
    }

    cout << "Largest element is :" << largestNo << endl;

    smallestNo = arr[0];

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < smallestNo)
            smallestNo = arr[i];
    }

    cout << "Smallest element is :" << smallestNo;

}
