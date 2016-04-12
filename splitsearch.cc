



main -

	int numeroLinee = il numero di caratteri escape ('\n') nel file di input per conoscere il 		numero di linee e di conseguenza il numero di dati

	int lineaInizio = 1;
	int lineaFine = numeroLinee;

	int livelloDiProfondita = -1;
	int posizioneLetta = 0;

	fd lettura e scrittura figlio detro
	fd lettura e scrittura figlio sinitro


	splitSearch();



splitSearch - 

    livelloDiProfondita ++;
	
    if (lineaInizio == lineaFine) 
		vuol dire "sono l'ultimo figlio, l'ultimo erede con una linea soltanto da 			analizzara?"
		analizza(), che in pratica controlla il dato contenuto nella riga-posizione corrente e in 			caso sia uguale a quello cercato in input, allora scrive sulla pipe. Scriva la 			riga-posizione. Se non fosse uguale, scrivi -1

    else 
	apro due pipe, con figlio destro e sinistro

	lineaFine = lineaFine / 2;
	creo figlio destro 

	lineaFine = lineaFine * 2
	lineaInizio  = lineaFine / 2 + 1;
	e figlio sinistro

	if (codice padre)

	|while(posizioneLetta != -1)
	 |mi metto in ascolto sulla pipe destra. tutti i valori che leggo li scrivo al padre (tranne il -1), 		 |ma se if (livelloDiProfondita == 0), che vuol dire che sono adamo,scrivi i risultati in un file di 		 |output
	 |quando sulla pipe verrà scritto il valore (riga-posizione) -1, vuol dire che là sotto (il figlio e 		 |discendenti vari) si è finito di lavorare. chiudo pipe e passo alla pipe sinistra
	 |

	|posizioneLetta = 0;

	|while(posizioneLetta != -1)
	 |mi metto in ascolto sulla pipe sinistra. tutti i valori che leggo li scrivo al padre (tranne il 	   |-1),maseif(livelloDiProfondita == 0),che vuol dire che sono adamo,scrivi i risultati in un file di 		 |output
	 |quando sulla pipe verrà scritto il valore (riga-posizione) -1, vuol dire che là sotto (il figlio e 		 |discendenti vari) si è finito di lavorare. chiudo pipe e e scrivo sulla pipe che mi collega al 	  |padre - 1

	if codice figlio () 

	|splitSearch()
