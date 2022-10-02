#include <iostream>
using namespace std;

int main() {
    int array[10] = {6,5,4,3,2,7,8,9,0,12};
    int n = sizeof(array)/sizeof(int);
    int flag=0; //put flag to save time if there is no comparisons done. If the array is already sorted then the flag will be 0 and no loops done
    int temp;
    for (int i=0;i<n-1;i++){
        cout << "Pass #" << i+1 << ": " ;
        for (int j=0; j<n-1-i;++j){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag = 1;
            }
        }

        for (int k=0;k<n;k++){
            cout << array[k] << " " ;
        }
        cout << endl;
        if (flag==0){
            break;
        }
    }



    return 0;
}
