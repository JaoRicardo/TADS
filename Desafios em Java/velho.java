public class velho extends Imovel {
    public float desconto;

    public velho(float desconto, String endereco, float preco){
        super(endereco, preco);
        this.desconto = desconto;
    }

    public void setDesconto(float desconto){
        this.desconto = desconto;
    }

    public float getDesconto(){
        return desconto;
    }
}
