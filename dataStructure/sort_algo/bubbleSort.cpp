#include<iostream>
#include<stdlib.h>
#include<omp.h>
#include<time.h>

using namespace std;

void bubble(int *, int);
void swap(int &, int &);


void bubble(int *a, int n)
{
        for(int i = 0; i < n; ++i)
        {
                int first = i % 2;

                #pragma omp parallel for shared(a, first)
                for(int j=first; j < n - 1; j += 2)
                {
                        if(a[j] > a[j+1])
                        {
                                swap(a[j], a[j+1]);
                        }
                }
        }
}

void swap(int &a, int &b)
{
        int tmp;
        tmp = a;
        a = b;
        b = tmp;

}

int main()
{
	clock_t start = clock();
	cout << "Start time:" << start << endl;
        int *a, n;
        cout << "\n Enter number of elements: ";
        cin >> n;
        a = new int[n];
        cout << "\n Enter elements:";
        for(int i=0; i < n; ++i)
        {
                cin >> a[i];
        }

        bubble(a, n);

        cout <<" \n Final sorted array :\n";
        for(int i=0; i < n; ++i)
        {
                cout << a[i] << endl;
        }

	clock_t end = clock();
	cout << "\nEnd time:" << end << endl;
	cout << "\nTotal running time:" << double(end - start) << endl;
return 0;
}
     


