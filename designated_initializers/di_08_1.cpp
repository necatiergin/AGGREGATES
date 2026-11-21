void process_file(bool open, bool close, bool read, bool write);

int main()
{
	//...
	process_file(true, false, false, true);
	process_file(/*open*/true, /*close*/false, /*read*/false, /*write*/true);
}
