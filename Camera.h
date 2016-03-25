
/*
 * This class represents the intel camera. 
 */
class Camera {

public:
	/*
	 * Constructor for the camera. Takes a string representing which port the camera is
	 */
	 Camera(String port);

	 /*
	  * Returns the raw point cloud data from the camera. 
	  */
	  float[][][] getData();

}