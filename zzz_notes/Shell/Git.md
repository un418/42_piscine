![[zzz_notes/~assets/basic_git_diagram.png]]

# Basics


- `git add <file/folder>` 
- `git rm <file/folder>`
- `git status`
- `git commit -m "add file.txt"`
- `git log`
- `git restore`: Restore a file after a `git rm`

# Delete last commit
```bash
git reset --soft HEAD~1 # Will keep the file(s) modified by in working directory, they will appear as unstaged
git reset --hard HEAD~1 # Will erase the file from workind directory
```
# Delete commit already pushed

```bash
git reset --hard #<commit_id>#  # Will reset the branch to the specified commit
git push -f # Need -f --force if the commit have been already pushed to remote repo.
```

### Modify last commit

```bash
git add <file>
git commit --amend --no-edit
git push
# git push --force if already pushed on remote
```
# Change remote

```bash
repo_url=...
git remote add "origin" "$repo_url"
git remote set-url "origin" "$repo_url"
```


# Get list of file on repo

local : 
	`git ls-tree  -r master`
remote : 
	`git ls-tree  -r origin/master`

## ToDo - Alias / Function 


### Alias to change the remote repo url

Mainly used when retrying a project

```bash
_git_remote_change (
	git remote add "origin" $1
	git remote set-url "origin" $1
)
```
