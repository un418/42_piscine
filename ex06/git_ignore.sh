repo_root=$(git rev-parse --show-toplevel)
find $repo_root -name .gitignore -exec cat -e {} +
