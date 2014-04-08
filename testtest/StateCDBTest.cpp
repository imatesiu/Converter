
#include "stdafx.h"
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;
namespace testtest {
    using namespace System;
    ref class StateCDBTest;
    
    
    /// <summary>
///Classe di test per StateCDBTest.
///Creata per contenere tutti gli unit test StateCDBTest
///</summary>
	[TestClass]
	public ref class StateCDBTest
	{

	private: Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^  testContextInstance;
			 /// <summary>
			 ///Ottiene o imposta il contesto dei test, che fornisce
			 ///funzionalità e informazioni sull'esecuzione dei test corrente.
			 ///</summary>
	public: property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^  TestContext
			{
				Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^  get()
				{
					return testContextInstance;
				}
				System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^  value)
				{
					testContextInstance = value;
				}
			}

#pragma region Attributi di test aggiuntivi
			// 
			//Durante la scrittura dei test è possibile utilizzare i seguenti attributi aggiuntivi:
			//
			//Utilizzare ClassInitialize per eseguire il codice prima di eseguire il primo test della classe
			//public: [ClassInitialize]
			//static System::Void MyClassInitialize(TestContext^  testContext)
			//{
			//}
			//
			//Utilizzare ClassCleanup per eseguire il codice dopo l'esecuzione di tutti i test di una classe
			//public: [ClassCleanup]
			//static System::Void MyClassCleanup()
			//{
			//}
			//
			//Utilizzare TestInitialize per eseguire il codice prima di eseguire ciascun test
			//
			//public: [TestInitialize]
			//System::Void MyTestInitialize()
			//{
			//}
			//Utilizzare TestCleanup per eseguire il codice dopo l'esecuzione di ciascun test
			//public: [TestCleanup]
			//System::Void MyTestCleanup()
			//{
			//}
			//
#pragma endregion
			/// <summary>
			///Test per setQ_DEVIATOIO
			///</summary>
	public: [TestMethod]
			void setQ_DEVIATOIOTest()
			{
				StateCDB^  target = (gcnew StateCDB()); // TODO: Eseguire l'inizializzazione a un valore appropriato
				int Q = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				target->setQ_DEVIATOIO(Q);
			}
			/// <summary>
			///Test per Costruttore StateCDB
			///</summary>
	public: [TestMethod]
			void StateCDBConstructorTest()
			{
				int nid = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int state = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int dev = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				StateCDB^  target = (gcnew StateCDB(nid, state, dev));
			}
			/// <summary>
			///Test per setNID_CDB
			///</summary>
	public: [TestMethod]
			void setNID_CDBTest()
			{
				StateCDB^  target = (gcnew StateCDB()); // TODO: Eseguire l'inizializzazione a un valore appropriato
				int NID = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				target->setNID_CDB(NID);
			}
	};
}
namespace testtest {
    
}
