	float esfera(float A, float B){
		float S;
		S =(4 * A * (B*B*B))/3;	//
		return S;	
	}
	float paralepipedo(float A, float B, float C){ 
		float S;
		S = A * B * C; //
		return S;	
	}
	
	float cubo(float A){ 
		float S;
		S = A * A *A; //
		return S;	
	}

	float cone(float A, float B){ 
		float S;
		S = ((A * A) * B)/3; //
		return S;	
	}
	
	float piramede(float A, float B){ 
		float S;
		S = ((A * A) * B)/3;
		return S;	
	}
	 
	float prisma(float A, float B){ 
		float S;
		S = (A * A) *B;
		return S;	
	}
	
	float octraedro(float A){
		float S;
		S =  0.333333 * sqrt(2) * ( pow(A,3)) ;
		//T = S * ( 3/3);
		//S = S * T;	
		return 	S;
	}

	float romboedro(float A, float B, float C){
		float S;
		S = ((A * B)/2) * C;
		return S;
	}
	
	float dodecaedro(float A){
		float S;
		S = pow(A,3) * 7.663;
		return S;
	}
	
	float ortoedro(float A, float B, float C){
		float S;
		S =  (A * B * C);
		return S;	
	}
