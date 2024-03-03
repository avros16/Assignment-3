#include <iostream>

int main() {
  using std::cout; // using to avoid typing std all the time
  using std::cin;

  float math{0};
  float science{0};
  float english{0};
  float language{0};
  float elective{0}; 
  float rawaverage{0};// will use to find average
  
  
  cout << "Hello student, let's find your class averages!\n"; //opener

  
  cout << "Please input your grade (number grade out of 100) for your MATH course: ";
  cin >> math;

   cout << "Please input your grade (number grade out of 100) for your SCIENCE course: ";
  cin >> science;
  

  cout << "Please input your grade (number grade out of 100) for your ENGLISH course: ";
  cin >> english;

  cout << "Please input your grade (number grade out of 100) for your LANGUAGE course: ";
  cin >> language;

  cout << "Please input your grade (number grade out of 100) for your ELECTIVE course: ";
  cin >> elective;
  cout << "\n";


rawaverage = (math+science+english+language+elective)/5; // this will give us the raw number average of all courses.
  cout << "***************************************************************\n";  //pretty output
  cout << "\n"; //pretty output
  cout << "Your raw average is: " << rawaverage << ".\n"; //raw average for reference.  


  if (rawaverage >= 93.0){ //calulating john jay average
    cout << "Your letter grade is A, and your numerical percentage is 4.0. Congratulations!\n";
  } else if (rawaverage >=90){
    cout << "Your letter grade is A-, and your numerical percentage is 3.7. Congratulations!\n";
  } else if (rawaverage>=87.1){
    cout << "Your letter grade is B+, and your numerical percentage is 4.0.\n";
  } else if (rawaverage>=83.0) {
    cout << "Your letter grade is B, and your numerical percentage is 3.3.\n";
  } else if (rawaverage >=80.0) {
    cout << "Your letter grade is B-, and your numerical percentage is 2.7.\n";
  } else if (rawaverage >=77.1) {
    cout << "Your letter grade is C+, and your numerical percentage is 2.3.\n";
  } else if (rawaverage >=73.0) {
    cout << "Your letter grade is C, and your numerical percentage is 2.0.\n";
  } else if (rawaverage >=70.0) {
    cout << "Your letter grade is C-, and your numerical percentage is 1.7.\n"; 
  } else if (rawaverage >=67.1) {
    cout << "Your letter grade is D+, and your numerical percentage is 1.3.\n";
  } else if (rawaverage >=63.0) {
    cout << "Your letter grade is D, and your numerical percentage is 1.0.\n";
  } else if (rawaverage >=60.0) {
    cout << "Your letter grade is D-, and your numerical percentage is 0.7.\n";
  } else if (rawaverage < 60.0) {
    cout << "Your letter grade is F, and your numerical percentage is 0.0.\n"; 
  } else {
    cout << "Please try again, something went wrong."; //just in case something goes wrong 
  }

  cout << "\n"; //pretty output
  cout << "***************************************************************\n"; //pretty output
  

}