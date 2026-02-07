Create a monorepo with all project repo and keep the commit history to have green square on github
# Intro
```
# Before subtree
./Work_Repo/
	---
./GH_42
	---
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