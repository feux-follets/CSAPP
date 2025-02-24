export module Chapter_2;

namespace {
int P_58() {
	int x = 1;
	return *reinterpret_cast<char*>(&x);
}



unsigned P_60(unsigned x, int i, unsigned char b) {
	auto byte_ptr = reinterpret_cast<unsigned char*>(&x);
	byte_ptr[i] = b;
	return x;
}

} // namespace
