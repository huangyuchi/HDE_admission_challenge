main: HDE_admission_challenge.c input.txt
	gcc HDE_admission_challenge.c -o HDE_admission_challenge.exe
	HDE_admission_challenge.exe < input.txt > output.txt