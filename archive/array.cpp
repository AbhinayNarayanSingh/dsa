#include<iostream>
#include<map>
#include<vector>

using namespace std;

void printArray(int array[], int size ) {

    cout<<"[";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<", ";
    }
    cout<<"]";
    cout<<endl;
    
}

int reverseArray(int array[], int size) {

    printArray(array, size);


    int start = 0;
    int end = size-1;

    while(start <= end) {

        // ? method 1

        // int startValue = array[start]; 
        // int endvalue = array[end];

        // array[end] = startValue;
        // array[start] = endvalue;

        // ? method 2

        // int value[2] = {
        //     array[start],
        //     array[end]
        // };

        // array[end] = value[0];
        // array[start] = value[1];

        // ? method 3

        swap(array[start], array[end]);

        start++;
        end--;
    }    


    printArray(array, size);
    return 0;
}

void swapAlternate(int array[], int size) {
    printArray(array, size);

    for (int i = 0; i < size; i += 2)
    {
        if (i+1 < size) {
            swap(array[i], array[i+1]);
        }
    }
    
    printArray(array, size);

}

void findUnique(int array[], int size) {
    printArray(array, size);

    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique = unique ^ array[i];
    }

    cout<<unique<<endl;
}

void uniqueOccurrences(int array[], int size) {
    map<int, int> occurrences; 

    for (int i = 0; i < size; i++)
    {
        if (occurrences[i]) {
            occurrences[i] = ++occurrences[i];
        } else {
            occurrences[i] = 1;
        }
    }
    
    // cout<<occurrences.values<<endl;
}

void findIntersection(int array1[], int array2[],int size1, int size2) {
    vector<int> interValue;


    // for (int i = 0; i < size1; i++)
    // {
    //     for (int n = 0; n < size2; n++)
    //     {
    //         if (array1[i] < array2[n]) {
    //             break;
    //         }
    //         if (array1[i] == array2[n]) {
    //             interValue.push_back(array2[n]);
    //             array2[n] = -999999;
    //             break;
    //         }
    //     }
    // }

    int i=0, n=0;
    while(i < size1 && n < size2) {
        if (array1[i] == array2[n]) {
            interValue.push_back(array2[n]);
            i++;
            n++;
        } else if (array1[i] < array2[n]) {
            i++;
        } else {
            n++;
        }
    }


    for (int i = 0; i < interValue.size(); i++)
    {
        cout<<interValue.at(i)<<", ";
    }
    cout<<endl;
    
    
}

void findPairOf(int array[], int size, int pairOf) {

    vector < vector<int> > pairs;

    for (int i = 0; i < size; i++)
    {
        for (int n = i+1; n < size; n++)
        {
            if (array[i] + array[n] == pairOf) {
                vector<int> temp;

                temp.push_back(array[i]); 
                temp.push_back(array[n]); 

                pairs.push_back(temp);
                cout<<array[i]<<" + "<<array[n]<<" = "<<pairOf<<endl;
            } 
            
            // else if (array[i] + array[n] > pairOf) {
            //     break;
            // }
        }
        
    }
    
}


void sortZero(int array[], int size) {

    int i = 0, j= size-1;
    printArray(array, size);


    while (i <= j)
    {
        if (array[i] == 1 && array[j] == 0) {
            swap(array[j], array[i]);
        } else if (array[i] == 0) {
            i++;
        } else if (array[j] == 1) {
            j--;
        }
    }

    printArray(array, size);
       

}



int main() {
    int array[5] = {2,5,8,2,6};
    int evenArray[6] = {2,5,8,2,6,9};
    int uniqueArray[6] = {1,1,1,2,2,3};

    // swapAlternate(array,5);
    // swapAlternate(evenArray,6);

    int a[5] = {1,2,2,3,4};
    int b[4] = {2,2,3,3};

    int f[5] = {2, -3, 3, 3, 2};

    int g[6] = {0,1,0,1,1,0};

    // findIntersection(a, b, 5,4);
    // findUnique(uniqueArray, 6);

    // findPairOf(f,5,5);
    sortZero(g,6);
    return 0;
}