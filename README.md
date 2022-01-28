# Morsecode-Translator
A program that accepts Morse code input from our user, stores and processes it, then displays it as English language output.
For user inputs, we have one push button we use to enter the dots(‘.’), and the other we use to enter the dashes(‘-’). We have also attached two LEDs to light up and indicate either dot or dash input every time the corresponding pushbutton is pressed. 

Finally, we attached a third LED to act as an indicator for the user to start button input and a LCD unit to display the result of the corresponding user input.

Project Requirements:
i.	Write a program that is able to translate the dots and dashes entered (using International Morse Code) and display the message on the LCD. 

ii.	Your program should also be able to handle gaps during signalling for intra character, between letters and between words.


Design Process
	For creating a program to translate Morse code, we simplified the problem into 3 tasks
1.	Accepting user button inputs
2.	Storing user inputs (in an array) and concatenation
3.	Processing and outputting corresponding character

Accepting user button inputs
	This was the first task we had to complete before our program could operate properly. During the course of our study on Morse code, we observed that all characters (A-Z & 0-9) had a maximum of 5 inputs. This meant that for our inputs we had to create a loop to run 5 times then end. 
 
	We made our button inputs light up their LEDs and store the numbers ‘1’ & ‘2’ in our array to represent dots (‘.’) and dashes (‘-‘) respectively. If no button was pressed, ‘0’ is saved into our array. Also, during assembly of our circuit, we decided to implement a pull-up resistor for our buttons, so our button state is normally at logic 1 and logic 0 when pressed.
	We made the third LED indicate when it was time for button inputs and when the counter variable condition was met, at this point the loop would have run 5 times and all opportunity for user input is over.

Storing user inputs and concatenation
	For storing our inputs, we decided to create a character accepting Array that would store the ‘1’s, ‘2’s and ‘0’s that were inputs from the user. The array would use the same counter variable initialised in the “for” loop, so that after each execution of the “for” loop, a variable would be stored in the corresponding array position. 
	Below is a pseudocode for the array storing operations.
  
	initialize counter k
	initialize array 

	LOOP with counter k

	if button1 presed{
		store '1' in array postion K
		Flash corresponding LED
	}

	if button2 presed{	
		store '2' in array postion K
		Flash corresponding LED
	}

	if no button presed{	
		store '0' in array postion K
	}

After our inputting was done and the array had been prepared, for us to continue with the processing and outputting of corresponding character, we had to turn our array variables into a single string variable and this is the process of concatenation.
Concatenation is a term that describes combining a string, text, or other data in a series without any gaps.
As all our variables were stored in an array, we came up with another “for” loop to handle the concatenation. 
	After completion, our string “check” would contain all our array values without any gaps. Now we can begin the processing of our button inputs

Processing and outputting corresponding character
	We have already accepted user inputs, stored them into an array and concatenated into a single string. For the main part of program, we now had to take our string and run that through an “If-Else” block of code to print out the Morse code input as its corresponding letter.
	We represented our dots (‘.’), dashes (‘-‘) and blank spaces as 1s, 2s and 0s respectively. for example, our button input (-.-) would be saved in our array as (21200). Before we could write our “If-Else” block of code, using a Morse code to Letter table, we had to create a table of our array format and have the corresponding English alphabet side by side.
our program goes through 30+ possible character checks, including an array format of (00000) no input, this prints as a blank space ( ) between words. After each character is displayed, a wait time of 30 seconds is included before the input opportunity is made available again. Finally, at the end of the IF-Else block, we included the possibility that the user inputs an invalid Morse code e.g (01002). This will clear the LCD screen, display “Invalid code” then restart input sequence.
