#include<iostream>
using namespace std;
void xuatMang(int a[],int n);
void hoanVi(int &a, int &b);
void selectionSort(int a[],int n);
void interchangeSort(int a[],int n);
void intertionSort(int a[],int n);
void bubbleSort(int a[],int n);

int main(){
	int a[]={5,3,1,5,4,5,66,4,33,222,453};
	int n = sizeof(a)/sizeof(a[0]);
//	selectionSort(a,n);
//	interchangeSort(a,n);
//	intertionSort(a,n);
	bubbleSort(a,n);
	xuatMang(a,n);
	return 0;
}

void xuatMang(int a[],int n){
	for(int i = 0; i < n; i++){
		cout<<"a["<<i<<"]= "<<a[i]<<"\n";
	}	
};
void hoanVi(int &a, int &b){
	int temp;
	temp = a;
	a=b;
	b=temp;
};
void selectionSort(int a[],int n){
	int i,j,min;
	for(i = 0; i < n-1; i++){
		min = i;
		for(j = i+1;j<n;j++){
			if (a[j]<a[min])
				min = j;
			}				
		hoanVi(a[min],a[i]);			
	}
};
void interchangeSort(int a[],int n){
	int number_1,number_2;
	for(int i = 0 ; i<n; i++){
		number_1 = i;
		for(int j = i+1; j<n;j++){
			number_2 = j;
			if(a[number_2]<a[number_1]){
				hoanVi(a[number_1],a[number_2]);
			}
		}
	}
};
void intertionSort(int a[],int n){
	for(int i = 1 ; i < n ; i++){
		int temp = a[i];
		int j = i - 1;
		while(a[j] > temp && j >=0 ){
			hoanVi(a[j + 1],a[j]);
			j--;
		} 	
		hoanVi(a[j+1],temp);
	}
}

void bubbleSort(int a[],int n){
	for (int i=0; i<n-1; i++){
		for(int j = 0; j<n-1;j++){
			if (a[j] > a[j+1]){
			hoanVi(a[j],a[j+1]);
			}
		}
	}
}



