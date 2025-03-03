export module Chapter_2;

namespace {
int P_58() {
	int x = 1;
	return *reinterpret_cast<char*>(&x);
}

int P_59(int x, int y) {
	return (x & 0xFF) | (y & ~0xFF);
}

unsigned P_60(unsigned x, int i, unsigned char b) {
	auto byte_ptr = reinterpret_cast<unsigned char*>(&x);
	byte_ptr[i] = b;
	return x;
}

void P_61(int x) {
	int A = !!x;
	int B = !!~x;
	int C = !!(x & 0xFF);
	int D = !!(~x & (0xFF << (sizeof(int) - 1 << 3)));
}

int P_62() {
	return (-1 >> 1) < 0;
}

} // namespace
