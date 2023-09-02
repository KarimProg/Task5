# My experience with Linux:

-	After installing Linux on my virtual machine, I started by configuring my Linux’s appearance such as dark mode and the background, etc. to make it more comfortable to use.

-	I then began my journey with Linux’s terminal commands by running `sudo apt update` and `sudo apt upgrade` to make sure everything is stable and new. I first had to configure the "sudoers" file though, as I was receiving an error `”username” is not in sudoers file`.

## Navigating Directories and Files

-	I then used `ls`  to see available files/directories and I opened the “Documents” directory

-	I decided to create a new directory here called “First Directory” and this was done using mkdir “First Directory” (notice the double quotations as the name contains a space).

-	Now it was time to create my first text file “trail.txt” and this was done using `touch trail.txt`.

-	A text file wouldn’t be complete without some text, so I used `nano trial.txt` to start editing my file. 

-	Finally, we could display the text in the file using `cat trial.txt`

<img src="Screenshot 2023-09-02 210945.png" alt="First Image" width="" height="250">

## Permissions and `man`

-	I now tried to tinker with the file permissions, so I first started by typing `ls -al` to see all the files’ permissions.

-	Next, I typed in `chmod trial.txt 764`, but I received an error. This led me to using the `man` keyword with `chmod` to figure out what was wrong. I realized the octal number had to come before the file name and after another trial it worked fine.

<img src="Screenshot 2023-09-02 211010.png" alt="First Image" width="" height="200">

## Move and Delete

-   I also renamed a file and this was done by `mv trial.txt file.txt` which takes in two arguments (file to be renamed, new name).

-	I then deleted the file using `rm file.txt` and then moved out of directory using `cd ..`. Then I deleted the directory using `rm -r “First Directory”.

## Bashrc and hidden files

-   I now used `cd` to get back to the home directory. Then I typed `ls -a` to view all the hidden files which included ".bashrc".

-   I proceeded to edit the ".bashrc" file to type "karim" everytime a new terminal is created using the nano text editor by typing `echo karim`.

<img src="Screenshot 2023-09-02 213234.png" alt="First Image" width="" height="">
(Notice terminal colors were changed)

---

<img src="Screenshot 2023-09-02 213301.png" alt="First Image" width="" height="">

## Redirects & Pipes

-   I was now about to try Redirects and pipes, but first I wanted to clear the terminal and this is done by either typing `clear` or using the shortcut `ctrl+l`.

-   I then proceeded to redirect a text in a file I had created into another file and this was done using `cat file.txt > new.txt`. Now when I typed `cat new.txt` it showed the message that had been in file.txt.

-   I also attempted to append the message in one file to another and this is done similar to the previous step but we simply change `>` to `>>`. Now the message in file.txt was added in the end (appended) to new.txt.

-   Finally I wanted to attempt to use pipes and this can be done using `|` after the command and a plethora of different flags can be added after it but I used the `grep` flag which searches for keywords in a file. For example searching for the occurance of the letters "is" in file.txt.

<img src="Screenshot 2023-09-02 214522.png" alt="First Image" width="" height="250">