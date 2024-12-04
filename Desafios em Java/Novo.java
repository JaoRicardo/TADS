public class Novo extends Imovel {
    private float precoExtra;

    public Novo(float precoExtra, String endereco, float preco) {
        super(endereco, preco);
        this.precoExtra = precoExtra;
    }

    public void setPrecoExtra(float precoExtra){
        this.precoExtra = precoExtra;
    }
    public float getPrecoExtra(){
        return precoExtra;
    }
}
