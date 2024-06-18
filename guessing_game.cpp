#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int random,guess,nguesses=1;

    srand(time(0)); 
    random=1+(rand()%100);

    cout<< "the random number is:"<<random;
    cout <<"\n";
   
   do
   {
    cout<< "Guess the number between 1 to 100 \n";
    cin>> guess ;
   
    if (random>guess){
        cout<< "Guess higher number \n";
    }

    else if(random<guess){
        cout<<"Guess lower number \n" ;
    }

    else {
        cout<<"Hurrah!!! You guessed it right. \n";
        cout<< "You guessed in " << nguesses << " attempts";
    }

    nguesses++;
    } 
    
    while (guess!=random);
    
    return 0;

}
