public class fibonacci {
    
    public static void main(String[] args) {
        System.out.println("SERIE DE FIBONACCI");
        int i = 0;
        long b = 1, c;
        long contador;
        
        int n = 400;
        
        //Tipo de dato: byte
        byte res_byte = 0;
        contador = 0;
        b = 1;
        c = 0;
        for (i = 0; i < n; i++) {
            c = res_byte + b;
            b = res_byte;
            res_byte = (byte) c;
            contador++;
            if (res_byte < 0){
                System.out.println("El tipo de dato byte entró a overflow con un n = " + contador);
                break;
            }
        }
        
        //Tipo de dato: short
        short res_short = 0;
        contador = 0;
        b = 1;
        c = 0;
        for (i = 0; i < n; i++) {
            c = res_short + b;
            b = res_short;
            res_short = (short) c;
            contador++;
            if (res_short < 0){
                System.out.println("El tipo de dato short entró a overflow con un n = " + contador);
                break;
            }
        }
        
        //Tipo de dato: int
        int res_int = 0;
        contador = 0;
        b = 1;
        c = 0;
        for (i = 0; i < n; i++) {
            c = res_int + b;
            b = res_int;
            res_int = (int) c;
            contador++;
            if (res_int < 0){
                System.out.println("El tipo de dato int entró a overflow con un n = " + contador);
                break;
            }
        }
        
        //Tipo de dato: long
        long res_long = 0;
        contador = 0;
        for (i = 0; i < n; i++) {
            c = res_long + b;
            b = res_long;
            res_long = c;
            contador++;
            if (res_long < 0){
                System.out.println("El tipo de dato long entró a overflow con un n = " + contador);
                break;
            }
        }       
    }    
}
