<style>

    #text{
    width: 100%;
    height: 400;
    border: 3px solid black;
    padding: 10;
    outline: none;
    overflow:hidden;
    resize: none;
    }

    #console{
    width: 100%;
    height: 200;
    border: 3px solid black;
    padding: 10;
    outline: none;
    overflow:hidden;
    resize: none;
    border-top: none;
    }

</style>

<?php
$code='';
$console='';

if(!empty($_POST)){
 $code = $_POST['text'];
 $file = "execute.cpp";
 
 file_put_contents($file, $code);
 
 putenv("PATH=C:\Program Files (x86)\Dev-Cpp\MinGW64\bin");
 
 shell_exec("g++ execute.cpp -o execute.exe");
 
 $console = shell_exec("execute.exe");
 

}

?>


<form method=POST>

<textarea id = text name = text placeholder = "Our code here"><?php echo $code; ?> </textarea>

<br>

<textarea id = console name=  console><?php echo $console; ?> </textarea>

<input type = submit value="Run" style="background-color: rgb(255, 0, 0); border-radius: 25px; border: 1px solid rgb(100, 100, 100); display: inline-block; cursor: pointer; color: rgb(255, 255, 255); font-family: Arial; font-size: 17px; font-weight: bold; padding: 25px; text-decoration: none;">

</form>