let hue = 0; 

function mudarCorBorda() {
    hue = (hue + 2) % 360; 
    document.querySelector('.Imagem-top').style.borderColor = `hsl(${hue}, 100%, 50%)`;
}

setInterval(mudarCorBorda, 5);