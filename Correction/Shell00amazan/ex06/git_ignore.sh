repo_root=`git rev-parse --show-toplevel`
all_files=`find $repo_root`
git check-ignore $all_files
