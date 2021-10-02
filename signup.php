<?php
include "db_connect.php";
if($conn)
{
	$username=$_POST['username'];
	$password=$_POST['password'];
	$cnfpassword=$_POST['cnf_password'];
	if($username=='' || $password=='' || $cnfpassword=='')
	{
		echo "Invalid Credentials,Please Retry.";
		header("Location:mini_project.php");
		exit;
	}
	else
	{	
		if($password==$cnfpassword)
		{
			$query="INSERT INTO user VALUES(NULL,'$username','".md5($password)."')";
			$exec_query=mysqli_query($conn,$query);
			if($exec_query)
			{
				echo "Account created.";
				header("Location:mini_project.php");
			}
			else
			{
				echo "Error occured";
				header("Location:mini_project.php");
			}
		}
		else
		{
			echo "Please confirm password.";
			header("Location:mini_project.php");
		}
	}
}
else
{
	echo "Database connection issue!!!";
	header("Location:mini_project.php");
}
?>