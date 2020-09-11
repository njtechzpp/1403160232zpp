#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <array>

#include <vector>

using namespace std;

#define s 0x12345678
#define MAX(x,y) ( ((x) > (y)) ? (x) : (y) )  //取最大值
#define MIN(x,y) ( ((x) < (y)) ? (x) : (y) )  //取最小值
typedef qint32 word;
typedef qint8  byte;
#define HHI(xxx) ((byte) ((word)(xxx) >> 24)) //取最高位
#define LHI(xxx) ((byte) ((word)(xxx) >> 16)) //取次高位
#define HLO(xxx) ((byte) ((word)(xxx) >> 8))  //取次低位
#define LLO(xxx) ((byte) ((word)(xxx) & 255)) //取最低位





int main()
{
    QList<byte> values;
    values<<HHI(s)<<LHI(s)<<HLO(s)<<LLO(s);    //数组数值

    word z;
    z=HLO(s)<<24|HHI(s)<<16|LLO(s)<<8|LHI(s);

    qDebug("原始值：0x12345678==%d",s);         //显示原始数值

    qDebug("0x12==%d 0x34==%d 0x56==%d 0x78==%d",values.at(0),values.at(1),values.at(2),values.at(3));

    qDebug("最高8位和次高8位最大值：0x%x(%d)",MAX(HHI(s),LHI(s)),MAX(HHI(s),LHI(s)));//取高位最大
    qDebug("次低8位和最低8位最小值：0x%x(%d)",MIN(HLO(s),LLO(s)),MIN(HLO(s),LLO(s)));//取低位最小

    qDebug("重新组合后的数值：0x%x(%d)",z,z);
    std::sort(values.begin(),values.end(),std::less<byte>());
    qDebug()<<"排序前："<<values;//排序前序列
    std::sort(values.begin(),values.end(),std::greater<byte>());
    qDebug()<<"排序后："<<values;//排序后序列
}
