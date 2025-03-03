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

unsigned P_63_A(unsigned x, int k) {
	unsigned xsra = (int)x >> k;
	int w = sizeof(int) << 3;
	// Handle special case when k = 0
	unsigned mask = k ? (1 << (w - k)) - 1 : ~0;
	return xsra & mask;
}

int P_63_B(int x, int k) {
	int xsrl = (unsigned)x >> k;

	int w = sizeof(int) << 3;
	int sign_bit = x & (1 << w - 1);
	unsigned mask = sign_bit ? 1 << (w - k) - 1 : 0;
}

} // namespace
