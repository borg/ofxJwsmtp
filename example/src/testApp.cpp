#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    int inPort = 143;
    int outPort = 2525;//jwsmtp::mailer::SMTP_PORT

    string usr= "username";
    string psw = "psw";


  
 jwsmtp::mailer mail("Mr Borg<from@me.to>", "Herr Anka<toAddress@action.com>", "Open email subject", "Body email","smpt.server.com", outPort, false);

    string imgPath = ofToDataPath("attach.png");
   // using a local file as opposed to a full path.
   mail.attach(imgPath);

   // add another recipient (carbon copy)
   //mail.addrecipient("someoneelse@somewhere.net", mailer::Cc);

   // set a new smtp server! This is the same as setting a nameserver.
   // this depends on the constructor call. i.e. in the constructor
   // If MXLookup is true this is a nameserver
   // If MXLookup is false this is an smtp server
   //mail.setserver("mail.somewherefun.com");
   // same again except using an IP address instead.
   //mail.setserver("192.168.0.1");

   // boost::thread thrd(mail);
   // thrd.join(); // optional
   // or:-

   // Use authentication
   mail.username(usr);
   mail.password(psw);
   // LOGIN authentication by default
   // if you want plain as opposed to login authentication
   //mail.authtype(jwsmtp::mailer::PLAIN);

    mail.send();
   //mail.operator()();
   cout << mail.response() << "\n";
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
