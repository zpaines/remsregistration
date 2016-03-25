/*
 * This class contains an algorithm for filtering the raw data from the camera. 
 */
 class PointFilter {
 public:
 	/*
 	 * The constructor takes in an instance of the Camera class. 
 	 */
 	PointFilter(Camera camera);

 	/*
 	 * The get data function pulls the raw data from the camera and returns a filtered version.
 	 * The intensity param tells the filter what percent of particles to filter out. 
 	 */
 	 float[][][] getData(int intesity);
 }