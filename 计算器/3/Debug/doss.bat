@echo off
:r
	echo input:
	set /p a=
	set /a b=%a%
	echo %a%=%b%
	pause
	cls
goto r