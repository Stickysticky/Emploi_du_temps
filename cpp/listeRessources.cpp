/**
 * @file listeRessources.cpp
 * @brief Definition des methodes de la classe listeRessources
 * @author Adrien Couchot
 * @version 1.0
 */

#include "../lib/listeRessources.h"
#include <cstdlib>

/**
@brief Constructeur de l'objet listeRessources
 */
listeRessources::listeRessources()
{}

//Concerne les professeurs
/**
  @brief Ajoute un professeur
  @param[in] p - un objet de type professeur
*/
void listeRessources::ajouterUnProfesseur(professeur p)
{
    d_listeDesProfesseurs.push_back(p);
}

/**
  @brief Renvoie le nombre de professeurs
  @return le nombre de professeur
*/
int listeRessources::nombreDeProfesseurs() const
{
    return d_listeDesProfesseurs.size();
}

/**
  @brief Renvoie le professeur dont le numero est entre en parametre
  @param[in] i - le numero du professeur
  @return le professeur dont le numero est entre en parametre
*/
professeur* listeRessources::professeurNumero(int i)
{
	if (i<d_listeDesProfesseurs.size()) return &d_listeDesProfesseurs[i];
	return &d_listeDesProfesseurs[d_listeDesProfesseurs.size()]; //Doit faire crash
}

/**
  @brief Renvoie la position du professeur dont le nom est entre en parametre
  @param[in] nom - le nom du professeur
  @return la position du professeur dont le nom est entre en parametre
*/
int listeRessources::positionDuProfesseur(std::string nom) const
{
	int i=0;
	while (i<d_listeDesProfesseurs.size() && d_listeDesProfesseurs[i].nom() != nom) i++;
	if (i==d_listeDesProfesseurs.size()) return -1;
	return i;
}

/**
  @brief Affiche les professeurs
  @param[in, out] ost - un flux de sortie
*/
void listeRessources::afficherLesProfesseurs(std::ostream & ost) const
{
	ost<<"Liste des professeurs :"<<std::endl;
	if (!d_listeDesProfesseurs.size()) ost<<"...Aucun professeur enregistre"<<std::endl;
	else for (int i=0; i<d_listeDesProfesseurs.size();++i)
	{
		ost<<d_listeDesProfesseurs[i]<<std::endl;
	}
}

//G�n�ral
/**
@brief Redefinition de l'operateur <<
@param[in] l - un objet de type listeRessources
@param[in, out] ost - un flux de sortie
@return ost - un flux de sortie
 */
std::ostream& operator<<(std::ostream & ost, const listeRessources & l)
{
	system("cls");
	ost<<"Liste des ressources"<<std::endl;
	ost<<"Professeurs :"<<std::endl;
	if (!l.d_listeDesProfesseurs.size()) ost<<"...Aucun professeur enregistre"<<std::endl;
	else for (int i=0; i<l.d_listeDesProfesseurs.size();++i)
	{
		ost<<l.d_listeDesProfesseurs[i]<<std::endl;
	}
	/*ost<<"Salles :"<<std::endl;
	if (!l.l.d_listeDesSalles.size()) ost<<"...Aucune salle enregistree"<<std::endl;
	else for (int i=0; i<l.d_listeDesSalles.size();++i)
	{
		ost<<l.d_listeDesSalles[i]<<std::endl;
	}
	ost<<"Formations :"<<std::endl;
	if (!l.d_listeDesFormations.size()) ost<<"...Aucune formation enregistree"<<std::endl;
	else for (int i=0; i<l.d_listeDesFormations.size();++i)
	{
		ost<<l.d_listeDesFormations[i]<<std::endl;
	}**/
	ost<<std::endl;
}
