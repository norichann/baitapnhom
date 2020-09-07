Text Editor

A Basic text-editing app which allows you to  Bold / Unbold an individual text.

Ubuntu and Qt version

Compiled and Tested on Ubuntu 18.04 with Qt 5

Installation

1. Install qt5:
	$ sudo apt-get install qt5-default

2. Go to folder "Task-Nymika", compile Task-Nymika.pro and make:
	$ cd Task-Nymika
	$ qmake Task-Nymika.pro
	$ make
Ignore the warnings. 

How to run the code?

Execute file Task-Nymika in folder "Task-Nymika"
	$ ./Task-Nymika

What has been done?

1. CREATING A NEW PROJECT : In QT Creator, a QT widgets application is created.

``File -> New File or Project -> Application -> QT Widgets Application (Choose) -> Name & Location (Next) -> Desktop Kit (Next) -> Classname: MyTextEditor (Next) -> Finish``

2. DESIGNING UI : Open `mytexteditor.ui` file in QT Creator. Drag and Drop a "Text Edit" Input Widget into the editor area. In order to have the text edit widget occupy the whole screen, we add setCentralWidget to the main window.

``this->setCentralWidget(ui->textEdit);``

Press Ctrl+S (or Cmd+S) to save your changes.

3. Add "Text" in menu bar and "Bold" in it. An action is created. Drag the action onto the task bar. Tick checkable for the action.

4. To add an icon for "Bold" : 

``Text-Editor -> add New -> Qt -> Qt Resource File (Choose) -> Name (AppResources) & Location (inside Text-Editor) (Next) -> Finish.``

In the `appresources.qrc` file in "Resources", add a prefix `\Images` and add a file (bold.png) inside Images.

"Edit action" of "Bold Action" -> Icon (select). 

5. Right Click the action -> "Go to Slot" -> Triggered (bool) (Ok). Function "on_actionBold_triggered(bool checked)" is created in "mytexteditor.cpp" . Add this line inside the function. 

``checked ? ui->textEdit->setFontWeight(QFont::Bold) : ui->textEdit->setFontWeight(QFont::Normal);``
 
8. Build and Run

Issues / Challenges ? 

1. To understand the working of checkable action.

Features 

1. Can bold / unbold a particular text.