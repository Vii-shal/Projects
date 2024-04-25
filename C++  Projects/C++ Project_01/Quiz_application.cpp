// Quiz Application 

#include<iostream>
using namespace std;

int playQuiz(){
    char c;
    char option;
    int score=0;
    cout<<"---------Welcone to Quiz Game------------"<<endl;
    cout<<"-----Please follow the instructions------"<<endl;
    cout<<"Step 1 : Quiz conatins total 10 questions"<<endl;
    cout<<"Step 2 : You will given i marks for each right ans"<<endl;
    cout<<"Step 3 : There will be no negative marking"<<endl;
    cout<<"Step 4 : Please press s to start the quiz"<<endl;
    cout<<"Step 5 : Please select option a , b , c , d"<<endl;
    cout<<"Step 6 : If you score >= 6 , you will pass the quiz"<<endl;
    cin>>c;
    if (c=='s' || c=='S'){
        cout<<"Q1. C++ was developed by _________________"<<endl;
        cout<<"(a) Bjarne Stroustrup (b) Dennis M. Ritchie (c) James Gosling (d) Guido van Rossum"<<endl;
        cin>>option;
        if (option=='a' || option=='A'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<<"Q2. What is C++"<<endl;
        cout<<"(a) C++ is a object oriented programming language (b) C++ is a procedural programming language"<<endl;
        cout<<"(c) C++ supports both procedural and object oriented programming language (d) C++ is functional programming language"<<endl;
        cin>>option;
        if (option=='c' || option=='C'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        // cout<<"Q3. which of following is correct syntax of including a user defined header files in c++"<<endl;
        // cout<<"(   (a) #include[userdefined] (b) #include"userdefined" (c) #include<userdefined.h> (d) #include<userdefined>   )";
        cout<<"Q3. what is output -"<<endl;
        cout<<"    int i=20"<<endl;
        cout<<"    int *ptr = &i"<<endl;
        cout<<"    cout<<(*ptr)++"<<endl;
        cout<<"(a) error (b) 21 (c) 20 (d) 12e3ff"<<endl;
        cin>>option;
        if (option=='c' || option=='C'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<<"Q4. Which of the following user defined header file extension used in c++ ."<<endl;
        cout<<"(a) hg (b) cpp (c) h (d) hf"<<endl;
        cin>>option;
        if (option=='c' || option=='C'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<<"Q5. Which of following is not a type of constructor in c++ ."<<endl;
        cout<<"(a) Default constructor (b) Parameterized constructor (c) Copy constructor (d) Friend constructor"<<endl;
        cin>>option;
        if (option=='d' || option=='D'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<<"Q6. Which of the following approch is used by c++ ."<<endl;
        cout<<"(a) Left-right (b) Right-left (c) Bottom-up (d) Top-down"<<endl;
        cin>>option;
        if (option=='c' || option=='C'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<<"Q7. Which of following type is provided by c++ but not by c ."<<endl;
        cout<<"(a) double (b) float (c) int (d) bool"<<endl;
        cin>>option;
        if (option=='d' || option=='D'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<<"Q8. By default, all the files are opened in ___________ mode."<<endl;
        cout<<"(a) Binary (b) VTC (c) Text (d) ISCII"<<endl;
        cin>>option;
        if (option=='c' || option=='C'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<<"Q9. What is size of wchar_t in c++ ."<<endl;
        cout<<"(a) Based on the number of bits in the system (b) 2 or 4 (c) 4 (d) 2" <<endl;
        cin>>option;
        if (option=='a' || option=='A'){
            score = score+1;
        }
        else{
            score = score+0;
        }
        cout<<"Q10. Which is more effective while calling the c++ functions ."<<endl;
        cout<<"(a) call by object (b) call by pointer (c) call by value (d) call by reference"<<endl;
        cin>>option;
        if (option=='d' || option=='D'){
            score = score+1;
        }
        else{
            score = score+0;
        }   
    }
    else{
        cout<<"you have entered wrong value , please enter s";
        playQuiz();
    }
    return score;

}

int main(){
    play:
    int finalResult=0;
    char playAgain;
    int playQuiz(void);
    finalResult = playQuiz();
    cout<<"Your score is : "<<finalResult<<endl;

    if (finalResult>=6){
        cout<<"You are pass"<<endl;
        cout<<"Do you want to play Quiz again y or n ?"<<endl;
        cin>>playAgain;
        if (playAgain == 'y' || playAgain == 'Y'){
            goto play;
        }
        else{
            cout<<"Thank you to play Quiz ! "<<endl;
        }
    }
    else{
        cout<<"You are fail"<<endl;
        cout<<"Do you want to play Quiz again y or n ?"<<endl;
        cin>>playAgain;
        if (playAgain == 'y' || playAgain == 'Y'){
            goto play;
        }
        else{
            cout<<"Thank you to play Quiz ! "<<endl;
        }
    }


}
