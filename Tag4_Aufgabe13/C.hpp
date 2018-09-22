class C {
public:
	C(int n);
	~C();
	int getN();
	bool operator<(const C &other) const;
	bool operator>(const C &other) const;
	
private:
	int n;
};