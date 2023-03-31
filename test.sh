coding-style $(pwd) $(pwd)

cat coding-style-reports.log | while read line
do
    echo ::error::failure
    done
