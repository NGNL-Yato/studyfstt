package Exercice_3;
import java.util.*;
import java.util.ArrayList;

public class Magasins {
	private static ArrayList<Article> ListProducts = new ArrayList<>();
	public double Fond_Disponible = 100000;
	public static void main (String []Args) throws InterruptedException {
        Magasins magasin = new Magasins();
		Thread.sleep(500); // sleep timer for simulation
		System.out.println("*************************************************");
		System.out.println("Bonjour Monsieur le gérant de stock...");
		Thread.sleep(1000); 
		System.out.println("Que voulez-vous Acheter ?");
		magasin.AcheterProduit();
		System.out.print('\u000C');
		System.out.println("*************************************************");
		boolean Journee = false;
		Scanner sc = new Scanner (System.in);
		while (!Journee) {
			System.out.println("Que voulez-vous faire?");
			Thread.sleep(500);
			System.out.println("1-Lancer une commande\n2-Changer le prix d'une commande");
			System.out.println("3-Vérfier le stock\n4-Rajouter un produit dans le stock");
			System.out.println("5-Terminer la journée\n6-Verifier rendement\n7-Promotion\n8-Restock");
			int Choices = sc.nextInt();
			if(Choices == 1) {
				magasin.LancerCommande();
			} else if(Choices == 2) {
				magasin.ChangerPrix();
			} else if (Choices == 3) {
				magasin.VerifyProducts();
			} else if (Choices == 4) {
				magasin.AcheterProduit();
			} else if (Choices == 5) {
				Journee = true;
			} else if (Choices == 6) {
				magasin.calculateProfit();
			} else if (Choices == 7) {
				magasin.managePromotion();
			} else if (Choices == 8) {
				magasin.Restock();
			}else {
				System.out.println("Invalid Input");
			}
			System.out.println("*************************************************");
		}
		System.out.println("Bonne journée");
	}
    public void managePromotion() {
        ListIterator<Article> It = ListProducts.listIterator();
        while (It.hasNext()) {
            Article article = It.next();
            if (article instanceof Solde) {
                Solde soldeArticle = (Solde) article;
                Scanner sc = new Scanner(System.in);
                System.out.println("Est-ce une promotion ou une terminaison de promotion pour " + article.ProductName() + "?");
                System.out.println("1-Promo\n2-Terminer la promotion");
                int choice = sc.nextInt();
                if (choice == 1) {
                    System.out.println("Tapez le montant de la promotion (max = 0.3):");
                    double promotion;
                    do {
                    promotion = sc.nextDouble();
                    soldeArticle.lanceSolde(promotion);
                    } while (promotion >= 0.3);
                } else if (choice == 2) {
                    System.out.println("Tapez le montant pour terminer la promotion (max = 0.3):");
                    double prixNormal;
                    do {
                    	prixNormal = sc.nextDouble();
                    	soldeArticle.termineSolde(prixNormal);
                    } while (prixNormal >= 0.3);
                } else {
                    System.out.println("Option non valide");
                }
            }
        }
    }
	public void AcheterProduit () throws InterruptedException {
		boolean commande = true;
		int Choice;
		Scanner sc;
		while (commande) {
			Thread.sleep(500); 
			System.out.println("Fond Disponible :"+Fond_Disponible);
			System.out.println("Choisir le Type de produit :\n1-Electromenager\n2-Primeur\n3-Stop");
			sc = new Scanner (System.in);
			Choice = sc.nextInt();
			if(Choice == 1 || Choice == 2) {
				System.out.println("Entrez le nom du produit ... ");
				String  ProductName = sc.next();
				Thread.sleep(500);
				double BuyingPrice;
				double SellingPrice;
				do {
				System.out.println("Entrez le prix d'achat du produit ... ");
				BuyingPrice = sc.nextDouble();
				Thread.sleep(500);
				System.out.println("Entrez le prix de vente du produit ... ");
				SellingPrice = sc.nextDouble();
				Thread.sleep(500);
				if (BuyingPrice > SellingPrice) {
					System.out.println ("Revoir prix ... Prix achat supérieur au prix de vente ... ");
				}
				}while (BuyingPrice > SellingPrice);
				System.out.println("Entrez le fournisseur du produit ... ");
				String  FournisseurName = sc.next();
				Thread.sleep(500);
				System.out.println("Entrez la quantité commandé ... ");
				int  ProductQuantity = sc.nextInt();
				Thread.sleep(500);
				if(Fond_Disponible >= (BuyingPrice * ProductQuantity)) {
					if(Choice == 1) {				 
						ListProducts.add(new ArticleElectromenager(ProductQuantity,BuyingPrice,SellingPrice,ProductName,FournisseurName));
					} else {
						ListProducts.add(new ArticlePrimeur(ProductQuantity,BuyingPrice,SellingPrice,ProductName,FournisseurName));
					}
					Fond_Disponible -= (BuyingPrice * ProductQuantity);
				} else {
					System.out.println("Fond insuffisant, Veuillez Recommencer le Formulaire ");
				}
			} else if (Choice == 3) {
				System.out.println("You choosed the new Stock ...Now it's time to sell items !!!");
				commande = false;
				Thread.sleep(1000); 
			} else {
				System.out.println("Invalid Input, try again ...");
			}
		}
	}
	public void VerifyProducts () {
		System.out.println("*************************************************");
		ListIterator<Article> It = ListProducts.listIterator();
		while (It.hasNext()) {
			System.out.println(It.next().toString());
		}
	}
	public void Restock () {
		 ListIterator<Article> It = ListProducts.listIterator();
	        Scanner sc = new Scanner(System.in);
	        System.out.println("Choisissez un produit à réapprovisionner :");
	        while (It.hasNext()) {
	            System.out.println(It.next().ProductName());
	        }
	        int choice = sc.nextInt();
	        boolean found = false;
	        for (Article article : ListProducts) {
	            if (article.getID() == choice) {
	                found = true;
	                if (article instanceof ArticlePrimeur) {
	                	ArticlePrimeur vendablePiece = (ArticlePrimeur) article;
	                    System.out.println("Entrez la quantité à réapprovisionner :");
	                    int quantity = sc.nextInt();
	                    vendablePiece.remplirStock(quantity);
	                    Fond_Disponible -= (vendablePiece.getprixAchat())*quantity;
	                    System.out.println("Réapprovisionnement effectué pour " + article.getnom() + "\nNouveau stock : " + vendablePiece.getstock());
	                } else {
	                	ArticleElectromenager vendablePiece = (ArticleElectromenager) article;
	                    System.out.println("Entrez la quantité à réapprovisionner :");
	                    int quantity = sc.nextInt();
	                    vendablePiece.remplirStock(quantity);
	                    Fond_Disponible -= (vendablePiece.getprixAchat())*quantity;
	                    System.out.println("Réapprovisionnement effectué pour " + article.getnom() + "\nNouveau stock : " + vendablePiece.getstock());	                }
	            	}
	            break;
	        }
	        if (!found) {
	            System.out.println("Produit non disponible, veuillez choisir à nouveau.");
	        }
	}
	public void LancerCommande () throws InterruptedException {
		ListIterator<Article> It = ListProducts.listIterator();
		while (It.hasNext()) {
			System.out.println(It.next().ProductName ());
		}
		Thread.sleep(1000);
		System.out.println("Choisissez un produit disponible :");
		Scanner sc = new Scanner(System.in);
		int Choice = sc.nextInt();
		boolean Loop = false;
		int Quantitywanted;
		Article ChoosenProduct;
		String Confirmed;
		while (!Loop) {
			boolean found = false;
	        for (Article article : ListProducts) {
	            if (article.getID() == Choice) {
	                found = true;
	                ChoosenProduct = article;
	                int stock;
                    if (ChoosenProduct instanceof ArticlePrimeur) {
                        ArticlePrimeur P1 = (ArticlePrimeur) ChoosenProduct;
                        stock = P1.getstock();
                    } else {
                        ArticleElectromenager E1 = (ArticleElectromenager) ChoosenProduct;
                        stock = E1.getstock();
                    }
	                System.out.println("Quantité restante : "+stock);
	                do {
	                System.out.println("Combien voulez-vous acheter ?");
	                Quantitywanted = sc.nextInt();
	                Thread.sleep(1000);
	                System.out.print("Cela va vous coûter : ");
	                Thread.sleep(500);
	                System.out.println((Quantitywanted) * (ChoosenProduct.getprixVente()));
	                boolean C = true;
	                if (Quantitywanted < stock) {
	                do {
	                    System.out.println("Voulez-vous Confirmer ? (Yes/No)");
	                    Confirmed = sc.next();
	                    if (Confirmed.equalsIgnoreCase("yes")) {
	                        if (ChoosenProduct instanceof ArticlePrimeur) {
	                            ArticlePrimeur primeurProduct = (ArticlePrimeur) ChoosenProduct;
	                            primeurProduct.vendre(Quantitywanted);
	                        } else if (ChoosenProduct instanceof ArticleElectromenager) {
	                            ArticleElectromenager electromenagerProduct = (ArticleElectromenager) ChoosenProduct;
	                            electromenagerProduct.vendre(Quantitywanted);
	                        }
	                        Fond_Disponible += (Quantitywanted) * (ChoosenProduct.getprixVente());
	                        Thread.sleep(1000);
	                        C = true;
	                        System.out.println("Merci de votre Achat ...");
	                    } else if (Confirmed.equalsIgnoreCase("no")) {
	                        Thread.sleep(1000);
	                        System.out.println("Commande annulée ...");
	                        C = true;
	                    } else {
	                        System.out.println("Invalid Input, try again ...");
	                    }
		            } while (!C);
		            Loop = true;
		            break;
	                } else {
	                	System.out.println("Quantité invalide");
	                }
	                } while (Quantitywanted < stock);
	            }
	        }
	        if (!found) {
	            System.out.println("Produit non disponible, choisissez à nouveau ...");
	        }
		}
	}
    public void calculateProfit() {
        System.out.println("Profit total : " + Fond_Disponible);
    }
	public void ChangerPrix () throws InterruptedException {
		ListIterator<Article> It = ListProducts.listIterator();
		while (It.hasNext()) {
			System.out.println(It.next().ProductName ());
		}
		Thread.sleep(1000);
		System.out.println("Choisissez un produit disponible :");
		Scanner sc = new Scanner(System.in);
		int Choice = sc.nextInt();
		boolean Loop = false;
		Article ChoosenProduct;
		double Price;
		while (!Loop) {
	        boolean found = false;
	        for (Article article : ListProducts) {
	            if (article.getID() == Choice) {
	                found = true;
	                ChoosenProduct = article;
	                System.out.println("Est-ce une promotion ou un changement de prix ?\n1-Promo\n2-Augmentation");
	                int changeType = sc.nextInt();
	                Thread.sleep(500);
	                System.out.print("Tapez le montant à");
	                if (changeType == 1) {
	                    System.out.println("reduire");
	                    Price = sc.nextDouble();
	                    if (ChoosenProduct instanceof ArticlePrimeur) {
	                        ArticlePrimeur primeurProduct = (ArticlePrimeur) ChoosenProduct;
	                        primeurProduct.lanceSolde(Price);
	                    } else if (ChoosenProduct instanceof ArticleElectromenager) {
	                        ArticleElectromenager electromenagerProduct = (ArticleElectromenager) ChoosenProduct;
	                        electromenagerProduct.lanceSolde(Price);
	                    }
	                } else if (changeType == 2) {
	                    System.out.println(" ajouter");
	                    Price = sc.nextDouble();
	                    if (ChoosenProduct instanceof ArticlePrimeur) {
	                        ArticlePrimeur primeurProduct = (ArticlePrimeur) ChoosenProduct;
	                        primeurProduct.termineSolde(Price);
	                    } else if (ChoosenProduct instanceof ArticleElectromenager) {
	                        ArticleElectromenager electromenagerProduct = (ArticleElectromenager) ChoosenProduct;
	                        electromenagerProduct.termineSolde(Price);
	                    }
	                } else {
	                    System.out.println("\nInvalid Value");
	                }
	                Loop = true;
	                break;
	            }
	        }
	        if (!found) {
	            System.out.println("Produit non disponible, choisissez à nouveau ...");
	        }
	    }
	}
}
