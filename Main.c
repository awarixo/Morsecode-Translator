#include "mbed.h"
#include "TextLCD.h"
#include<string> 


DigitalIn Button1(PA_0); // Button for User to Input DOT Morse Code
DigitalOut LED_A(PC_0); // LED to Indicate DOT button input 
DigitalIn Button2(PA_1); // Button for User to Input DASH Morse Code
DigitalOut LED_B(PC_1); // LED to Indicate DASH button input 

DigitalOut LED_C(PC_8); // LED to Indicate 2 second input timer


TextLCD lcd(PC_2, PC_3, PC_4, PC_5, PC_6, PC_7); // LCD screen to display text

int main()
{
  int k;// count user inputs
  int i;//to concatinate array values into one string
  string check;//the string value compared with the if else statement
  char store[5]; // user input store array
  
      
     lcd.printf("Your text:"); //Displayed on the first line of your LCD
          
     lcd.locate(0,1);// Your result will be displayed on the second LCD line

    while (1) {
        
        
        wait(5.0);
        
        // Loop to accept user Inputs
        for(k = 0; k <= 4; k++) // Loop 5 times to accept 5 inputs
         {
            LED_C = 1; // LED to start timer ON
            wait(1.0); // LED to start timer flashes 
            LED_C = 0; // LED OFF. 2 second timer has started
            
            LED_A = 0;// All Leds are returned back to 0 values
            LED_B = 0;
            
            // Time to input dots or dash or blank space!
            
            
            if(Button1 == 0){
               store[k] = '1'; // 1 represents a DOT and is stored in our array
               LED_A = 1;
               wait(2.0); // Wait 2 seconds for next input
               LED_A = 0;
                }
            else if(Button2 == 0){
               store[k] = '2'; // 2 represents a DASH and is stored in our array
               LED_B = 1;
               wait(2.0); // Wait 2 seconds for next input
               LED_B = 0;
                }
            else{
            store[k] = '0'; // 0 represents a BLANK SPACE and is stored in our array
            wait(2.0); // WAit 1 second
                }
            
           
            LED_A = 0;// All Leds are returned back to 0 values
            LED_B = 0;
         }
        
 
        
         for (int i = 0; i<5; i++) // concatination of array values
         {
             check += store[i]; 
         }
        
          // An IF-Else statement to give the equivalent button outputs 
          
               
        
        if (check == "12000" ){
                 lcd.printf("A");
                 LED_B = 1;
                 LED_A = 1;
                 wait(30.0);
                 LED_B = 0;
                 LED_A = 0;
                 
         }else if(check == "21110"){
                 lcd.printf("B");
                 wait(30.0);
                 
        }else if(check == "21210"){
                 lcd.printf("C");
                 wait(30.0);
                
        }else if(check == "21100"){
                 lcd.printf("D");
                 wait(30.0);
                
        }else if(check == "10000"){
                 lcd.printf("E");
                 wait(30.0);
                
        }else if(check == "11210"){
                 lcd.printf("F");
                 wait(30.0);
                
        }else if(check == "22100"){
                 lcd.printf("G");
                 wait(30.0);
                
        }else if(check == "11110"){
                 lcd.printf("H");
                 wait(30.0);
                
        }else if(check == "11000"){
                 lcd.printf("I");
                 wait(30.0);
                
        }else if(check == "12220"){
                 lcd.printf("J");
                 wait(30.0);
                
        }else if(check == "21200"){
                 lcd.printf("K");
                 wait(30.0);
                
        }else if(check == "12110"){
                 lcd.printf("L");
                 wait(30.0);
                
        }else if(check == "22000"){
                 lcd.printf("M");
                 wait(30.0);
                
        }else if(check == "21000"){
                 lcd.printf("N");
                 wait(30.0);
                
        }else if(check == "22200"){
                 lcd.printf("O");
                 wait(30.0);
                
        }else if(check == "12210"){
                 lcd.printf("P");
                 wait(30.0);
                
        }else if(check == "22120"){
                 lcd.printf("Q");
                 wait(30.0);
                
        }else if(check == "12100"){
                 lcd.printf("R");
                 wait(30.0);
                
        }else if(check == "11100"){
                 lcd.printf("S");
                 wait(30.0);
                
        }else if(check == "20000"){
                 lcd.printf("T");
                 wait(30.0);
                
        }else if(check == "11200"){
                 lcd.printf("U");
                 wait(30.0);
                
        }else if(check == "11120"){
                 lcd.printf("V");
                 wait(30.0);
                
        }else if(check == "12200"){
                 lcd.printf("W");
                 wait(30.0);
                
        }else if(check == "21120"){
                 lcd.printf("X");
                 wait(30.0);
                
        }else if(check == "21220"){
                 lcd.printf("Y");
                 wait(30.0);
                
        }else if(check == "22110"){
                 lcd.printf("Z");
                 wait(30.0);
                
        }else if(check == "12222"){
                 lcd.printf("1");
                 wait(30.0);
                
        }else if(check == "11222"){
                 lcd.printf("2");
                 wait(30.0);
                
        }else if(check == "11122"){
                 lcd.printf("3");
                 wait(30.0);
                
        }else if(check == "11112"){
                 lcd.printf("4");
                 wait(30.0);
                
        }else if(check == "11111"){
                 lcd.printf("5");
                 wait(30.0);
                
        }else if(check == "21111"){
                 lcd.printf("6");
                 wait(30.0);
                
        }else if(check == "22111"){
                 lcd.printf("7");
                 wait(30.0);
                
        }else if(check == "22211"){
                 lcd.printf("8");
                 wait(30.0);
                
        }else if(check == "22221"){
                 lcd.printf("9");
                 wait(30.0);
                
        }else if(check == "22222"){
                 lcd.printf("0");
                 wait(30.0);
        
        else if(check == "00000"){
                 lcd.printf(" ");
                 wait(30.0);
           
        }else{   
                 lcd.cls();                         
                 lcd.printf("Invalid");       // Incase the user presses a code that has no equivalent
                 wait(10.0);
                 lcd.cls();
                 
            }

      
    
    }
}
