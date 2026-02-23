// #include <iostream>
// using namespace std;

// int main(){
//     int nilai[10] = {75, 60, 85, 90, 70, 88, 65, 80, 93, 62}, 
//          kapsitas = 10, 
//           temp;
//     cout << "Before ";
//     for (int elemen : nilai)
//     {
//         cout << elemen << " ";
//     }
    

//     //ascending
//     for (int i = 0; i < kapsitas - 1; i++)// loop luar => 
//     {
//         for (int j = 0; j < kapsitas - i - 1; j++)// loop dalam
//         {
//             if (nilai[j] > nilai[j + 1])// kondisi
//             {
//                 temp = nilai[j];
//                 nilai[j] = nilai[j + 1];
//                 nilai[j + 1] = temp;
//             }
            
//         }
        
//     }
    
//     //descending
//     for (int i = 0; i < kapsitas - 1; i++)// loop luar => 
//     {
//         for (int j = 0; j < kapsitas - i - 1; j++)// loop dalam
//         {
//             if (nilai[j] < nilai[j + 1])// kondisi
//             {
//                 temp = nilai[j];
//                 nilai[j] = nilai[j + 1];
//                 nilai[j + 1] = temp;
//             }
            
//         }
        
//     }
    
//     cout << "\nAfter ";
//     for (int elemen : nilai)
//     {
//         cout << elemen << " ";
//     }
    

//     return 0;
// }