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
ref class configurazionefermate;


/// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
[System::Serializable, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::ComponentModel::ToolboxItem(true), 
System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
System::Xml::Serialization::XmlRootAttribute(L"configurazionefermate"), 
System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
public ref class configurazionefermate : public ::System::Data::DataSet {
    public : ref class fermataDataTable;
    public : ref class binarioDataTable;
    public : ref class fermataRow;
    public : ref class binarioRow;
    public : ref class fermataRowChangeEvent;
    public : ref class binarioRowChangeEvent;
    
    private: configurazionefermate::fermataDataTable^  tablefermata;
    
    private: configurazionefermate::binarioDataTable^  tablebinario;
    
    private: ::System::Data::DataRelation^  relationfermata_binario;
    
    private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void fermataRowChangeEventHandler(::System::Object^  sender, configurazionefermate::fermataRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void binarioRowChangeEventHandler(::System::Object^  sender, configurazionefermate::binarioRowChangeEvent^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    configurazionefermate();
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    configurazionefermate(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property configurazionefermate::fermataDataTable^  fermata {
        configurazionefermate::fermataDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property configurazionefermate::binarioDataTable^  binario {
        configurazionefermate::binarioDataTable^  get();
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
    ::System::Boolean ShouldSerializefermata();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializebinario();
    
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
    ref class fermataDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnid;
        
        private: ::System::Data::DataColumn^  columnfermata_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event configurazionefermate::fermataRowChangeEventHandler^  fermataRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event configurazionefermate::fermataRowChangeEventHandler^  fermataRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event configurazionefermate::fermataRowChangeEventHandler^  fermataRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event configurazionefermate::fermataRowChangeEventHandler^  fermataRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        fermataDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        fermataDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        fermataDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  idColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  fermata_IdColumn {
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
        property configurazionefermate::fermataRow^  default [::System::Int32 ] {
            configurazionefermate::fermataRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddfermataRow(configurazionefermate::fermataRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        configurazionefermate::fermataRow^  AddfermataRow(System::String^  id);
        
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
        configurazionefermate::fermataRow^  NewfermataRow();
        
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
        ::System::Void RemovefermataRow(configurazionefermate::fermataRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class binarioDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnbin;
        
        private: ::System::Data::DataColumn^  columnnamebin;
        
        private: ::System::Data::DataColumn^  columndirezione;
        
        private: ::System::Data::DataColumn^  columnnid_lrgb;
        
        private: ::System::Data::DataColumn^  columnd_stop;
        
        private: ::System::Data::DataColumn^  columnportebanchina;
        
        private: ::System::Data::DataColumn^  columnlatobanchina;
        
        private: ::System::Data::DataColumn^  columnnextCDB;
        
        private: ::System::Data::DataColumn^  columnprevCDB;
        
        private: ::System::Data::DataColumn^  columncdb;
        
        private: ::System::Data::DataColumn^  columnfermata_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event configurazionefermate::binarioRowChangeEventHandler^  binarioRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event configurazionefermate::binarioRowChangeEventHandler^  binarioRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event configurazionefermate::binarioRowChangeEventHandler^  binarioRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event configurazionefermate::binarioRowChangeEventHandler^  binarioRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        binarioDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        binarioDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        binarioDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  binColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  namebinColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  direzioneColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nid_lrgbColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  d_stopColumn {
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
        property ::System::Data::DataColumn^  nextCDBColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  prevCDBColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  cdbColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  fermata_IdColumn {
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
        property configurazionefermate::binarioRow^  default [::System::Int32 ] {
            configurazionefermate::binarioRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddbinarioRow(configurazionefermate::binarioRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        configurazionefermate::binarioRow^  AddbinarioRow(
                    System::UInt64 bin, 
                    System::String^  namebin, 
                    System::String^  direzione, 
                    System::UInt64 nid_lrgb, 
                    System::UInt64 d_stop, 
                    System::String^  portebanchina, 
                    System::String^  latobanchina, 
                    System::UInt64 nextCDB, 
                    System::UInt64 prevCDB, 
                    System::String^  cdb, 
                    configurazionefermate::fermataRow^  parentfermataRowByfermata_binario);
        
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
        configurazionefermate::binarioRow^  NewbinarioRow();
        
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
        ::System::Void RemovebinarioRow(configurazionefermate::binarioRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class fermataRow : public ::System::Data::DataRow {
        
        private: configurazionefermate::fermataDataTable^  tablefermata;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        fermataRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  id {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 fermata_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsidNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetidNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< configurazionefermate::binarioRow^  >^  GetbinarioRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class binarioRow : public ::System::Data::DataRow {
        
        private: configurazionefermate::binarioDataTable^  tablebinario;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        binarioRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 bin {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  namebin {
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
        property System::UInt64 nid_lrgb {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 d_stop {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
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
        property System::UInt64 nextCDB {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 prevCDB {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  cdb {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 fermata_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property configurazionefermate::fermataRow^  fermataRow {
            configurazionefermate::fermataRow^  get();
            System::Void set(configurazionefermate::fermataRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsbinNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetbinNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsnamebinNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnamebinNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsdirezioneNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetdirezioneNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isnid_lrgbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setnid_lrgbNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isd_stopNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setd_stopNull();
        
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
        ::System::Boolean IsnextCDBNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetnextCDBNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsprevCDBNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetprevCDBNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isfermata_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setfermata_IdNull();
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class fermataRowChangeEvent : public ::System::EventArgs {
        
        private: configurazionefermate::fermataRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        fermataRowChangeEvent(configurazionefermate::fermataRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property configurazionefermate::fermataRow^  Row {
            configurazionefermate::fermataRow^  get();
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
    ref class binarioRowChangeEvent : public ::System::EventArgs {
        
        private: configurazionefermate::binarioRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        binarioRowChangeEvent(configurazionefermate::binarioRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property configurazionefermate::binarioRow^  Row {
            configurazionefermate::binarioRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
};


inline configurazionefermate::configurazionefermate() {
    this->BeginInit();
    this->InitClass();
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &configurazionefermate::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    __super::Relations->CollectionChanged += schemaChangedHandler;
    this->EndInit();
}

inline configurazionefermate::configurazionefermate(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataSet(info, context, false) {
    if (this->IsBinarySerialized(info, context) == true) {
        this->InitVars(false);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &configurazionefermate::SchemaChanged);
        this->Tables->CollectionChanged += schemaChangedHandler1;
        this->Relations->CollectionChanged += schemaChangedHandler1;
        return;
    }
    ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
    if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        if (ds->Tables[L"fermata"] != nullptr) {
            __super::Tables->Add((gcnew configurazionefermate::fermataDataTable(ds->Tables[L"fermata"])));
        }
        if (ds->Tables[L"binario"] != nullptr) {
            __super::Tables->Add((gcnew configurazionefermate::binarioDataTable(ds->Tables[L"binario"])));
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
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &configurazionefermate::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    this->Relations->CollectionChanged += schemaChangedHandler;
}

inline configurazionefermate::fermataDataTable^  configurazionefermate::fermata::get() {
    return this->tablefermata;
}

inline configurazionefermate::binarioDataTable^  configurazionefermate::binario::get() {
    return this->tablebinario;
}

inline ::System::Data::SchemaSerializationMode configurazionefermate::SchemaSerializationMode::get() {
    return this->_schemaSerializationMode;
}
inline System::Void configurazionefermate::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
    this->_schemaSerializationMode = __identifier(value);
}

inline ::System::Data::DataTableCollection^  configurazionefermate::Tables::get() {
    return __super::Tables;
}

inline ::System::Data::DataRelationCollection^  configurazionefermate::Relations::get() {
    return __super::Relations;
}

inline ::System::Void configurazionefermate::InitializeDerivedDataSet() {
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ::System::Data::DataSet^  configurazionefermate::Clone() {
    configurazionefermate^  cln = (cli::safe_cast<configurazionefermate^  >(__super::Clone()));
    cln->InitVars();
    cln->SchemaSerializationMode = this->SchemaSerializationMode;
    return cln;
}

inline ::System::Boolean configurazionefermate::ShouldSerializeTables() {
    return false;
}

inline ::System::Boolean configurazionefermate::ShouldSerializeRelations() {
    return false;
}

inline ::System::Void configurazionefermate::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
    if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        this->Reset();
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXml(reader);
        if (ds->Tables[L"fermata"] != nullptr) {
            __super::Tables->Add((gcnew configurazionefermate::fermataDataTable(ds->Tables[L"fermata"])));
        }
        if (ds->Tables[L"binario"] != nullptr) {
            __super::Tables->Add((gcnew configurazionefermate::binarioDataTable(ds->Tables[L"binario"])));
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

inline ::System::Xml::Schema::XmlSchema^  configurazionefermate::GetSchemaSerializable() {
    ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
    this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
    stream->Position = 0;
    return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
}

inline ::System::Void configurazionefermate::InitVars() {
    this->InitVars(true);
}

inline ::System::Void configurazionefermate::InitVars(::System::Boolean initTable) {
    this->tablefermata = (cli::safe_cast<configurazionefermate::fermataDataTable^  >(__super::Tables[L"fermata"]));
    if (initTable == true) {
        if (this->tablefermata != nullptr) {
            this->tablefermata->InitVars();
        }
    }
    this->tablebinario = (cli::safe_cast<configurazionefermate::binarioDataTable^  >(__super::Tables[L"binario"]));
    if (initTable == true) {
        if (this->tablebinario != nullptr) {
            this->tablebinario->InitVars();
        }
    }
    this->relationfermata_binario = this->Relations[L"fermata_binario"];
}

inline ::System::Void configurazionefermate::InitClass() {
    this->DataSetName = L"configurazionefermate";
    this->Prefix = L"";
    this->Namespace = L"urn:conffermate-schema";
    this->EnforceConstraints = true;
    this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
    this->tablefermata = (gcnew configurazionefermate::fermataDataTable());
    __super::Tables->Add(this->tablefermata);
    this->tablebinario = (gcnew configurazionefermate::binarioDataTable());
    __super::Tables->Add(this->tablebinario);
    ::System::Data::ForeignKeyConstraint^  fkc;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"fermata_binario", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablefermata->fermata_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablebinario->fermata_IdColumn}));
    this->tablebinario->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    this->relationfermata_binario = (gcnew ::System::Data::DataRelation(L"fermata_binario", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablefermata->fermata_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tablebinario->fermata_IdColumn}, false));
    this->relationfermata_binario->Nested = true;
    this->Relations->Add(this->relationfermata_binario);
}

inline ::System::Boolean configurazionefermate::ShouldSerializefermata() {
    return false;
}

inline ::System::Boolean configurazionefermate::ShouldSerializebinario() {
    return false;
}

inline ::System::Void configurazionefermate::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
    if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  configurazionefermate::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    configurazionefermate^  ds = (gcnew configurazionefermate());
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


inline configurazionefermate::fermataDataTable::fermataDataTable() {
    this->TableName = L"fermata";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline configurazionefermate::fermataDataTable::fermataDataTable(::System::Data::DataTable^  table) {
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

inline configurazionefermate::fermataDataTable::fermataDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  configurazionefermate::fermataDataTable::idColumn::get() {
    return this->columnid;
}

inline ::System::Data::DataColumn^  configurazionefermate::fermataDataTable::fermata_IdColumn::get() {
    return this->columnfermata_Id;
}

inline ::System::Int32 configurazionefermate::fermataDataTable::Count::get() {
    return this->Rows->Count;
}

inline configurazionefermate::fermataRow^  configurazionefermate::fermataDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<configurazionefermate::fermataRow^  >(this->Rows[index]));
}

inline ::System::Void configurazionefermate::fermataDataTable::AddfermataRow(configurazionefermate::fermataRow^  row) {
    this->Rows->Add(row);
}

inline configurazionefermate::fermataRow^  configurazionefermate::fermataDataTable::AddfermataRow(System::String^  id) {
    configurazionefermate::fermataRow^  rowfermataRow = (cli::safe_cast<configurazionefermate::fermataRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(2) {id, nullptr};
    rowfermataRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowfermataRow);
    return rowfermataRow;
}

inline ::System::Collections::IEnumerator^  configurazionefermate::fermataDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  configurazionefermate::fermataDataTable::Clone() {
    configurazionefermate::fermataDataTable^  cln = (cli::safe_cast<configurazionefermate::fermataDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  configurazionefermate::fermataDataTable::CreateInstance() {
    return (gcnew configurazionefermate::fermataDataTable());
}

inline ::System::Void configurazionefermate::fermataDataTable::InitVars() {
    this->columnid = __super::Columns[L"id"];
    this->columnfermata_Id = __super::Columns[L"fermata_Id"];
}

inline ::System::Void configurazionefermate::fermataDataTable::InitClass() {
    this->columnid = (gcnew ::System::Data::DataColumn(L"id", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnid);
    this->columnfermata_Id = (gcnew ::System::Data::DataColumn(L"fermata_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnfermata_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnfermata_Id}, 
            true)));
    this->columnid->Namespace = L"";
    this->columnfermata_Id->AutoIncrement = true;
    this->columnfermata_Id->AllowDBNull = false;
    this->columnfermata_Id->Unique = true;
}

inline configurazionefermate::fermataRow^  configurazionefermate::fermataDataTable::NewfermataRow() {
    return (cli::safe_cast<configurazionefermate::fermataRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  configurazionefermate::fermataDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew configurazionefermate::fermataRow(builder));
}

inline ::System::Type^  configurazionefermate::fermataDataTable::GetRowType() {
    return configurazionefermate::fermataRow::typeid;
}

inline ::System::Void configurazionefermate::fermataDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->fermataRowChanged(this, (gcnew configurazionefermate::fermataRowChangeEvent((cli::safe_cast<configurazionefermate::fermataRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void configurazionefermate::fermataDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->fermataRowChanging(this, (gcnew configurazionefermate::fermataRowChangeEvent((cli::safe_cast<configurazionefermate::fermataRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void configurazionefermate::fermataDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->fermataRowDeleted(this, (gcnew configurazionefermate::fermataRowChangeEvent((cli::safe_cast<configurazionefermate::fermataRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void configurazionefermate::fermataDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->fermataRowDeleting(this, (gcnew configurazionefermate::fermataRowChangeEvent((cli::safe_cast<configurazionefermate::fermataRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void configurazionefermate::fermataDataTable::RemovefermataRow(configurazionefermate::fermataRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  configurazionefermate::fermataDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    configurazionefermate^  ds = (gcnew configurazionefermate());
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
    attribute2->FixedValue = L"fermataDataTable";
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


inline configurazionefermate::binarioDataTable::binarioDataTable() {
    this->TableName = L"binario";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline configurazionefermate::binarioDataTable::binarioDataTable(::System::Data::DataTable^  table) {
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

inline configurazionefermate::binarioDataTable::binarioDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
            ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::binColumn::get() {
    return this->columnbin;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::namebinColumn::get() {
    return this->columnnamebin;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::direzioneColumn::get() {
    return this->columndirezione;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::nid_lrgbColumn::get() {
    return this->columnnid_lrgb;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::d_stopColumn::get() {
    return this->columnd_stop;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::portebanchinaColumn::get() {
    return this->columnportebanchina;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::latobanchinaColumn::get() {
    return this->columnlatobanchina;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::nextCDBColumn::get() {
    return this->columnnextCDB;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::prevCDBColumn::get() {
    return this->columnprevCDB;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::cdbColumn::get() {
    return this->columncdb;
}

inline ::System::Data::DataColumn^  configurazionefermate::binarioDataTable::fermata_IdColumn::get() {
    return this->columnfermata_Id;
}

inline ::System::Int32 configurazionefermate::binarioDataTable::Count::get() {
    return this->Rows->Count;
}

inline configurazionefermate::binarioRow^  configurazionefermate::binarioDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<configurazionefermate::binarioRow^  >(this->Rows[index]));
}

inline ::System::Void configurazionefermate::binarioDataTable::AddbinarioRow(configurazionefermate::binarioRow^  row) {
    this->Rows->Add(row);
}

inline configurazionefermate::binarioRow^  configurazionefermate::binarioDataTable::AddbinarioRow(
            System::UInt64 bin, 
            System::String^  namebin, 
            System::String^  direzione, 
            System::UInt64 nid_lrgb, 
            System::UInt64 d_stop, 
            System::String^  portebanchina, 
            System::String^  latobanchina, 
            System::UInt64 nextCDB, 
            System::UInt64 prevCDB, 
            System::String^  cdb, 
            configurazionefermate::fermataRow^  parentfermataRowByfermata_binario) {
    configurazionefermate::binarioRow^  rowbinarioRow = (cli::safe_cast<configurazionefermate::binarioRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(11) {bin, namebin, direzione, 
        nid_lrgb, d_stop, portebanchina, latobanchina, nextCDB, prevCDB, cdb, nullptr};
    if (parentfermataRowByfermata_binario != nullptr) {
        columnValuesArray[10] = parentfermataRowByfermata_binario[1];
    }
    rowbinarioRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowbinarioRow);
    return rowbinarioRow;
}

inline ::System::Collections::IEnumerator^  configurazionefermate::binarioDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  configurazionefermate::binarioDataTable::Clone() {
    configurazionefermate::binarioDataTable^  cln = (cli::safe_cast<configurazionefermate::binarioDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  configurazionefermate::binarioDataTable::CreateInstance() {
    return (gcnew configurazionefermate::binarioDataTable());
}

inline ::System::Void configurazionefermate::binarioDataTable::InitVars() {
    this->columnbin = __super::Columns[L"bin"];
    this->columnnamebin = __super::Columns[L"namebin"];
    this->columndirezione = __super::Columns[L"direzione"];
    this->columnnid_lrgb = __super::Columns[L"nid_lrgb"];
    this->columnd_stop = __super::Columns[L"d_stop"];
    this->columnportebanchina = __super::Columns[L"portebanchina"];
    this->columnlatobanchina = __super::Columns[L"latobanchina"];
    this->columnnextCDB = __super::Columns[L"nextCDB"];
    this->columnprevCDB = __super::Columns[L"prevCDB"];
    this->columncdb = __super::Columns[L"cdb"];
    this->columnfermata_Id = __super::Columns[L"fermata_Id"];
}

inline ::System::Void configurazionefermate::binarioDataTable::InitClass() {
    this->columnbin = (gcnew ::System::Data::DataColumn(L"bin", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnbin);
    this->columnnamebin = (gcnew ::System::Data::DataColumn(L"namebin", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnnamebin);
    this->columndirezione = (gcnew ::System::Data::DataColumn(L"direzione", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columndirezione);
    this->columnnid_lrgb = (gcnew ::System::Data::DataColumn(L"nid_lrgb", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnnid_lrgb);
    this->columnd_stop = (gcnew ::System::Data::DataColumn(L"d_stop", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnd_stop);
    this->columnportebanchina = (gcnew ::System::Data::DataColumn(L"portebanchina", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnportebanchina);
    this->columnlatobanchina = (gcnew ::System::Data::DataColumn(L"latobanchina", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnlatobanchina);
    this->columnnextCDB = (gcnew ::System::Data::DataColumn(L"nextCDB", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnnextCDB);
    this->columnprevCDB = (gcnew ::System::Data::DataColumn(L"prevCDB", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnprevCDB);
    this->columncdb = (gcnew ::System::Data::DataColumn(L"cdb", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columncdb);
    this->columnfermata_Id = (gcnew ::System::Data::DataColumn(L"fermata_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnfermata_Id);
    this->columnbin->Namespace = L"";
    this->columnnamebin->Namespace = L"";
    this->columndirezione->Namespace = L"";
    this->columnnid_lrgb->Namespace = L"";
    this->columnd_stop->Namespace = L"";
    this->columnportebanchina->Namespace = L"";
    this->columnlatobanchina->Namespace = L"";
    this->columnnextCDB->Namespace = L"";
    this->columnprevCDB->Namespace = L"";
    this->columncdb->AllowDBNull = false;
}

inline configurazionefermate::binarioRow^  configurazionefermate::binarioDataTable::NewbinarioRow() {
    return (cli::safe_cast<configurazionefermate::binarioRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  configurazionefermate::binarioDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew configurazionefermate::binarioRow(builder));
}

inline ::System::Type^  configurazionefermate::binarioDataTable::GetRowType() {
    return configurazionefermate::binarioRow::typeid;
}

inline ::System::Void configurazionefermate::binarioDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->binarioRowChanged(this, (gcnew configurazionefermate::binarioRowChangeEvent((cli::safe_cast<configurazionefermate::binarioRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void configurazionefermate::binarioDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->binarioRowChanging(this, (gcnew configurazionefermate::binarioRowChangeEvent((cli::safe_cast<configurazionefermate::binarioRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void configurazionefermate::binarioDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->binarioRowDeleted(this, (gcnew configurazionefermate::binarioRowChangeEvent((cli::safe_cast<configurazionefermate::binarioRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void configurazionefermate::binarioDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->binarioRowDeleting(this, (gcnew configurazionefermate::binarioRowChangeEvent((cli::safe_cast<configurazionefermate::binarioRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void configurazionefermate::binarioDataTable::RemovebinarioRow(configurazionefermate::binarioRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  configurazionefermate::binarioDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    configurazionefermate^  ds = (gcnew configurazionefermate());
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
    attribute2->FixedValue = L"binarioDataTable";
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


inline configurazionefermate::fermataRow::fermataRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablefermata = (cli::safe_cast<configurazionefermate::fermataDataTable^  >(this->Table));
}

inline System::String^  configurazionefermate::fermataRow::id::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablefermata->idColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'id\' nella tabella \'fermata\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::fermataRow::id::set(System::String^  value) {
    this[this->tablefermata->idColumn] = value;
}

inline System::Int32 configurazionefermate::fermataRow::fermata_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tablefermata->fermata_IdColumn]));
}
inline System::Void configurazionefermate::fermataRow::fermata_Id::set(System::Int32 value) {
    this[this->tablefermata->fermata_IdColumn] = value;
}

inline ::System::Boolean configurazionefermate::fermataRow::IsidNull() {
    return this->IsNull(this->tablefermata->idColumn);
}

inline ::System::Void configurazionefermate::fermataRow::SetidNull() {
    this[this->tablefermata->idColumn] = ::System::Convert::DBNull;
}

inline cli::array< configurazionefermate::binarioRow^  >^  configurazionefermate::fermataRow::GetbinarioRows() {
    if (this->Table->ChildRelations[L"fermata_binario"] == nullptr) {
        return gcnew cli::array< configurazionefermate::binarioRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< configurazionefermate::binarioRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"fermata_binario"])));
    }
}


inline configurazionefermate::binarioRow::binarioRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tablebinario = (cli::safe_cast<configurazionefermate::binarioDataTable^  >(this->Table));
}

inline System::UInt64 configurazionefermate::binarioRow::bin::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablebinario->binColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'bin\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::bin::set(System::UInt64 value) {
    this[this->tablebinario->binColumn] = value;
}

inline System::String^  configurazionefermate::binarioRow::namebin::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablebinario->namebinColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'namebin\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::namebin::set(System::String^  value) {
    this[this->tablebinario->namebinColumn] = value;
}

inline System::String^  configurazionefermate::binarioRow::direzione::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablebinario->direzioneColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'direzione\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::direzione::set(System::String^  value) {
    this[this->tablebinario->direzioneColumn] = value;
}

inline System::UInt64 configurazionefermate::binarioRow::nid_lrgb::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablebinario->nid_lrgbColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'nid_lrgb\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::nid_lrgb::set(System::UInt64 value) {
    this[this->tablebinario->nid_lrgbColumn] = value;
}

inline System::UInt64 configurazionefermate::binarioRow::d_stop::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablebinario->d_stopColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'d_stop\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::d_stop::set(System::UInt64 value) {
    this[this->tablebinario->d_stopColumn] = value;
}

inline System::String^  configurazionefermate::binarioRow::portebanchina::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablebinario->portebanchinaColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'portebanchina\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::portebanchina::set(System::String^  value) {
    this[this->tablebinario->portebanchinaColumn] = value;
}

inline System::String^  configurazionefermate::binarioRow::latobanchina::get() {
    try {
        return (cli::safe_cast<::System::String^  >(this[this->tablebinario->latobanchinaColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'latobanchina\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::latobanchina::set(System::String^  value) {
    this[this->tablebinario->latobanchinaColumn] = value;
}

inline System::UInt64 configurazionefermate::binarioRow::nextCDB::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablebinario->nextCDBColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'nextCDB\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::nextCDB::set(System::UInt64 value) {
    this[this->tablebinario->nextCDBColumn] = value;
}

inline System::UInt64 configurazionefermate::binarioRow::prevCDB::get() {
    try {
        return (cli::safe_cast<::System::UInt64 >(this[this->tablebinario->prevCDBColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'prevCDB\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::prevCDB::set(System::UInt64 value) {
    this[this->tablebinario->prevCDBColumn] = value;
}

inline System::String^  configurazionefermate::binarioRow::cdb::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tablebinario->cdbColumn]));
}
inline System::Void configurazionefermate::binarioRow::cdb::set(System::String^  value) {
    this[this->tablebinario->cdbColumn] = value;
}

inline System::Int32 configurazionefermate::binarioRow::fermata_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tablebinario->fermata_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"Il valore della colonna \'fermata_Id\' nella tabella \'binario\' è DBNull.", 
            e));
    }
}
inline System::Void configurazionefermate::binarioRow::fermata_Id::set(System::Int32 value) {
    this[this->tablebinario->fermata_IdColumn] = value;
}

inline configurazionefermate::fermataRow^  configurazionefermate::binarioRow::fermataRow::get() {
    return (cli::safe_cast<configurazionefermate::fermataRow^  >(this->GetParentRow(this->Table->ParentRelations[L"fermata_binario"])));
}
inline System::Void configurazionefermate::binarioRow::fermataRow::set(configurazionefermate::fermataRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"fermata_binario"]);
}

inline ::System::Boolean configurazionefermate::binarioRow::IsbinNull() {
    return this->IsNull(this->tablebinario->binColumn);
}

inline ::System::Void configurazionefermate::binarioRow::SetbinNull() {
    this[this->tablebinario->binColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::IsnamebinNull() {
    return this->IsNull(this->tablebinario->namebinColumn);
}

inline ::System::Void configurazionefermate::binarioRow::SetnamebinNull() {
    this[this->tablebinario->namebinColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::IsdirezioneNull() {
    return this->IsNull(this->tablebinario->direzioneColumn);
}

inline ::System::Void configurazionefermate::binarioRow::SetdirezioneNull() {
    this[this->tablebinario->direzioneColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::Isnid_lrgbNull() {
    return this->IsNull(this->tablebinario->nid_lrgbColumn);
}

inline ::System::Void configurazionefermate::binarioRow::Setnid_lrgbNull() {
    this[this->tablebinario->nid_lrgbColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::Isd_stopNull() {
    return this->IsNull(this->tablebinario->d_stopColumn);
}

inline ::System::Void configurazionefermate::binarioRow::Setd_stopNull() {
    this[this->tablebinario->d_stopColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::IsportebanchinaNull() {
    return this->IsNull(this->tablebinario->portebanchinaColumn);
}

inline ::System::Void configurazionefermate::binarioRow::SetportebanchinaNull() {
    this[this->tablebinario->portebanchinaColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::IslatobanchinaNull() {
    return this->IsNull(this->tablebinario->latobanchinaColumn);
}

inline ::System::Void configurazionefermate::binarioRow::SetlatobanchinaNull() {
    this[this->tablebinario->latobanchinaColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::IsnextCDBNull() {
    return this->IsNull(this->tablebinario->nextCDBColumn);
}

inline ::System::Void configurazionefermate::binarioRow::SetnextCDBNull() {
    this[this->tablebinario->nextCDBColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::IsprevCDBNull() {
    return this->IsNull(this->tablebinario->prevCDBColumn);
}

inline ::System::Void configurazionefermate::binarioRow::SetprevCDBNull() {
    this[this->tablebinario->prevCDBColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean configurazionefermate::binarioRow::Isfermata_IdNull() {
    return this->IsNull(this->tablebinario->fermata_IdColumn);
}

inline ::System::Void configurazionefermate::binarioRow::Setfermata_IdNull() {
    this[this->tablebinario->fermata_IdColumn] = ::System::Convert::DBNull;
}


inline configurazionefermate::fermataRowChangeEvent::fermataRowChangeEvent(configurazionefermate::fermataRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline configurazionefermate::fermataRow^  configurazionefermate::fermataRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction configurazionefermate::fermataRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline configurazionefermate::binarioRowChangeEvent::binarioRowChangeEvent(configurazionefermate::binarioRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline configurazionefermate::binarioRow^  configurazionefermate::binarioRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction configurazionefermate::binarioRowChangeEvent::Action::get() {
    return this->eventAction;
}
