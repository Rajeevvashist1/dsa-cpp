// #include <iostream>
// using namespace std;

// string tolower(string s)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] >= 65 && s[i] <= 90)
//         {
//             s[i] = 'a' + s[i] - 'A';
//         }
//     }
//     return s;
// }

// void maxocc(string s)
// {
//     int num[26] = {0};
//     string m = tolower(s);

//     for (int i = 0; i < s.size(); i++)
//     {
//        num[m[i] - 97] += 1;

//     }
//     int max = num[0], idx;
//     for (int i = 0; i < 26; i++)
//     {
        
//         if (num[i] > max)
//         {
//             max = num[i] ; 
//             idx = i;
//         }
//     }
    

//     cout<<"maximum occuring character is "<<char('a'+ idx)<<" . it occurs "<<max<<" times"<<endl;
// }

// int main()
// {
//     string S = "thankyou";
//      maxocc(S);
//     return 0;
// }



// REPLACE SPACE WITH @40 


// #include<iostream>
// using namespace std;

// string REplacespaces(string s){
//    string s2;
//    for(int i = 0 ; i < s.size() ; i++){
//     if(s[i] != ' '){
//         s2.push_back(s[i]);
//     }
//     else {
//         s2.push_back('@');
//         s2.push_back('4');
//         s2.push_back('0');
//     }
//    }
//    return s2;
// }

// int main(){
//     string s = "My name is Rajeev";

//     cout<<s<<endl;


//     string s2 = REplacespaces(s);

//     cout<<s2;
// }


