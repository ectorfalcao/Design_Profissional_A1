// Função que altera a imagem da lâmpada com base no valor de sw(parâmetro)
function luz(sw) {
// Declara uma variável para armazenar o caminho da imagem
var img;
if (sw == 0)
// Se sw for igual a 0, significa que a lâmpada deve estar apagada
{img = "imagens/lampadaoff.gif"; // Define o caminho da imagem da lâmpada
}
else
// Caso contrário, sw é diferente de 0, então a lâmpada deve estar acesa
{
img = "imagens/lampadaon.gif"; // Define o caminho da imagem da lâmpada
}
document.getElementById('minhaImagem').src = img; // Altera o atributo src da imagem com id 'minhaImagem' para o novo caminho
}