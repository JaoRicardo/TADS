public class Produto{
    public String nome;
    public int quantidade;
    public float preco;
    public String fornecedor;



    public Produto(String nome, int quantidade, float preco, String fornecedor){
        super();
        this.nome = nome;
        this.quantidade = quantidade;
        if(preco<0){
            System.out.println("Erro: preço invalido");
        }else{
            this.preco = preco;  
        }
        this.fornecedor = fornecedor;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public float getPreco() {
        return preco;
    }

    public void setPreco(float preco) {
        if(preco<0){
            System.out.println("Erro: preço invalido");
        }else{
            this.preco = preco;  
        }
    }

    public String getFornecedor() {
        return fornecedor;
    }

    public void setFornecedor(String fornecedor) {
        this.fornecedor = fornecedor;
    }
}