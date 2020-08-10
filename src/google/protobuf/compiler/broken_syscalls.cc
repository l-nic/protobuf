
extern "C" {

int access(char*, int) {
    return -1;
}

int mkdir(char*, int) {
	return -1;
}

int pipe(int) {
	return -1;
}

int dup2(int) {
	return -1;
}

int execvp(char*, char**) {
	return -1;
}

int execv(char*, char**) {
	return -1;
}

int select(int, void*, void*, void*, void*) {
	return -1;
}

int waitpid(int, void*, int) {
	return -1;
}
};