Create a monorepo with all project repo and keep the commit history to have green square on github
# Intro
```
# Before subtree
./Work_Folder/
	C00/.git
	C01/.git
	C02/.git
	# Multiple repo in several project Folder
	
# After Subtree
./GH_42_Piscine
	.git
	C00 # pulled from Work_Folder/C00
	C01 # pulled from Work_Folder/C01
	C02 # ...
	# One repo with several project folder
```

# Working with  subtree repo

```bash
# Push changes made at 42 to Github
git subtree add --prefix SH00_Project/SH00 ../piscine_42/SH00_Project/SH00 master
git subtree add --prefix C02_Project/C02 ../piscine_42/C02_Project/C02 master

# Pull change made at home to 42
git subtree pull --prefix C02_Project/C02 ../piscine_42/C02_Project/C02 master
git subtree pull --prefix C02_Project/C02 ../piscine_42/C02_Project/C02 master
 
```


> [!Warning] Very dangerous to do it in the real work folder
> One error or git conflict and it will be hours or trying repairaing the git history
> * Better to  the git subtree ontry copy of the work folder
> * Better to do it at the end piscine to avoid wasting time on git conflict
> * Better to it only in one way just pulling from the mono repo.
> 	* If you want to push changes from home, I recommend to create a GH repo per project and add a new github remote on  42 computer and simply pull from GH to retrieve home work
