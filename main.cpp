#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class adress{

    string place , type , describtion , adress;
public:
    void setplace(string p){
        place = p;
    }
    void settype(string t){
        type = t;
    }
    void setdescribtion(string d){
        describtion = d;
    }
    void setadress(string adress){
        this->adress = adress;
    }
    string getadress(){
        return this->adress;
    }
};
class phone{
    int phone ;
    string type , describtion;
public:
    void setphone(int p){
        phone = p;
    }
    void settype(string t){
        type = t;
    }
    void setdescribtion(string d){
        describtion = d;
    }
    int getphone(){
        return this->phone;
    }
};
class Email
{

private:
    string email;
    string type;
    string description;


public:

    Email(){}

    Email(string email,string type, string description){
    this->email=email;
    this->type=type;
    this->description=description;


    }





    void setEmail(string email)
    {

        this->email=email;

    }

    void setType(string type)
    {

        this->type=type;

    }

    void setDescription(string description)
    {

        this->description=description;

    }


    string getEmail()
    {

        return this->email;

    }

    string getType()
    {

        return this->type;

    }

    string getDescription()
    {

        return this->description;

    }


};

class Users{
    string name ;
    static int count ;
public:
    Users(string name){
        this->name = name;
        count++;
    }
    string getname(){
        return  name;
    }
    static int getcount(){
        return count;
    }
};
class contact{
    vector<Users>arr;
public:
    void add(Users user){
        arr.push_back(user);
    }
    void deletee(string user){

        for (auto it = arr.begin(); it != arr.end(); ++it) {
            if(it->getname() == user){
                arr.erase(it);
                break;
            }
        }
    }
    string search(string user){
        for (auto it = arr.begin()  ; it!=arr.end() ; it++) {
            if(it->getname() == user){
                return it->getname();
                break;
            }
        }
        return "NOT found";
    }

    void showall(){
        cout <<" There is a list of user "<<"\n";
        for (int i = 0; i < arr.size(); ++i) {
            cout <<arr[i].getname() <<"\n";
        }
    }

};

class User
{
private:
    string id;
    string firstName;
    string lastName;
    string gender;
    string city;
    string date;
    Email *email;


public:
    User(){}

    User(string id, string firstName,string lastName,string gender, string city, string date,Email email[]){
    this->id=id;
    this->firstName=firstName;
    this->lastName=lastName;
    this->city=city;
    this->date=date;
    this->gender=gender;
    this->email = new Email[sizeof(email)/sizeof(email[0])];
        for (int i = 0; i < sizeof(email)/sizeof(email[0]); i++) {
            this->email[i] = email[i];
        }


    }


    bool searchByEmail(Email email){

        for (int i=0;i<sizeof(*this->email)/sizeof(this->email[0]);i++){


            if( this->email[i].getEmail()==email.getEmail()){
                return true;
            }
        }


        return false;


    }


    void addEmail(Email e){

        for (int i=0;i<sizeof(*this->email)/sizeof(this->email[0]);i++){


            if( this->email[i].getEmail().empty()){
                email[i]=e;
            }
        }


    }


    void editEmail(Email e,int i){

       email[i]=e;


    }


       void deleteEmail(Email e){

        for (int i=0;i<sizeof(*this->email)/sizeof(this->email[0]);i++){


            if( this->email[i].getEmail()==e.getEmail()){

                {

                    for(int j=i;j<sizeof(*this->email)/sizeof(this->email[0]);j++){

                            this->email[j]=this->email[j+1];

                    }
                }
            }
        }


    }


    void showUser(User user)
    {

        cout<<"Name: "<<user.getFirstName()<<" "<<user.getLastName()<<endl;
        cout<<"Gender: "<<user.getGender()<<endl;
        cout<<"City"<<user.getCity()<<endl;
        cout<<"Date"<<user.getDate()<<endl;

        Email *email=user.getEmail();

       /* cout<<"Emails:";
        Email *email=user.getEmail();
        for(int i=0;i<email->size();i++){

            cout<<"Email"<<i<<user.getEmail().getEmail()<<endl;
        }*/

        cout<<"Email:"<<email->getEmail();

    }




    void setEmail(Email email[])
    {


        this->email = new Email[sizeof(email)/sizeof(email[0])];
        for (int i = 0; i < sizeof(email)/sizeof(email[0]); i++) {
            this->email[i] = email[i];
        }

    }



    Email* getEmail()
    {
        return email;
    }




    void setId(string id)
    {
        this->id=id;
    }

    void setFirstName(string firstName)
    {
        this->firstName=firstName;
    }
    void setLastName(string lastName)
    {
        this->lastName=lastName;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setCity(string city)
    {
        this->city=city;
    }


    void setDate(string date)
    {
        this->date=date;
    }



    string getId()
    {
        return this->id;
    }

    string getFirstName()
    {
        return this->firstName;
    }
    string getLastName()
    {
        return this->lastName;
    }
    string getGender()
    {
        return this->gender;
    }
    string getCity()
    {
        return this->city;
    }


    string getDate()
    {
        return this->date;
    }



};



int main()
{
    cout<<"hi koko";

    Email email=Email("s@gmail.com","vip","blablabla");

    cout <<email.getDescription();
   return 0;
}

