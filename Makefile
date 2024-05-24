all:
	gcc fork.c -o fork
	gcc exec.c -o exec
	gcc forkexec.c -o forkexec
clean:
	rm fork exec forkexec