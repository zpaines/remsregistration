/*
 * This class defines a mesh. 
 */
 class Mesh {
 public:
 	/*
 	 * 
 	 */
 	Mesh(FILE mesh);

 	Triangle[] getTriangles();
 	float[][] getPoints();

 }