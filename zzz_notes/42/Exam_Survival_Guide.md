
# Basic Process

### 1. Login to the exam session
* Login: exam
* Password: exam
### 2. Login to Examshell

> [!CAUTION] 
> You have only ten minutes to do this step after that you will be kicked out of the exam.

1. Open a shell Terminal

* type the command : `examshell`
* Will Prompt for Login: `<type your 42 username>`
* Will Prompt for password: `<type your 42 password>` 

> [!WARNING]
> Nothing appear when you type it's normal, reuse `examshell` command if you fail at first try

> [!TIP] 
> Now you are safe ! 
> You entered the exam no one will kick you out of it.
> You got 4h hours to beat the `grademe` command

2. Just after login successfully the script will create your ssh key for the exam
		type : `y` when there is some questions
		
3. `examshell` subcommand
	- `grademe` : When you sure you finished your exercise to send it to Moulinette, be graded and access the next exercise
	- `status`:
	- `finish`: When you have finish the exam and are ready to leave

## Survival commands

### Retrieve the include for some function

```bash
man -k write    # Command to search a pattern of text in all manuals
man -k printf

man 2 write     # The include definition are in the man
man 3 printf
```

## 42_header

Use VIM to put them
* Keyboard Shortcut : `Fn + F1 `
* In default mode : type `:Stdheader`

> [!Warning] 
> Norminette checks the validity of header
> If you don't put them, the `grademe` command will never let you moving forward !


## ~/.zshrc

```bash
# Only 3 aliases to learn by earth
alias cc42='cc -g -Wall -Wextra -Werror *.c' #
alias ccrun42='cc -g -Wall -Wextra -Werror *.c && ./a.out' 
alias normi42='norminette -R CheckForbiddenSourceHeader'

# To put your mail and username automaticly
export USER=<username>
export MAIL=<42email>

# Allow more history size
export HISTSIZE=10000 
export SAVEHIST=10000
 

# Little function 
mkcd() {
	mkdir -p "$1"
	cd "$1"
}

# Less usefull aliases 
alias gcc42='gcc -g -Wall -Wextra -Werror *.c'
alias gccrun42='gcc -g -Wall -Wextra -Werror *.c && ./a.out'

alias ga="git add"
alias gst="git status"
alias gcmsg="git commit -m"
alias gp="git push"




```