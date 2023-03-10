#include<stdio.h>

void nhap(int a[],int n){

    for (int  i = 0; i < n; i++)
    {
        printf("gia tri phan thu thu %d ", i+1);
        scanf("%d",&a[i]);
    }

}
void xuat(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
}
int main(){
    int a[1000],n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&n);
    nhap(a,n);
    int *ptr = a;
    int max = *ptr;
    for (int i = 0; i < 5; i++) {
        if(max<*(ptr+i))
        {
            max=*(ptr+i);
        }
    }
    printf("Gia tri lon nhat la: %d\n",max);




    getchar();
    system("pause");
    return 0;

}
