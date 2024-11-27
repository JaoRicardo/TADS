public  class Pedido{

    private Cliente cliente;
    private Produto produto;
    private Garcom garcom;
    private int mesa;

    public Pedido(Cliente cliente, Produto produto, Garcom garcom, int mesa) {
        super();
        this.cliente = cliente;
        this.produto = produto;
        this.garcom = garcom;
        this.mesa = mesa;
    }
    public Pedido() {
        super();
    }
    
    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    public Produto getProduto() {
        return produto;
    }

    public void setProduto(Produto produto) {
        this.produto = produto;
    }

    public Garcom getGarcom() {
        return garcom;
    }

    public void setGarcom(Garcom garcom) {
        this.garcom = garcom;
    }

    public int getMesa() {
        return mesa;
    }

    public void setMesa(int mesa) {
        this.mesa = mesa;
    }

    
}