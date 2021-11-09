#pragma once
namespace one {
	class Compte
	{
		public:
			Compte(int numC,char* nom,double s);
			bool retireArgent(double somme);
			void deposerArgent(double add);
			void consulterSolde();
			bool transfererArgent(Compte tmp,double som);
	    private:
			int numCompte;
			char* nomPropietaire;
			double solde;
	};
}
