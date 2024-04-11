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
 This command will show you the README file, which includes a detailed description of cmdtypist along with its features, licensing information, installation instructions, and more.

5) cmdtypist select "lesson number": 
   --------------------------------
 This command streamlines the process by selecting a lesson from the lesson file without needing to list available lessons. However, it requires an existing user in the user file. The "lesson number" should be an integer between 1 and 15.

6) cmdtypist sound: 
   ---------------
Use this command to toggle the beep sound on or off for incorrect character presses in cmdtypist:

- To activate the beep sound, use the command 'cmdtypist sound --on'.
- To deactivate the beep sound, use the command 'cmdtypist sound --off'.

7) cmdtypist /myown: 
   ----------------
 This command opens the user's text file in standard mode for typing. The text file should only contain ASCII 7-bit characters. The program will ignore any extended characters, so there might be differences between the characters in the user's text and the lesson being typed.
8) cmtypist cchl: 
   -------------
 This command resets the current lesson file to the default one that was included with the program. If the default file is missing or corrupted, an error message will be displayed.

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