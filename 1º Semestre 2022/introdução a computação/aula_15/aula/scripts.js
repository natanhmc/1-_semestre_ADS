/*
var nome='joão';
imprimir(nome);
var numero=12345;
imprimir(numero);

function imprimir(valor){
    console.log(`o conteudo é ${valor} e o tipo ${typeof(valor)}`);
}




function calcular(oper, num1, num2){
    var total = 0;
    switch (oper) {
        case '+':
            total = num1+num2;
            break;
         case '-':
            total = num1-num2;
            break;
        case '*':
            total = num1*num2;
            break;
        case '/':
            total = num1/num2;
            break;
    
        default:
            total= undefined;
            break;
    }
    return total;
}
*/

//arrays e for
var carros = ['fiat','gm','ttt'];
console.log(carros);

for(i=0;i<carros.length;i++){
    console.log('o carro é ' + carros[i]);
}


function tabuadaDo(numero){
    for(i=0;i<=10;i++){
        console.log(`${numero} * ${i} = ${numero*i};`);
    }
}

var phonnes= '522455245,524544,4524545,525445';
var arrphonnes = phonnes.split(',');
console.log(arrphonnes);

var binarios = '10001111001';
var arrBinario = binarios.split('');
console.log(arrBinario);
for(i=0;i<arrBinario.length;i++){
    console.log('\n',arrBinario[i]);
}