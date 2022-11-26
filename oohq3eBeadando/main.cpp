#include <iostream>
#include <string>
#include <cstdlib>  //for random
#include <ctime>    //to use current time to seed random

using namespace std;

class Worker{
 public:
        void setName(string name){
            name_m = name;
        }
        void setSalary(int salary){
            salary_m = salary;
        }
        string getName(){
            return name_m;
        }
        int getSalary(){
            return salary_m;
        }
        int sayRandomnumber(){
            return randomNumber();
        }
        void print();

        Worker(string name, int salary);
        Worker(){}

        ~Worker(){
            cout << "Worker object was deleted" << endl;
        }
        Worker operator+(Worker& w){
            Worker worker;
            worker.setSalary (this->getSalary() + w.getSalary());
            return worker;
        }

    private:
        string name_m;
        int salary_m;
    protected:
        int randomNumber(){
            int random = rand();
            return random;
        }


};
void Worker::print(){
    cout<< "Name of worker: "<< name_m <<endl
        << "Salary of Worker: " << salary_m <<endl;
}
 Worker::Worker(string name, int salary){
    name_m = name;
    salary_m = salary_m;
}


int main(){
    srand(time(0));
    int number;
    do{
        cout<<"give me an even number"<<endl;
        cin >> number;
    }while(number%2);
    //----------
    for(int i; i < number; i++){
        cout << i <<". iteration with for"<<endl;
        if(i == 8){
            break;
        }
        else{
            continue;
        }
    }
    cout<<endl;
    //----------
    cout <<"number is: "<< number << endl;
    while(number--){
        cout <<"number is: "<< number << endl;
    }
    //----------
    cout << endl;
    int number2;
    cout << "give me a number (divisable by 3?)"<< endl;
    cin >> number2;
    !(number2%3)? cout<<"number is divisable by 3 (modulo: "<< number2%3<<")"<<endl : cout<<"number is not divisable by 3 (modulo: "<< number2%3<<")"<<endl;
    //----------
     cout<<endl;
    int number3;
    cout<<"give me a number (negative or positive?)"<<endl;
    cin>>number3;
    if(number3 >= 0){
        cout<<"you gave me a positive number ("<<number3<<")"<<endl;
    }
    else{
        cout<<"you gave me a negative number ("<<number3<<")"<<endl;
    }
    //----------
     cout<<endl;
    int array1[15] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
     for(int i : array1){
        cout << i << endl;
    }
    /*
     for(int i = 0; i < 15; i++){
        cout << array1[i] << endl;
    }*/
     cout<<endl;
    //----------
    char key = 'c';
    switch(key){
        case 'a':
            cout<<"a"<<endl;
            break;
        case 'b':
            cout<<"b"<<endl;
            break;
        case 'c':
            cout<<"c"<<endl;
            break;
        case 'd':
            cout<<"d"<<endl;
            break;
        default:
            break;
    }
    //----------
    cout<<endl;
    int var = 5;
    int *pointer  = &var;
    cout<<"a:  " << var << endl
        <<"address of a: " << pointer<< endl
        <<"a(value from address): " << *pointer
        <<endl;
    //----------
    cout<<endl;
    Worker w1;
    w1.setName("Worker1");
    w1.setSalary(11111);
    w1.print();
    cout<<endl;
    Worker w2;
    w2.setName("Worker2");
    w2.setSalary(22222);
    w2.print();
    Worker w3 = w1+w2;
    cout<<endl;
    cout << "w1's salary + w2's salary = " << w3.getSalary() << endl;
    cout<<endl;
    cout<<"random number from worker 1 " << w1.sayRandomnumber() << endl;
    cout<<"random number from worker 2 " << w2.sayRandomnumber() << endl;
}
