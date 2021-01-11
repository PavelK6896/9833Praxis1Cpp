#define _ATL_APARTMENT_THREADED

//#include <atlbase.h>
//You may derive a class from CComModule and use it if you want to override something,
//but do not change the name of _Module
extern CComModule _Module;
//#include <atlcom.h>

//#include <stdafx.h>
#include <sapi.h>

int main(int argc, char* argv[]) // принемает char* сылка на масив
{
    ISpVoice *pVoice = NULL; // создали сылку на объект равную нул

    if (FAILED(::CoInitialize(NULL))) //каккаято проверка
        return FALSE; //0

//void**-это указатель на указатель на void (неопределенный тип).
//Это означает, что переменная (ячейка памяти) содержит адрес к ячейке памяти,
//которая содержит адрес к другой ячейке памяти, и то, что хранится там, не указано.
//В случае этого вопроса это указатель на массив указателей void*.

    //кастуем одну сылку во много сылок
    //создаеться движок
    HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **) &pVoice;);


    if( SUCCEEDED( hr ) ) //ПРЕУСПЕВШИЙ если объект существует
    {
        // l-values адрес в памяти
        //вызываеться функция передаеться слыка на голос
        hr = pVoice->Speak(L"Hello world", 0, NULL);

       pVoice->Release();

        // Change pitch
        hr = pVoice->Speak(L"This sounds normal <pitch middle = '-10'/> but the pitch drops half way through", SPF_IS_XML, NULL );



        pVoice->Release();

        //очищаем памать
        pVoice = NULL;


    }

    //ун
    ::CoUninitialize();
    return TRUE; //1
}
