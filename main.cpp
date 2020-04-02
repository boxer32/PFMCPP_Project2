#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 float
 double
 char
 bool
 void
 wchar_t
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

         // Interger
    int freqA =  20;
    int freqB =  200;
    int freqC =  400;

    // Floating point
    float fineA = 0.65f;
    float fineB = 0.25f;
    float fineC = 0.11f;

    // Double floating point
    double randomA = 0.14542132;
    double randomB = 1.45645413216;
    double randomC = 0.4214214452;

    //Character
    char knobA = 'A';
    char knobB = 'b';
    char knobC = 'c';

    //boolean
    bool on = true;
    bool filterStatus = true;
    bool sync = false;

    ignoreUnused(freqA, freqB, freqC, fineA, fineB, fineC, randomA, randomB, randomC, knobA, knobB, knobC, on, filterStatus, sync);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int knobStat(bool knobOn, int position = 0)
{
    ignoreUnused(knobOn, position);
    return {};
}
/*
 2)
 */
float fineTuning(float oscA, float oscB = 2.5f)
{
ignoreUnused(oscA, oscB);
return {};
}
/*
 3)
 */
bool limiter(bool cellingOn, bool softKneeOn)
{
    ignoreUnused(cellingOn, softKneeOn);
    return {};
}
/*
 4)
 */
double randomStream(double bottonA, bool switchA )
{
    ignoreUnused(bottonA, switchA);
    return {};
}
/*
 5)
 */
void resetBotton( bool bottonToggle, int delayTime = 3)
{
    ignoreUnused(bottonToggle, delayTime);
}
/*
 6)
 */
char presetName(char presetNum, bool toggle = false)
{
    ignoreUnused(presetNum, toggle);
    return {};
}
/*
 7)
 */
bool metronome(bool metronomeStat, float tempo = 120.0f)
{
    ignoreUnused(metronomeStat, tempo);
    return {};
}
/*
 8)
 */
int scaleSelector(char scaleType, int root, int octave)
{
    ignoreUnused(scaleType, root, octave);
    return {};
}
/*
 9)
 */
int automation(float filterCutoff, char filterType = 's')
{
    ignoreUnused(filterCutoff, filterType);
    return {};
}
/*
 10)
 */
float compressor(float threshold, float knee = 2.0f)
{
    ignoreUnused(threshold, knee);
    return {};
}
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 

    ignoreUnused(carRented);

    
    //1)
    auto knobControl = knobStat(true, 3);
    //2)
    auto fineControl = fineTuning(0.25f, 0.7f);
    //3)
    auto useLimiter = limiter(true, true);
    //4)
    auto stream = randomStream(0.4545,true);
    //5)
    resetBotton(true, 5);
    //6)
    auto UsePreset = presetName('a', true);
    //7)
    auto UseMetronome = metronome(true, 80.6f);
    //8)
    auto scale =scaleSelector('m', 1, 4);
    //9)
    auto UseAutomation = automation(600.0f, 'a');
    //10)
    auto UseCompressor = compressor(4.5f, 2.0f);
    
    ignoreUnused(knobControl, fineControl, useLimiter, stream, UsePreset, UseMetronome, scale, UseAutomation, UseCompressor);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
