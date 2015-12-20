//Selection Sort in c++
//@author Libing Wu libingwu@buffalo.edu
//Dec 19 2015

#include <iostream>

using namespace std;

void selectSort(double arr[], int n)
{
    int pos_min;
    double temp;
    
    
    for (int i=0; i < n-1; i++)
    {
        pos_min = i;
        for (int j=i+1; j <n; j++)
        {
            
            if (arr[j] < arr[pos_min]){
                pos_min=j;}
           
        }
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}


	int main(){

        double a[]={20.0,21,2,1.0001,0.00011,0.222};
        
        int max=sizeof(a)/sizeof(double);
        cout<<"----------------"<<endl;
        cout<<"original array: ";
        for (int i = 0; i <=max-1; i++)
        { cout << a[i] << " ";}
        cout<<endl;
        
        cout<<"---------------"<<endl;

		selectSort(a,max);
        cout<<"sorted array: ";
         for (int i =0; i <=max-1; i++)
         { cout << a[i] << " " ;}
        cout<<endl;
        cout<<"----------------"<<endl;
        
        /////////////////////////////////////
        cout<<"size of char short int float size_t double long string"<<endl;
        cout<<sizeof(char)<<" ";//1
        cout<<sizeof(short)<<" ";//2
        cout<<sizeof(int)<<" ";//4
        cout<<sizeof(float)<<" ";//4
        cout<<sizeof(size_t)<<" ";//8
        cout<<sizeof(double)<<" ";//8
        cout<<sizeof(long)<<" ";//8
        cout<<sizeof(string)<< endl;//24


		
        return 0;
	}
