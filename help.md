HELP COMMANDS
--------------------

0) select "lesson-number":
   ---------------------
 When you're at the cmdtypist prompt, type 'select' followed by a valid lesson number to execute the command. For instance, you can input 'select 8' where 'select' is the command and '8' represents a lesson number.

1) cmdtypist mkuser "username":
   --------------------------
 To create a new user and save the username in the 'user_speed' text file, use this command. It's required for first-time cmdtypist users. Running this command will overwrite any existing username in the 'user_speed' file. If a username already exists, running this command will replace it with the new username provided as the second argument. If you wish to keep the existing data in the 'user_speed' file, make sure to copy it to another directory or rename it before running this command.

2) cmtypist ls:
   -----------   
To view the available typing lessons, use the command 'list lessons'. After listing the lessons, follow up with the command 'select' followed by the lesson number to choose a specific lesson..

3) cmtypist --help: 
  ----------------
  If you encounter any challenges, utilize this command. It provides comprehensive assistance to users both before and during their use of cmdtypist, covering all necessary help topics

4) cmtypist man:
   ------------
Displays the README file which contains a description of cmdtypist and all it's features, license, installation and others

5) cmdtypist select "lesson number": 
   --------------------------------
This command automatically selects a lesson from lesson file for user to type without having to list the lessons available. his command can only be useful if a user exist in the user file. "lesson number" is an integer between 1 and 15.

6) cmdtypist sound: 
   ---------------
This command is used to activate or deactivate a beep on wrong character press
	-cmdtypist sound --on: Activates beep
	-cmdtypist sound --off: Deacativates beep

7) cmdtypist /myown: 
   ----------------
This opens user's own text file in std mode for typing. User text must contain only ascii 7 bits characters. The program ignores reading any extended character, for this reason user text might sometimes differ in characters from the lesson typed.

8) cmtypist cchl: 
   -------------
This sets current lesson file to the default lesson file that came with the program. If this file is not present, a corrupted file error is displayed.

9) cmdtypist mkstd:
   ---------------
This command changes typing mode to standard. In standard mode lesson typing is chronologically; each lesson block appears exactly as is placed in the lesson file.

10) cmdtypist mkrand: 
    ----------------
With this command, any block of the lesson file is chosen for the user to type. This command makes the same lessons look new all the time because it uses random 
algorithm to make a choice. Use this option if you don't want to type the same characters in the same manner all the time.

11) cmdtypist chblock "lesson number": 
    --------------------------------
This command sets a the number of lines to type per lesson to "lesson number". Lesson number must be an integer between 2 and 45.

12) cmdtypist reset: 
    ---------------
Resets to cmdtypist default settings, this command is for a soft reset, which does not affect user files like changing user name. 

13) cmdtypist reset raw: 
	-------------------
It hard resets cmdtypist, so that even user name and all speed saved details are deleted. This command should be used only when fully understood.

			HELP IN QUESTIONS AND ANSWERS
	  							
1) What does it mean to type in standard mode? 
	
	Answer:
	-Typing in standard mode simply means to type the lesson in the manner in which it appears in the lesson file, that is from the first character to the last. In this mode, typing is intercepted by block lesson result and typing again continues from where it ended.

2) I keep on getting the "Fatal Error, Some files are missing", what's happening?: 
	
	Answer: 
	It's most probably because a file which came with the program is missing or cmdtypist is unable to read because some other program reading it is preventing cmdtypist from accessing it. 
	- You are most probably running cmdtypist without the begin; command
	- If any of such files is opened anywhere, close it and restart cmdtypist.
	- Use cmdtypist reset raw to reset to default settings. Save user_speed file before using this command.
	- If problem persists then a file must have been deleted, get a fresh copy of cmdtypist.

3) Sound command produces no beep on wrond characters:
	
	Answer: 
	If the command has been properly typed, then either system volume is low or your terminal does not support beeps or has deactivated beeps.

4) How do i know i have come to the end of a lesson block? 
	
	Answer: The last line in each lesson is colored blue. When you type the last character (ENTER) for that line, a session speed is displayed. Take you time to go through the session speed, you are not been timed yet!!!

5) Is it possible to know my speed details for yesterday? if yes, how?
	
	Answer:  
	Yes, all user speed details for as long as he has been typing is stored in the user_speed info file with the last speed boxed. This file is located in the cmdtypist directory.

6) Do i have to set mode to rand each time i want to type in random mode?:
	
	Answer: 
	No, cmdtypist has a .conf file which is used to register user settings. Every other setting the user makes by running the commands above is saved in the .conf file. Use the reset command to revert settings to default when things go wrong!

7) Do i have permission to copy lessons in the cmdtypist lesson file? 
	
	Answer: 
	Yes the lesson file is open source, but copy should be done under the terms of the GNU GPL version 3 or later.

NOTE: All prompts ending in [y/n], y=yes and n=no.