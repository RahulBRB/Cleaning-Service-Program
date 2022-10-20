#include<iostream>
using namespace std;

int  main(){

    cout<<"******************************************"<<endl;   
    cout<<"Welcome to RYZN's Carpet Cleaning Service"<<endl;
    cout<<"******************************************"<<endl<<endl;

    cout<<"Enter the number of rooms you need cleaned? "<<endl;
    int num_of_rooms {0};
    cin>>num_of_rooms;


    const double price_per_room {30};
    const double sales_tax {0.06};
    const int expiry {30};
    
    cout<<"\nEstimate for carpet cleaning service:"<<endl;
    cout<<"Number of rooms: "<<num_of_rooms<<endl;
    cout<<"Price per room: $30"<<endl;
    cout<<"Cost: $"<<num_of_rooms*price_per_room<<endl;
    cout<<"Tax: $"<<num_of_rooms*price_per_room*sales_tax<<endl;
    cout<<"**********************************"<<endl;   
    cout<<"Total estimate: $"<<(num_of_rooms*price_per_room)+(num_of_rooms*price_per_room*sales_tax)<<endl;
    cout<<"Valid for "<<expiry<<" days."<<endl;
    
    return 0;
}
