struct FileParam {
	bool open;
	bool close;
	bool read;
	bool write;
};

void process_file(const FileParam& params);

int main()
{
	//...
	process_file({ .open = false, .close = true, .read = true, .write = false });
}
