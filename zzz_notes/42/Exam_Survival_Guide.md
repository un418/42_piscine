# Before the Exam

> [!IMPORTANT]
> * Register to the Exam Project
> * Subscribe to the Exam event in Agenda
> 
> If you forget to do one of these action there will be **no Exam for you**

# 1. Login to the exam session

* Login: `exam`
* Password:  `exam`
# 2. Login to `examshell`

> [!CAUTION] 
> You have only **ten minutes** to do this step after that you will be **kicked out of the exam**.

1. Open a shell Terminal

* type the command : `examshell`
* Will Prompt for Login: `<type your 42 username>`
* Will Prompt for password: `<type your 42 password>` 

> [!WARNING]
> **Nothing appear when you type your password** it's normal, reuse `examshell` command if you fail at first try

2. Just after login successfully the script will create your ssh key for the exam
	* type : `y` when there is some questions
		
> [!TIP] 
> **Now you are safe !**
> You entered the exam no one will kick you out of it.
> You got 4h hours to beat the `grademe` command

3. `examshell` subcommand
	- `grademe` : When you sure you finished your exercise to send it to Moulinette, be graded and access the next exercise
	- `status`: used to know how many time left to finish the exam
	- `finish`: **/!\ Dangerous /!\ ONLY** if you finished the exam and are ready to leave
# 3. Do your exercise

You will find the subject in the folder : `/exam/subject/<exercice_name>/<exercice_name>.txt`

> [!IMPORTANT] 
> You must git push the result of your exercise with the **same folder structure** but in `/exam/rendu`
> ```
> /exam/subject/print_a/print_a.txt
> /exam/rendu/print_a/print_a.c
> ```

`push` file to git when you finished the exercise.

After `git push` :
	go to the terminal were you have you `examshell` still running
		use the command  `grademe`
		
```c
if (exercise correct)
	`grademe` give you another exercise to do in /exam/rendu
else
	{
		fix your code;
		push change to git;
		`examshell` -> `grademe` 
	}
```


> [!WARNING] 
If you **fail** a `grademe`
You can find useful **debug information** in `/exam/traces`

> [!TIP] 
> **42 Header are not checked for the exam**

# Survival commands

## Retrieve the include for some function

```bash
man -k write    # Command to search a pattern of text in all manuals
man -k pointer  # Not sure you will find but at least try

man 2 write     # contains the  #include <unistd.h>
man 3 printf    # contains the  #include <stdio.h>
man 2 execve    # usefull snippets of 'main(int argc, char *argv[])' at the end of the page
man ascii       # ASCII Table
man strcpy      # Snippets of code for reading string
```

## Git Basics

```bash
# Example with /exam/rendu/print_a/print_a.c

cd /exam/rendu/print_a
git add print_a.c
git commit -m "add print_a.c"
git push
# If needed
git remove --cached <fileToRemove> #from git  repository
# still need to commit and push the deletion to the remote repo
```
## ~/.zshrc

```bash
# To improve zsh prompt - Current Folder + Autocompletion
cp /etc/zsh/newuser.zshrc.recommended ~/.zshrc
# at least just remember that the file is in
ls /etc/zsh
```

```bash
# Only 1 aliases to learn by earth
alias cc42='cc -g -Wall -Wextra -Werror *.c' #
alias ccrun42='cc -g -Wall -Wextra -Werror *.c && ./a.out' 

# Allow more history size
export HISTSIZE=10000 
export SAVEHIST=10000

# ---------------------------------------------------------------------------#
					# Less Usefull but good to know  #

# Less usefull aliases 
alias gcc42='gcc -g -Wall -Wextra -Werror *.c'
alias gccrun42='gcc -g -Wall -Wextra -Werror *.c && ./a.out'

alias ga="git add"
alias gst="git status"
alias gcmsg="git commit -m"
alias gp="git push"
alias glo="git log --oneline"
```

## ~/.vimrc

#todo