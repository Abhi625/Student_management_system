#include <bits/stdc++.h>
using namespace std;
string arr1[1000000],arr3[1000000],arr4[1000000];
int arr2[1000000],arr5[1000000];
int total=0;
void enter(int n)
{
    if(total==0)
    {
        total= n+total;
        for(int i=0;i<n;i++)
        {
            int num1,num2;
            cout<<"for student no. "<<i+1<<" enter the details"<<endl<<endl;
            cout<<"enter student name"<<endl;
            cin>>arr1[i];
            cout<<"enter roll no."<<endl;
            cin>>arr2[i];
            cout<<"enter course"<<endl;
            cin>>arr3[i];
            cout<<"enter class"<<endl;
            cin>>arr4[i];
            cout<<"enter contact no."<<endl;
            cin>>arr5[i];
        }
    }
    else
        {
            for(int i=total;i<n+total;i++)
            {
                cout<<"for student no. "<<i+1<<" enter the details"<<endl<<endl;
                cout<<"enter student name"<<endl;
                cin>>arr1[i];
                cout<<"enter roll no."<<endl;
                cin>>arr2[i];
                cout<<"enter course"<<endl;
                cin>>arr3[i];
                cout<<"enter class"<<endl;
                cin>>arr4[i];
                cout<<"enter contact no."<<endl;
                cin>>arr5[i];
            }
            total= n+total;
        }
}





void show()
{
    if(total==0)
    {
        cout<<"no details found"<<endl;
        cout<<"back to main"<<endl;
    }
    else
    {
       for(int i=0;i<total;i++)
       {
           cout<<"student name: "<<arr1[i]<<endl;
           cout<<"roll no: "<<arr2[i]<<endl;
           cout<<"course: "<<arr3[i]<<endl;
           cout<<"class: "<<arr4[i]<<endl;
           cout<<"contact no: "<<arr5[i]<<endl;
           cout<<endl;
       }
    }



}
void Search(int a)
{
    for(int i=0;i<total;i++)
    {
        if(arr2[i]==a)
        {
            cout<<"student name: "<<arr1[i]<<endl;
            cout<<"roll no: "<<arr2[i]<<endl;
            cout<<"course: "<<arr3[i]<<endl;
            cout<<"class: "<<arr4[i]<<endl;
            cout<<"contact no: "<<arr5[i]<<endl;
        }
    }

}
void update(int a)
{
    for(int i=0;i<total;i++)
    {
        if(arr2[i]==a)
        {
            cout<<"previous details: "<<endl<<endl;
            cout<<"student name: "<<arr1[i]<<endl;
            cout<<"roll no: "<<arr2[i]<<endl;
            cout<<"course: "<<arr3[i]<<endl;
            cout<<"class: "<<arr4[i]<<endl;
            cout<<"contact no: "<<arr5[i]<<endl;
            cout<<endl;
            cout<<"enter student name"<<endl;
            cin>>arr1[i];
            cout<<"enter roll no."<<endl;
            cin>>arr2[i];
            cout<<"enter course"<<endl;
            cin>>arr3[i];
            cout<<"enter class"<<endl;
            cin>>arr4[i];
            cout<<"enter contact no."<<endl;
            cin>>arr5[i];
            cout<<"details updated"<<endl;
            cout<<endl;

        }
    }



}
void Delete(int a)
{
    for(int i=0;i<total;i++)
    {
        if(arr2[i]==a)
        {
            arr1[i]= arr1[i+1];
            arr2[i]= arr2[i+1];
            arr3[i]= arr3[i+1];
            arr4[i]= arr4[i+1];
            arr5[i]= arr5[i+1];
        }
    }
    cout<<"specified details deleted"<<endl;
    total--;



}

int main()
{
    int value;
    while(true)
    {
        cout<<"press 1 to enter data"<<endl;
        cout<<"press 2 to show data"<<endl;
        cout<<"press 3 to search data"<<endl;
        cout<<"press 4 to update data"<<endl;
        cout<<"press 5 to delete data"<<endl;
        cout<<"press 6 to exit"<<endl;

        cin>>value;
        int n;
        if(value==1)
        {

            cout<<"enter the no. of student"<<endl;
            cin>>n;
            enter(n);
        }
        else if(value==2)
        {
            show();

        }
        else if(value==3)
        {
            int a;
            cout<<"enter the roll no. whose details you want to display"<<endl;
            cin>>a;
            Search(a);
        }
        else if(value==4)
        {
            cout<<"enter the roll no whose details are to be updated"<<endl;
            int a;
            cin>>a;
            update(a);
        }
        else if(value==5)
        {
            cout<<"enter the roll no whose details are to be deleted"<<endl;
            int a;
            cin>>a;
            Delete(a);
        }
        else if(value==6)
        {
            return 0;
        }
        else{
            cout<<"invalid value"<<endl;
            return 0;
        }


        }
        return 0;

    }



