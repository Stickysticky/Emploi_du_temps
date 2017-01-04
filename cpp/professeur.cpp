/**
 * @file professeur.cpp
 * @brief Definition des methodes de la classe professeur
 * @author Adrien Couchot
 * @version 1.0
 */

#include "../lib/professeur.h"
#include "../lib/afficheurConsole.h"

/**
@brief Constructeur de l'objet professeur
@param[in] nom - une chaine de caractere representant le nom du professeur
 */
professeur::professeur(string nom):ressource{nom}
{
}
