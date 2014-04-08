
#include "stdafx.h"
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;
namespace testtest {
    using namespace System;
    ref class KeyListTrainTest;
    
    
    /// <summary>
///Classe di test per KeyListTrainTest.
///Creata per contenere tutti gli unit test KeyListTrainTest
///</summary>
	[TestClass]
	public ref class KeyListTrainTest
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
			///Test per CompareTo
			///</summary>
	public: [TestMethod]
			void CompareToTest()
			{
				int p = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int ptn = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				KeyListTrain^  target = (gcnew KeyListTrain(p, ptn)); // TODO: Eseguire l'inizializzazione a un valore appropriato
				KeyListTrain^  otherKey = nullptr; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int expected = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int actual;
				actual = target->CompareTo(otherKey);
				Assert::AreEqual(expected, actual);
				Assert::Inconclusive(L"Verificare la correttezza del metodo di test.");
			}
			/// <summary>
			///Test per Costruttore KeyListTrain
			///</summary>
	public: [TestMethod]
			void KeyListTrainConstructorTest()
			{
				int p = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int trn = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int ptn = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				KeyListTrain^  target = (gcnew KeyListTrain(p, trn, ptn));
				Assert::Inconclusive(L"TODO: Implementare il codice per la verifica della destinazione");
			}
			/// <summary>
			///Test per ToString
			///</summary>
	public: [TestMethod]
			void ToStringTest()
			{
				int p = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				int ptn = 0; // TODO: Eseguire l'inizializzazione a un valore appropriato
				KeyListTrain^  target = (gcnew KeyListTrain(p, ptn)); // TODO: Eseguire l'inizializzazione a un valore appropriato
				String^  expected = System::String::Empty; // TODO: Eseguire l'inizializzazione a un valore appropriato
				String^  actual;
				actual = target->ToString();
				Assert::AreEqual(expected, actual);
				Assert::Inconclusive(L"Verificare la correttezza del metodo di test.");
			}
	};
}
namespace testtest {
    
}
