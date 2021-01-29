	float cilindroperimetro(float A, float B){
		float S;
		S = 2*B*A;	
		return S;
	}

	float circuloperimetro(float A, float B){
		float S;
		S = 2*B*A;	
		return S;
	}

	float losangoperimetro(float A, float B){
		float S;
		S = B*A;
		return S;
	}
	
	float ParalelogramoQuadradoRetangulo(float A, float B){
		float S;
		S = (2*A) + (2*B);
		return S;
	}
	
	float TrianguloRetangulo(float A, float B){
		float S;
		S = sqrt(pow(A,2) + pow(B,2) + A + B);
		return S;
	}

	float TrianguloIsosceles(float A, float B){
		float S;
		S = 2 * (sqrt(pow(A,2) + pow(B/2,2) + B));
		return S;
	}

	float TrianguloEquilatero(float A){
		float S;
		S = 3 * ((2*A)/sqrt(3));
		return S;
	}
	
	float poligonoregular(float A, float B){
		float S;
		S = A * B;
		return S;
	}
