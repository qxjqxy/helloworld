#include<stdio.h>
#include<stdlib.h>
#include<time.h>


// 生成随机数组
void generateArray(int arr[], int n);
// 打印数组
void printArray(int arr[], int n);
// 排序算法函数
void bubbleSort(int arr[], int n); // 冒泡排序
void selectionSort(int arr[], int n); // 选择排序 
void insertionSort(int arr[], int n); // 插入排序
void quickSort(int arr[], int low, int high); // 快速排序


int main()
{ 
    int arr[10] = {0};
    int n=10;
    
    // 生成随机数组
    generateArray(arr, n);

   // 打印数组
    printf("原始数组：");
    printArray(arr, n);
    printf("\n");

    // 冒泡排序
    bubbleSort(arr,n);
    printf("冒泡排序：");
    printArray(arr, n);// 打印数组
    printf("\n");

    // 选择排序 
    selectionSort(arr, n);
    printf("选择排序: ");
    printArray(arr, n);// 打印数组
        return 0;
    }


// 生成随机数组
void generateArray(int arr[], int n)
{
    
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 ;
         
    }
}
// 打印数组
void printArray(int arr[], int n)
{
    
    for (int i = 0;i<n;i++)
    {
        printf("%d   ", arr[i]);
    }
}
// 排序算法函数

// 冒泡排序
void bubbleSort(int arr[], int n)
{
    for(int j=0;j<10-1;j++)
    { for (int i = 0; i <10-1-j; i++)
       {
        int a = arr[i];
        int b = arr[i + 1];
        if (a > b)
        {
            arr[i] = b;
            arr[i + 1] = a;
        }
       }
    }
}


// 选择排序 
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - 1 - i;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = a;

            }
        }
        
    }

}
void insertionSort(int arr[], int n); // 插入排序
void quickSort(int arr[], int low, int high); // 快速排序