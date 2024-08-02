#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
                                                    //Ordered map
    map<int,string>omap;
    omap.insert(make_pair(1,"aman"));
    omap.insert(make_pair(0,"anchal"));
    omap.insert(make_pair(3,"Stuti"));

    map<string,string>omap2;
    omap2.insert(make_pair("br","aman"));
    omap2.insert(make_pair("dr","anchal"));
    omap2.insert(make_pair("at","Stuti"));
    
    map<string,string>::iterator it2 = omap2.begin();
    while(it2 != omap2.end()){
        pair<string,string>p = *it2;
        cout<<p.first<<" "<<p.second << endl;
        it2++;
    }

    map<int,string>::iterator it = omap.begin();
    while(it != omap.end()){
        pair<int,string>p = *it;
        cout<<p.first<<" "<<p.second << endl;
        it++;
    }

                                              // Unordered map creation
    unordered_map<string,string>table;
    //Insertion
    table["in"] = "India";     //Method-1

    table.insert(make_pair("en","england"));  //Method-2

    pair<string,string>p;     //Method-3
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    cout<<table.at("br")<<endl;
        //Modification of value using at()
    table.at("br") = "Burma";
    cout<<table.at("br")<<endl;
       //Modification of value using table[" "]
    table["in"] = "INDIA2";
    cout<<table["in"]<<endl;
                                        Traverse Elements using iterator
    unordered_map<string,string>::iterator it = table.begin();
    while(it != table.end()){
        pair<string,string>p = *it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }

    if(table.find("in") != table.end()){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

    if(table.count("br") == 0){
        cout<<"Key does not Exist"<<endl;
    }
    else{
        cout<<"Key exist"<<endl;
    }

    // cout<<table.size()<<endl;
    // table.clear();
    // cout<<table.size()<<endl;

    // if(table.empty()){
    //     cout<<"Table is empty"<<endl;
    // }
    // else{
    //     cout<<"Table is not Empty"<<endl;
    // }
    return 0;
}