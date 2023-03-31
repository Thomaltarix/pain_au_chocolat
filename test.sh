input=$(pwd)/coding-style-reports.log

while read line
do
    error_type=$(echo $line | cut -d ":" -f 3 | cut -d " " -f 2)
    file_name=$(echo $line | cut -d ":" -f 1)
    file_path=$(echo $line | cut -d ':' -f 1)
    error_line=$(echo $line | cut -d ':' -f 2)
    error_code=$(echo $line | cut -d ':' -f 4)
    echo echo "::error file=$file_name,line=$error_line::$error_type coding style error: $file_name $error_code"
done < $input