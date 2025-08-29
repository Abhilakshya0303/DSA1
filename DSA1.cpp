#include <iostream>

using namespace std;

/*QUESTION 1
int main() {
    int arr[100];
    int n = 0; // Number of elements currently in the array
    int choice;

    do {
        cout << "\n---MENU---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // CREATE
                cout << "Enter the number of elements (up to 100): ";
                cin >> n;
                cout << "Enter " << n << " elements:\n";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                cout << "Array created successfully.\n";
                break;
            }
            case 2: {
                // DISPLAY
                cout << "Array elements are: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << "\n";
                break;
            }
            case 3: {
                // INSERT
                int element, position;
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the position to insert at (0 to " << n << "): ";
                cin >> position;

                for (int i = n; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = element;
                n++;
                cout << "Element inserted successfully.\n";
                break;
            }
            case 4: {
                // DELETE
                int position;
                cout << "Enter the position to delete from (0 to " << n - 1 << "): ";
                cin >> position;

                for (int i = position; i < n - 1; i++ ) {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element deleted successfully.\n";
                break;
            }
            case 5: {
                // LINEAR SEARCH

                int element;
                int found = 0;
                cout << "Enter the element to search for: ";
                cin >> element;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == element) {
                        cout << "Element found at position " << i << ".\n";
                        found = 1;
                        break;
                    }
                }
                if (found==0) {
                    cout << "Element not found in the array.\n";
                }
                break;
            }
            case 6: {
                // EXIT
                cout << "Goodbye!\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != 6);

    return 0;
}*/



/* QUES 2
int main(){
	//Design the logic to remove the duplicate elements from an Array and after the 
	//deletion the array should contain the unique elements. 
	int arr[]={1,2,3,2,4,1,4,5,6};
	int n=9;
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(int k=j;k<n-1;k++){
					arr[k]=arr[k+1];
				}
			n--;
			j--;
			}
			
		}
	}
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;
}*/




	
/* QUES 3
int main() 
{ 
int i; 
int arr[5] = {1}; 
for (i = 0; i < 5; i++) 
printf("%d",arr[i]); 
return 0; 
}
*/


/*QUES 4(i)
int main(){
	int n;
	cout<<"Enter how many elements you want to add: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the elements: \n";
	for(int i=0;i<n;i++){
		cin>>arr[n-1-i];
	}
	cout<<"reversed array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
}*/

/* QUES 4(ii)
int main() {
    int m, n;
    int i, j;

    cout << "Enter the rows and columns for the first matrix: ";
    cin >> m >> n;

    cout << "Enter the rows and columns for the second matrix: ";
    cin >> i >> j;

   
    if (n != i) {
        cout << "Multiplication cannot be performed.\n";
        return 1; 
    }

    int arr1[m][n];
    int arr2[i][j];
    int arr3[m][j]; 

    cout << "\nEnter elements for the first matrix:\n";
    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            cin >> arr1[row][col];
        }
    }

    cout << "\nEnter elements for the second matrix:\n";
    for (int row = 0; row < i; row++) {
        for (int col = 0; col < j; col++) {
            cin >> arr2[row][col];
        }
    }

    for (int rowA = 0; rowA < m; rowA++) {
        for (int colB = 0; colB < j; colB++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                sum += arr1[rowA][k] * arr2[k][colB];
            }
            arr3[rowA][colB] = sum;
        }
    }

    cout << "\nmatrix after multiplication:\n";
    for (int row = 0; row < m; row++) {
        for (int col = 0; col < j; col++) {
            cout << arr3[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

/*QUES 4(iii)
int main(){
	int i,j;
	cout<<"Enter number rows and cols: \n";
	cin>>i>>j;
	cout<<"Enter the values: \n";
	int arr[i][j];
	for(int row=0;row<i;row++){
		for(int col=0;col<j;col++){
			cin>>arr[row][col];
		}
	}
	cout<<"Transpose of the matrix is: \n";
	for(int row=0;row<i;row++){
		for(int col=0;col<j;col++){
			cout<<arr[col][row]<< " ";
		}
		cout <<"\n";
	}
	return 0;
}*/

/* QUES 5
int main(){
	int i,j;
	int rsum=0;
	cout<<"Enter number rows and cols: \n";
	cin>>i>>j;
	cout<<"Enter the values: \n";
	int arr[i][j];
	for(int row=0;row<i;row++){
		for(int col=0;col<j;col++){
			cin>>arr[row][col];
		}
	}
	for(int row=0;row<i;row++){
		rsum=0;
		for(int col=0;col<j;col++){
			rsum=rsum+arr[row][col];
		}
		cout<<"sum of row "<<row+1<<" is: "<<rsum<<endl;
	}
	for(int row=0;row<i;row++){
		rsum=0;
		for(int col=0;col<j;col++){
			rsum=rsum+arr[col][row];
		}
		cout<<"sum of col "<<row+1<<" is: "<<rsum<<endl;
	}
	return 0;
}*/
