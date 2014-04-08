
#include "stdafx.h"
#include "stdafx.h"
#include "stdafx.h"
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;
namespace testtest {
    using namespace System;
    ref class MessaggiTest;
    
    
    /// <summary>
///Classe di test per MessaggiTest.
///Creata per contenere tutti gli unit test MessaggiTest
///</summary>
	[TestClass]
	public ref class MessaggiTest
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
			///Test per setNID_MESSAGE
			///</summary>
	public: [TestMethod]
			void setNID_MESSAGETest()
			{
				Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
				int N = 1; // TODO: Eseguire l'inizializzazione a un valore appropriato
				target->setNID_MESSAGE(N);
			}
			/// <summary>
			///Test per serialize
			///</summary>
	public: [TestMethod]
			void serializeTest()
			{
				Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
				cli::array< unsigned char >^  buffer = nullptr; // TODO: Eseguire l'inizializzazione a un valore appropriato
				target->serialize(buffer);
			}
			/// <summary>
			///Test per Costruttore Messaggi
			///</summary>
	public: [TestMethod]
			void MessaggiConstructorTest()
			{
				Messaggi^  target = (gcnew Messaggi());
			}
			/// <summary>
			///Test per setNID_MESSAGE
			///</summary>
	public: [TestMethod]
			void setNID_MESSAGETest1()
			{
				Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
				int N = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				target->setNID_MESSAGE(N);
			}
			/// <summary>
			///Test per setNID_ENGINE
			///</summary>
	public: [TestMethod]
			void setNID_ENGINETest()
			{
				Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
				int N = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				target->setNID_ENGINE(N);
			}
			/// <summary>
			///Test per getT_TIME
			///</summary>
	public: [TestMethod]
			void getT_TIMETest()
			{
				Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
				int expected = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int actual;
				actual = target->getT_TIME();
				Assert::AreEqual(expected, actual);
			}
			/// <summary>
			///Test per getSize
			///</summary>
	public: [TestMethod]
			void getSizeTest()
			{
				Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
				int expected = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int actual;
				actual = target->getSize();
				Assert::AreEqual(expected, actual);
			}
			/// <summary>
			///Test per setNID_MESSAGE
			///</summary>
public: [TestMethod]
		void setNID_MESSAGETest2()
		{
			Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
			int N = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
			target->setNID_MESSAGE(N);
		}
		/// <summary>
		///Test per set_pacchettoAcknowledgement
		///</summary>
public: [TestMethod]
		void set_pacchettoAcknowledgementTest()
		{
			Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
			target->set_pacchettoAcknowledgement();
		}
		/// <summary>
		///Test per set_pacchettoComandoBlocco
		///</summary>
public: [TestMethod]
		void set_pacchettoComandoBloccoTest()
		{
			Messaggi^  target = (gcnew Messaggi()); // TODO: Eseguire l'inizializzazione a un valore appropriato
			target->set_pacchettoComandoBlocco();
		}
};
}
namespace testtest {
    
}
