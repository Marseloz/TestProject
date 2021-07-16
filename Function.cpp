#include "iostream"
#include "QFile"
#include "vector"
#include "QDebug"
#include "Function.h"

using namespace std;
void merge_file_json(QString path){
    path.remove(".json");
    vector <QFile*> file;
    for(int i=0; QFile::exists(path+QString::number(i)+".json"); i++){
        file.push_back(new QFile);
        file.back()->setFileName(path+QString::number(i)+".json");
    }
    if(file.size()>1){
        QFile outFile("out_json.json");
        if(outFile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
            for(int i=0; i<file.size(); i++){
                file[i]->open(QIODevice::WriteOnly);
                QTextStream stream(file[i]);
                QString str = stream.readAll();
                if((i+1)!=file.size()){//если файл не последний
                   str.chop(1);
                }
                else if(i){//если файл не первый
                   str.remove(0, 1);
                }
                stream<<str;
                file[i]->close();
            }
        }
    }
    else{
        qDebug()<<"Error\n";
    }

}

//void merge_file_csv(QString &path){

//}
