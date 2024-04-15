# COMMAND TYPER

## _Practice typing directly on your terminal!_

### By _GROUP 26 Programming Data Structures, Spring 2024._

#### Main maintainers: 
- Chaitanya Santosh Jha
- Ujwal Raghu Aralapura

#### Team members:

- Utpal Raj Ambastha 2301PH24
- Mala Ram 2301MC46
- Chaitanya Santosh Jha 2301ME13
- Priyanshu Priyam 2301ME41
- Dhivyesh R 2301MM22
- Chirag Rana 2302MC03
- Naveen Reddy Vutukuri 2302VL04
- Tejas Raju Panzade 2301EE34
- Vaishnavi Reddy Konda Kindi 2301CS61
- Ujwal Raghu Aralapura 2301EC33

> Command Typer comes bundled with a good number of lessons for both programmers and non-programmers. The non-programmer lessons help train the user on basic typing techniques, and the programmer lessons help both programmers and non-programmers to become better at typing.

### Key Features

- **Accurate Speed Calculation**: An accurate speed algorithm in characters per minute (CPM) and an approximate in words per minute WPM (accuracy ±0.35).
- **Visual Feedback**: The terminal is manipulated to print correct characters in green and wrong characters in red, making it easy for the user to identify and correct mistakes.
- **Error Tracking**: Keeps a record of the number of wrong and correct characters, allowing the user to track their progress.
- **Session Logging**: Creates a text file to keep an account of the user's speed in detail (date, number of errors, speed in CPM and WPM, and time elapsed) for each session, enabling the user to track their typing speed from the very first day.
- **File Management**: cmdtypist makes a periodic check once a month on the size of the speed.info file and, with user confirmation, will automatically rename or delete the existing file and create a new one.
- **Custom Text**: Includes a "myown.txt" file where users can input optional text they want to type. With myown.txt, the user is limited to typing only in standard mode.

### Command Line Features

- **Random Mode**: The user can choose to type in random mode, where a random block is chosen from the selected lesson for each session.
- **Standard Mode**: In standard mode, the user types chronologically as the lesson is presented in the lesson file.
- **Lesson Modification**: The user can easily modify any lesson in the lesson file.
- **Custom Text Input**: For users who prefer not to modify the lesson file, a my_own.txt file is available for pasting their custom text to type.
- **Beep Notification**: The user can choose to receive a beep for any wrong character typed (may not work on all terminals).
- **Settings Persistence**: The program has the ability to remember all past settings.
- **Character Erasing**: The terminal is manipulated to allow users to erase characters back to the beginning of the session line (timing reset). For each wrong character erased, the number of errors is decremented by one.
- **Session Timing**: The user's session timing starts only when they type the first character (wrong or correct). If the user erases to the beginning of the session, the time is reset to zero and starts again as described above.
- **Visual Cue**: The last line of each lesson session is marked in blue, allowing the user to review their speed details before starting the following lesson.

Note: Text files should contain only ASCII 7-bit characters. For this reason, user text may sometimes look absurd when it contains extended ASCII characters, as the program has a function to ignore such characters.
