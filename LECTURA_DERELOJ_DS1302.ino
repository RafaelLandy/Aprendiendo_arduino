#include <virtuabotixRTC.h>                                                                              //|
                                                                                                         //|
//=======================================================================================================//|
//                                                                                                       //|
//                          Include files required for Program Function End                              //|
//                                                                                                       //|
//=======================================================================================================//|

// Creation of the Real Time Clock Object
virtuabotixRTC myRTC(6, 7, 8);

void setup()  {      
  Serial.begin(9600);
}

//=======================================================================================================//|    
//                                                                                                       //|   
//                         Printout by accessing Single Element objects BEGIN                            //|   
//                                                                                                       //|   
//=======================================================================================================//|   
//                                                                                                       //|   
//  This example utilizes the Serial.print function to access individual data elements, this allows for  //|
//  user defined output format.                                                                          //|
//                                                                                                       //|   
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//|  
void loop()  {                                                                                           //| 
// This allows for the update of variables for time or accessing the individual elements.                //|
  myRTC.updateTime();                                                                                    //| 
                                                                                                         //| 
// Start printing elements as individuals                                                                //|   
  Serial.print("Current Date / Time: ");                                                                 //| 
  Serial.print(myRTC.dayofmonth);                                                                        //| 
  Serial.print("/");                                                                                     //| 
  Serial.print(myRTC.month);                                                                             //| 
  Serial.print("/");                                                                                     //| 
  Serial.print(myRTC.year);                                                                              //| 
  Serial.print("  ");                                                                                    //| 
  Serial.print(myRTC.hours);                                                                             //| 
  Serial.print(":");                                                                                     //| 
  Serial.print(myRTC.minutes);                                                                           //| 
  Serial.print(":");                                                                                     //| 
  Serial.println(myRTC.seconds);                                                                         //| 
                                                                                                         //| 
// Delay so the program doesn't print non-stop                                                           //| 
  delay( 1000);                                                                                          //| 
}                                                                                                        //| 
                                                                                                         //|    
//=======================================================================================================//|    
//                                                                                                       //|    
//                                   Printout using BUFFER objects BEGIN                                 //|    
//                                                                                                       //|    
//=======================================================================================================//|    


  
