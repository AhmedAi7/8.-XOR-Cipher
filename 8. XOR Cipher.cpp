#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string toBinary(int n);
int xor_f (int num1 , int num2);
int main()
{
    cout << "Welcome.. " ;

    while (true)

    {   cout<<endl<<endl;
        cout<<"What do you like to do? "<< endl;
        cout <<"1- Cipher a message" << endl << "2- Decipher a message "<<endl<<"3- End "<<endl;
        int choice ;
        cin>> choice ;
        if (choice==1)
        {
            int k , c , cipher_d ;
            char cipher_ascii;
            char key;
            cout<<"Enter The secret key,please: ";
            cin>>  key;
            string m ;
            cout<<"Enter The massage , please : " ;
            cin>> m ;
            int l=m.length() ;
            cout <<"hexa: ";
            for (int i=0; i<l; i++)
            {
                k=key ;
                c=m[i] ;
                cipher_d = k^c ;
                cout << hex<< cipher_d ;
            }
            cout <<endl << "Cipher text: ";
            for (int i=0; i<l; i++)
            {
                k=key ;
                c=m[i] ;
                cipher_d = k^c ;
                cipher_ascii = cipher_d ;
                cout<< cipher_ascii ;
            }
            cout << endl;
        }
        else if (choice==2)
        {
            char key,word ;
            int k,w;
            cout <<"Enter The key character: "<<endl;
            cin>> key ;
            k=key;
            cout<< "Enter The Cipher message as: " <<endl;
            cout<< "1- hexa number      2- Cipher text " <<endl ;
            int choice2 ;
            cin>> choice2 ;
            if (choice2 == 1)
            {
                string hexa_num;
                cout<<"Enter The hexa num: ";
                cin >>hexa_num ;
                int l=hexa_num.length() ;
                for (int c=0; c<l; c=c+2)
                {
                    string hexa_digit ;
                    hexa_digit=hexa_digit+hexa_num[c];
                    hexa_digit=hexa_digit+hexa_num[c+1];
                    int x;
                    stringstream ss;
                    ss << hex << hexa_digit;
                    ss >> x;
                    hexa_digit ="";
                    w=k^x;
                    word = w ;
                    cout <<word ;
                }

            }

            else if (choice2==2)
            {
                string cipher ;


                cout << "Enter The cipher massage: ";
                cin >> cipher ;
                int l=cipher.length() ;
                for (int c=0; c<l; c=c+1)
                {
                    char cha_cipher=cipher[c];
                    int c_c = cha_cipher;
                    w=k^c_c;
                    word = w ;
                    cout << word;
                }
            }
        }
        else if (choice==3)
        {
            cout <<"Good Bye.."<<endl;
            break;
        }
    }
    return 0;
}
