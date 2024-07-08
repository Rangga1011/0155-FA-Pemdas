#include <iostream>
using namespace std;
class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
	}
	virtual void namaJalurMasuk() { return; } 
	virtual void namaJalurMasuk() = 0;
	virtual void input() = 0;
	virtual void hitungTotalBiaya() = 0;
	virtual void tampilkanTotalBiaya() = 0;
	

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;

	}
	void setUangSemesterPertama(int nilai) {
		uangSemesterPertama = nilai;
	}

	int getUangSemesterPertama() {
		return uangSemesterPertama;
	}

	void setUangBangunan(int nilai) {
		uangBangunan = nilai;
	}

	int getUangBangunan() {
		return uangBangunan;
	}

	void setTotalBiaya(int nilai) {
		totalBiaya = nilai;
	}

	int getTotalBiaya() {
		return totalBiaya;
	}
};

class SNBT : public MasukUniversitas {
	void namaJalurMasuk() override {
		cout << "Jalur Masuk: SNBT" << endl;
	}
	int uangPendaftaran, uangSemesterPertama, uangBangunan;
	cout << "Masukkan uang pendaftaran: ";
	cin >> uangPendaftaran;
	cout << "Masukkan uang semester pertama: ";
	cin >> uangSemesterPertama;
	cout << "Masukkan uang bangunan: ";
	cin >> uangBangunan;

};
class SNBP : public MasukUniversitas {
	
};
int main() {
	// isi disini untuk fungsi main
}