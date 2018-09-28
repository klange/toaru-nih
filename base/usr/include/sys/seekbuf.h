#pragma once

typedef unsigned long long koff_t;

struct seekbuf{
	int whence;
	int direction;
	koff_t offset;
};

