#include <iostream>
#include <sstream>
using namespace std;

class Producto{
private:
	int codigo;
	string nombre;
	int precioBase;
	float porcentajeDeGanancia;
	int cantidadVendida;
	int existencia;
	float pesoUnitario;
	int existenciaMinima;
public:
	
	Producto(){
	codigo = 0;
	nombre = "";
	precioBase = 0;
	porcentajeDeGanancia = 0;
	cantidadVendida = 0;
	existencia = 0;
	pesoUnitario = 0;
	existenciaMinima = 0;
	}
	
	Producto(int elCodigo, string elNombre, int elPrecioBase, float elPorcentajeDeGanancia, int laCantidaVendida, int laExistencia, float elPesoUnitario, int laExistenciaMinima){
	codigo = elCodigo;
	nombre = elNombre;
	precioBase = elPrecioBase;
	porcentajeDeGanancia = elPorcentajeDeGanancia;
	cantidadVendida = laCantidaVendida;
	existencia = laExistencia;
	pesoUnitario = elPesoUnitario;
	existenciaMinima = laExistenciaMinima;
	}
	
	int getCodigo(){
		return codigo;
	}
		
	void setCodigo(int elCodigo){
		codigo = elCodigo;
	}
		
	string getNombre(){
		return nombre;
	}
		
	void setNombre(string elNombre){
		nombre = elNombre;
	}
		
	int getPrecioBase(){
		return precioBase;
	}
		
	void setPrecioBase(int elPrecioBase){
		precioBase = elPrecioBase;
	}
		
	float getPorcentajeDeGanancia(){
		return porcentajeDeGanancia;
	}
		
	void setPorcentajeDeGanancia(float elPorcentajeDeGanancia){
		porcentajeDeGanancia = elPorcentajeDeGanancia;
	}
	
	int getCantidadVendida(){
		return cantidadVendida;
	}
		
	void setCantidadVendida(int laCantidadVendida){
		cantidadVendida = laCantidadVendida;
	}
		
	int getExistencia(){
		return existencia;
	}
		
	void setExistencia(int laExistencia){
		existencia = laExistencia;
	}
		
	float getPesoUnitario(){
		return pesoUnitario;
	}
		
	void setPesoUnitario(float elPesoUnitario){
		pesoUnitario = elPesoUnitario;
	}
		
	int getExistenciaMinima(){
		return existenciaMinima;
	}
		
	void setExistenciaMinima(int laExistenciaMinima){
		existenciaMinima = laExistenciaMinima;
	}
		
	string toString(){
		stringstream s;
		s<<"Codigo: "<<codigo<<endl;
		s<<"Nombre: "<<nombre<<endl;
		s<<"Porcentaje de ganancia: "<<porcentajeDeGanancia<<endl;
		s<<"Precio de venta: "<<PrecioDeVenta<<endl;
		s<<endl;
			
		return s.str();
	}
		
	~Producto(){}

};
	
class SuperContenedorV{
private:
	Producto productos[200];
	int cantidadArticulos;
	string nombre;
public:
	SuperContenedorV(string elNombre){
		cantidadArticulos = 0;
		nombre = elNombre;
	}
		
	void ingresarProducto(Producto producto, int posicion){
		for(int i = 0; i<=cantidadArticulos;i++){
			if(i==posicion){
			productos[i] = producto;
			}
		}
		cantidadArticulos+=1;
	}
	
	void eliminaElementoEnPosicion(int posicion){   
		if (posicion < cantidadArticulos){
			for (int i = posicion; i < cantidadArticulos-1; i++){
				productos[i]=productos[i+1]; 
				cantidadArticulos--;
			}
		}
	}
			
	void eliminarProductoPorSu(int codigo){
		int i=0;
		while(i < cantidadArticulos){
			if(productos[i].getCodigo()==codigo){
			eliminaElementoEnPosicion(i);
			}
			i++;
		}
		}
	string obtenerProductoDeMayorValor(){
		int posicionMayor=0;
		for(int i=0;i<cantidadArticulos;i++){
			if(productos[i].getPrecioDeVenta()>productos[posicionMayor].getPrecioDeVenta()){
				posicionMayor=i;
			}
		}
		return productos[posicionMayor].toString();
	}
	
	string obtenerProductoConMayorExistencia(){
		int posicionMayor=0;
		for(int i=0;i<cantidadArticulos;i++){
			if(productos[i].getExistencia()>productos[posicionMayor].getExistencia()){
				posicionMayor=i;
			}
		}
		return productos[posicionMayor].toString();
	}
		
