files=$(ls *.c)
for file in $files
do
   number=${file%-*}
   if [ number ];
   then
       if [ ! -d "tests/executables" ];
       then
           mkdir tests/executables
       fi
       d="./tests/sh/$number-main.sh"
       if [ -f $d ];
       then
           echo '***********************'
           echo Running Test $number
           echo Compiling to Executable
           echo '***********************'
           $d && "./tests/executables/$number-main"
       fi
       echo ' '
       echo ' '
   fi
done
