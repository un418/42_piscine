echo "--- File containing a deploy path"
grep -rl "deploy_path:" $(dirname "$0")
#For each file in the list copy to deploy path
## For Loop whith file name
## Parse to get value of deploy path - cut with : separator
## Maybe backup file before ? 
## cp $filename to $parsed_path
## Send message to source ~/.zshrc



# Notes
# cp ~/Documents/piscine_42/.dotfiles/.zsh_aliases $ZSH_CUSTOM/aliases.zsh