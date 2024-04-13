# COMMAND TYPER 
_Practice typing directly on your terminal!_

#### By _GROUP 26 Programming Data Structures, Spring 2024._

### Main maintainer: Chaitanya Santosh Jha, Ujwal Raghu Aralapura
### Team members:
### Utpal Raj Ambastha            2301PH24
### Mala Ram                      2301MC46
### Chaitanya Santosh Jha         2301ME13
### Priyanshu Priyam              2301ME41
### Dhivyesh R                    2301MM22
### Chirag Rana                   2302MC03
### Naveen Reddy Vutukuri         2302VL04
### Tejas Raju Panzade            2301EE34
### Vaishnavi Reddy Konda Kindi   2301CS61
### Ujwal Raghu Aralapura         2301EC33


>Command Typer comes bundled with a good number of lessons for both programmers
and non-programmers. The non programmer lessons help train the user on 
basic typing techniques and the programmer lessons help both the programmer
and non programmers to become better at typing.

>An accurate speed algorithm in character per minute (CPM) and an approximate
in word per minute WPM (accuracy -+0.35)

>Terminal is manipulated to print green a correct character and red a wrong
character. This makes cmdtypist command line tutor very appealing. The user
easily knows where he has gone wrong and can undo all errors.

>Keeps a record of the number of wrong and correct characters; cmdtypist is able
tracks the number of wrong characters and displays at the end of each session.

>Creates a text file to keep a account of the user speed in details(date,
numer of errors, speed in CPM and WPM and time elapsed) for each session. Hence, 
the user can always keep track of his typing speed from the very first day.

>NOTE: cmdtypist makes a periodic check once a month, on the size of the 
speed.info file, and when it has reached a certain length, on a confirmed prompt
will automatically rename or delete the the existing file and hen create a new one.

>CMDTYPIST equally contains a "myown.txt" file, where a user can input an optional
text he wants to type. With myown.txt, the user is limited to typing only in 
standard mode.


### Command Line Features

>The user can choose to type in random mode where a random block is each 
session is chosen from selected lesson.

>And in standard mode, the user types chronologically as the lesson is in
the lesson file. 

>The user can chose to modify any lesson in the lesson file easily.

>For a user who will not love to modify the lesson file, a my_own.txt file
is available for the user to paste his text file he wants to type.

>NOTE: Text file should contain only ascii 7 bits characters. For this reason,
user text may some times look absurd when contains extended ascii characters 
since program has a function to ignore such characters.

>User also can choose to receive a beep for any wrong character typed (may
not work on all terminals)

>Program has the ability to remember all past settings.

>Terminal is manipulated so a user can erase characters right to the beginning
of the session line(timing reset) For each wrong character erased, number of 
errors is decremented by one.

>User session timing starts only when he types a first character (wrong or 
correct)

>If the user erases to the beginning of the session, time is reset to zero
and starts only as described above.

>The last line of each lesson session is marked blue, so user is aware and 
can take time to review speed details before starting the following lesson.

