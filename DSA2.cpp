#include <iostream>
#include <string.h>
using namespace std;

void binarySearch() {
    int arr[100], n, key;
    cin >> n;
    for (int i = 0; i < n; i++)
    cin >> arr[i];
    cin >> key;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << mid << "\n";
            return;
        } else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    cout << -1 << "\n";
}

void bubbleSort() {
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

void missingNumberLinear() {
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            cout << i + 1 << "\n";
            return;
        }
    }
    cout << n + 1 << "\n";
}

void missingNumberBinary() {
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int low = 0, high = n - 1, ans = n + 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == mid + 1) low = mid + 1;
        else {
            ans = mid + 1;
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}

void concatStrings() {
    char str1[100], str2[100];
    cin >> str1 >> str2;
    int i = 0;
    while (str1[i] != '\0') i++;
    for (int j = 0; str2[j] != '\0'; j++, i++) str1[i] = str2[j];
    str1[i] = '\0';
    cout << str1 << "\n";
}

void reverseString() {
    char str[100];
    cin >> str;
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
    cout << str << "\n";
}

void deleteVowels() {
    char str[100], result[100];
    cin >> str;
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
            result[j++] = c;
    }
    result[j] = '\0';
    cout << result << "\n";
}

void sortStrings() {
    int n; cin >> n;
    char str[10][50], temp[50];
    for (int i = 0; i < n; i++) cin >> str[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) cout << str[i] << "\n";
}

void toLowerCase() {
    char ch; cin >> ch;
    if (ch >= 'A' && ch <= 'Z') cout << char(ch + 32) << "\n";
    else cout << ch << "\n";
}

void countInversions() {
    int arr[100], n; cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) count++;
    cout << count << "\n";
}

void countDistinct() {
    int arr[100], n; cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool distinct = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) { distinct = false; break; }
        }
        if (distinct) count++;
    }
    cout << count << "\n";
}

int main() {
    countDistinct();
    return 0;
}