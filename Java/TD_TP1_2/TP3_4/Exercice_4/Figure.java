package Exercice_4;


public class Figure {
    private int abscisse;
    private int ordonnee;
    private int couleur;
    private static Figure[][] instances = new Figure[10][10]; 
    public Figure(int abscisse, int ordonnee, int couleur) {
        this.abscisse = abscisse;
        this.ordonnee = ordonnee;
        this.couleur = couleur;
        instances[abscisse][ordonnee] = this;
    }
    public Figure () {};

    public static Figure[][] getInstances() {
        return instances;
    }

    public static Figure[][] getInstancesOfType(Class<? extends Figure> type) {
        Figure[][] filteredInstances = new Figure[10][10];
        for (int i = 0; i < instances.length; i++) {
            for (int j = 0; j < instances[i].length; j++) {
                Figure figure = instances[i][j];
                if (figure != null && type.isInstance(figure)) {
                    filteredInstances[i][j] = figure;
                }
            }
        }
        return filteredInstances;
    }
    public String toString() {
        return "Figure [abscisse=" + abscisse + ", ordonnee=" + ordonnee + ", couleur=" + couleur + "]";
    }

    public static void main(String[] args) {
        Figure figure1 = new Figure(1, 2, 3);
        Carre carre1 = new Carre(4, 5, 6, 7);
        Rectangle rectangle1 = new Rectangle(8, 9, 10, 11, 12);
        System.out.println("All Figures:");
        displayInstances(Figure.getInstances());
        System.out.println("\nCarre Instances:");
        displayInstances(Figure.getInstancesOfType(Carre.class));
        System.out.println("\nRectangle Instances:");
        displayInstances(Figure.getInstancesOfType(Rectangle.class));
    }

    private static void displayInstances(Figure[][] instances) {
        for (Figure[] row : instances) {
            for (Figure figure : row) {
                if (figure != null) {
                    System.out.println(figure);
                }
            }
        }
    }
}