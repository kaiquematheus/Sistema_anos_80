	float triangulo(float A, float B){
		float S;
		S = (A * B)/2;// área do triangulo = base * altura /2
		return S;	
	}
	
	float quadrado(float A, float B){ 
		float S;
		S = A * B; // área do quadrado = lado * lado
		return S;	
	}
	
	float circulo(float A, float B){
		float S;
		S = A * (B * B);// área do circulo = pi * r²
		return S;	
	}

	float retangulo(float A, float B){
		float S;
		S = A + B;// área do retangulo = base * altura
		return S;	
	}	
	
	float losango(float A, float B){
		float S;
		S = (A * B)/2;// área do losango = denominador mairo * denominador menor / 2
		return S;	
	}	
	
	float cubo1(float A, float B){
		float S;
		S = A * (B * B);// área do cubo = 6 * arestas²
		return S;	
	}
	
	float cilindro(float A, float B){
		float S;
		S = 2 * 3.14 * A*(A+B);
		return S;
	}
	
	float tetraedro(float A){
		float S;
		S = sqrt(3) * pow( A,2);
		return S;
	}
	float romboide(float A, float B){
		float S;
		S = (A * B);		// área do romboide = base * altura
		return S;
	}
	
	float trapezio(float A, float B, float C){
		float S;
		S = ((A + B)/2)* C;
		return S; 
	}
	
