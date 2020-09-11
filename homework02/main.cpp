#include <QDebug>
#include <QTextStream>
#include <QFile>
#include <QString>
#include <QList>
#include <iostream>
#include <QTextCodec>
#include <QCoreApplication>



namespace SK {
enum SortKind{
    col01    =   0x00000001<<0,         //!< 第1列
    col02    =   0x00000001<<1,         //!< 第2列
    col03    =   0x00000001<<2,         //!< 第3列
    col04    =   0x00000001<<3,         //!< 第4列
    col05    =   0x00000001<<4,         //!< 第5列
    col06    =   0x00000001<<5,         //!< 第6列
    col07    =   0x00000001<<6,         //!< 第7列
    col08    =   0x00000001<<7,         //!< 第8列
    col09    =   0x00000001<<8,         //!< 第9列
    col10    =   0x00000001<<9,         //!< 第10列
    col11    =   0x00000001<<10,        //!< 第11列
    col12    =   0x00000001<<11,        //!< 第12列
    col13    =   0x00000001<<12,        //!< 第13列
    col14    =   0x00000001<<13,        //!< 第14列
    col15    =   0x00000001<<14,        //!< 第15列
    col16    =   0x00000001<<15,        //!< 第16列
    col17    =   0x00000001<<16,        //!< 第17列
    col18    =   0x00000001<<17,        //!< 第18列
    col19    =   0x00000001<<18,        //!< 第19列
    col20    =   0x00000001<<19,        //!< 第20列
    col21    =   0x00000001<<20,        //!< 第21列
    col22    =   0x00000001<<21,        //!< 第22列
    col23    =   0x00000001<<22,        //!< 第23列
    col24    =   0x00000001<<23,        //!< 第24列
    col25    =   0x00000001<<24,        //!< 第25列
    col26    =   0x00000001<<25,        //!< 第26列
    col27    =   0x00000001<<26,        //!< 第27列
    col28    =   0x00000001<<27,        //!< 第28列
    col29    =   0x00000001<<28,        //!< 第29列
    col30    =   0x00000001<<29,        //!< 第30列
    col31    =   0x00000001<<30,        //!< 第31列
    col32    =   0x00000001<<31,        //!< 第32列
};
}


typedef struct{
    public:
        QStringList grade;
//            void display();
                } studData;

QDebug operator<< (QDebug d, const studData &data) {
// 运算符重载函数，使其可以直接输出studData结构
    for(int i=0;i<data.grade.size();i++)
            {
                d.noquote()<<QString(data.grade.at(i))<<"     ";
            }

    return d;
}

// 比较类，用于std::sort第三个参数
class myCmp {
public:
    myCmp(int selectedColumn) { this->currentColumn = selectedColumn; }
    bool operator() (const studData& d1,const studData& d2);
private:
    int currentColumn;
};

bool myCmp::operator()(const studData &d1, const studData &d2)
{
    bool result = false;
    quint32 sortedColumn = 0x00000001<<currentColumn;
    switch (sortedColumn)
    {
        default:
        return (d1.grade.at(currentColumn))>(d2.grade.at(currentColumn));break;
    }
    return result;

}

class ScoreSorter
{
public:
    ScoreSorter(QString dataFile);
    void fileout(quint8 tx);
    QString dataFile;
    studData sd;
    QList<studData> sch;

    void ReadFile()
        {
            QFile file("data.txt");
            if (!file.open(QFile::ReadOnly|QFile::Text))
            {
                qDebug("%s", qPrintable("ERROR: Can't open the file!"));
            }
            QString titile(file.readLine());
            studData temp;
            sd.grade=titile.split(" ", QString::SkipEmptyParts);
            while(!file.atEnd())
            {
                QString line(file.readLine());
                temp.grade=line.split(" ",QString::SkipEmptyParts);
                if((temp.grade).last()=="\n")temp.grade.removeLast();
                if((temp.grade.size())==0)continue;
                sch.append(temp);

             }
             file.close();
        }

    void doSort()
        {
            for(int i=0;i<sd.grade.size();i++)
            {
                myCmp d(i);
                std::sort(sch.begin(),sch.end(),d);
                qDebug()<<"第"<<i+1<<"列排序，排序后为:";
                qDebug().noquote()<<sd;
                for(int i=0;i<sch.size();i++)
                    qDebug()<<sch.at(i);
                qDebug()<<"\n";
            }
        }
    private:
            QString currentFile;
};

// 请补全
ScoreSorter::ScoreSorter(QString dataFile)
{
                    currentFile=dataFile;
//                    qDebug()<<"-------------------------------------------------------\n";

}



void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    // 自定义qDebug
    QByteArray localMsg = msg.toLocal8Bit();
             switch (type)
             {
             case QtDebugMsg:
                 fprintf(stderr, "Debug: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
                 break;
             case QtInfoMsg:
                 fprintf(stderr, "Info: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
                 break;
             case QtWarningMsg:
                 fprintf(stderr, "Warning: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
                 break;
             case QtCriticalMsg:
                 fprintf(stderr, "Critical: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
                 break;
             case QtFatalMsg:
                 fprintf(stderr, "Fatal: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
                 abort();
             }
}

int main()
{
    qInstallMessageHandler(myMessageOutput);
    QString datafile = "data.txt";

    // 如果排序后文件已存在，则删除之
    QFile f("sorted_"+datafile);
    if (f.exists()){
        f.remove();
    }

    ScoreSorter s(datafile);
    s.ReadFile();
    s.doSort();
    return 0;
}
