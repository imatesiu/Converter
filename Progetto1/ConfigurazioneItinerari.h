#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// Codice sorgente generato automaticamente da xsd, versione=4.0.30319.17929.
// 
using namespace System;
ref class ConfigurazioneItinerari;


/// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
[System::Serializable, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::ComponentModel::ToolboxItem(true), 
System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
System::Xml::Serialization::XmlRootAttribute(L"ConfigurazioneItinerari"), 
System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
public ref class ConfigurazioneItinerari : public ::System::Data::DataSet {
    public : ref class stazioneDataTable;
    public : ref class itinerariIngressoDataTable;
    public : ref class ingressoDataTable;
    public : ref class ListCDBDataTable;
    public : ref class cdbDataTable;
    public : ref class lrgbDataTable;
    public : ref class pkmDataTable;
    public : ref class itinerariUscitaDataTable;
    public : ref class partenzaDataTable;
    public : ref class stazioneRow;
    public : ref class itinerariIngressoRow;
    public : ref class ingressoRow;
    public : ref class ListCDBRow;
    public : ref class cdbRow;
    public : ref class lrgbRow;
    public : ref class pkmRow;
    public : ref class itinerariUscitaRow;
    public : ref class partenzaRow;
    public : ref class stazioneRowChangeEvent;
    public : ref class itinerariIngressoRowChangeEvent;
    public : ref class ingressoRowChangeEvent;
    public : ref class ListCDBRowChangeEvent;
    public : ref class cdbRowChangeEvent;
    public : ref class lrgbRowChangeEvent;
    public : ref class pkmRowChangeEvent;
    public : ref class itinerariUscitaRowChangeEvent;
    public : ref class partenzaRowChangeEvent;
    
    private: ConfigurazioneItinerari::stazioneDataTable^  tablestazione;
    
    private: ConfigurazioneItinerari::itinerariIngressoDataTable^  tableitinerariIngresso;
    
    private: ConfigurazioneItinerari::ingressoDataTable^  tableingresso;
    
    private: ConfigurazioneItinerari::ListCDBDataTable^  tableListCDB;
    
    private: ConfigurazioneItinerari::cdbDataTable^  tablecdb;
    
    private: ConfigurazioneItinerari::lrgbDataTable^  tablelrgb;
    
    private: ConfigurazioneItinerari::pkmDataTable^  tablepkm;
    
    private: ConfigurazioneItinerari::itinerariUscitaDataTable^  tableitinerariUscita;
    
    private: ConfigurazioneItinerari::partenzaDataTable^  tablepartenza;
    
    private: ::System::Data::DataRelation^  relationstazione_itinerariIngresso;
    
    private: ::System::Data::DataRelation^  relationitinerariIngresso_ingresso;
    
    private: ::System::Data::DataRelation^  relationingresso_ListCDB;
    
    private: ::System::Data::DataRelation^  relationpartenza_ListCDB;
    
    private: ::System::Data::DataRelation^  relationListCDB_cdb;
    
    private: ::System::Data::DataRelation^  relationingresso_lrgb;
    
    private: ::System::Data::DataRelation^  relationpartenza_lrgb;
    
    private: ::System::Data::DataRelation^  relationlrgb_pkm;
    
    private: ::System::Data::DataRelation^  relationstazione_itinerariUscita;
    
    private: ::System::Data::DataRelation^  relationitinerariUscita_partenza;
    
    private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void stazioneRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::stazioneRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void itinerariIngressoRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::itinerariIngressoRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void ingressoRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::ingressoRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void ListCDBRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::ListCDBRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void cdbRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::cdbRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void lrgbRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::lrgbRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void pkmRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::pkmRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void itinerariUscitaRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::itinerariUscitaRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void partenzaRowChangeEventHandler(::System::Object^  sender, ConfigurazioneItinerari::partenzaRowChangeEvent^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ConfigurazioneItinerari();
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ConfigurazioneItinerari(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::stazioneDataTable^  stazione {
        ConfigurazioneItinerari::stazioneDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::itinerariIngressoDataTable^  itinerariIngresso {
        ConfigurazioneItinerari::itinerariIngressoDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::ingressoDataTable^  ingresso {
        ConfigurazioneItinerari::ingressoDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::ListCDBDataTable^  ListCDB {
        ConfigurazioneItinerari::ListCDBDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::cdbDataTable^  cdb {
        ConfigurazioneItinerari::cdbDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::lrgbDataTable^  lrgb {
        ConfigurazioneItinerari::lrgbDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::pkmDataTable^  pkm {
        ConfigurazioneItinerari::pkmDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::itinerariUscitaDataTable^  itinerariUscita {
        ConfigurazioneItinerari::itinerariUscitaDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property ConfigurazioneItinerari::partenzaDataTable^  partenza {
        ConfigurazioneItinerari::partenzaDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::BrowsableAttribute(true), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
    virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
        ::System::Data::SchemaSerializationMode get() override;
        System::Void set(::System::Data::SchemaSerializationMode value) override;
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
    property ::System::Data::DataTableCollection^  Tables {
        ::System::Data::DataTableCollection^  get() new;
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
    property ::System::Data::DataRelationCollection^  Relations {
        ::System::Data::DataRelationCollection^  get() new;
    }
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Void InitializeDerivedDataSet() override;
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Data::DataSet^  Clone() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Boolean ShouldSerializeTables() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Boolean ShouldSerializeRelations() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
    
    internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitVars();
    
    internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitVars(::System::Boolean initTable);
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitClass();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializestazione();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializeitinerariIngresso();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializeingresso();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializeListCDB();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializecdb();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializelrgb();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializepkm();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializeitinerariUscita();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializepartenza();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class stazioneDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnname;
        
        private: ::System::Data::DataColumn^  columnid_offset;
        
        private: ::System::Data::DataColumn^  columnstazione_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::stazioneRowChangeEventHandler^  stazioneRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::stazioneRowChangeEventHandler^  stazioneRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::stazioneRowChangeEventHandler^  stazioneRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::stazioneRowChangeEventHandler^  stazioneRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        stazioneDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        stazioneDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        stazioneDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nameColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  id_offsetColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  stazione_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::stazioneRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::stazioneRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddstazioneRow(ConfigurazioneItinerari::stazioneRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::stazioneRow^  AddstazioneRow(System::String^  name, System::UInt64 id_offset);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::stazioneRow^  NewstazioneRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemovestazioneRow(ConfigurazioneItinerari::stazioneRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class itinerariIngressoDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnitinerariIngresso_Id;
        
        private: ::System::Data::DataColumn^  columnstazione_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::itinerariIngressoRowChangeEventHandler^  itinerariIngressoRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::itinerariIngressoRowChangeEventHandler^  itinerariIngressoRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::itinerariIngressoRowChangeEventHandler^  itinerariIngressoRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::itinerariIngressoRowChangeEventHandler^  itinerariIngressoRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariIngressoDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariIngressoDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariIngressoDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  itinerariIngresso_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  stazione_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::itinerariIngressoRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::itinerariIngressoRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AdditinerariIngressoRow(ConfigurazioneItinerari::itinerariIngressoRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::itinerariIngressoRow^  AdditinerariIngressoRow(ConfigurazioneItinerari::stazioneRow^  parentstazioneRowBystazione_itinerariIngresso);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::itinerariIngressoRow^  NewitinerariIngressoRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemoveitinerariIngressoRow(ConfigurazioneItinerari::itinerariIngressoRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class ingressoDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnid;
        
        private: ::System::Data::DataColumn^  columnname;
        
        private: ::System::Data::DataColumn^  columndirezione;
        
        private: ::System::Data::DataColumn^  columnportebanchina;
        
        private: ::System::Data::DataColumn^  columnlatobanchina;
        
        private: ::System::Data::DataColumn^  columnprevcdb;
        
        private: ::System::Data::DataColumn^  columnnextcdb;
        
        private: ::System::Data::DataColumn^  columningresso_Id;
        
        private: ::System::Data::DataColumn^  columnitinerariIngresso_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::ingressoRowChangeEventHandler^  ingressoRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::ingressoRowChangeEventHandler^  ingressoRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::ingressoRowChangeEventHandler^  ingressoRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::ingressoRowChangeEventHandler^  ingressoRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ingressoDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ingressoDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ingressoDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  idColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nameColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  direzioneColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  portebanchinaColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  latobanchinaColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  prevcdbColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nextcdbColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  ingresso_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  itinerariIngresso_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::ingressoRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::ingressoRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddingressoRow(ConfigurazioneItinerari::ingressoRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::ingressoRow^  AddingressoRow(
                    System::UInt64 id, 
                    System::String^  name, 
                    System::String^  direzione, 
                    System::String^  portebanchina, 
                    System::String^  latobanchina, 
                    System::UInt64 prevcdb, 
                    System::UInt64 nextcdb, 
                    ConfigurazioneItinerari::itinerariIngressoRow^  parentitinerariIngressoRowByitinerariIngresso_ingresso);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::ingressoRow^  NewingressoRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemoveingressoRow(ConfigurazioneItinerari::ingressoRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class ListCDBDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnListCDB_Id;
        
        private: ::System::Data::DataColumn^  columningresso_Id;
        
        private: ::System::Data::DataColumn^  columnpartenza_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::ListCDBRowChangeEventHandler^  ListCDBRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::ListCDBRowChangeEventHandler^  ListCDBRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::ListCDBRowChangeEventHandler^  ListCDBRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::ListCDBRowChangeEventHandler^  ListCDBRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ListCDBDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ListCDBDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ListCDBDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  ListCDB_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  ingresso_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  partenza_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::ListCDBRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::ListCDBRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddListCDBRow(ConfigurazioneItinerari::ListCDBRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::ListCDBRow^  AddListCDBRow(ConfigurazioneItinerari::ingressoRow^  parentingressoRowByingresso_ListCDB, 
                    ConfigurazioneItinerari::partenzaRow^  parentpartenzaRowBypartenza_ListCDB);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::ListCDBRow^  NewListCDBRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemoveListCDBRow(ConfigurazioneItinerari::ListCDBRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class cdbDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columncdb_Column;
        
        private: ::System::Data::DataColumn^  columnListCDB_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::cdbRowChangeEventHandler^  cdbRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::cdbRowChangeEventHandler^  cdbRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::cdbRowChangeEventHandler^  cdbRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::cdbRowChangeEventHandler^  cdbRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cdbDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cdbDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cdbDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  cdb_ColumnColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  ListCDB_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::cdbRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::cdbRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddcdbRow(ConfigurazioneItinerari::cdbRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::cdbRow^  AddcdbRow(System::UInt64 cdb_Column, ConfigurazioneItinerari::ListCDBRow^  parentListCDBRowByListCDB_cdb);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::cdbRow^  NewcdbRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemovecdbRow(ConfigurazioneItinerari::cdbRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class lrgbDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnnid;
        
        private: ::System::Data::DataColumn^  columndstop;
        
        private: ::System::Data::DataColumn^  columnlrgb_Id;
        
        private: ::System::Data::DataColumn^  columningresso_Id;
        
        private: ::System::Data::DataColumn^  columnpartenza_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::lrgbRowChangeEventHandler^  lrgbRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::lrgbRowChangeEventHandler^  lrgbRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::lrgbRowChangeEventHandler^  lrgbRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::lrgbRowChangeEventHandler^  lrgbRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        lrgbDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        lrgbDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        lrgbDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nidColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  dstopColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  lrgb_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  ingresso_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  partenza_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::lrgbRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::lrgbRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddlrgbRow(ConfigurazioneItinerari::lrgbRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::lrgbRow^  AddlrgbRow(System::UInt64 nid, System::UInt64 dstop, ConfigurazioneItinerari::ingressoRow^  parentingressoRowByingresso_lrgb, 
                    ConfigurazioneItinerari::partenzaRow^  parentpartenzaRowBypartenza_lrgb);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::lrgbRow^  NewlrgbRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemovelrgbRow(ConfigurazioneItinerari::lrgbRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class pkmDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnkm;
        
        private: ::System::Data::DataColumn^  columnidoffstaz;
        
        private: ::System::Data::DataColumn^  columnlrgb_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::pkmRowChangeEventHandler^  pkmRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::pkmRowChangeEventHandler^  pkmRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::pkmRowChangeEventHandler^  pkmRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::pkmRowChangeEventHandler^  pkmRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        pkmDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        pkmDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        pkmDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  kmColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  idoffstazColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  lrgb_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::pkmRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::pkmRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddpkmRow(ConfigurazioneItinerari::pkmRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::pkmRow^  AddpkmRow(System::UInt64 km, System::UInt64 idoffstaz, ConfigurazioneItinerari::lrgbRow^  parentlrgbRowBylrgb_pkm);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::pkmRow^  NewpkmRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemovepkmRow(ConfigurazioneItinerari::pkmRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class itinerariUscitaDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnitinerariUscita_Id;
        
        private: ::System::Data::DataColumn^  columnstazione_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::itinerariUscitaRowChangeEventHandler^  itinerariUscitaRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::itinerariUscitaRowChangeEventHandler^  itinerariUscitaRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::itinerariUscitaRowChangeEventHandler^  itinerariUscitaRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::itinerariUscitaRowChangeEventHandler^  itinerariUscitaRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariUscitaDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariUscitaDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariUscitaDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  itinerariUscita_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  stazione_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::itinerariUscitaRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::itinerariUscitaRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AdditinerariUscitaRow(ConfigurazioneItinerari::itinerariUscitaRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::itinerariUscitaRow^  AdditinerariUscitaRow(ConfigurazioneItinerari::stazioneRow^  parentstazioneRowBystazione_itinerariUscita);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::itinerariUscitaRow^  NewitinerariUscitaRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemoveitinerariUscitaRow(ConfigurazioneItinerari::itinerariUscitaRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class partenzaDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnid;
        
        private: ::System::Data::DataColumn^  columnname;
        
        private: ::System::Data::DataColumn^  columndirezione;
        
        private: ::System::Data::DataColumn^  columnportebanchina;
        
        private: ::System::Data::DataColumn^  columnlatobanchina;
        
        private: ::System::Data::DataColumn^  columnprevcdb;
        
        private: ::System::Data::DataColumn^  columnnextcdb;
        
        private: ::System::Data::DataColumn^  columnnextstation;
        
        private: ::System::Data::DataColumn^  columnpartenza_Id;
        
        private: ::System::Data::DataColumn^  columnitinerariUscita_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::partenzaRowChangeEventHandler^  partenzaRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::partenzaRowChangeEventHandler^  partenzaRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::partenzaRowChangeEventHandler^  partenzaRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event ConfigurazioneItinerari::partenzaRowChangeEventHandler^  partenzaRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        partenzaDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        partenzaDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        partenzaDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  idColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nameColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  direzioneColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  portebanchinaColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  latobanchinaColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  prevcdbColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nextcdbColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nextstationColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  partenza_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  itinerariUscita_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::partenzaRow^  default [::System::Int32 ] {
            ConfigurazioneItinerari::partenzaRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddpartenzaRow(ConfigurazioneItinerari::partenzaRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::partenzaRow^  AddpartenzaRow(
                    System::UInt64 id, 
                    System::String^  name, 
                    System::String^  direzione, 
                    System::String^  portebanchina, 
                    System::String^  latobanchina, 
                    System::UInt64 prevcdb, 
                    System::UInt64 nextcdb, 
                    System::UInt64 nextstation, 
                    ConfigurazioneItinerari::itinerariUscitaRow^  parentitinerariUscitaRowByitinerariUscita_partenza);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ConfigurazioneItinerari::partenzaRow^  NewpartenzaRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemovepartenzaRow(ConfigurazioneItinerari::partenzaRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class stazioneRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::stazioneDataTable^  tablestazione;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        stazioneRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  name {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 id_offset {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 stazione_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsnameNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnameNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isid_offsetNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setid_offsetNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::itinerariIngressoRow^  >^  GetitinerariIngressoRows();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::itinerariUscitaRow^  >^  GetitinerariUscitaRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class itinerariIngressoRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::itinerariIngressoDataTable^  tableitinerariIngresso;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariIngressoRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 itinerariIngresso_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 stazione_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::stazioneRow^  stazioneRow {
            ConfigurazioneItinerari::stazioneRow^  get();
            System::Void set(ConfigurazioneItinerari::stazioneRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isstazione_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setstazione_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::ingressoRow^  >^  GetingressoRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class ingressoRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::ingressoDataTable^  tableingresso;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ingressoRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 id {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  name {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  direzione {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  portebanchina {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  latobanchina {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 prevcdb {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 nextcdb {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 ingresso_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 itinerariIngresso_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::itinerariIngressoRow^  itinerariIngressoRow {
            ConfigurazioneItinerari::itinerariIngressoRow^  get();
            System::Void set(ConfigurazioneItinerari::itinerariIngressoRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsidNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetidNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsnameNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnameNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsdirezioneNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetdirezioneNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsportebanchinaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetportebanchinaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IslatobanchinaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetlatobanchinaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsprevcdbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetprevcdbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsnextcdbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnextcdbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsitinerariIngresso_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetitinerariIngresso_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::ListCDBRow^  >^  GetListCDBRows();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::lrgbRow^  >^  GetlrgbRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class ListCDBRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::ListCDBDataTable^  tableListCDB;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ListCDBRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 ListCDB_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 ingresso_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 partenza_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::ingressoRow^  ingressoRow {
            ConfigurazioneItinerari::ingressoRow^  get();
            System::Void set(ConfigurazioneItinerari::ingressoRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::partenzaRow^  partenzaRow {
            ConfigurazioneItinerari::partenzaRow^  get();
            System::Void set(ConfigurazioneItinerari::partenzaRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isingresso_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setingresso_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Ispartenza_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setpartenza_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::cdbRow^  >^  GetcdbRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class cdbRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::cdbDataTable^  tablecdb;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cdbRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 cdb_Column {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 ListCDB_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::ListCDBRow^  ListCDBRow {
            ConfigurazioneItinerari::ListCDBRow^  get();
            System::Void set(ConfigurazioneItinerari::ListCDBRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsListCDB_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetListCDB_IdNull();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class lrgbRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::lrgbDataTable^  tablelrgb;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        lrgbRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 nid {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 dstop {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 lrgb_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 ingresso_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 partenza_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::ingressoRow^  ingressoRow {
            ConfigurazioneItinerari::ingressoRow^  get();
            System::Void set(ConfigurazioneItinerari::ingressoRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::partenzaRow^  partenzaRow {
            ConfigurazioneItinerari::partenzaRow^  get();
            System::Void set(ConfigurazioneItinerari::partenzaRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsnidNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnidNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsdstopNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetdstopNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isingresso_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setingresso_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Ispartenza_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setpartenza_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::pkmRow^  >^  GetpkmRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class pkmRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::pkmDataTable^  tablepkm;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        pkmRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 km {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 idoffstaz {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 lrgb_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::lrgbRow^  lrgbRow {
            ConfigurazioneItinerari::lrgbRow^  get();
            System::Void set(ConfigurazioneItinerari::lrgbRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IskmNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetkmNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsidoffstazNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetidoffstazNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Islrgb_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setlrgb_IdNull();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class itinerariUscitaRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::itinerariUscitaDataTable^  tableitinerariUscita;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariUscitaRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 itinerariUscita_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 stazione_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::stazioneRow^  stazioneRow {
            ConfigurazioneItinerari::stazioneRow^  get();
            System::Void set(ConfigurazioneItinerari::stazioneRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isstazione_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setstazione_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::partenzaRow^  >^  GetpartenzaRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class partenzaRow : public ::System::Data::DataRow {
        
        private: ConfigurazioneItinerari::partenzaDataTable^  tablepartenza;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        partenzaRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 id {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  name {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  direzione {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  portebanchina {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  latobanchina {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 prevcdb {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 nextcdb {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 nextstation {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 partenza_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 itinerariUscita_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::itinerariUscitaRow^  itinerariUscitaRow {
            ConfigurazioneItinerari::itinerariUscitaRow^  get();
            System::Void set(ConfigurazioneItinerari::itinerariUscitaRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsidNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetidNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsnameNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnameNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsdirezioneNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetdirezioneNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsportebanchinaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetportebanchinaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IslatobanchinaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetlatobanchinaNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsprevcdbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetprevcdbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsnextcdbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnextcdbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsnextstationNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnextstationNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsitinerariUscita_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetitinerariUscita_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::ListCDBRow^  >^  GetListCDBRows();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< ConfigurazioneItinerari::lrgbRow^  >^  GetlrgbRows();
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class stazioneRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::stazioneRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        stazioneRowChangeEvent(ConfigurazioneItinerari::stazioneRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::stazioneRow^  Row {
            ConfigurazioneItinerari::stazioneRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class itinerariIngressoRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::itinerariIngressoRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariIngressoRowChangeEvent(ConfigurazioneItinerari::itinerariIngressoRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::itinerariIngressoRow^  Row {
            ConfigurazioneItinerari::itinerariIngressoRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class ingressoRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::ingressoRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ingressoRowChangeEvent(ConfigurazioneItinerari::ingressoRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::ingressoRow^  Row {
            ConfigurazioneItinerari::ingressoRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class ListCDBRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::ListCDBRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ListCDBRowChangeEvent(ConfigurazioneItinerari::ListCDBRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::ListCDBRow^  Row {
            ConfigurazioneItinerari::ListCDBRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class cdbRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::cdbRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cdbRowChangeEvent(ConfigurazioneItinerari::cdbRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::cdbRow^  Row {
            ConfigurazioneItinerari::cdbRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class lrgbRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::lrgbRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        lrgbRowChangeEvent(ConfigurazioneItinerari::lrgbRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::lrgbRow^  Row {
            ConfigurazioneItinerari::lrgbRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class pkmRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::pkmRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        pkmRowChangeEvent(ConfigurazioneItinerari::pkmRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::pkmRow^  Row {
            ConfigurazioneItinerari::pkmRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class itinerariUscitaRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::itinerariUscitaRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        itinerariUscitaRowChangeEvent(ConfigurazioneItinerari::itinerariUscitaRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::itinerariUscitaRow^  Row {
            ConfigurazioneItinerari::itinerariUscitaRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class partenzaRowChangeEvent : public ::System::EventArgs {
        
        private: ConfigurazioneItinerari::partenzaRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        partenzaRowChangeEvent(ConfigurazioneItinerari::partenzaRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ConfigurazioneItinerari::partenzaRow^  Row {
            ConfigurazioneItinerari::partenzaRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
};


inline ConfigurazioneItinerari::ConfigurazioneItinerari() {
    this->BeginInit();
    this->InitClass();
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &ConfigurazioneItinerari::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    __super::Relations->CollectionChanged += schemaChangedHandler;
    this->EndInit();
}

inline ConfigurazioneItinerari::ConfigurazioneItinerari(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataSet(info, context, false) {
    if (this->IsBinarySerialized(info, context) == true) {
        this->InitVars(false);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &ConfigurazioneItinerari::SchemaChanged);
        this->Tables->CollectionChanged += schemaChangedHandler1;
        this->Relations->CollectionChanged += schemaChangedHandler1;
        return;
    }
    ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
    if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        if (ds->Tables[L"stazione"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::stazioneDataTable(ds->Tables[L"stazione"])));
        }
        if (ds->Tables[L"itinerariIngresso"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::itinerariIngressoDataTable(ds->Tables[L"itinerariIngresso"])));
        }
        if (ds->Tables[L"ingresso"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::ingressoDataTable(ds->Tables[L"ingresso"])));
        }
        if (ds->Tables[L"ListCDB"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::ListCDBDataTable(ds->Tables[L"ListCDB"])));
        }
        if (ds->Tables[L"cdb"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::cdbDataTable(ds->Tables[L"cdb"])));
        }
        if (ds->Tables[L"lrgb"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::lrgbDataTable(ds->Tables[L"lrgb"])));
        }
        if (ds->Tables[L"pkm"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::pkmDataTable(ds->Tables[L"pkm"])));
        }
        if (ds->Tables[L"itinerariUscita"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::itinerariUscitaDataTable(ds->Tables[L"itinerariUscita"])));
        }
        if (ds->Tables[L"partenza"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::partenzaDataTable(ds->Tables[L"partenza"])));
        }
        this->DataSetName = ds->DataSetName;
        this->Prefix = ds->Prefix;
        this->Namespace = ds->Namespace;
        this->Locale = ds->Locale;
        this->CaseSensitive = ds->CaseSensitive;
        this->EnforceConstraints = ds->EnforceConstraints;
        this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
        this->InitVars();
    }
    else {
        this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
    }
    this->GetSerializationData(info, context);
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &ConfigurazioneItinerari::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    this->Relations->CollectionChanged += schemaChangedHandler;
}

inline ConfigurazioneItinerari::stazioneDataTable^  ConfigurazioneItinerari::stazione::get() {
    return this->tablestazione;
}

inline ConfigurazioneItinerari::itinerariIngressoDataTable^  ConfigurazioneItinerari::itinerariIngresso::get() {
    return this->tableitinerariIngresso;
}

inline ConfigurazioneItinerari::ingressoDataTable^  ConfigurazioneItinerari::ingresso::get() {
    return this->tableingresso;
}

inline ConfigurazioneItinerari::ListCDBDataTable^  ConfigurazioneItinerari::ListCDB::get() {
    return this->tableListCDB;
}

inline ConfigurazioneItinerari::cdbDataTable^  ConfigurazioneItinerari::cdb::get() {
    return this->tablecdb;
}

inline ConfigurazioneItinerari::lrgbDataTable^  ConfigurazioneItinerari::lrgb::get() {
    return this->tablelrgb;
}

inline ConfigurazioneItinerari::pkmDataTable^  ConfigurazioneItinerari::pkm::get() {
    return this->tablepkm;
}

inline ConfigurazioneItinerari::itinerariUscitaDataTable^  ConfigurazioneItinerari::itinerariUscita::get() {
    return this->tableitinerariUscita;
}

inline ConfigurazioneItinerari::partenzaDataTable^  ConfigurazioneItinerari::partenza::get() {
    return this->tablepartenza;
}

inline ::System::Data::SchemaSerializationMode ConfigurazioneItinerari::SchemaSerializationMode::get() {
    return this->_schemaSerializationMode;
}
inline System::Void ConfigurazioneItinerari::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
    this->_schemaSerializationMode = __identifier(value);
}

inline ::System::Data::DataTableCollection^  ConfigurazioneItinerari::Tables::get() {
    return __super::Tables;
}

inline ::System::Data::DataRelationCollection^  ConfigurazioneItinerari::Relations::get() {
    return __super::Relations;
}

inline ::System::Void ConfigurazioneItinerari::InitializeDerivedDataSet() {
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ::System::Data::DataSet^  ConfigurazioneItinerari::Clone() {
    ConfigurazioneItinerari^  cln = (cli::safe_cast<ConfigurazioneItinerari^  >(__super::Clone()));
    cln->InitVars();
    cln->SchemaSerializationMode = this->SchemaSerializationMode;
    return cln;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializeTables() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializeRelations() {
    return false;
}

inline ::System::Void ConfigurazioneItinerari::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
    if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        this->Reset();
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXml(reader);
        if (ds->Tables[L"stazione"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::stazioneDataTable(ds->Tables[L"stazione"])));
        }
        if (ds->Tables[L"itinerariIngresso"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::itinerariIngressoDataTable(ds->Tables[L"itinerariIngresso"])));
        }
        if (ds->Tables[L"ingresso"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::ingressoDataTable(ds->Tables[L"ingresso"])));
        }
        if (ds->Tables[L"ListCDB"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::ListCDBDataTable(ds->Tables[L"ListCDB"])));
        }
        if (ds->Tables[L"cdb"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::cdbDataTable(ds->Tables[L"cdb"])));
        }
        if (ds->Tables[L"lrgb"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::lrgbDataTable(ds->Tables[L"lrgb"])));
        }
        if (ds->Tables[L"pkm"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::pkmDataTable(ds->Tables[L"pkm"])));
        }
        if (ds->Tables[L"itinerariUscita"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::itinerariUscitaDataTable(ds->Tables[L"itinerariUscita"])));
        }
        if (ds->Tables[L"partenza"] != nullptr) {
            __super::Tables->Add((gcnew ConfigurazioneItinerari::partenzaDataTable(ds->Tables[L"partenza"])));
        }
        this->DataSetName = ds->DataSetName;
        this->Prefix = ds->Prefix;
        this->Namespace = ds->Namespace;
        this->Locale = ds->Locale;
        this->CaseSensitive = ds->CaseSensitive;
        this->EnforceConstraints = ds->EnforceConstraints;
        this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
        this->InitVars();
    }
    else {
        this->ReadXml(reader);
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchema^  ConfigurazioneItinerari::GetSchemaSerializable() {
    ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
    this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
    stream->Position = 0;
    return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
}

inline ::System::Void ConfigurazioneItinerari::InitVars() {
    this->InitVars(true);
}

inline ::System::Void ConfigurazioneItinerari::InitVars(::System::Boolean initTable) {
    this->tablestazione = (cli::safe_cast<ConfigurazioneItinerari::stazioneDataTable^  >(__super::Tables[L"stazione"]));
    if (initTable == true) {
        if (this->tablestazione != nullptr) {
            this->tablestazione->InitVars();
        }
    }
    this->tableitinerariIngresso = (cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoDataTable^  >(__super::Tables[L"itinerariIngresso"]));
    if (initTable == true) {
        if (this->tableitinerariIngresso != nullptr) {
            this->tableitinerariIngresso->InitVars();
        }
    }
    this->tableingresso = (cli::safe_cast<ConfigurazioneItinerari::ingressoDataTable^  >(__super::Tables[L"ingresso"]));
    if (initTable == true) {
        if (this->tableingresso != nullptr) {
            this->tableingresso->InitVars();
        }
    }
    this->tableListCDB = (cli::safe_cast<ConfigurazioneItinerari::ListCDBDataTable^  >(__super::Tables[L"ListCDB"]));
    if (initTable == true) {
        if (this->tableListCDB != nullptr) {
            this->tableListCDB->InitVars();
        }
    }
    this->tablecdb = (cli::safe_cast<ConfigurazioneItinerari::cdbDataTable^  >(__super::Tables[L"cdb"]));
    if (initTable == true) {
        if (this->tablecdb != nullptr) {
            this->tablecdb->InitVars();
        }
    }
    this->tablelrgb = (cli::safe_cast<ConfigurazioneItinerari::lrgbDataTable^  >(__super::Tables[L"lrgb"]));
    if (initTable == true) {
        if (this->tablelrgb != nullptr) {
            this->tablelrgb->InitVars();
        }
    }
    this->tablepkm = (cli::safe_cast<ConfigurazioneItinerari::pkmDataTable^  >(__super::Tables[L"pkm"]));
    if (initTable == true) {
        if (this->tablepkm != nullptr) {
            this->tablepkm->InitVars();
        }
    }
    this->tableitinerariUscita = (cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaDataTable^  >(__super::Tables[L"itinerariUscita"]));
    if (initTable == true) {
        if (this->tableitinerariUscita != nullptr) {
            this->tableitinerariUscita->InitVars();
        }
    }
    this->tablepartenza = (cli::safe_cast<ConfigurazioneItinerari::partenzaDataTable^  >(__super::Tables[L"partenza"]));
    if (initTable == true) {
        if (this->tablepartenza != nullptr) {
            this->tablepartenza->InitVars();
        }
    }
    this->relationstazione_itinerariIngresso = this->Relations[L"stazione_itinerariIngresso"];
    this->relationitinerariIngresso_ingresso = this->Relations[L"itinerariIngresso_ingresso"];
    this->relationingresso_ListCDB = this->Relations[L"ingresso_ListCDB"];
    this->relationpartenza_ListCDB = this->Relations[L"partenza_ListCDB"];
    this->relationListCDB_cdb = this->Relations[L"ListCDB_cdb"];
    this->relationingresso_lrgb = this->Relations[L"ingresso_lrgb"];
    this->relationpartenza_lrgb = this->Relations[L"partenza_lrgb"];
    this->relationlrgb_pkm = this->Relations[L"lrgb_pkm"];
    this->relationstazione_itinerariUscita = this->Relations[L"stazione_itinerariUscita"];
    this->relationitinerariUscita_partenza = this->Relations[L"itinerariUscita_partenza"];
}

inline ::System::Void ConfigurazioneItinerari::InitClass() {
    this->DataSetName = L"ConfigurazioneItinerari";
    this->Prefix = L"";
    this->Namespace = L"urn:configurazioneitinerari-schema";
    this->EnforceConstraints = true;
    this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
    this->tablestazione = (gcnew ConfigurazioneItinerari::stazioneDataTable());
    __super::Tables->Add(this->tablestazione);
    this->tableitinerariIngresso = (gcnew ConfigurazioneItinerari::itinerariIngressoDataTable());
    __super::Tables->Add(this->tableitinerariIngresso);
    this->tableingresso = (gcnew ConfigurazioneItinerari::ingressoDataTable());
    __super::Tables->Add(this->tableingresso);
    this->tableListCDB = (gcnew ConfigurazioneItinerari::ListCDBDataTable());
    __super::Tables->Add(this->tableListCDB);
    this->tablecdb = (gcnew ConfigurazioneItinerari::cdbDataTable());
    __super::Tables->Add(this->tablecdb);
    this->tablelrgb = (gcnew ConfigurazioneItinerari::lrgbDataTable());
    __super::Tables->Add(this->tablelrgb);
    this->tablepkm = (gcnew ConfigurazioneItinerari::pkmDataTable());
    __super::Tables->Add(this->tablepkm);
    this->tableitinerariUscita = (gcnew ConfigurazioneItinerari::itinerariUscitaDataTable());
    __super::Tables->Add(this->tableitinerariUscita);
    this->tablepartenza = (gcnew ConfigurazioneItinerari::partenzaDataTable());
    __super::Tables->Add(this->tablepartenza);
    ::System::Data::ForeignKeyConstraint^  fkc;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"stazione_itinerariIngresso", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablestazione->stazione_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitinerariIngresso->stazione_IdColumn}));
    this->tableitinerariIngresso->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"itinerariIngresso_ingresso", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitinerariIngresso->itinerariIngresso_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableingresso->itinerariIngresso_IdColumn}));
    this->tableingresso->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"ingresso_ListCDB", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableingresso->ingresso_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableListCDB->ingresso_IdColumn}));
    this->tableListCDB->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"partenza_ListCDB", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablepartenza->partenza_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableListCDB->partenza_IdColumn}));
    this->tableListCDB->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"ListCDB_cdb", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableListCDB->ListCDB_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablecdb->ListCDB_IdColumn}));
    this->tablecdb->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"ingresso_lrgb", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableingresso->ingresso_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablelrgb->ingresso_IdColumn}));
    this->tablelrgb->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"partenza_lrgb", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablepartenza->partenza_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablelrgb->partenza_IdColumn}));
    this->tablelrgb->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"lrgb_pkm", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablelrgb->lrgb_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablepkm->lrgb_IdColumn}));
    this->tablepkm->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"stazione_itinerariUscita", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablestazione->stazione_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitinerariUscita->stazione_IdColumn}));
    this->tableitinerariUscita->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"itinerariUscita_partenza", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitinerariUscita->itinerariUscita_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablepartenza->itinerariUscita_IdColumn}));
    this->tablepartenza->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    this->relationstazione_itinerariIngresso = (gcnew ::System::Data::DataRelation(L"stazione_itinerariIngresso", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablestazione->stazione_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitinerariIngresso->stazione_IdColumn}, false));
    this->relationstazione_itinerariIngresso->Nested = true;
    this->Relations->Add(this->relationstazione_itinerariIngresso);
    this->relationitinerariIngresso_ingresso = (gcnew ::System::Data::DataRelation(L"itinerariIngresso_ingresso", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitinerariIngresso->itinerariIngresso_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableingresso->itinerariIngresso_IdColumn}, false));
    this->relationitinerariIngresso_ingresso->Nested = true;
    this->Relations->Add(this->relationitinerariIngresso_ingresso);
    this->relationingresso_ListCDB = (gcnew ::System::Data::DataRelation(L"ingresso_ListCDB", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableingresso->ingresso_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableListCDB->ingresso_IdColumn}, false));
    this->relationingresso_ListCDB->Nested = true;
    this->Relations->Add(this->relationingresso_ListCDB);
    this->relationpartenza_ListCDB = (gcnew ::System::Data::DataRelation(L"partenza_ListCDB", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablepartenza->partenza_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableListCDB->partenza_IdColumn}, false));
    this->relationpartenza_ListCDB->Nested = true;
    this->Relations->Add(this->relationpartenza_ListCDB);
    this->relationListCDB_cdb = (gcnew ::System::Data::DataRelation(L"ListCDB_cdb", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableListCDB->ListCDB_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablecdb->ListCDB_IdColumn}, false));
    this->relationListCDB_cdb->Nested = true;
    this->Relations->Add(this->relationListCDB_cdb);
    this->relationingresso_lrgb = (gcnew ::System::Data::DataRelation(L"ingresso_lrgb", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableingresso->ingresso_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablelrgb->ingresso_IdColumn}, false));
    this->relationingresso_lrgb->Nested = true;
    this->Relations->Add(this->relationingresso_lrgb);
    this->relationpartenza_lrgb = (gcnew ::System::Data::DataRelation(L"partenza_lrgb", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablepartenza->partenza_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablelrgb->partenza_IdColumn}, false));
    this->relationpartenza_lrgb->Nested = true;
    this->Relations->Add(this->relationpartenza_lrgb);
    this->relationlrgb_pkm = (gcnew ::System::Data::DataRelation(L"lrgb_pkm", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablelrgb->lrgb_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablepkm->lrgb_IdColumn}, false));
    this->relationlrgb_pkm->Nested = true;
    this->Relations->Add(this->relationlrgb_pkm);
    this->relationstazione_itinerariUscita = (gcnew ::System::Data::DataRelation(L"stazione_itinerariUscita", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablestazione->stazione_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitinerariUscita->stazione_IdColumn}, false));
    this->relationstazione_itinerariUscita->Nested = true;
    this->Relations->Add(this->relationstazione_itinerariUscita);
    this->relationitinerariUscita_partenza = (gcnew ::System::Data::DataRelation(L"itinerariUscita_partenza", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableitinerariUscita->itinerariUscita_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablepartenza->itinerariUscita_IdColumn}, false));
    this->relationitinerariUscita_partenza->Nested = true;
    this->Relations->Add(this->relationitinerariUscita_partenza);
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializestazione() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializeitinerariIngresso() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializeingresso() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializeListCDB() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializecdb() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializelrgb() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializepkm() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializeitinerariUscita() {
    return false;
}

inline ::System::Boolean ConfigurazioneItinerari::ShouldSerializepartenza() {
    return false;
}

inline ::System::Void ConfigurazioneItinerari::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
    if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any->Namespace = ds->Namespace;
    sequence->Items->Add(any);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::stazioneDataTable::stazioneDataTable() {
    this->TableName = L"stazione";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::stazioneDataTable::stazioneDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::stazioneDataTable::stazioneDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::stazioneDataTable::nameColumn::get() {
    return this->columnname;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::stazioneDataTable::id_offsetColumn::get() {
    return this->columnid_offset;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::stazioneDataTable::stazione_IdColumn::get() {
    return this->columnstazione_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::stazioneDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::stazioneRow^  ConfigurazioneItinerari::stazioneDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::stazioneDataTable::AddstazioneRow(ConfigurazioneItinerari::stazioneRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::stazioneRow^  ConfigurazioneItinerari::stazioneDataTable::AddstazioneRow(System::String^  name, 
            System::UInt64 id_offset) {
    ConfigurazioneItinerari::stazioneRow^  rowstazioneRow = (cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {name, id_offset, nullptr};
    rowstazioneRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowstazioneRow);
    return rowstazioneRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::stazioneDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::stazioneDataTable::Clone() {
    ConfigurazioneItinerari::stazioneDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::stazioneDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::stazioneDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::stazioneDataTable());
}

inline ::System::Void ConfigurazioneItinerari::stazioneDataTable::InitVars() {
    this->columnname = __super::Columns[L"name"];
    this->columnid_offset = __super::Columns[L"id_offset"];
    this->columnstazione_Id = __super::Columns[L"stazione_Id"];
}

inline ::System::Void ConfigurazioneItinerari::stazioneDataTable::InitClass() {
    this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnname);
    this->columnid_offset = (gcnew ::System::Data::DataColumn(L"id_offset", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnid_offset);
    this->columnstazione_Id = (gcnew ::System::Data::DataColumn(L"stazione_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnstazione_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnstazione_Id}, 
            true)));
    this->columnname->Namespace = L"";
    this->columnid_offset->Namespace = L"";
    this->columnstazione_Id->AutoIncrement = true;
    this->columnstazione_Id->AllowDBNull = false;
    this->columnstazione_Id->Unique = true;
}

inline ConfigurazioneItinerari::stazioneRow^  ConfigurazioneItinerari::stazioneDataTable::NewstazioneRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::stazioneDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::stazioneRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::stazioneDataTable::GetRowType() {
    return ConfigurazioneItinerari::stazioneRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::stazioneDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->stazioneRowChanged(this, (gcnew ConfigurazioneItinerari::stazioneRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::stazioneDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->stazioneRowChanging(this, (gcnew ConfigurazioneItinerari::stazioneRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::stazioneDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->stazioneRowDeleted(this, (gcnew ConfigurazioneItinerari::stazioneRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::stazioneDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->stazioneRowDeleting(this, (gcnew ConfigurazioneItinerari::stazioneRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::stazioneDataTable::RemovestazioneRow(ConfigurazioneItinerari::stazioneRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::stazioneDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"stazioneDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::itinerariIngressoDataTable::itinerariIngressoDataTable() {
    this->TableName = L"itinerariIngresso";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::itinerariIngressoDataTable::itinerariIngressoDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::itinerariIngressoDataTable::itinerariIngressoDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::itinerariIngressoDataTable::itinerariIngresso_IdColumn::get() {
    return this->columnitinerariIngresso_Id;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::itinerariIngressoDataTable::stazione_IdColumn::get() {
    return this->columnstazione_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::itinerariIngressoDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::itinerariIngressoRow^  ConfigurazioneItinerari::itinerariIngressoDataTable::default::get(
            ::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoDataTable::AdditinerariIngressoRow(ConfigurazioneItinerari::itinerariIngressoRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::itinerariIngressoRow^  ConfigurazioneItinerari::itinerariIngressoDataTable::AdditinerariIngressoRow(
            ConfigurazioneItinerari::stazioneRow^  parentstazioneRowBystazione_itinerariIngresso) {
    ConfigurazioneItinerari::itinerariIngressoRow^  rowitinerariIngressoRow = (cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(2) {nullptr, nullptr};
    if (parentstazioneRowBystazione_itinerariIngresso != nullptr) {
        columnValuesArray[1] = parentstazioneRowBystazione_itinerariIngresso[2];
    }
    rowitinerariIngressoRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowitinerariIngressoRow);
    return rowitinerariIngressoRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::itinerariIngressoDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::itinerariIngressoDataTable::Clone() {
    ConfigurazioneItinerari::itinerariIngressoDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::itinerariIngressoDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::itinerariIngressoDataTable());
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoDataTable::InitVars() {
    this->columnitinerariIngresso_Id = __super::Columns[L"itinerariIngresso_Id"];
    this->columnstazione_Id = __super::Columns[L"stazione_Id"];
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoDataTable::InitClass() {
    this->columnitinerariIngresso_Id = (gcnew ::System::Data::DataColumn(L"itinerariIngresso_Id", ::System::Int32::typeid, nullptr, 
        ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnitinerariIngresso_Id);
    this->columnstazione_Id = (gcnew ::System::Data::DataColumn(L"stazione_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnstazione_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnitinerariIngresso_Id}, 
            true)));
    this->columnitinerariIngresso_Id->AutoIncrement = true;
    this->columnitinerariIngresso_Id->AllowDBNull = false;
    this->columnitinerariIngresso_Id->Unique = true;
}

inline ConfigurazioneItinerari::itinerariIngressoRow^  ConfigurazioneItinerari::itinerariIngressoDataTable::NewitinerariIngressoRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::itinerariIngressoDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::itinerariIngressoRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::itinerariIngressoDataTable::GetRowType() {
    return ConfigurazioneItinerari::itinerariIngressoRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->itinerariIngressoRowChanged(this, (gcnew ConfigurazioneItinerari::itinerariIngressoRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->itinerariIngressoRowChanging(this, (gcnew ConfigurazioneItinerari::itinerariIngressoRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->itinerariIngressoRowDeleted(this, (gcnew ConfigurazioneItinerari::itinerariIngressoRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->itinerariIngressoRowDeleting(this, (gcnew ConfigurazioneItinerari::itinerariIngressoRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoDataTable::RemoveitinerariIngressoRow(ConfigurazioneItinerari::itinerariIngressoRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::itinerariIngressoDataTable::GetTypedTableSchema(
            ::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"itinerariIngressoDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::ingressoDataTable::ingressoDataTable() {
    this->TableName = L"ingresso";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::ingressoDataTable::ingressoDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::ingressoDataTable::ingressoDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::idColumn::get() {
    return this->columnid;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::nameColumn::get() {
    return this->columnname;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::direzioneColumn::get() {
    return this->columndirezione;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::portebanchinaColumn::get() {
    return this->columnportebanchina;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::latobanchinaColumn::get() {
    return this->columnlatobanchina;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::prevcdbColumn::get() {
    return this->columnprevcdb;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::nextcdbColumn::get() {
    return this->columnnextcdb;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::ingresso_IdColumn::get() {
    return this->columningresso_Id;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ingressoDataTable::itinerariIngresso_IdColumn::get() {
    return this->columnitinerariIngresso_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::ingressoDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::ingressoRow^  ConfigurazioneItinerari::ingressoDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::ingressoDataTable::AddingressoRow(ConfigurazioneItinerari::ingressoRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::ingressoRow^  ConfigurazioneItinerari::ingressoDataTable::AddingressoRow(
            System::UInt64 id, 
            System::String^  name, 
            System::String^  direzione, 
            System::String^  portebanchina, 
            System::String^  latobanchina, 
            System::UInt64 prevcdb, 
            System::UInt64 nextcdb, 
            ConfigurazioneItinerari::itinerariIngressoRow^  parentitinerariIngressoRowByitinerariIngresso_ingresso) {
    ConfigurazioneItinerari::ingressoRow^  rowingressoRow = (cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(9) {id, name, direzione, portebanchina, 
        latobanchina, prevcdb, nextcdb, nullptr, nullptr};
    if (parentitinerariIngressoRowByitinerariIngresso_ingresso != nullptr) {
        columnValuesArray[8] = parentitinerariIngressoRowByitinerariIngresso_ingresso[0];
    }
    rowingressoRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowingressoRow);
    return rowingressoRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::ingressoDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::ingressoDataTable::Clone() {
    ConfigurazioneItinerari::ingressoDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::ingressoDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::ingressoDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::ingressoDataTable());
}

inline ::System::Void ConfigurazioneItinerari::ingressoDataTable::InitVars() {
    this->columnid = __super::Columns[L"id"];
    this->columnname = __super::Columns[L"name"];
    this->columndirezione = __super::Columns[L"direzione"];
    this->columnportebanchina = __super::Columns[L"portebanchina"];
    this->columnlatobanchina = __super::Columns[L"latobanchina"];
    this->columnprevcdb = __super::Columns[L"prevcdb"];
    this->columnnextcdb = __super::Columns[L"nextcdb"];
    this->columningresso_Id = __super::Columns[L"ingresso_Id"];
    this->columnitinerariIngresso_Id = __super::Columns[L"itinerariIngresso_Id"];
}

inline ::System::Void ConfigurazioneItinerari::ingressoDataTable::InitClass() {
    this->columnid = (gcnew ::System::Data::DataColumn(L"id", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnid);
    this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnname);
    this->columndirezione = (gcnew ::System::Data::DataColumn(L"direzione", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columndirezione);
    this->columnportebanchina = (gcnew ::System::Data::DataColumn(L"portebanchina", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnportebanchina);
    this->columnlatobanchina = (gcnew ::System::Data::DataColumn(L"latobanchina", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnlatobanchina);
    this->columnprevcdb = (gcnew ::System::Data::DataColumn(L"prevcdb", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnprevcdb);
    this->columnnextcdb = (gcnew ::System::Data::DataColumn(L"nextcdb", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnnextcdb);
    this->columningresso_Id = (gcnew ::System::Data::DataColumn(L"ingresso_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columningresso_Id);
    this->columnitinerariIngresso_Id = (gcnew ::System::Data::DataColumn(L"itinerariIngresso_Id", ::System::Int32::typeid, nullptr, 
        ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnitinerariIngresso_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columningresso_Id}, 
            true)));
    this->columnid->Namespace = L"";
    this->columnname->Namespace = L"";
    this->columndirezione->Namespace = L"";
    this->columnportebanchina->Namespace = L"";
    this->columnlatobanchina->Namespace = L"";
    this->columnprevcdb->Namespace = L"";
    this->columnnextcdb->Namespace = L"";
    this->columningresso_Id->AutoIncrement = true;
    this->columningresso_Id->AllowDBNull = false;
    this->columningresso_Id->Unique = true;
}

inline ConfigurazioneItinerari::ingressoRow^  ConfigurazioneItinerari::ingressoDataTable::NewingressoRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::ingressoDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::ingressoRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::ingressoDataTable::GetRowType() {
    return ConfigurazioneItinerari::ingressoRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::ingressoDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->ingressoRowChanged(this, (gcnew ConfigurazioneItinerari::ingressoRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::ingressoDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->ingressoRowChanging(this, (gcnew ConfigurazioneItinerari::ingressoRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::ingressoDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->ingressoRowDeleted(this, (gcnew ConfigurazioneItinerari::ingressoRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::ingressoDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->ingressoRowDeleting(this, (gcnew ConfigurazioneItinerari::ingressoRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::ingressoDataTable::RemoveingressoRow(ConfigurazioneItinerari::ingressoRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::ingressoDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"ingressoDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::ListCDBDataTable::ListCDBDataTable() {
    this->TableName = L"ListCDB";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::ListCDBDataTable::ListCDBDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::ListCDBDataTable::ListCDBDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ListCDBDataTable::ListCDB_IdColumn::get() {
    return this->columnListCDB_Id;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ListCDBDataTable::ingresso_IdColumn::get() {
    return this->columningresso_Id;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::ListCDBDataTable::partenza_IdColumn::get() {
    return this->columnpartenza_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::ListCDBDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::ListCDBRow^  ConfigurazioneItinerari::ListCDBDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::ListCDBRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::ListCDBDataTable::AddListCDBRow(ConfigurazioneItinerari::ListCDBRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::ListCDBRow^  ConfigurazioneItinerari::ListCDBDataTable::AddListCDBRow(ConfigurazioneItinerari::ingressoRow^  parentingressoRowByingresso_ListCDB, 
            ConfigurazioneItinerari::partenzaRow^  parentpartenzaRowBypartenza_ListCDB) {
    ConfigurazioneItinerari::ListCDBRow^  rowListCDBRow = (cli::safe_cast<ConfigurazioneItinerari::ListCDBRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {nullptr, nullptr, nullptr};
    if (parentingressoRowByingresso_ListCDB != nullptr) {
        columnValuesArray[1] = parentingressoRowByingresso_ListCDB[7];
    }
    if (parentpartenzaRowBypartenza_ListCDB != nullptr) {
        columnValuesArray[2] = parentpartenzaRowBypartenza_ListCDB[8];
    }
    rowListCDBRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowListCDBRow);
    return rowListCDBRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::ListCDBDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::ListCDBDataTable::Clone() {
    ConfigurazioneItinerari::ListCDBDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::ListCDBDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::ListCDBDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::ListCDBDataTable());
}

inline ::System::Void ConfigurazioneItinerari::ListCDBDataTable::InitVars() {
    this->columnListCDB_Id = __super::Columns[L"ListCDB_Id"];
    this->columningresso_Id = __super::Columns[L"ingresso_Id"];
    this->columnpartenza_Id = __super::Columns[L"partenza_Id"];
}

inline ::System::Void ConfigurazioneItinerari::ListCDBDataTable::InitClass() {
    this->columnListCDB_Id = (gcnew ::System::Data::DataColumn(L"ListCDB_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnListCDB_Id);
    this->columningresso_Id = (gcnew ::System::Data::DataColumn(L"ingresso_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columningresso_Id);
    this->columnpartenza_Id = (gcnew ::System::Data::DataColumn(L"partenza_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnpartenza_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnListCDB_Id}, 
            true)));
    this->columnListCDB_Id->AutoIncrement = true;
    this->columnListCDB_Id->AllowDBNull = false;
    this->columnListCDB_Id->Unique = true;
}

inline ConfigurazioneItinerari::ListCDBRow^  ConfigurazioneItinerari::ListCDBDataTable::NewListCDBRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::ListCDBRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::ListCDBDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::ListCDBRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::ListCDBDataTable::GetRowType() {
    return ConfigurazioneItinerari::ListCDBRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::ListCDBDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->ListCDBRowChanged(this, (gcnew ConfigurazioneItinerari::ListCDBRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::ListCDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::ListCDBDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->ListCDBRowChanging(this, (gcnew ConfigurazioneItinerari::ListCDBRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::ListCDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::ListCDBDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->ListCDBRowDeleted(this, (gcnew ConfigurazioneItinerari::ListCDBRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::ListCDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::ListCDBDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->ListCDBRowDeleting(this, (gcnew ConfigurazioneItinerari::ListCDBRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::ListCDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::ListCDBDataTable::RemoveListCDBRow(ConfigurazioneItinerari::ListCDBRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::ListCDBDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"ListCDBDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::cdbDataTable::cdbDataTable() {
    this->TableName = L"cdb";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::cdbDataTable::cdbDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::cdbDataTable::cdbDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::cdbDataTable::cdb_ColumnColumn::get() {
    return this->columncdb_Column;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::cdbDataTable::ListCDB_IdColumn::get() {
    return this->columnListCDB_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::cdbDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::cdbRow^  ConfigurazioneItinerari::cdbDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::cdbRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::cdbDataTable::AddcdbRow(ConfigurazioneItinerari::cdbRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::cdbRow^  ConfigurazioneItinerari::cdbDataTable::AddcdbRow(System::UInt64 cdb_Column, ConfigurazioneItinerari::ListCDBRow^  parentListCDBRowByListCDB_cdb) {
    ConfigurazioneItinerari::cdbRow^  rowcdbRow = (cli::safe_cast<ConfigurazioneItinerari::cdbRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(2) {cdb_Column, nullptr};
    if (parentListCDBRowByListCDB_cdb != nullptr) {
        columnValuesArray[1] = parentListCDBRowByListCDB_cdb[0];
    }
    rowcdbRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowcdbRow);
    return rowcdbRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::cdbDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::cdbDataTable::Clone() {
    ConfigurazioneItinerari::cdbDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::cdbDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::cdbDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::cdbDataTable());
}

inline ::System::Void ConfigurazioneItinerari::cdbDataTable::InitVars() {
    this->columncdb_Column = __super::Columns[L"cdb_Column"];
    this->columnListCDB_Id = __super::Columns[L"ListCDB_Id"];
}

inline ::System::Void ConfigurazioneItinerari::cdbDataTable::InitClass() {
    this->columncdb_Column = (gcnew ::System::Data::DataColumn(L"cdb_Column", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::SimpleContent));
    __super::Columns->Add(this->columncdb_Column);
    this->columnListCDB_Id = (gcnew ::System::Data::DataColumn(L"ListCDB_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnListCDB_Id);
    this->columncdb_Column->AllowDBNull = false;
}

inline ConfigurazioneItinerari::cdbRow^  ConfigurazioneItinerari::cdbDataTable::NewcdbRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::cdbRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::cdbDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::cdbRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::cdbDataTable::GetRowType() {
    return ConfigurazioneItinerari::cdbRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::cdbDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->cdbRowChanged(this, (gcnew ConfigurazioneItinerari::cdbRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::cdbRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::cdbDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->cdbRowChanging(this, (gcnew ConfigurazioneItinerari::cdbRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::cdbRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::cdbDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->cdbRowDeleted(this, (gcnew ConfigurazioneItinerari::cdbRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::cdbRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::cdbDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->cdbRowDeleting(this, (gcnew ConfigurazioneItinerari::cdbRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::cdbRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::cdbDataTable::RemovecdbRow(ConfigurazioneItinerari::cdbRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::cdbDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"cdbDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::lrgbDataTable::lrgbDataTable() {
    this->TableName = L"lrgb";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::lrgbDataTable::lrgbDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::lrgbDataTable::lrgbDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::lrgbDataTable::nidColumn::get() {
    return this->columnnid;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::lrgbDataTable::dstopColumn::get() {
    return this->columndstop;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::lrgbDataTable::lrgb_IdColumn::get() {
    return this->columnlrgb_Id;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::lrgbDataTable::ingresso_IdColumn::get() {
    return this->columningresso_Id;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::lrgbDataTable::partenza_IdColumn::get() {
    return this->columnpartenza_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::lrgbDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::lrgbRow^  ConfigurazioneItinerari::lrgbDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::lrgbRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::lrgbDataTable::AddlrgbRow(ConfigurazioneItinerari::lrgbRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::lrgbRow^  ConfigurazioneItinerari::lrgbDataTable::AddlrgbRow(System::UInt64 nid, System::UInt64 dstop, 
            ConfigurazioneItinerari::ingressoRow^  parentingressoRowByingresso_lrgb, ConfigurazioneItinerari::partenzaRow^  parentpartenzaRowBypartenza_lrgb) {
    ConfigurazioneItinerari::lrgbRow^  rowlrgbRow = (cli::safe_cast<ConfigurazioneItinerari::lrgbRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(5) {nid, dstop, nullptr, nullptr, 
        nullptr};
    if (parentingressoRowByingresso_lrgb != nullptr) {
        columnValuesArray[3] = parentingressoRowByingresso_lrgb[7];
    }
    if (parentpartenzaRowBypartenza_lrgb != nullptr) {
        columnValuesArray[4] = parentpartenzaRowBypartenza_lrgb[8];
    }
    rowlrgbRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowlrgbRow);
    return rowlrgbRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::lrgbDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::lrgbDataTable::Clone() {
    ConfigurazioneItinerari::lrgbDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::lrgbDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::lrgbDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::lrgbDataTable());
}

inline ::System::Void ConfigurazioneItinerari::lrgbDataTable::InitVars() {
    this->columnnid = __super::Columns[L"nid"];
    this->columndstop = __super::Columns[L"dstop"];
    this->columnlrgb_Id = __super::Columns[L"lrgb_Id"];
    this->columningresso_Id = __super::Columns[L"ingresso_Id"];
    this->columnpartenza_Id = __super::Columns[L"partenza_Id"];
}

inline ::System::Void ConfigurazioneItinerari::lrgbDataTable::InitClass() {
    this->columnnid = (gcnew ::System::Data::DataColumn(L"nid", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnnid);
    this->columndstop = (gcnew ::System::Data::DataColumn(L"dstop", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columndstop);
    this->columnlrgb_Id = (gcnew ::System::Data::DataColumn(L"lrgb_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnlrgb_Id);
    this->columningresso_Id = (gcnew ::System::Data::DataColumn(L"ingresso_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columningresso_Id);
    this->columnpartenza_Id = (gcnew ::System::Data::DataColumn(L"partenza_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnpartenza_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnlrgb_Id}, 
            true)));
    this->columnnid->Namespace = L"";
    this->columndstop->Namespace = L"";
    this->columnlrgb_Id->AutoIncrement = true;
    this->columnlrgb_Id->AllowDBNull = false;
    this->columnlrgb_Id->Unique = true;
}

inline ConfigurazioneItinerari::lrgbRow^  ConfigurazioneItinerari::lrgbDataTable::NewlrgbRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::lrgbRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::lrgbDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::lrgbRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::lrgbDataTable::GetRowType() {
    return ConfigurazioneItinerari::lrgbRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::lrgbDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->lrgbRowChanged(this, (gcnew ConfigurazioneItinerari::lrgbRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::lrgbRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::lrgbDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->lrgbRowChanging(this, (gcnew ConfigurazioneItinerari::lrgbRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::lrgbRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::lrgbDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->lrgbRowDeleted(this, (gcnew ConfigurazioneItinerari::lrgbRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::lrgbRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::lrgbDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->lrgbRowDeleting(this, (gcnew ConfigurazioneItinerari::lrgbRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::lrgbRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::lrgbDataTable::RemovelrgbRow(ConfigurazioneItinerari::lrgbRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::lrgbDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"lrgbDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::pkmDataTable::pkmDataTable() {
    this->TableName = L"pkm";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::pkmDataTable::pkmDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::pkmDataTable::pkmDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::pkmDataTable::kmColumn::get() {
    return this->columnkm;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::pkmDataTable::idoffstazColumn::get() {
    return this->columnidoffstaz;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::pkmDataTable::lrgb_IdColumn::get() {
    return this->columnlrgb_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::pkmDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::pkmRow^  ConfigurazioneItinerari::pkmDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::pkmRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::pkmDataTable::AddpkmRow(ConfigurazioneItinerari::pkmRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::pkmRow^  ConfigurazioneItinerari::pkmDataTable::AddpkmRow(System::UInt64 km, System::UInt64 idoffstaz, 
            ConfigurazioneItinerari::lrgbRow^  parentlrgbRowBylrgb_pkm) {
    ConfigurazioneItinerari::pkmRow^  rowpkmRow = (cli::safe_cast<ConfigurazioneItinerari::pkmRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {km, idoffstaz, nullptr};
    if (parentlrgbRowBylrgb_pkm != nullptr) {
        columnValuesArray[2] = parentlrgbRowBylrgb_pkm[2];
    }
    rowpkmRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowpkmRow);
    return rowpkmRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::pkmDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::pkmDataTable::Clone() {
    ConfigurazioneItinerari::pkmDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::pkmDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::pkmDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::pkmDataTable());
}

inline ::System::Void ConfigurazioneItinerari::pkmDataTable::InitVars() {
    this->columnkm = __super::Columns[L"km"];
    this->columnidoffstaz = __super::Columns[L"idoffstaz"];
    this->columnlrgb_Id = __super::Columns[L"lrgb_Id"];
}

inline ::System::Void ConfigurazioneItinerari::pkmDataTable::InitClass() {
    this->columnkm = (gcnew ::System::Data::DataColumn(L"km", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnkm);
    this->columnidoffstaz = (gcnew ::System::Data::DataColumn(L"idoffstaz", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnidoffstaz);
    this->columnlrgb_Id = (gcnew ::System::Data::DataColumn(L"lrgb_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnlrgb_Id);
    this->columnkm->Namespace = L"";
    this->columnidoffstaz->Namespace = L"";
}

inline ConfigurazioneItinerari::pkmRow^  ConfigurazioneItinerari::pkmDataTable::NewpkmRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::pkmRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::pkmDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::pkmRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::pkmDataTable::GetRowType() {
    return ConfigurazioneItinerari::pkmRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::pkmDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->pkmRowChanged(this, (gcnew ConfigurazioneItinerari::pkmRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::pkmRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::pkmDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->pkmRowChanging(this, (gcnew ConfigurazioneItinerari::pkmRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::pkmRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::pkmDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->pkmRowDeleted(this, (gcnew ConfigurazioneItinerari::pkmRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::pkmRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::pkmDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->pkmRowDeleting(this, (gcnew ConfigurazioneItinerari::pkmRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::pkmRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::pkmDataTable::RemovepkmRow(ConfigurazioneItinerari::pkmRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::pkmDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"pkmDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::itinerariUscitaDataTable::itinerariUscitaDataTable() {
    this->TableName = L"itinerariUscita";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::itinerariUscitaDataTable::itinerariUscitaDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::itinerariUscitaDataTable::itinerariUscitaDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::itinerariUscitaDataTable::itinerariUscita_IdColumn::get() {
    return this->columnitinerariUscita_Id;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::itinerariUscitaDataTable::stazione_IdColumn::get() {
    return this->columnstazione_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::itinerariUscitaDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::itinerariUscitaRow^  ConfigurazioneItinerari::itinerariUscitaDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaDataTable::AdditinerariUscitaRow(ConfigurazioneItinerari::itinerariUscitaRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::itinerariUscitaRow^  ConfigurazioneItinerari::itinerariUscitaDataTable::AdditinerariUscitaRow(
            ConfigurazioneItinerari::stazioneRow^  parentstazioneRowBystazione_itinerariUscita) {
    ConfigurazioneItinerari::itinerariUscitaRow^  rowitinerariUscitaRow = (cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(2) {nullptr, nullptr};
    if (parentstazioneRowBystazione_itinerariUscita != nullptr) {
        columnValuesArray[1] = parentstazioneRowBystazione_itinerariUscita[2];
    }
    rowitinerariUscitaRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowitinerariUscitaRow);
    return rowitinerariUscitaRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::itinerariUscitaDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::itinerariUscitaDataTable::Clone() {
    ConfigurazioneItinerari::itinerariUscitaDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::itinerariUscitaDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::itinerariUscitaDataTable());
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaDataTable::InitVars() {
    this->columnitinerariUscita_Id = __super::Columns[L"itinerariUscita_Id"];
    this->columnstazione_Id = __super::Columns[L"stazione_Id"];
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaDataTable::InitClass() {
    this->columnitinerariUscita_Id = (gcnew ::System::Data::DataColumn(L"itinerariUscita_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnitinerariUscita_Id);
    this->columnstazione_Id = (gcnew ::System::Data::DataColumn(L"stazione_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnstazione_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnitinerariUscita_Id}, 
            true)));
    this->columnitinerariUscita_Id->AutoIncrement = true;
    this->columnitinerariUscita_Id->AllowDBNull = false;
    this->columnitinerariUscita_Id->Unique = true;
}

inline ConfigurazioneItinerari::itinerariUscitaRow^  ConfigurazioneItinerari::itinerariUscitaDataTable::NewitinerariUscitaRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::itinerariUscitaDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::itinerariUscitaRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::itinerariUscitaDataTable::GetRowType() {
    return ConfigurazioneItinerari::itinerariUscitaRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->itinerariUscitaRowChanged(this, (gcnew ConfigurazioneItinerari::itinerariUscitaRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->itinerariUscitaRowChanging(this, (gcnew ConfigurazioneItinerari::itinerariUscitaRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->itinerariUscitaRowDeleted(this, (gcnew ConfigurazioneItinerari::itinerariUscitaRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->itinerariUscitaRowDeleting(this, (gcnew ConfigurazioneItinerari::itinerariUscitaRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaDataTable::RemoveitinerariUscitaRow(ConfigurazioneItinerari::itinerariUscitaRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::itinerariUscitaDataTable::GetTypedTableSchema(
            ::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"itinerariUscitaDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::partenzaDataTable::partenzaDataTable() {
    this->TableName = L"partenza";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ConfigurazioneItinerari::partenzaDataTable::partenzaDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline ConfigurazioneItinerari::partenzaDataTable::partenzaDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::idColumn::get() {
    return this->columnid;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::nameColumn::get() {
    return this->columnname;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::direzioneColumn::get() {
    return this->columndirezione;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::portebanchinaColumn::get() {
    return this->columnportebanchina;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::latobanchinaColumn::get() {
    return this->columnlatobanchina;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::prevcdbColumn::get() {
    return this->columnprevcdb;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::nextcdbColumn::get() {
    return this->columnnextcdb;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::nextstationColumn::get() {
    return this->columnnextstation;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::partenza_IdColumn::get() {
    return this->columnpartenza_Id;
}

inline ::System::Data::DataColumn^  ConfigurazioneItinerari::partenzaDataTable::itinerariUscita_IdColumn::get() {
    return this->columnitinerariUscita_Id;
}

inline ::System::Int32 ConfigurazioneItinerari::partenzaDataTable::Count::get() {
    return this->Rows->Count;
}

inline ConfigurazioneItinerari::partenzaRow^  ConfigurazioneItinerari::partenzaDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(this->Rows[index]));
}

inline ::System::Void ConfigurazioneItinerari::partenzaDataTable::AddpartenzaRow(ConfigurazioneItinerari::partenzaRow^  row) {
    this->Rows->Add(row);
}

inline ConfigurazioneItinerari::partenzaRow^  ConfigurazioneItinerari::partenzaDataTable::AddpartenzaRow(
            System::UInt64 id, 
            System::String^  name, 
            System::String^  direzione, 
            System::String^  portebanchina, 
            System::String^  latobanchina, 
            System::UInt64 prevcdb, 
            System::UInt64 nextcdb, 
            System::UInt64 nextstation, 
            ConfigurazioneItinerari::itinerariUscitaRow^  parentitinerariUscitaRowByitinerariUscita_partenza) {
    ConfigurazioneItinerari::partenzaRow^  rowpartenzaRow = (cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(10) {id, name, direzione, portebanchina, 
        latobanchina, prevcdb, nextcdb, nextstation, nullptr, nullptr};
    if (parentitinerariUscitaRowByitinerariUscita_partenza != nullptr) {
        columnValuesArray[9] = parentitinerariUscitaRowByitinerariUscita_partenza[0];
    }
    rowpartenzaRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowpartenzaRow);
    return rowpartenzaRow;
}

inline ::System::Collections::IEnumerator^  ConfigurazioneItinerari::partenzaDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::partenzaDataTable::Clone() {
    ConfigurazioneItinerari::partenzaDataTable^  cln = (cli::safe_cast<ConfigurazioneItinerari::partenzaDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  ConfigurazioneItinerari::partenzaDataTable::CreateInstance() {
    return (gcnew ConfigurazioneItinerari::partenzaDataTable());
}

inline ::System::Void ConfigurazioneItinerari::partenzaDataTable::InitVars() {
    this->columnid = __super::Columns[L"id"];
    this->columnname = __super::Columns[L"name"];
    this->columndirezione = __super::Columns[L"direzione"];
    this->columnportebanchina = __super::Columns[L"portebanchina"];
    this->columnlatobanchina = __super::Columns[L"latobanchina"];
    this->columnprevcdb = __super::Columns[L"prevcdb"];
    this->columnnextcdb = __super::Columns[L"nextcdb"];
    this->columnnextstation = __super::Columns[L"nextstation"];
    this->columnpartenza_Id = __super::Columns[L"partenza_Id"];
    this->columnitinerariUscita_Id = __super::Columns[L"itinerariUscita_Id"];
}

inline ::System::Void ConfigurazioneItinerari::partenzaDataTable::InitClass() {
    this->columnid = (gcnew ::System::Data::DataColumn(L"id", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnid);
    this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnname);
    this->columndirezione = (gcnew ::System::Data::DataColumn(L"direzione", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columndirezione);
    this->columnportebanchina = (gcnew ::System::Data::DataColumn(L"portebanchina", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnportebanchina);
    this->columnlatobanchina = (gcnew ::System::Data::DataColumn(L"latobanchina", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnlatobanchina);
    this->columnprevcdb = (gcnew ::System::Data::DataColumn(L"prevcdb", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnprevcdb);
    this->columnnextcdb = (gcnew ::System::Data::DataColumn(L"nextcdb", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnnextcdb);
    this->columnnextstation = (gcnew ::System::Data::DataColumn(L"nextstation", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnnextstation);
    this->columnpartenza_Id = (gcnew ::System::Data::DataColumn(L"partenza_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnpartenza_Id);
    this->columnitinerariUscita_Id = (gcnew ::System::Data::DataColumn(L"itinerariUscita_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnitinerariUscita_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnpartenza_Id}, 
            true)));
    this->columnid->Namespace = L"";
    this->columnname->Namespace = L"";
    this->columndirezione->Namespace = L"";
    this->columnportebanchina->Namespace = L"";
    this->columnlatobanchina->Namespace = L"";
    this->columnprevcdb->Namespace = L"";
    this->columnnextcdb->Namespace = L"";
    this->columnnextstation->Namespace = L"";
    this->columnpartenza_Id->AutoIncrement = true;
    this->columnpartenza_Id->AllowDBNull = false;
    this->columnpartenza_Id->Unique = true;
}

inline ConfigurazioneItinerari::partenzaRow^  ConfigurazioneItinerari::partenzaDataTable::NewpartenzaRow() {
    return (cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  ConfigurazioneItinerari::partenzaDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew ConfigurazioneItinerari::partenzaRow(builder));
}

inline ::System::Type^  ConfigurazioneItinerari::partenzaDataTable::GetRowType() {
    return ConfigurazioneItinerari::partenzaRow::typeid;
}

inline ::System::Void ConfigurazioneItinerari::partenzaDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->partenzaRowChanged(this, (gcnew ConfigurazioneItinerari::partenzaRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::partenzaDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->partenzaRowChanging(this, (gcnew ConfigurazioneItinerari::partenzaRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::partenzaDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->partenzaRowDeleted(this, (gcnew ConfigurazioneItinerari::partenzaRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::partenzaDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->partenzaRowDeleting(this, (gcnew ConfigurazioneItinerari::partenzaRowChangeEvent((cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void ConfigurazioneItinerari::partenzaDataTable::RemovepartenzaRow(ConfigurazioneItinerari::partenzaRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  ConfigurazioneItinerari::partenzaDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ConfigurazioneItinerari^  ds = (gcnew ConfigurazioneItinerari());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"partenzaDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline ConfigurazioneItinerari::stazioneRow::stazioneRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablestazione = (cli::safe_cast<ConfigurazioneItinerari::stazioneDataTable^  >(this->Table));
}

inline System::String^  ConfigurazioneItinerari::stazioneRow::name::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablestazione->nameColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'name\' nella tabella \'stazione\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::stazioneRow::name::set(System::String^  value) {
    this[this->tablestazione->nameColumn] = value;
}

inline System::UInt64 ConfigurazioneItinerari::stazioneRow::id_offset::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablestazione->id_offsetColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'id_offset\' nella tabella \'stazione\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::stazioneRow::id_offset::set(System::UInt64 value) {
    this[this->tablestazione->id_offsetColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::stazioneRow::stazione_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tablestazione->stazione_IdColumn]));
}
inline System::Void ConfigurazioneItinerari::stazioneRow::stazione_Id::set(System::Int32 value) {
    this[this->tablestazione->stazione_IdColumn] = value;
}

inline ::System::Boolean ConfigurazioneItinerari::stazioneRow::IsnameNull() {
    return this->IsNull(this->tablestazione->nameColumn);
}

inline ::System::Void ConfigurazioneItinerari::stazioneRow::SetnameNull() {
    this[this->tablestazione->nameColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::stazioneRow::Isid_offsetNull() {
    return this->IsNull(this->tablestazione->id_offsetColumn);
}

inline ::System::Void ConfigurazioneItinerari::stazioneRow::Setid_offsetNull() {
    this[this->tablestazione->id_offsetColumn] = ::System::Convert::DBNull;
}

inline cli::array< ConfigurazioneItinerari::itinerariIngressoRow^  >^  ConfigurazioneItinerari::stazioneRow::GetitinerariIngressoRows() {
    if (this->Table->ChildRelations[L"stazione_itinerariIngresso"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::itinerariIngressoRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::itinerariIngressoRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"stazione_itinerariIngresso"])));
    }
}

inline cli::array< ConfigurazioneItinerari::itinerariUscitaRow^  >^  ConfigurazioneItinerari::stazioneRow::GetitinerariUscitaRows() {
    if (this->Table->ChildRelations[L"stazione_itinerariUscita"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::itinerariUscitaRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::itinerariUscitaRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"stazione_itinerariUscita"])));
    }
}


inline ConfigurazioneItinerari::itinerariIngressoRow::itinerariIngressoRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tableitinerariIngresso = (cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoDataTable^  >(this->Table));
}

inline System::Int32 ConfigurazioneItinerari::itinerariIngressoRow::itinerariIngresso_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tableitinerariIngresso->itinerariIngresso_IdColumn]));
}
inline System::Void ConfigurazioneItinerari::itinerariIngressoRow::itinerariIngresso_Id::set(System::Int32 value) {
    this[this->tableitinerariIngresso->itinerariIngresso_IdColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::itinerariIngressoRow::stazione_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tableitinerariIngresso->stazione_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'stazione_Id\' nella tabella \'itinerariIngresso\' è DBNull." 
L"", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::itinerariIngressoRow::stazione_Id::set(System::Int32 value) {
    this[this->tableitinerariIngresso->stazione_IdColumn] = value;
}

inline ConfigurazioneItinerari::stazioneRow^  ConfigurazioneItinerari::itinerariIngressoRow::stazioneRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(this->GetParentRow(this->Table->ParentRelations[L"stazione_itinerariIngresso"])));
}
inline System::Void ConfigurazioneItinerari::itinerariIngressoRow::stazioneRow::set(ConfigurazioneItinerari::stazioneRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"stazione_itinerariIngresso"]);
}

inline ::System::Boolean ConfigurazioneItinerari::itinerariIngressoRow::Isstazione_IdNull() {
    return this->IsNull(this->tableitinerariIngresso->stazione_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::itinerariIngressoRow::Setstazione_IdNull() {
    this[this->tableitinerariIngresso->stazione_IdColumn] = ::System::Convert::DBNull;
}

inline cli::array< ConfigurazioneItinerari::ingressoRow^  >^  ConfigurazioneItinerari::itinerariIngressoRow::GetingressoRows() {
    if (this->Table->ChildRelations[L"itinerariIngresso_ingresso"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::ingressoRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::ingressoRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"itinerariIngresso_ingresso"])));
    }
}


inline ConfigurazioneItinerari::ingressoRow::ingressoRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tableingresso = (cli::safe_cast<ConfigurazioneItinerari::ingressoDataTable^  >(this->Table));
}

inline System::UInt64 ConfigurazioneItinerari::ingressoRow::id::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tableingresso->idColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'id\' nella tabella \'ingresso\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ingressoRow::id::set(System::UInt64 value) {
    this[this->tableingresso->idColumn] = value;
}

inline System::String^  ConfigurazioneItinerari::ingressoRow::name::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tableingresso->nameColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'name\' nella tabella \'ingresso\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ingressoRow::name::set(System::String^  value) {
    this[this->tableingresso->nameColumn] = value;
}

inline System::String^  ConfigurazioneItinerari::ingressoRow::direzione::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tableingresso->direzioneColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'direzione\' nella tabella \'ingresso\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ingressoRow::direzione::set(System::String^  value) {
    this[this->tableingresso->direzioneColumn] = value;
}

inline System::String^  ConfigurazioneItinerari::ingressoRow::portebanchina::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tableingresso->portebanchinaColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'portebanchina\' nella tabella \'ingresso\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ingressoRow::portebanchina::set(System::String^  value) {
    this[this->tableingresso->portebanchinaColumn] = value;
}

inline System::String^  ConfigurazioneItinerari::ingressoRow::latobanchina::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tableingresso->latobanchinaColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'latobanchina\' nella tabella \'ingresso\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ingressoRow::latobanchina::set(System::String^  value) {
    this[this->tableingresso->latobanchinaColumn] = value;
}

inline System::UInt64 ConfigurazioneItinerari::ingressoRow::prevcdb::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tableingresso->prevcdbColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'prevcdb\' nella tabella \'ingresso\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ingressoRow::prevcdb::set(System::UInt64 value) {
    this[this->tableingresso->prevcdbColumn] = value;
}

inline System::UInt64 ConfigurazioneItinerari::ingressoRow::nextcdb::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tableingresso->nextcdbColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'nextcdb\' nella tabella \'ingresso\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ingressoRow::nextcdb::set(System::UInt64 value) {
    this[this->tableingresso->nextcdbColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::ingressoRow::ingresso_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tableingresso->ingresso_IdColumn]));
}
inline System::Void ConfigurazioneItinerari::ingressoRow::ingresso_Id::set(System::Int32 value) {
    this[this->tableingresso->ingresso_IdColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::ingressoRow::itinerariIngresso_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tableingresso->itinerariIngresso_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'itinerariIngresso_Id\' nella tabella \'ingresso\' è DBNull." 
L"", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ingressoRow::itinerariIngresso_Id::set(System::Int32 value) {
    this[this->tableingresso->itinerariIngresso_IdColumn] = value;
}

inline ConfigurazioneItinerari::itinerariIngressoRow^  ConfigurazioneItinerari::ingressoRow::itinerariIngressoRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::itinerariIngressoRow^  >(this->GetParentRow(this->Table->ParentRelations[L"itinerariIngresso_ingresso"])));
}
inline System::Void ConfigurazioneItinerari::ingressoRow::itinerariIngressoRow::set(ConfigurazioneItinerari::itinerariIngressoRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"itinerariIngresso_ingresso"]);
}

inline ::System::Boolean ConfigurazioneItinerari::ingressoRow::IsidNull() {
    return this->IsNull(this->tableingresso->idColumn);
}

inline ::System::Void ConfigurazioneItinerari::ingressoRow::SetidNull() {
    this[this->tableingresso->idColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::ingressoRow::IsnameNull() {
    return this->IsNull(this->tableingresso->nameColumn);
}

inline ::System::Void ConfigurazioneItinerari::ingressoRow::SetnameNull() {
    this[this->tableingresso->nameColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::ingressoRow::IsdirezioneNull() {
    return this->IsNull(this->tableingresso->direzioneColumn);
}

inline ::System::Void ConfigurazioneItinerari::ingressoRow::SetdirezioneNull() {
    this[this->tableingresso->direzioneColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::ingressoRow::IsportebanchinaNull() {
    return this->IsNull(this->tableingresso->portebanchinaColumn);
}

inline ::System::Void ConfigurazioneItinerari::ingressoRow::SetportebanchinaNull() {
    this[this->tableingresso->portebanchinaColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::ingressoRow::IslatobanchinaNull() {
    return this->IsNull(this->tableingresso->latobanchinaColumn);
}

inline ::System::Void ConfigurazioneItinerari::ingressoRow::SetlatobanchinaNull() {
    this[this->tableingresso->latobanchinaColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::ingressoRow::IsprevcdbNull() {
    return this->IsNull(this->tableingresso->prevcdbColumn);
}

inline ::System::Void ConfigurazioneItinerari::ingressoRow::SetprevcdbNull() {
    this[this->tableingresso->prevcdbColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::ingressoRow::IsnextcdbNull() {
    return this->IsNull(this->tableingresso->nextcdbColumn);
}

inline ::System::Void ConfigurazioneItinerari::ingressoRow::SetnextcdbNull() {
    this[this->tableingresso->nextcdbColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::ingressoRow::IsitinerariIngresso_IdNull() {
    return this->IsNull(this->tableingresso->itinerariIngresso_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::ingressoRow::SetitinerariIngresso_IdNull() {
    this[this->tableingresso->itinerariIngresso_IdColumn] = ::System::Convert::DBNull;
}

inline cli::array< ConfigurazioneItinerari::ListCDBRow^  >^  ConfigurazioneItinerari::ingressoRow::GetListCDBRows() {
    if (this->Table->ChildRelations[L"ingresso_ListCDB"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::ListCDBRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::ListCDBRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"ingresso_ListCDB"])));
    }
}

inline cli::array< ConfigurazioneItinerari::lrgbRow^  >^  ConfigurazioneItinerari::ingressoRow::GetlrgbRows() {
    if (this->Table->ChildRelations[L"ingresso_lrgb"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::lrgbRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::lrgbRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"ingresso_lrgb"])));
    }
}


inline ConfigurazioneItinerari::ListCDBRow::ListCDBRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tableListCDB = (cli::safe_cast<ConfigurazioneItinerari::ListCDBDataTable^  >(this->Table));
}

inline System::Int32 ConfigurazioneItinerari::ListCDBRow::ListCDB_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tableListCDB->ListCDB_IdColumn]));
}
inline System::Void ConfigurazioneItinerari::ListCDBRow::ListCDB_Id::set(System::Int32 value) {
    this[this->tableListCDB->ListCDB_IdColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::ListCDBRow::ingresso_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tableListCDB->ingresso_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'ingresso_Id\' nella tabella \'ListCDB\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ListCDBRow::ingresso_Id::set(System::Int32 value) {
    this[this->tableListCDB->ingresso_IdColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::ListCDBRow::partenza_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tableListCDB->partenza_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'partenza_Id\' nella tabella \'ListCDB\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::ListCDBRow::partenza_Id::set(System::Int32 value) {
    this[this->tableListCDB->partenza_IdColumn] = value;
}

inline ConfigurazioneItinerari::ingressoRow^  ConfigurazioneItinerari::ListCDBRow::ingressoRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(this->GetParentRow(this->Table->ParentRelations[L"ingresso_ListCDB"])));
}
inline System::Void ConfigurazioneItinerari::ListCDBRow::ingressoRow::set(ConfigurazioneItinerari::ingressoRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"ingresso_ListCDB"]);
}

inline ConfigurazioneItinerari::partenzaRow^  ConfigurazioneItinerari::ListCDBRow::partenzaRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(this->GetParentRow(this->Table->ParentRelations[L"partenza_ListCDB"])));
}
inline System::Void ConfigurazioneItinerari::ListCDBRow::partenzaRow::set(ConfigurazioneItinerari::partenzaRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"partenza_ListCDB"]);
}

inline ::System::Boolean ConfigurazioneItinerari::ListCDBRow::Isingresso_IdNull() {
    return this->IsNull(this->tableListCDB->ingresso_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::ListCDBRow::Setingresso_IdNull() {
    this[this->tableListCDB->ingresso_IdColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::ListCDBRow::Ispartenza_IdNull() {
    return this->IsNull(this->tableListCDB->partenza_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::ListCDBRow::Setpartenza_IdNull() {
    this[this->tableListCDB->partenza_IdColumn] = ::System::Convert::DBNull;
}

inline cli::array< ConfigurazioneItinerari::cdbRow^  >^  ConfigurazioneItinerari::ListCDBRow::GetcdbRows() {
    if (this->Table->ChildRelations[L"ListCDB_cdb"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::cdbRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::cdbRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"ListCDB_cdb"])));
    }
}


inline ConfigurazioneItinerari::cdbRow::cdbRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablecdb = (cli::safe_cast<ConfigurazioneItinerari::cdbDataTable^  >(this->Table));
}

inline System::UInt64 ConfigurazioneItinerari::cdbRow::cdb_Column::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tablecdb->cdb_ColumnColumn]));
}
inline System::Void ConfigurazioneItinerari::cdbRow::cdb_Column::set(System::UInt64 value) {
    this[this->tablecdb->cdb_ColumnColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::cdbRow::ListCDB_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablecdb->ListCDB_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'ListCDB_Id\' nella tabella \'cdb\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::cdbRow::ListCDB_Id::set(System::Int32 value) {
    this[this->tablecdb->ListCDB_IdColumn] = value;
}

inline ConfigurazioneItinerari::ListCDBRow^  ConfigurazioneItinerari::cdbRow::ListCDBRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::ListCDBRow^  >(this->GetParentRow(this->Table->ParentRelations[L"ListCDB_cdb"])));
}
inline System::Void ConfigurazioneItinerari::cdbRow::ListCDBRow::set(ConfigurazioneItinerari::ListCDBRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"ListCDB_cdb"]);
}

inline ::System::Boolean ConfigurazioneItinerari::cdbRow::IsListCDB_IdNull() {
    return this->IsNull(this->tablecdb->ListCDB_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::cdbRow::SetListCDB_IdNull() {
    this[this->tablecdb->ListCDB_IdColumn] = ::System::Convert::DBNull;
}


inline ConfigurazioneItinerari::lrgbRow::lrgbRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablelrgb = (cli::safe_cast<ConfigurazioneItinerari::lrgbDataTable^  >(this->Table));
}

inline System::UInt64 ConfigurazioneItinerari::lrgbRow::nid::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablelrgb->nidColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'nid\' nella tabella \'lrgb\' è DBNull.", e));
    }
}
inline System::Void ConfigurazioneItinerari::lrgbRow::nid::set(System::UInt64 value) {
    this[this->tablelrgb->nidColumn] = value;
}

inline System::UInt64 ConfigurazioneItinerari::lrgbRow::dstop::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablelrgb->dstopColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'dstop\' nella tabella \'lrgb\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::lrgbRow::dstop::set(System::UInt64 value) {
    this[this->tablelrgb->dstopColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::lrgbRow::lrgb_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tablelrgb->lrgb_IdColumn]));
}
inline System::Void ConfigurazioneItinerari::lrgbRow::lrgb_Id::set(System::Int32 value) {
    this[this->tablelrgb->lrgb_IdColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::lrgbRow::ingresso_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablelrgb->ingresso_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'ingresso_Id\' nella tabella \'lrgb\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::lrgbRow::ingresso_Id::set(System::Int32 value) {
    this[this->tablelrgb->ingresso_IdColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::lrgbRow::partenza_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablelrgb->partenza_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'partenza_Id\' nella tabella \'lrgb\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::lrgbRow::partenza_Id::set(System::Int32 value) {
    this[this->tablelrgb->partenza_IdColumn] = value;
}

inline ConfigurazioneItinerari::ingressoRow^  ConfigurazioneItinerari::lrgbRow::ingressoRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::ingressoRow^  >(this->GetParentRow(this->Table->ParentRelations[L"ingresso_lrgb"])));
}
inline System::Void ConfigurazioneItinerari::lrgbRow::ingressoRow::set(ConfigurazioneItinerari::ingressoRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"ingresso_lrgb"]);
}

inline ConfigurazioneItinerari::partenzaRow^  ConfigurazioneItinerari::lrgbRow::partenzaRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::partenzaRow^  >(this->GetParentRow(this->Table->ParentRelations[L"partenza_lrgb"])));
}
inline System::Void ConfigurazioneItinerari::lrgbRow::partenzaRow::set(ConfigurazioneItinerari::partenzaRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"partenza_lrgb"]);
}

inline ::System::Boolean ConfigurazioneItinerari::lrgbRow::IsnidNull() {
    return this->IsNull(this->tablelrgb->nidColumn);
}

inline ::System::Void ConfigurazioneItinerari::lrgbRow::SetnidNull() {
    this[this->tablelrgb->nidColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::lrgbRow::IsdstopNull() {
    return this->IsNull(this->tablelrgb->dstopColumn);
}

inline ::System::Void ConfigurazioneItinerari::lrgbRow::SetdstopNull() {
    this[this->tablelrgb->dstopColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::lrgbRow::Isingresso_IdNull() {
    return this->IsNull(this->tablelrgb->ingresso_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::lrgbRow::Setingresso_IdNull() {
    this[this->tablelrgb->ingresso_IdColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::lrgbRow::Ispartenza_IdNull() {
    return this->IsNull(this->tablelrgb->partenza_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::lrgbRow::Setpartenza_IdNull() {
    this[this->tablelrgb->partenza_IdColumn] = ::System::Convert::DBNull;
}

inline cli::array< ConfigurazioneItinerari::pkmRow^  >^  ConfigurazioneItinerari::lrgbRow::GetpkmRows() {
    if (this->Table->ChildRelations[L"lrgb_pkm"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::pkmRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::pkmRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"lrgb_pkm"])));
    }
}


inline ConfigurazioneItinerari::pkmRow::pkmRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablepkm = (cli::safe_cast<ConfigurazioneItinerari::pkmDataTable^  >(this->Table));
}

inline System::UInt64 ConfigurazioneItinerari::pkmRow::km::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablepkm->kmColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'km\' nella tabella \'pkm\' è DBNull.", e));
    }
}
inline System::Void ConfigurazioneItinerari::pkmRow::km::set(System::UInt64 value) {
    this[this->tablepkm->kmColumn] = value;
}

inline System::UInt64 ConfigurazioneItinerari::pkmRow::idoffstaz::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablepkm->idoffstazColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'idoffstaz\' nella tabella \'pkm\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::pkmRow::idoffstaz::set(System::UInt64 value) {
    this[this->tablepkm->idoffstazColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::pkmRow::lrgb_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablepkm->lrgb_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'lrgb_Id\' nella tabella \'pkm\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::pkmRow::lrgb_Id::set(System::Int32 value) {
    this[this->tablepkm->lrgb_IdColumn] = value;
}

inline ConfigurazioneItinerari::lrgbRow^  ConfigurazioneItinerari::pkmRow::lrgbRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::lrgbRow^  >(this->GetParentRow(this->Table->ParentRelations[L"lrgb_pkm"])));
}
inline System::Void ConfigurazioneItinerari::pkmRow::lrgbRow::set(ConfigurazioneItinerari::lrgbRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"lrgb_pkm"]);
}

inline ::System::Boolean ConfigurazioneItinerari::pkmRow::IskmNull() {
    return this->IsNull(this->tablepkm->kmColumn);
}

inline ::System::Void ConfigurazioneItinerari::pkmRow::SetkmNull() {
    this[this->tablepkm->kmColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::pkmRow::IsidoffstazNull() {
    return this->IsNull(this->tablepkm->idoffstazColumn);
}

inline ::System::Void ConfigurazioneItinerari::pkmRow::SetidoffstazNull() {
    this[this->tablepkm->idoffstazColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::pkmRow::Islrgb_IdNull() {
    return this->IsNull(this->tablepkm->lrgb_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::pkmRow::Setlrgb_IdNull() {
    this[this->tablepkm->lrgb_IdColumn] = ::System::Convert::DBNull;
}


inline ConfigurazioneItinerari::itinerariUscitaRow::itinerariUscitaRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tableitinerariUscita = (cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaDataTable^  >(this->Table));
}

inline System::Int32 ConfigurazioneItinerari::itinerariUscitaRow::itinerariUscita_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tableitinerariUscita->itinerariUscita_IdColumn]));
}
inline System::Void ConfigurazioneItinerari::itinerariUscitaRow::itinerariUscita_Id::set(System::Int32 value) {
    this[this->tableitinerariUscita->itinerariUscita_IdColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::itinerariUscitaRow::stazione_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tableitinerariUscita->stazione_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'stazione_Id\' nella tabella \'itinerariUscita\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::itinerariUscitaRow::stazione_Id::set(System::Int32 value) {
    this[this->tableitinerariUscita->stazione_IdColumn] = value;
}

inline ConfigurazioneItinerari::stazioneRow^  ConfigurazioneItinerari::itinerariUscitaRow::stazioneRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::stazioneRow^  >(this->GetParentRow(this->Table->ParentRelations[L"stazione_itinerariUscita"])));
}
inline System::Void ConfigurazioneItinerari::itinerariUscitaRow::stazioneRow::set(ConfigurazioneItinerari::stazioneRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"stazione_itinerariUscita"]);
}

inline ::System::Boolean ConfigurazioneItinerari::itinerariUscitaRow::Isstazione_IdNull() {
    return this->IsNull(this->tableitinerariUscita->stazione_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::itinerariUscitaRow::Setstazione_IdNull() {
    this[this->tableitinerariUscita->stazione_IdColumn] = ::System::Convert::DBNull;
}

inline cli::array< ConfigurazioneItinerari::partenzaRow^  >^  ConfigurazioneItinerari::itinerariUscitaRow::GetpartenzaRows() {
    if (this->Table->ChildRelations[L"itinerariUscita_partenza"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::partenzaRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::partenzaRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"itinerariUscita_partenza"])));
    }
}


inline ConfigurazioneItinerari::partenzaRow::partenzaRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablepartenza = (cli::safe_cast<ConfigurazioneItinerari::partenzaDataTable^  >(this->Table));
}

inline System::UInt64 ConfigurazioneItinerari::partenzaRow::id::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablepartenza->idColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'id\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::id::set(System::UInt64 value) {
    this[this->tablepartenza->idColumn] = value;
}

inline System::String^  ConfigurazioneItinerari::partenzaRow::name::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablepartenza->nameColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'name\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::name::set(System::String^  value) {
    this[this->tablepartenza->nameColumn] = value;
}

inline System::String^  ConfigurazioneItinerari::partenzaRow::direzione::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablepartenza->direzioneColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'direzione\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::direzione::set(System::String^  value) {
    this[this->tablepartenza->direzioneColumn] = value;
}

inline System::String^  ConfigurazioneItinerari::partenzaRow::portebanchina::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablepartenza->portebanchinaColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'portebanchina\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::portebanchina::set(System::String^  value) {
    this[this->tablepartenza->portebanchinaColumn] = value;
}

inline System::String^  ConfigurazioneItinerari::partenzaRow::latobanchina::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablepartenza->latobanchinaColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'latobanchina\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::latobanchina::set(System::String^  value) {
    this[this->tablepartenza->latobanchinaColumn] = value;
}

inline System::UInt64 ConfigurazioneItinerari::partenzaRow::prevcdb::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablepartenza->prevcdbColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'prevcdb\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::prevcdb::set(System::UInt64 value) {
    this[this->tablepartenza->prevcdbColumn] = value;
}

inline System::UInt64 ConfigurazioneItinerari::partenzaRow::nextcdb::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablepartenza->nextcdbColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'nextcdb\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::nextcdb::set(System::UInt64 value) {
    this[this->tablepartenza->nextcdbColumn] = value;
}

inline System::UInt64 ConfigurazioneItinerari::partenzaRow::nextstation::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablepartenza->nextstationColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'nextstation\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::nextstation::set(System::UInt64 value) {
    this[this->tablepartenza->nextstationColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::partenzaRow::partenza_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tablepartenza->partenza_IdColumn]));
}
inline System::Void ConfigurazioneItinerari::partenzaRow::partenza_Id::set(System::Int32 value) {
    this[this->tablepartenza->partenza_IdColumn] = value;
}

inline System::Int32 ConfigurazioneItinerari::partenzaRow::itinerariUscita_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablepartenza->itinerariUscita_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'itinerariUscita_Id\' nella tabella \'partenza\' è DBNull.", 
            e));
    }
}
inline System::Void ConfigurazioneItinerari::partenzaRow::itinerariUscita_Id::set(System::Int32 value) {
    this[this->tablepartenza->itinerariUscita_IdColumn] = value;
}

inline ConfigurazioneItinerari::itinerariUscitaRow^  ConfigurazioneItinerari::partenzaRow::itinerariUscitaRow::get() {
    return (cli::safe_cast<ConfigurazioneItinerari::itinerariUscitaRow^  >(this->GetParentRow(this->Table->ParentRelations[L"itinerariUscita_partenza"])));
}
inline System::Void ConfigurazioneItinerari::partenzaRow::itinerariUscitaRow::set(ConfigurazioneItinerari::itinerariUscitaRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"itinerariUscita_partenza"]);
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IsidNull() {
    return this->IsNull(this->tablepartenza->idColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetidNull() {
    this[this->tablepartenza->idColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IsnameNull() {
    return this->IsNull(this->tablepartenza->nameColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetnameNull() {
    this[this->tablepartenza->nameColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IsdirezioneNull() {
    return this->IsNull(this->tablepartenza->direzioneColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetdirezioneNull() {
    this[this->tablepartenza->direzioneColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IsportebanchinaNull() {
    return this->IsNull(this->tablepartenza->portebanchinaColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetportebanchinaNull() {
    this[this->tablepartenza->portebanchinaColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IslatobanchinaNull() {
    return this->IsNull(this->tablepartenza->latobanchinaColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetlatobanchinaNull() {
    this[this->tablepartenza->latobanchinaColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IsprevcdbNull() {
    return this->IsNull(this->tablepartenza->prevcdbColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetprevcdbNull() {
    this[this->tablepartenza->prevcdbColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IsnextcdbNull() {
    return this->IsNull(this->tablepartenza->nextcdbColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetnextcdbNull() {
    this[this->tablepartenza->nextcdbColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IsnextstationNull() {
    return this->IsNull(this->tablepartenza->nextstationColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetnextstationNull() {
    this[this->tablepartenza->nextstationColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean ConfigurazioneItinerari::partenzaRow::IsitinerariUscita_IdNull() {
    return this->IsNull(this->tablepartenza->itinerariUscita_IdColumn);
}

inline ::System::Void ConfigurazioneItinerari::partenzaRow::SetitinerariUscita_IdNull() {
    this[this->tablepartenza->itinerariUscita_IdColumn] = ::System::Convert::DBNull;
}

inline cli::array< ConfigurazioneItinerari::ListCDBRow^  >^  ConfigurazioneItinerari::partenzaRow::GetListCDBRows() {
    if (this->Table->ChildRelations[L"partenza_ListCDB"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::ListCDBRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::ListCDBRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"partenza_ListCDB"])));
    }
}

inline cli::array< ConfigurazioneItinerari::lrgbRow^  >^  ConfigurazioneItinerari::partenzaRow::GetlrgbRows() {
    if (this->Table->ChildRelations[L"partenza_lrgb"] == nullptr) {
        return gcnew cli::array< ConfigurazioneItinerari::lrgbRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< ConfigurazioneItinerari::lrgbRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"partenza_lrgb"])));
    }
}


inline ConfigurazioneItinerari::stazioneRowChangeEvent::stazioneRowChangeEvent(ConfigurazioneItinerari::stazioneRow^  row, 
            ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::stazioneRow^  ConfigurazioneItinerari::stazioneRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::stazioneRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline ConfigurazioneItinerari::itinerariIngressoRowChangeEvent::itinerariIngressoRowChangeEvent(ConfigurazioneItinerari::itinerariIngressoRow^  row, 
            ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::itinerariIngressoRow^  ConfigurazioneItinerari::itinerariIngressoRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::itinerariIngressoRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline ConfigurazioneItinerari::ingressoRowChangeEvent::ingressoRowChangeEvent(ConfigurazioneItinerari::ingressoRow^  row, 
            ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::ingressoRow^  ConfigurazioneItinerari::ingressoRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::ingressoRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline ConfigurazioneItinerari::ListCDBRowChangeEvent::ListCDBRowChangeEvent(ConfigurazioneItinerari::ListCDBRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::ListCDBRow^  ConfigurazioneItinerari::ListCDBRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::ListCDBRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline ConfigurazioneItinerari::cdbRowChangeEvent::cdbRowChangeEvent(ConfigurazioneItinerari::cdbRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::cdbRow^  ConfigurazioneItinerari::cdbRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::cdbRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline ConfigurazioneItinerari::lrgbRowChangeEvent::lrgbRowChangeEvent(ConfigurazioneItinerari::lrgbRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::lrgbRow^  ConfigurazioneItinerari::lrgbRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::lrgbRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline ConfigurazioneItinerari::pkmRowChangeEvent::pkmRowChangeEvent(ConfigurazioneItinerari::pkmRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::pkmRow^  ConfigurazioneItinerari::pkmRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::pkmRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline ConfigurazioneItinerari::itinerariUscitaRowChangeEvent::itinerariUscitaRowChangeEvent(ConfigurazioneItinerari::itinerariUscitaRow^  row, 
            ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::itinerariUscitaRow^  ConfigurazioneItinerari::itinerariUscitaRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::itinerariUscitaRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline ConfigurazioneItinerari::partenzaRowChangeEvent::partenzaRowChangeEvent(ConfigurazioneItinerari::partenzaRow^  row, 
            ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline ConfigurazioneItinerari::partenzaRow^  ConfigurazioneItinerari::partenzaRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction ConfigurazioneItinerari::partenzaRowChangeEvent::Action::get() {
    return this->eventAction;
}
