#include "slownie.h"

//     slownieLbl->setText ( slownie(kwotaEdit->text ()) );

QString slownie(QString input, QString waluta)
{
    qDebug( __FUNCTION__  );
    QString in = input;
    
    QString tmp = in.remove (in.indexOf(","), 3);
    
    QString setki = tmp.right (3);
    QString tysiace;
    switch (tmp.length ())
    {
    case 4:
	tysiace = tmp.left (1);
	break;
    case 5:
	tysiace = tmp.left (2);
	break;
    case 6:
	tysiace = tmp.left (3);
	break;
    default:
	tysiace = "";
	break;
    }
    
    QString out;
    
    QStringList jedynki;
    
    jedynki << "jeden" << "dwa"  << "trzy" << "cztery" <<
	    "pi��" << "sze��" << "siedem" << "osiem" <<
	    "dziewi��";
    
/*
    jedynki << "jeden z�otych" << "dwa z�ote"  << "trzy z�ote" << "cztery z�ote" <<
	    "pi�� z�otych" << "sze�� z�otych" << "siedem z�otych" << "osiem z�otych" <<
	    "dziewi�� z�otych";
    */
    
    QStringList jedynki1;
    jedynki1 << "jeden" << "dwa"  << "trzy" << "cztery" <<
	    "pi��" << "sze��" << "siedem" << "osiem" <<
	    "dziewi��";
    
    
    QStringList nascie;
    nascie << "jedena�cie" << "dwana�cie" << "trzyna�cie" <<
	    "czterna�cie" << "pi�tna�cie" << "szesna�cie" <<
	    "siedemna�cie" << "osiemna�cie" << "dziewi�tna�cie" <<
	    "dziesi��";
    /*
    nascie << "jedena�cie z�otych" << "dwana�cie z�otych" << "trzyna�cie z�otych" <<
	    "czterna�cie z�otych" << "pi�tna�cie z�otych" << "szesna�cie z�otych" <<
	    "siedemna�cie z�otych" << "osiemna�cie z�otych" << "dziewi�tna�cie z�otych" <<
	    "dziesi�� z�otych";
      
      */
    
    QStringList nascie1;
    nascie1<< "jedena�cie" << "dwana�cie" << "trzyna�cie" <<
	    "czterna�cie" << "pi�tna�cie" << "szesna�cie" <<
	    "siedemna�cie" << "osiemna�cie" << "dziewi�tna�cie" <<
	    "dziesi��";
    
    
    QStringList escia;
    escia << "dwadziescia" << "trzydziesci" << "czterdzie�ci" <<
	    "pi�dziesi�t" << "sze�dziesi�t" << "siedemdziesi�t" <<
	    "osiemdziesi�t" << "dziewi��dziesi�t";
    
    QStringList sta;
    sta << "sto" << "dwie�cie" << "trzysta" << "czterysta"
	    << "pi��set" << "sze��set" << "siedemset" <<
	    "osiemset" << "dziewi��set";
    
    
    // ******************************************************************
    while (tysiace.length () < 3) tysiace = "0" + tysiace;
    
    switch (tysiace.left (1).toInt ())
    {
    case 1:
	out += " " + sta[0];
	break;
    case 2:
	out += " " + sta[1];
	break;
    case 3:
	out += " " + sta[2];
	break;
    case 4:
	out += " " + sta[3];
	break;
    case 5:
	out += " " + sta[4];
	break;
    case 6:
	out += " " + sta[5];
	break;
    case 7:
	out += " " + sta[6];
	break;
    case 8:
	out += " " + sta[7];
	break;
    case 9:
	out += " " + sta[8];
	break;
    case 0:
	out += "";
	break;
    }
    
    if (tysiace.mid (1, 1).toInt () == 1)
    {     
	switch (tysiace.right(1).toInt ())
	{
	case 1: 
	    out += " "  + nascie1[0];
	    break;
	case 2:
	    out += " " + nascie1[1];
	    break;
	case 3:
	    out += " " + nascie1[2];
	    break;
	case 4:
	    out += " " + nascie1[3];
	    break;
	case 5:
	    out += " " + nascie1[4];
	    break;
	case 6:
	    out += " " + nascie1[5];
	    break;
	case 7:
	    out += " " + nascie1[6];
	    break;
	case 8:
	    out += " " + nascie1[7];
	    break;
	case 9:
	    out += " " + nascie1[8];
	    break;
	case 0:
	    out += " " + nascie1[9];
	    break;
	}
    } else {
	switch (tysiace.mid (1, 1).toInt ())
	{
	    //    case 1: out += nascie[0];
	    // break;
	case 2:
	    out += " " + escia[0];
	    break;
	case 3:
	    out += " " + escia[1];
	    break;
	case 4:
	    out += " " + escia[2];
	    break;
	case 5:
	    out += " " + escia[3];
	    break;
	case 6:
	    out += " " + escia[4];
	    break;
	case 7:
	    out += " " + escia[5];
	    break;
	case 8:
	    out += " " + escia[6];
	    break;
	case 9:
	    out += " " + escia[7];
	    break;
	case 0:
	    out += "";
	    break;
	}
	switch (tysiace.right (1).toInt ())
	{
	case 1:
	    out += " " + jedynki1[0];
	    break;
	case 2:
	    out += " " + jedynki1[1];
	    break;
	case 3:
	    out += " " + jedynki1[2];
	    break;
	case 4:
	    out += " " + jedynki1[3];
	    break;
	case 5:
	    out += " " + jedynki1[4];
	    break;
	case 6:
	    out += " " + jedynki1[5];
	    break;
	case 7:
	    out += " " + jedynki1[6];
	    break;
	case 8:
	    out += " " + jedynki1[7];
	    break;
	case 9:
	    out += " " + jedynki1[8];
	    break;
	case 0:
	    out += "";
	    break;
	}
    }
    
    
    if (out.length () > 2)
	out += " tys.";
    
    
    //***************************************************************
    while (setki.length () < 3)
	setki = "0" + setki;
    
    switch (setki.left (1).toInt ())
    {
    case 1:
	out += " " + sta[0];
	break;
    case 2:
	out += " " + sta[1];
	break;
    case 3:
	out += " " + sta[2];
	break;
    case 4:
	out += " " + sta[3];
	break;
    case 5:
	out += " " + sta[4];
	break;
    case 6:
	out += " " + sta[5];
	break;
    case 7:
	out += " " + sta[6];
	break;
    case 8:
	out += " " + sta[7];
	break;
    case 9:
	out += " " + sta[8];
	break;
    case 0:
	out += "";
	break;
    }
    
    switch (setki.mid (1, 1).toInt ())
    {
	//    case 1: out += nascie[0];
	// break;
    case 2:
	out += " " + escia[0];
	break;
    case 3:
	out += " " + escia[1];
	break;
    case 4:
	out += " " + escia[2];
	break;
    case 5:
	out += " " + escia[3];
	break;
    case 6:
	out += " " + escia[4];
	break;
    case 7:
	out += " " + escia[5];
	break;
    case 8:
	out += " " + escia[6];
	break;
    case 9:
	out += " " + escia[7];
	break;
    case 0:
	out += "";
	break;
    }
    
    
    if (setki.mid (1, 1).toInt () == 1)
    {
	switch (setki.right (1).toInt ())
	{
	case 1:
	    out += " " + nascie[0];
	    break;
	case 2:
	    out += " " + nascie[1];
	    break;
	case 3:
	    out += " " + nascie[2];
	    break;
	case 4:
	    out += " " + nascie[3];
	    break;
	case 5:
	    out += " " + nascie[4];
	    break;
	case 6:
	    out += " " + nascie[5];
	    break;
	case 7:
	    out += " " + nascie[6];
	    break;
	case 8:
	    out += " " + nascie[7];
	    break;
	case 9:
	    out += " " + nascie[8];
	    break;
	case 0:
	    out +=  " "+ nascie[9];
	    break;
	}
    }
    else
    {
	switch (setki.right (1).toInt ())
	{
	case 1:
	    out += " " + jedynki[0];
	    break;
	case 2:
	    out += " " + jedynki[1];
	    break;
	case 3:
	    out += " " + jedynki[2];
	    break;
	case 4:
	    out += " " + jedynki[3];
	    break;
	case 5:
	    out += " " + jedynki[4];
	    break;
	case 6:
	    out += " " + jedynki[5];
	    break;
	case 7:
	    out += " " + jedynki[6];
	    break;
	case 8:
	    out += " " + jedynki[7];
	    break;
	case 9:
	    out += " " + jedynki[8];
	    break;
	case 0:
	    out += " zero"; // waluta; // " z�otych";
	    break;
	}
	
    }
    
    in = input;
    QString grosze =
	    in.remove (0, in.indexOf(",") + 1);
    return out + " " + grosze + "/100 " + waluta;
}
