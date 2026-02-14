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

> [!Warning] Very dangerous to do it in the real work folder
> One error or git conflict and it will be hours or trying repairaing the git history
> * Better to  the git subtree ontry copy of the work folder
> * Better to do it at the end piscine to avoid wasting time on git conflict
> * Better to it only in one way just pulling from the mono repo.
> 	* If you want to push changes from home, I recommend to create a GH repo per project and add a new github remote on  42 computer and simply pull from GH to retrieve home work
# Working with  subtree repo

```bash
# Push changes made at 42 to Github
git remote add SHOO ../piscine_42/SH00_Project/SH00
git subtree add --prefix SH00_Project/SH00 ../piscine_42/SH00_Project/SH00 master
git subtree pull --prefix SH00_Project/SH00 ../piscine_42/SH00_Project/SH00 master

git subtree add --prefix SH01_Project/SH01 ../piscine_42/SH01_Project/SH01 master
git subtree pull --prefix SH01_Project/SH01 ../piscine_42/SH01_Project/SH01 master

git subtree add --prefix C00_Project/C00 ../piscine_42/C00_Project/C00 master
git subtree pull --prefix C00_Project/C00 ../piscine_42/C00_Project/C00 master

git subtree add --prefix C01_Project/C01 ../piscine_42/C01_Project/C01 master
git subtree pull --prefix C01_Project/C01 ../piscine_42/C01_Project/C01 master

git subtree add --prefix C02_Project/C02 ../piscine_42/C02_Project/C02 master
git subtree pull --prefix C02_Project/C02 ../piscine_42/C02_Project/C02 master

git subtree add --prefix C03_Project/C03 ../piscine_42/C03_Project/C03 master
git subtree pull --prefix C03_Project/C03 ../piscine_42/C03_Project/C03 master

git subtree add --prefix C04_Project/C04 ../piscine_42/C04_Project/C04 master
git subtree pull --prefix C04_Project/C04 ../piscine_42/C04_Project/C04 master

git push

# Pull change made at home to 42 
# /!\ Too much git conflict I quit ! 
# I don't recommend to use git subtree to do that
git subtree push --prefix C00_Project/C02 ../piscine_42/C00_Project/C00 master
```



