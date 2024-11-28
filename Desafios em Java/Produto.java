public class Produto{
    public String nome;
    public int codigo;
    public float preco;



    public Produto(String nome, int codigo, float preco){
        super();
        this.nome = nome;
        this.codigo = codigo;
        if(preco<0){
            System.out.println("Erro: preço invalido");
        }else{
            this.preco = preco;  
        }
    }
    public Produto(){
        super();
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getcodigo() {
        return codigo;
    }

    public void setcodigo(int codigo) {
        this.codigo = codigo;
    }

    public void setPreco(float preco) {
        if(preco<0){
            System.out.println("Erro: preço invalido");
        }else{
            this.preco = preco;  
        }
    }
}