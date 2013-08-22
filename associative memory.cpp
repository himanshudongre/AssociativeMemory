#include <iostream>
using namespace std;

int main()
{
    int no_of_patterns;
    int no_of_values,detect_patterns;
    cout<<"Enter no. of patterns: "<<endl;
    cin>>no_of_patterns;
    cout<<"\nEnter no. of values in each pattern: ";
    cin>>no_of_values;


    int arr[no_of_patterns][no_of_values];
    for(int j=0;j<no_of_patterns;j++)
    {
      cout<<"\nEnter pattern "<<j+1<<": ";

      for(int i=0;i<no_of_values;i++)
      {

        cout<<"\nEnter value "<<i+1<<": ";
        cin>>arr[j][i];

      }
    }


    int t[no_of_patterns][no_of_values][no_of_values];
    int T[no_of_values][no_of_values];

    for(int i=0;i<no_of_patterns;i++)
    {
        for(int j=0;j<no_of_values;j++)
          for(int k=0;k<no_of_values;k++)
            {

                t[i][j][k]=arr[j][0]*arr[0][k];}

    }


    for(int i=0;i<no_of_patterns;i++)
    {
        for(int j=0;j<no_of_values;j++)
          for(int k=0;k<no_of_values;k++)
            cout<<t[i][j][k]<<" * ";

    }


     for(int i=0;i<no_of_values;i++)
       for(int j=0;j<no_of_values;j++)
        T[i][j]=0;

     for(int i=0;i<no_of_values;i++)
       for(int j=0;j<no_of_values;j++)
        for(int k=0;k<no_of_patterns;k++)
         T[i][j]+=t[k][i][j];

    /* for(int i=0;i<no_of_values;i++)
       for(int j=0;j<no_of_values;j++)
        cout<<T[i][j]<<" * ";
     */

    cout<<"\nEnter no. of patterns to detect: ";
    cin>>detect_patterns;
    int arr_detect[detect_patterns][no_of_values];


    for(int j=0;j<detect_patterns;j++)
    {
      cout<<"\nEnter pattern "<<j+1<<": ";

      for(int i=0;i<no_of_values;i++)
      {

        cout<<"\nEnter value "<<i+1<<": ";
        cin>>arr_detect[j][i];

      }

      int a[no_of_values];
       for(int i=0;i<no_of_values;i++)
       a[i]=0;

      for(int l=0;l<no_of_values;l++)
       {for(int m=0;m<no_of_values;m++)
        {
            a[l]+=T[l][m]*arr_detect[j][m];
        }
         if(a[l]>0)
          cout<<"1 ";
         else if(a[l]<0)
          cout<<"-1 ";
         else if(a[l]==0)
          cout<<arr_detect[j][l]<<" ";
       }

    }






return 0;

}



