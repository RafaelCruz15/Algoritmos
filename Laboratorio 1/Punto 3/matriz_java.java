public class matriz {
    
    private static int[][] producto(int A[][], int B[][]){
        int suma = 0;
        int result[][] = new int[A.length][B.length];
        for(int i = 0; i < A.length; i++){
            for(int j = 0; j < B.length; j++){
                suma = 0;
                for(int k = 0; k < B.length; k++){
                        suma += A[i][k] * B[k][j];
                }
                result[i][j] = suma;
            }
        }
        return result;
    }

    private static double promedio(double t_algo[]){
        double suma = 0;
        for (int i = 0; i < t_algo.length; i++) {
            suma += t_algo[i];
        }
        return (suma/(t_algo.length));
    }
    
    public static void main(String[] args) {
        
        int i = 0, j = 0, k = 0, l = 0;
        
        // arreglo de tamaño n = 10, 20, 30, 40, ... , 100
        int n [] = new int[10];
        int a = 10;
        for (i = 0; i < 10; i++) {
            n[i] = a;
            a = a + 10;
            //System.out.println(n[i]);
        }
        
        //almacena los valores para cada n
        double t_50 [] = new double [15];
        double t_100 [] = new double [15];
        double t_150 [] = new double [15];
        double t_200 [] = new double [15];
        double t_250 [] = new double [15];
        double t_300 [] = new double [15];
        double t_350 [] = new double [15];
        double t_400 [] = new double [15];
        double t_450 [] = new double [15];
        double t_500 [] = new double [15];
        
        //contadores
        int cont_50 = 0;
        int cont_100 = 0;
        int cont_150 = 0;
        int cont_200 = 0;
        int cont_250 = 0;
        int cont_300 = 0;
        int cont_350 = 0;
        int cont_400 = 0;
        int cont_450 = 0;
        int cont_500 = 0;
        
        // arreglo de promedios
        double t_final [] = new double [10];
        
        // usamos tamaños de n = 10, 20, 30, 40, ... , 100
        for (i = 0; i < 15; i++) {            
            for (j = 50; j <= 500; j+=50) {
                //mat1
                int mat1[][] = new int[j][j];
                for (k = 0; k < j; k++) {
                    for (l= 0; l < j; l++) {
                        mat1[k][l] = 1;
                    }
                }
                
                //mat2
                int mat2[][] = new int[j][j];
                for (k = 0; k < j; k++) {
                    for (l= 0; l < j; l++) {
                        mat2[k][l] = 2;
                    }
                }
                
                //multiplicacion de matrices
                int solucion [][];
                
                long startTime = System.nanoTime();
                solucion = producto(mat1, mat2);
                long endTime = System.nanoTime();
                double tiempo1 = (endTime - startTime)/1000000;
                double tiempo = tiempo1/1000;
                //System.out.println("El tiempo de ejecucion para n = " + j + " es " + tiempo + " segundos");    
                
                //pregunta donde esta j para almacenar el tiempo de acuerdo a n
                if (j == 50){
                    t_50[cont_50] = tiempo;
                    cont_50++;
                } else if( j == 100){
                    t_100[cont_100] = tiempo;
                    cont_100++;
                } else if( j == 150){
                    t_150[cont_150] = tiempo;
                    cont_150++;
                } else if( j == 200){
                    t_200[cont_200] = tiempo;
                    cont_200++;
                } else if( j == 250){
                    t_250[cont_250] = tiempo;
                    cont_250++;
                } else if( j == 300){
                    t_300[cont_300] = tiempo;
                    cont_300++;
                } else if( j == 350){
                    t_350[cont_350] = tiempo;
                    cont_350++;
                } else if( j == 400){
                    t_400[cont_400] = tiempo;
                    cont_400++;
                } else if( j == 450){
                    t_450[cont_450] = tiempo;
                    cont_450++;
                } else if( j == 500){
                    t_500[cont_500] = tiempo;
                    cont_500++;
                }
                
                //sacamos el promedio y almacenamos en un nuevo arreglo
                
                t_final [0] = promedio(t_50);
                t_final [1] = promedio(t_100);
                t_final [2] = promedio(t_150);
                t_final [3] = promedio(t_200);
                t_final [4] = promedio(t_250);
                t_final [5] = promedio(t_300);
                t_final [6] = promedio(t_350);
                t_final [7] = promedio(t_400);
                t_final [8] = promedio(t_450);
                t_final [9] = promedio(t_500);
                
//              muestra la matriz
//              for(int x = 0; x < solucion.length; x++) { 
//                  for(int y = 0; y < solucion.length; y++) { 
//                      System.out.print(solucion[x][y] + " "); 
//                  } 
//                  System.out.println(); 
//              } 
            }
        }
        
        for (i = 0; i < 10; i++) {
            System.out.println("El tiempo promedio de ejecucion para n = " + n[i] + " es " + t_final[i] + " segundos");    
        }
    }
}
