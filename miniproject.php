<html>
	<head>
		<title>Mini Project</title>
	</head>
	<body>
		<center>
		<h1><b>SignUp</b></h1>
		<form action=signup.php method='post'>
			<label>Username</label>
			<input type="text" name="username" placeholder="Enter a username"><br>
			<label>Password</label>
			<input type="password" name="password" placeholder="Enter a password"><br>
			<label>Confirm Password</label>
			<input type="password" name="cnf_password" placeholder="Confirm password"><br>
			<input type="submit" value="submit">
		</form>
		<h1><b>Login</b></h1>
		<form action=login.php method='post'>
			<label>Username</label>
			<input type="text" name="username" placeholder="Enter a username"><br>
			<label>Password</label>
			<input type="password" name="password" placeholder="Enter a password"><br>
			<input type="submit" value="Login">
		</form>
		</center>
	</body>
</html>
