#include "../common/common.h"
#include <osgViewer/Viewer>
#include <osgDB/ReadFile>
#include <osgGA/GUIEventHandler>

#ifdef _DEBUG
#pragma comment(lib, "../Debug/commond.lib")
#else
#pragma comment(lib, "../Release/common.lib")
#endif


int main()
{
	osg::ref_ptr<osgViewer::Viewer> viewer = new osgViewer::Viewer;
	viewer->setSceneData(osgDB::readNodeFile("glider.osg"));
	viewer->run();

	return 0;
}