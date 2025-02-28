#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int numberOfCase = 0;
    string asam [100] = "";
    string inst [100] = "";
    string less [100] = "";
    string equal [100] = "";
    string pcsel [100] = "";
    string opImm [100] = "";
    string brUn [100] = "";
    string opaSel [100] = "";
    string opbSel [100] = "";
    string aluOp [100] = "";
    string wrMem[100] = "";
    string wbSel[100] = "";
    string wrReg[100] = "";
    string mask[100] = "";
    for(int i = 0; i < 100; i ++){
        int stop = 0;
        int temp = 0;
        cout << "Stop :";
        cin >> stop;
        if(stop == 1) break;
        cin.ignore();
        cout << endl << "Nhap Assamply: ";
        getline(std::cin, asam[i]);
        cout << endl << "Nhap inst: ";
        cin >> inst[i];
        inst[i] = "32'h"+inst[i];
        cout << endl << "Nhap less: ";
        cin >> less[i];
        less[i] = "1'b" + less[i];
        cout << endl << "Nhap equal: ";
        cin >> equal[i];
        equal[i] = "1'b" + equal[i];
        cout << endl << "Nhap pcsel: ";
        cin >> pcsel[i];
        pcsel[i] = "1'b" + pcsel[i];
        cout << endl << "Nhap opImm: ";
        cin >> opImm[i];
        opImm[i] = "3'b" + opImm[i];
        cout << endl << "Nhap brUn: ";
        cin >> brUn[i];
        brUn[i] = "1'b" + brUn[i];
        cout << endl << "Nhap opaSel: ";
        cin >> opaSel[i];
        opaSel[i] = "1'b" + opaSel[i];
        cout << endl << "Nhap opbSel: ";
        cin >> opbSel[i];
        opbSel[i] = "1'b" + opbSel[i];
        cout << endl << "Nhap aluOp: ";
        cin >> aluOp[i];
        aluOp[i] = "4'b" + aluOp[i];
        cout << endl << "Nhap wrMem: ";
        cin >> wrMem[i];
        wrMem[i] = "1'b" + wrMem[i];
        cout << endl << "Nhap wbSel: ";
        cin >> wbSel[i];
        wbSel[i] = "2'b" + wbSel[i];
        cout << endl << "Nhap wrReg: ";
        cin >> wrReg[i];
        wrReg[i] = "1'b" + wrReg[i];
        cout << endl <<"Nhap mask: ";
        cin >> mask[i];
        mask[i] = "5'b" + mask[i];
        numberOfCase ++;
    }
    cout << endl;
    for(int i = 0; i < numberOfCase; i++){
        cout << "//Test: " << i << " Assamply: " << asam[i] << endl;
        cout << "#10 i_inst <= " << inst[i] << ";" <<endl;
        cout << "i_brlLess <= " << less[i] << ";" <<endl;
        cout << "i_brEqual <= " << equal[i] << ";" <<endl;
        cout << "#1 testCase(" << pcsel[i] << ", " << opImm[i] << ", " << brUn[i] << ", " << opaSel[i] << ", " << opbSel[i] << ", " << aluOp[i] << ", " << wrMem[i] << ", " << wbSel[i] << ", " << wrReg[i] << ", " << mask[i] << ");" << endl;
        cout << endl;
    }
    return 0;
}