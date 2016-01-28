#include "ofApp.h"

#include "pqxx/pqxx"

#define DB_NAME "your_db"
#define DB_USER "your_user"
#define DB_PASS "your_password"
#define DB_HOST "your_host"
#define DB_PORT "5432"

//--------------------------------------------------------------
void ofApp::setup(){

    try
    {
        pqxx::connection connection( "dbname=" DB_NAME
                                     " user=" DB_USER
                                     " password=" DB_PASS
                                     " host=" DB_HOST
                                     " port=" DB_PORT );
        if ( connection.is_open() )
        {
            ofLog() << "Opened database successfully: " << connection.dbname() << std::endl;
        }
        else
        {
            ofLog( OF_LOG_ERROR ) << "Cannot open database" << std::endl;
        }
        connection.disconnect();
    }
    catch ( const std::exception &exc )
    {
        ofLog( OF_LOG_ERROR ) << "Database connect exception " << exc.what() << std::endl;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
