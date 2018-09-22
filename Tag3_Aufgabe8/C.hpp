class C {
public:
	C();
	C(const C &other);
	~C();
	int getBla();
	double getBlub();
	
private:
	int bla;
	double blub;
};