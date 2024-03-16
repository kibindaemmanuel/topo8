// Vous pouvez ajouter des actions pour les liens du menu ici
document.addEventListener("DOMContentLoaded", function() {
    // Par exemple, un message d'alerte pour le lien "Démarrer"
    const startLink = document.querySelector("a[href='#']");
    startLink.addEventListener("click", function(event) {
      event.preventDefault();
      alert("Démarrage du jeu...");
     
    });
  
   
  });


const audio = document.getElementById("Music");


function startMusic() {
  audio.play();
}


function toggleSound() {
  if (audio.paused) {
    audio.play();
  } else {
    audio.pause();
  }
}


document.addEventListener("DOMContentLoaded", startMusic);
