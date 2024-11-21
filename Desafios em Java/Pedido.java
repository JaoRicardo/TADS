public  class Pedido{

    public String cliente;
    public String pruduto;
    public String garcom;
    public String mesa;
    
    public Pedido(String cliente, String pruduto, String garcom, String mesa) {
        this.cliente = cliente;
        this.pruduto = pruduto;
        this.garcom = garcom;
        this.mesa = mesa;
    }

    public String getCliente() {
        return cliente;
    }

    public void setCliente(String cliente) {
        this.cliente = cliente;
    }

    public String getPruduto() {
        return pruduto;
    }

    public void setPruduto(String pruduto) {
        this.pruduto = pruduto;
    }

    public String getGarcom() {
        return garcom;
    }

    public void setGarcom(String garcom) {
        this.garcom = garcom;
    }

    public String getMesa() {
        return mesa;
    }

    public void setMesa(String mesa) {
        this.mesa = mesa;
    }



}