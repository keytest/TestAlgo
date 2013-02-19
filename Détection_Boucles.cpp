/*Algorithme qui permet de détecter une boucle dans une liste simplement chainée. */
/* Note : Une liste qui contient une boucle n’a pas de fin (il y a toujours un élément suivant).*/

function boolean hasLoop(Node startNode){
  Node currentNode = startNode;
  Node checkNode = null;
  int since = 0;
  int sinceScale = 2;
  do {
    if (checkNode == currentNode) return true;
    if (since >= sinceScale){
        checkNode = currentNode;
        since = 0;
        sinceScale = 2*sinceScale;
    }
    since++;
  } while (currentNode = currentNode.next());
  return false;
}
/* Quelles solutions pouvez vous proposer pour optimiser ce code ? */
/* Envoyer vos réponses à : key-note@keyconsulting.fr */