	void ordenarProductoPorCodigo(){
		int posMenor;
		Producto aux; 
		
		for(int k = 0; k < cantidadArticulos-1; k++){
			posMenor = k; 
			for(int i = k+1; i < cantidadArticulos; i++) {
				if(productos[i].getCodigo() < productos[posMenor].getCodigo()){
				posMenor = i; 
			if(posMenor != k){
				aux = productos[posMenor];
				productos[posMenor] = productos[k];
				productos[k] = aux;
			} 
		} 
	}
	cout<<productos[k].toString();
	}
	}
	void imprimirTodosLosProductos(){
		for(int i = 0; i<cantidadArticulos;i++){
			cout<<productos[i].toString();
		}
	}
	
	void cantDeProductosBajosDeExistencia(){
		
	}
	
	void imprimirProductosBajosDeExistencia(){
		
	}
	int cuantosKgsSeHanVendidoEnGeneral(){
			int suma = 0;
			for (int i = 0; i < cantidadArticulos; i++){
				suma+= productos[i].getPesoUnitario();
		}
			return suma;	
	}
	void cuantosKgsSeHanVendidoDelProducto(){
		
	}
	void imprimProductosQueSonMasCostososQue(){
		
	}
	void cuantasUnidadesSeHanVendidoDelProducto(){
		
	}
	void costoDelInventario(){
		
	}
	void costoDeLasVentas(){
		
	}
	void valorDeLasVentas(){
		
	}
	void graficoDeVentasDeLos15ProductsMasVendidos(){
		
	}
	void graficoDeVentasDeLos15ProductsMenosVendidos(){
		
	}
	void promedioDeLosPreciosDeVenta (){
		
	}
	
};


int main(int argc, char *argv[]) {
	//string elCodigo, string elNombre, int elPrecioBase, float elPorcentajeDeGanancia, 
	//int laCantidaVendida, int laExistencia, float elPesoUnitario, int laExistenciaMinima
	string codigo, nombre;
	//int precioBase, cantidadVendida, existencia, existenciaMinima;
	//float pesoUnitario, porcentajeGanancia;
	
	Producto p1(234, "Manzana", 0.15,394,348,4394,439,3293);
	Producto p2(343, "Pera", 0.50, 200, 3400, 3400,30, 40);
	Producto p3(2433, "Pina", 0.10, 944,495,459,594,594);
	Producto p4(324, "Banano", 0.20,45,45,4,23,23);
	
	/*cout<<"Ingrese el código del producto: ";
	cin>>codigo;
	p1.setCodigo(codigo);
	cout<<"Ingrese el nombre del producto: ";
	cin>>nombre;
	p1.setNombre(nombre);
	cout<<"Ingrese el precio base: ";
	cin>>precioBase;
	p1.setPrecioBase(precioBase);
	cout<<"Ingrese el porcentaje de ganancia: ";
	cin>>porcentajeGanancia;
	p1.setPorcentajeDeGanancia(porcentajeGanancia);
	cout<<"Ingrese la cantidad vendida: ";
	cin>>cantidadVendida;
	p1.setCantidadVendida(cantidadVendida);
	cout<<"Ingrese la existencia del producto: ";
	cin>>existencia;
	p1.setExistencia(existencia);
	cout<<"Ingrese el peso unitario: ";
	cin>>pesoUnitario;
	p1.setPesoUnitario(pesoUnitario);
	cout<<"Ingrese la existencia minima: ";
	cin>>existenciaMinima;
	p1.setExistenciaMinima(existenciaMinima);
	cout<<endl;*/
	SuperContenedorV super("Perimercados");
	super.ingresarProducto(p1,0);
	super.ingresarProducto(p2,1);
	super.ingresarProducto(p3,2);
	super.ingresarProducto(p4,3);
	super.imprimirTodosLosProductos();
	
	cout<<"El producto de mayor precio es: "<<endl<<super.obtenerProductoDeMayorValor()<<endl;
	cout<<"El producto de mayor existencia es: "<<endl<<super.obtenerProductoConMayorExistencia()<<endl;
	cout<<"La suma de los kilogramos es: "<<endl<<super.cuantosKgsSeHanVendidoEnGeneral()<<endl;
	cout<<endl;
	super.ordenarProductoPorCodigo();
	//cout<<"Digite el codigo del producto que quiere eliminar: ";
	//cin>>codigo;
	//super.eliminarProductoPorSu();

	
	
	

	return 0;
}

