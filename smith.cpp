#include <iostream>

using namespace std;

int arr[20];
int n;
void input(){
    while (true)
    {
        cout <<"masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1 ) << ": ";
        cin >> arr[i];
    }
}void bubbleSortArray(){ //procedur untuk mengurutkan array
    int pass= 1; //step 1
    do {
        for(int j = 0; j <= n - 1 - pass; j++){ //step 2
            if(arr[j] > arr[j + 1]){ //step 3
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4 
    } while (pass <= n - 1); //step 5
}
int main(){

}