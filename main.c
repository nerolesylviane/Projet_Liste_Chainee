#include <stdio.h>
#include <stdlib.h>

// --- PARTIE 1 : LA STRUCTURE ---
// Imagine ceci comme un wagon du train
struct Node {
    int data;           // Le passager (la donnée)
    struct Node* prev;  // La porte vers l'arrière
    struct Node* next;  // La porte vers l'avant
};

// Fonction pour créer un nouveau wagon
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// --- PARTIE 2 : LES FONCTIONS ---

// Ajouter un wagon au début
void insertAtHead(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode; 
    *head = newNode;
}

// Afficher le train (dans les deux sens)
void printList(struct Node* node) {
    struct Node* last;
    printf("\nTrajet Aller (Sens normal) : \n");
    while (node != NULL) {
        printf("%d -> ", node->data);
        last = node;
        node = node->next;
    }
    printf("FIN\n");

    printf("Trajet Retour (Sens inverse) : \n");
    while (last != NULL) {
        printf("%d -> ", last->data);
        last = last->prev;
    }
    printf("DEBUT\n");
}

// --- PARTIE 3 : LE TEST (MAIN) ---
int main() {
    struct Node* head = NULL;

    // On ajoute des nombres à notre liste
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 30);

    // La liste sera : 30 -> 20 -> 10
    printList(head);

    return 0;
}

