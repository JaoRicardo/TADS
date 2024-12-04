public class teste {
    
    public static void main(String[] args) {
        
        Produto produto = new Produto("Maionese", 122, 34.9f);
        Cliente cliente = new Cliente("12345678", "Rua amém", "Joao", "(66) 99999-9999", "joaoj@gmail", "Chato pá porra");
        Garcom garcom = new Garcom(12, "888", "Oi, como cê tá?", "66 88888-8888");
        
        Pedido pedido = new Pedido(cliente, produto, garcom, 12);


    }
}
