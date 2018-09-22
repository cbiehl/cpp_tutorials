class IsEven {
public:
	bool operator()(int i){
		return i % 2 == 0;
	}
};