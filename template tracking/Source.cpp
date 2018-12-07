#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <fstream>
using namespace cv;
using namespace std;


int main()
{
	ofstream myfile;
	myfile.open("ue4.txt");

	Mat image;
	image = imread("version4.png", CV_LOAD_IMAGE_COLOR);

	if (!image.data)                           
	{
		cout << "zurgaa unshij chadaagui" << std::endl;
		return -1;
	}

	ifstream myReadFile;
	int counterr = 0;
	myReadFile.open("version4.txt");
	char output[100] = { '0' };
	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {

			
			myReadFile >> output;
			cout<<"locations.Add(FVector("<< output << ", ";
			myfile <<"locations.Add(FVector(" << output << ", ";
			myReadFile >> output;
			cout<< output <<", 0));"<< endl;
			myfile << output << ", 0));" << endl;
			counterr++;
			//myfile << output<<endl;

		}
	}
	myReadFile.close();
	myfile.close();


	//namedWindow("Zurag", WINDOW_AUTOSIZE);
	//imshow("ZURAG", image);                  

	//waitKey(0);  
	/*
	int temp = 0;
	int z = 0;
	for (int i = 0; i < image.rows; i++)
	{
		for (int j = 0; j < image.cols; j++)
		{
			Vec3b bgrPixel = image.at<Vec3b>(i, j);
			if (bgrPixel[0] < 100) {
			//	if (z != i) {
					cout << bgrPixel << " i=<" << i << " j=" << j << "---";
					myfile << i << " " << j << endl;
					temp++;
					z = 1;
			//	}
			}


		}
		cout << endl;
	}
	cout << "niit tsegiin too:" << temp << endl;

	myfile.close();
	*/
	return 0;
}