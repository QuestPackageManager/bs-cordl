#pragma once
// IWYU pragma private; include "System/Data/DataSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include "System/Data/zzzz__SerializationFormat_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataSet)
namespace System::ComponentModel {
class ISite;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Data {
class DataRelationCollection;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
class DataRowCreatedEventHandler;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataSetClearEventhandler;
}
namespace System::Data {
class DataTableCollection;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManager;
}
namespace System::Data {
class MergeFailedEventArgs;
}
namespace System::Data {
class MergeFailedEventHandler;
}
namespace System::Data {
struct MissingSchemaAction;
}
namespace System::Data {
class PropertyCollection;
}
namespace System::Data {
struct SchemaFormat;
}
namespace System::Data {
struct SchemaSerializationMode;
}
namespace System::Data {
struct SerializationFormat;
}
namespace System::Data {
struct XmlReadMode;
}
namespace System::Data {
struct XmlWriteMode;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataSet);
// Dependencies System.ComponentModel.MarshalByValueComponent, System.Data.SerializationFormat, System.Runtime.Serialization.ISerializable, System.Xml.Serialization.IXmlSerializable
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataSet
class CORDL_TYPE DataSet : public ::System::ComponentModel::MarshalByValueComponent {
public:
  // Declarations
  __declspec(property(get = get_CaseSensitive, put = set_CaseSensitive)) bool CaseSensitive;

  /// @brief Field ClearFunctionCalled, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_ClearFunctionCalled, put = __cordl_internal_set_ClearFunctionCalled)) ::System::Data::DataSetClearEventhandler* ClearFunctionCalled;

  /// @brief Field DataRowCreated, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_DataRowCreated, put = __cordl_internal_set_DataRowCreated)) ::System::Data::DataRowCreatedEventHandler* DataRowCreated;

  __declspec(property(get = get_DataSetName, put = set_DataSetName)) ::StringW DataSetName;

  __declspec(property(get = get_EnforceConstraints, put = set_EnforceConstraints)) bool EnforceConstraints;

  __declspec(property(get = get_ExtendedProperties)) ::System::Data::PropertyCollection* ExtendedProperties;

  __declspec(property(get = get_Locale, put = set_Locale)) ::System::Globalization::CultureInfo* Locale;

  __declspec(property(get = get_MainTableName, put = set_MainTableName)) ::StringW MainTableName;

  /// @brief Field MergeFailed, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_MergeFailed, put = __cordl_internal_set_MergeFailed)) ::System::Data::MergeFailedEventHandler* MergeFailed;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  __declspec(property(get = get_Prefix, put = set_Prefix)) ::StringW Prefix;

  /// @brief Field PropertyChanging, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanging, put = __cordl_internal_set_PropertyChanging)) ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanging;

  __declspec(property(get = get_Relations)) ::System::Data::DataRelationCollection* Relations;

  __declspec(property(get = get_RemotingFormat, put = set_RemotingFormat)) ::System::Data::SerializationFormat RemotingFormat;

  __declspec(property(get = get_SchemaSerializationMode)) ::System::Data::SchemaSerializationMode SchemaSerializationMode;

  __declspec(property(get = get_Site)) ::System::ComponentModel::ISite* Site;

  __declspec(property(get = get_Tables)) ::System::Data::DataTableCollection* Tables;

  /// @brief Field _caseSensitive, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__caseSensitive, put = __cordl_internal_set__caseSensitive)) bool _caseSensitive;

  /// @brief Field _culture, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture)) ::System::Globalization::CultureInfo* _culture;

  /// @brief Field _cultureUserSet, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__cultureUserSet, put = __cordl_internal_set__cultureUserSet)) bool _cultureUserSet;

  /// @brief Field _dataSetName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSetName, put = __cordl_internal_set__dataSetName)) ::StringW _dataSetName;

  /// @brief Field _datasetPrefix, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__datasetPrefix, put = __cordl_internal_set__datasetPrefix)) ::StringW _datasetPrefix;

  /// @brief Field _defaultViewManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultViewManager, put = __cordl_internal_set__defaultViewManager)) ::System::Data::DataViewManager* _defaultViewManager;

  /// @brief Field _defaultViewManagerLock, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultViewManagerLock, put = __cordl_internal_set__defaultViewManagerLock)) ::System::Object* _defaultViewManagerLock;

  /// @brief Field _enforceConstraints, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__enforceConstraints, put = __cordl_internal_set__enforceConstraints)) bool _enforceConstraints;

  /// @brief Field _extendedProperties, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__extendedProperties, put = __cordl_internal_set__extendedProperties)) ::System::Data::PropertyCollection* _extendedProperties;

  /// @brief Field _fEnableCascading, offset 0x6d, size 0x1
  __declspec(property(get = __cordl_internal_get__fEnableCascading, put = __cordl_internal_set__fEnableCascading)) bool _fEnableCascading;

  /// @brief Field _fInLoadDiffgram, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get__fInLoadDiffgram, put = __cordl_internal_set__fInLoadDiffgram)) bool _fInLoadDiffgram;

  /// @brief Field _fInReadXml, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get__fInReadXml, put = __cordl_internal_set__fInReadXml)) bool _fInReadXml;

  /// @brief Field _fInitInProgress, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get__fInitInProgress, put = __cordl_internal_set__fInitInProgress)) bool _fInitInProgress;

  /// @brief Field _fIsSchemaLoading, offset 0x6e, size 0x1
  __declspec(property(get = __cordl_internal_get__fIsSchemaLoading, put = __cordl_internal_set__fIsSchemaLoading)) bool _fIsSchemaLoading;

  /// @brief Field _fTopLevelTable, offset 0x6b, size 0x1
  __declspec(property(get = __cordl_internal_get__fTopLevelTable, put = __cordl_internal_set__fTopLevelTable)) bool _fTopLevelTable;

  /// @brief Field _mainTableName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__mainTableName, put = __cordl_internal_set__mainTableName)) ::StringW _mainTableName;

  /// @brief Field _namespaceURI, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__namespaceURI, put = __cordl_internal_set__namespaceURI)) ::StringW _namespaceURI;

  /// @brief Field _objectID, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _relationCollection, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__relationCollection, put = __cordl_internal_set__relationCollection)) ::System::Data::DataRelationCollection* _relationCollection;

  /// @brief Field _remotingFormat, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__remotingFormat, put = __cordl_internal_set__remotingFormat)) ::System::Data::SerializationFormat _remotingFormat;

  /// @brief Field _tableCollection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tableCollection, put = __cordl_internal_set__tableCollection)) ::System::Data::DataTableCollection* _tableCollection;

  /// @brief Field _udtIsWrapped, offset 0x8d, size 0x1
  __declspec(property(get = __cordl_internal_get__udtIsWrapped, put = __cordl_internal_set__udtIsWrapped)) bool _udtIsWrapped;

  /// @brief Field _useDataSetSchemaOnly, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get__useDataSetSchemaOnly, put = __cordl_internal_set__useDataSetSchemaOnly)) bool _useDataSetSchemaOnly;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Field s_schemaTypeForWSDL, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_schemaTypeForWSDL, put = setStaticF_s_schemaTypeForWSDL)) ::System::Xml::Schema::XmlSchemaComplexType* s_schemaTypeForWSDL;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*() noexcept;

  /// @brief Method Clear, addr 0x414cbd4, size 0x20c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x414ce08, size 0x1048, virtual true, abstract: false, final false
  inline ::System::Data::DataSet* Clone();

  /// @brief Method DeserializeDataSet, addr 0x4147838, size 0x48, virtual false, abstract: false, final false
  inline void DeserializeDataSet(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                 ::System::Data::SerializationFormat remotingFormat, ::System::Data::SchemaSerializationMode schemaSerializationMode);

  /// @brief Method DeserializeDataSetData, addr 0x41490bc, size 0x1d4, virtual false, abstract: false, final false
  inline void DeserializeDataSetData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                     ::System::Data::SerializationFormat remotingFormat);

  /// @brief Method DeserializeDataSetProperties, addr 0x4149290, size 0x2b8, virtual false, abstract: false, final false
  inline void DeserializeDataSetProperties(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method DeserializeDataSetSchema, addr 0x4148bcc, size 0x4f0, virtual false, abstract: false, final false
  inline void DeserializeDataSetSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                       ::System::Data::SerializationFormat remotingFormat, ::System::Data::SchemaSerializationMode schemaSerializationMode);

  /// @brief Method DeserializeRelations, addr 0x4149548, size 0x878, virtual false, abstract: false, final false
  inline void DeserializeRelations(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method EnableConstraints, addr 0x414aff4, size 0x7b0, virtual false, abstract: false, final false
  inline void EnableConstraints();

  /// @brief Method EstimatedXmlStringSize, addr 0x4148890, size 0x120, virtual false, abstract: false, final false
  inline int32_t EstimatedXmlStringSize();

  /// @brief Method FailedEnableConstraints, addr 0x414a704, size 0x2c, virtual false, abstract: false, final false
  inline void FailedEnableConstraints();

  /// @brief Method FindTable, addr 0x4152b0c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* FindTable(::System::Data::DataTable* baseTable,
                                              ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> props, int32_t propStart);

  /// @brief Method GetDataSetSchema, addr 0x4152eec, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* GetDataSetSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GetObjectData, addr 0x4147880, size 0x8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRemotingDiffGram, addr 0x414de50, size 0x130, virtual false, abstract: false, final false
  inline ::StringW GetRemotingDiffGram(::System::Data::DataTable* table);

  /// @brief Method GetXmlSchemaForRemoting, addr 0x41486f8, size 0x198, virtual false, abstract: false, final false
  inline ::StringW GetXmlSchemaForRemoting(::System::Data::DataTable* table);

  /// @brief Method InferSchema, addr 0x414e4d0, size 0x364, virtual false, abstract: false, final false
  inline void InferSchema(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW, ::Array<::StringW>*> excludedNamespaces, ::System::Data::XmlReadMode mode);

  /// @brief Method InitializeDerivedDataSet, addr 0x4147ea8, size 0x4, virtual true, abstract: false, final false
  inline void InitializeDerivedDataSet();

  /// @brief Method IsEmpty, addr 0x4150f40, size 0x2f0, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method Merge, addr 0x4151230, size 0x184, virtual false, abstract: false, final false
  inline void Merge(::System::Data::DataSet* dataSet);

  /// @brief Method Merge, addr 0x4152164, size 0x26c, virtual false, abstract: false, final false
  inline void Merge(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction);

  /// @brief Method MoveToElement, addr 0x414e388, size 0xb4, virtual false, abstract: false, final false
  inline bool MoveToElement(::System::Xml::XmlReader* reader, int32_t depth);

  /// @brief Method MoveToElement, addr 0x414e834, size 0x78, virtual false, abstract: false, final false
  static inline void MoveToElement(::System::Xml::XmlReader* reader);

  static inline ::System::Data::DataSet* New_ctor();

  static inline ::System::Data::DataSet* New_ctor(::StringW dataSetName);

  static inline ::System::Data::DataSet* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::DataSet* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool ConstructSchema);

  /// @brief Method OnClearFunctionCalled, addr 0x414cde0, size 0x28, virtual false, abstract: false, final false
  inline void OnClearFunctionCalled(::System::Data::DataTable* table);

  /// @brief Method OnDataRowCreated, addr 0x41524f8, size 0x28, virtual false, abstract: false, final false
  inline void OnDataRowCreated(::System::Data::DataRow* row);

  /// @brief Method OnMergeFailed, addr 0x41523f8, size 0x5c, virtual false, abstract: false, final false
  inline void OnMergeFailed(::System::Data::MergeFailedEventArgs* mfevent);

  /// @brief Method OnPropertyChanging, addr 0x41523d0, size 0x28, virtual true, abstract: false, final false
  inline void OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent);

  /// @brief Method OnRemoveRelation, addr 0x4152550, size 0x4, virtual true, abstract: false, final false
  inline void OnRemoveRelation(::System::Data::DataRelation* relation);

  /// @brief Method OnRemoveRelationHack, addr 0x4152554, size 0x10, virtual false, abstract: false, final false
  inline void OnRemoveRelationHack(::System::Data::DataRelation* relation);

  /// @brief Method OnRemoveTable, addr 0x4152520, size 0x4, virtual true, abstract: false, final false
  inline void OnRemoveTable(::System::Data::DataTable* table);

  /// @brief Method OnRemovedTable, addr 0x4152524, size 0x2c, virtual false, abstract: false, final false
  inline void OnRemovedTable(::System::Data::DataTable* table);

  /// @brief Method RaiseMergeFailed, addr 0x4152454, size 0xa4, virtual false, abstract: false, final false
  inline void RaiseMergeFailed(::System::Data::DataTable* table, ::StringW conflict, ::System::Data::MissingSchemaAction missingSchemaAction);

  /// @brief Method RaisePropertyChanging, addr 0x414b7b8, size 0x78, virtual false, abstract: false, final false
  inline void RaisePropertyChanging(::StringW name);

  /// @brief Method ReadEndElement, addr 0x414e43c, size 0x94, virtual false, abstract: false, final false
  inline void ReadEndElement(::System::Xml::XmlReader* reader);

  /// @brief Method ReadXDRSchema, addr 0x414df88, size 0x158, virtual false, abstract: false, final false
  inline void ReadXDRSchema(::System::Xml::XmlReader* reader);

  /// @brief Method ReadXSDSchema, addr 0x414e0e0, size 0x2a8, virtual false, abstract: false, final false
  inline void ReadXSDSchema(::System::Xml::XmlReader* reader, bool denyResolving);

  /// @brief Method ReadXml, addr 0x414eae8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method ReadXml, addr 0x414eaf0, size 0x1090, virtual false, abstract: false, final false
  inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader* reader, bool denyResolving);

  /// @brief Method ReadXml, addr 0x414a698, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode);

  /// @brief Method ReadXml, addr 0x41513b4, size 0xdb0, virtual false, abstract: false, final false
  inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode, bool denyResolving);

  /// @brief Method ReadXmlDiffgram, addr 0x414fbec, size 0x1354, virtual false, abstract: false, final false
  inline void ReadXmlDiffgram(::System::Xml::XmlReader* reader);

  /// @brief Method ReadXmlSchema, addr 0x414df80, size 0x8, virtual false, abstract: false, final false
  inline void ReadXmlSchema(::System::Xml::XmlReader* reader);

  /// @brief Method ReadXmlSchema, addr 0x4149dc0, size 0x8d8, virtual false, abstract: false, final false
  inline void ReadXmlSchema(::System::Xml::XmlReader* reader, bool denyResolving);

  /// @brief Method ReadXmlSerializable, addr 0x4152c04, size 0x2e8, virtual true, abstract: false, final false
  inline void ReadXmlSerializable(::System::Xml::XmlReader* reader);

  /// @brief Method Reset, addr 0x415284c, size 0x2c0, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method RestoreEnforceConstraints, addr 0x414b7a4, size 0xc, virtual false, abstract: false, final false
  inline void RestoreEnforceConstraints(bool value);

  /// @brief Method SerializeDataSet, addr 0x4147888, size 0x620, virtual false, abstract: false, final false
  inline void SerializeDataSet(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                               ::System::Data::SerializationFormat remotingFormat);

  /// @brief Method SerializeDataSetProperties, addr 0x4147eac, size 0x170, virtual false, abstract: false, final false
  inline void SerializeDataSetProperties(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SerializeRelations, addr 0x414801c, size 0x6dc, virtual false, abstract: false, final false
  inline void SerializeRelations(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetLocaleValue, addr 0x414bfbc, size 0x7a0, virtual false, abstract: false, final false
  inline void SetLocaleValue(::System::Globalization::CultureInfo* value, bool userSet);

  /// @brief Method ShouldSerializeLocale, addr 0x414cbb4, size 0x8, virtual false, abstract: false, final false
  inline bool ShouldSerializeLocale();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x415313c, size 0x1d4, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x4153310, size 0x250, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x4153560, size 0x34, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method TopLevelTables, addr 0x4152564, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> TopLevelTables();

  /// @brief Method TopLevelTables, addr 0x415256c, size 0x2e0, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> TopLevelTables(bool forSchema);

  /// @brief Method ValidateCaseConstraint, addr 0x414abec, size 0x400, virtual false, abstract: false, final false
  inline bool ValidateCaseConstraint();

  /// @brief Method ValidateLocaleConstraint, addr 0x414c75c, size 0x458, virtual false, abstract: false, final false
  inline bool ValidateLocaleConstraint();

  /// @brief Method WriteXml, addr 0x41489b0, size 0x21c, virtual false, abstract: false, final false
  inline void WriteXml(::System::Xml::XmlWriter* writer, ::System::Data::XmlWriteMode mode);

  /// @brief Method WriteXmlSchema, addr 0x414e8ac, size 0x23c, virtual false, abstract: false, final false
  inline void WriteXmlSchema(::System::Xml::XmlWriter* writer, ::System::Data::SchemaFormat schemaFormat, ::System::Converter_2<::System::Type*, ::StringW>* multipleTargetConverter);

  constexpr ::System::Data::DataSetClearEventhandler* const& __cordl_internal_get_ClearFunctionCalled() const;

  constexpr ::System::Data::DataSetClearEventhandler*& __cordl_internal_get_ClearFunctionCalled();

  constexpr ::System::Data::DataRowCreatedEventHandler* const& __cordl_internal_get_DataRowCreated() const;

  constexpr ::System::Data::DataRowCreatedEventHandler*& __cordl_internal_get_DataRowCreated();

  constexpr ::System::Data::MergeFailedEventHandler* const& __cordl_internal_get_MergeFailed() const;

  constexpr ::System::Data::MergeFailedEventHandler*& __cordl_internal_get_MergeFailed();

  constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& __cordl_internal_get_PropertyChanging() const;

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanging();

  constexpr bool const& __cordl_internal_get__caseSensitive() const;

  constexpr bool& __cordl_internal_get__caseSensitive();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr bool const& __cordl_internal_get__cultureUserSet() const;

  constexpr bool& __cordl_internal_get__cultureUserSet();

  constexpr ::StringW const& __cordl_internal_get__dataSetName() const;

  constexpr ::StringW& __cordl_internal_get__dataSetName();

  constexpr ::StringW const& __cordl_internal_get__datasetPrefix() const;

  constexpr ::StringW& __cordl_internal_get__datasetPrefix();

  constexpr ::System::Data::DataViewManager* const& __cordl_internal_get__defaultViewManager() const;

  constexpr ::System::Data::DataViewManager*& __cordl_internal_get__defaultViewManager();

  constexpr ::System::Object* const& __cordl_internal_get__defaultViewManagerLock() const;

  constexpr ::System::Object*& __cordl_internal_get__defaultViewManagerLock();

  constexpr bool const& __cordl_internal_get__enforceConstraints() const;

  constexpr bool& __cordl_internal_get__enforceConstraints();

  constexpr ::System::Data::PropertyCollection* const& __cordl_internal_get__extendedProperties() const;

  constexpr ::System::Data::PropertyCollection*& __cordl_internal_get__extendedProperties();

  constexpr bool const& __cordl_internal_get__fEnableCascading() const;

  constexpr bool& __cordl_internal_get__fEnableCascading();

  constexpr bool const& __cordl_internal_get__fInLoadDiffgram() const;

  constexpr bool& __cordl_internal_get__fInLoadDiffgram();

  constexpr bool const& __cordl_internal_get__fInReadXml() const;

  constexpr bool& __cordl_internal_get__fInReadXml();

  constexpr bool const& __cordl_internal_get__fInitInProgress() const;

  constexpr bool& __cordl_internal_get__fInitInProgress();

  constexpr bool const& __cordl_internal_get__fIsSchemaLoading() const;

  constexpr bool& __cordl_internal_get__fIsSchemaLoading();

  constexpr bool const& __cordl_internal_get__fTopLevelTable() const;

  constexpr bool& __cordl_internal_get__fTopLevelTable();

  constexpr ::StringW const& __cordl_internal_get__mainTableName() const;

  constexpr ::StringW& __cordl_internal_get__mainTableName();

  constexpr ::StringW const& __cordl_internal_get__namespaceURI() const;

  constexpr ::StringW& __cordl_internal_get__namespaceURI();

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr ::System::Data::DataRelationCollection* const& __cordl_internal_get__relationCollection() const;

  constexpr ::System::Data::DataRelationCollection*& __cordl_internal_get__relationCollection();

  constexpr ::System::Data::SerializationFormat const& __cordl_internal_get__remotingFormat() const;

  constexpr ::System::Data::SerializationFormat& __cordl_internal_get__remotingFormat();

  constexpr ::System::Data::DataTableCollection* const& __cordl_internal_get__tableCollection() const;

  constexpr ::System::Data::DataTableCollection*& __cordl_internal_get__tableCollection();

  constexpr bool const& __cordl_internal_get__udtIsWrapped() const;

  constexpr bool& __cordl_internal_get__udtIsWrapped();

  constexpr bool const& __cordl_internal_get__useDataSetSchemaOnly() const;

  constexpr bool& __cordl_internal_get__useDataSetSchemaOnly();

  constexpr void __cordl_internal_set_ClearFunctionCalled(::System::Data::DataSetClearEventhandler* value);

  constexpr void __cordl_internal_set_DataRowCreated(::System::Data::DataRowCreatedEventHandler* value);

  constexpr void __cordl_internal_set_MergeFailed(::System::Data::MergeFailedEventHandler* value);

  constexpr void __cordl_internal_set_PropertyChanging(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__caseSensitive(bool value);

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__cultureUserSet(bool value);

  constexpr void __cordl_internal_set__dataSetName(::StringW value);

  constexpr void __cordl_internal_set__datasetPrefix(::StringW value);

  constexpr void __cordl_internal_set__defaultViewManager(::System::Data::DataViewManager* value);

  constexpr void __cordl_internal_set__defaultViewManagerLock(::System::Object* value);

  constexpr void __cordl_internal_set__enforceConstraints(bool value);

  constexpr void __cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value);

  constexpr void __cordl_internal_set__fEnableCascading(bool value);

  constexpr void __cordl_internal_set__fInLoadDiffgram(bool value);

  constexpr void __cordl_internal_set__fInReadXml(bool value);

  constexpr void __cordl_internal_set__fInitInProgress(bool value);

  constexpr void __cordl_internal_set__fIsSchemaLoading(bool value);

  constexpr void __cordl_internal_set__fTopLevelTable(bool value);

  constexpr void __cordl_internal_set__mainTableName(::StringW value);

  constexpr void __cordl_internal_set__namespaceURI(::StringW value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__relationCollection(::System::Data::DataRelationCollection* value);

  constexpr void __cordl_internal_set__remotingFormat(::System::Data::SerializationFormat value);

  constexpr void __cordl_internal_set__tableCollection(::System::Data::DataTableCollection* value);

  constexpr void __cordl_internal_set__udtIsWrapped(bool value);

  constexpr void __cordl_internal_set__useDataSetSchemaOnly(bool value);

  /// @brief Method .ctor, addr 0x41471e0, size 0x240, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4147420, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW dataSetName);

  /// @brief Method .ctor, addr 0x4147638, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x4147640, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool ConstructSchema);

  static inline int32_t getStaticF_s_objectTypeCount();

  static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_s_schemaTypeForWSDL();

  /// @brief Method get_CaseSensitive, addr 0x414a8b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_CaseSensitive();

  /// @brief Method get_DataSetName, addr 0x414b7b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DataSetName();

  /// @brief Method get_EnforceConstraints, addr 0x414afec, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnforceConstraints();

  /// @brief Method get_ExtendedProperties, addr 0x414a6a0, size 0x64, virtual false, abstract: false, final false
  inline ::System::Data::PropertyCollection* get_ExtendedProperties();

  /// @brief Method get_Locale, addr 0x414be14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Locale();

  /// @brief Method get_MainTableName, addr 0x4153594, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MainTableName();

  /// @brief Method get_Namespace, addr 0x414b830, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_ObjectID, addr 0x41535a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method get_Prefix, addr 0x414bcf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_Relations, addr 0x414cbc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataRelationCollection* get_Relations();

  /// @brief Method get_RemotingFormat, addr 0x4147588, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::SerializationFormat get_RemotingFormat();

  /// @brief Method get_SchemaSerializationMode, addr 0x4147630, size 0x8, virtual true, abstract: false, final false
  inline ::System::Data::SchemaSerializationMode get_SchemaSerializationMode();

  /// @brief Method get_Site, addr 0x414cbbc, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ISite* get_Site();

  /// @brief Method get_Tables, addr 0x414cbcc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataTableCollection* get_Tables();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() noexcept;

  static inline void setStaticF_s_objectTypeCount(int32_t value);

  static inline void setStaticF_s_schemaTypeForWSDL(::System::Xml::Schema::XmlSchemaComplexType* value);

  /// @brief Method set_CaseSensitive, addr 0x414a8c0, size 0x32c, virtual false, abstract: false, final false
  inline void set_CaseSensitive(bool value);

  /// @brief Method set_DataSetName, addr 0x4147448, size 0x140, virtual false, abstract: false, final false
  inline void set_DataSetName(::StringW value);

  /// @brief Method set_EnforceConstraints, addr 0x414a730, size 0x188, virtual false, abstract: false, final false
  inline void set_EnforceConstraints(bool value);

  /// @brief Method set_Locale, addr 0x414be1c, size 0x1a0, virtual false, abstract: false, final false
  inline void set_Locale(::System::Globalization::CultureInfo* value);

  /// @brief Method set_MainTableName, addr 0x415359c, size 0x8, virtual false, abstract: false, final false
  inline void set_MainTableName(::StringW value);

  /// @brief Method set_Namespace, addr 0x414b838, size 0x4b8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

  /// @brief Method set_Prefix, addr 0x414bcf8, size 0x11c, virtual false, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_RemotingFormat, addr 0x4147590, size 0xa0, virtual false, abstract: false, final false
  inline void set_RemotingFormat(::System::Data::SerializationFormat value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataSet(DataSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataSet(DataSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11352 };

  /// @brief Field _defaultViewManager, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataViewManager* ____defaultViewManager;

  /// @brief Field _tableCollection, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataTableCollection* ____tableCollection;

  /// @brief Field _relationCollection, offset: 0x30, size: 0x8, def value: None
  ::System::Data::DataRelationCollection* ____relationCollection;

  /// @brief Field _extendedProperties, offset: 0x38, size: 0x8, def value: None
  ::System::Data::PropertyCollection* ____extendedProperties;

  /// @brief Field _dataSetName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____dataSetName;

  /// @brief Field _datasetPrefix, offset: 0x48, size: 0x8, def value: None
  ::StringW ____datasetPrefix;

  /// @brief Field _namespaceURI, offset: 0x50, size: 0x8, def value: None
  ::StringW ____namespaceURI;

  /// @brief Field _enforceConstraints, offset: 0x58, size: 0x1, def value: None
  bool ____enforceConstraints;

  /// @brief Field _caseSensitive, offset: 0x59, size: 0x1, def value: None
  bool ____caseSensitive;

  /// @brief Field _culture, offset: 0x60, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  /// @brief Field _cultureUserSet, offset: 0x68, size: 0x1, def value: None
  bool ____cultureUserSet;

  /// @brief Field _fInReadXml, offset: 0x69, size: 0x1, def value: None
  bool ____fInReadXml;

  /// @brief Field _fInLoadDiffgram, offset: 0x6a, size: 0x1, def value: None
  bool ____fInLoadDiffgram;

  /// @brief Field _fTopLevelTable, offset: 0x6b, size: 0x1, def value: None
  bool ____fTopLevelTable;

  /// @brief Field _fInitInProgress, offset: 0x6c, size: 0x1, def value: None
  bool ____fInitInProgress;

  /// @brief Field _fEnableCascading, offset: 0x6d, size: 0x1, def value: None
  bool ____fEnableCascading;

  /// @brief Field _fIsSchemaLoading, offset: 0x6e, size: 0x1, def value: None
  bool ____fIsSchemaLoading;

  /// @brief Field _mainTableName, offset: 0x70, size: 0x8, def value: None
  ::StringW ____mainTableName;

  /// @brief Field _remotingFormat, offset: 0x78, size: 0x4, def value: None
  ::System::Data::SerializationFormat ____remotingFormat;

  /// @brief Field _defaultViewManagerLock, offset: 0x80, size: 0x8, def value: None
  ::System::Object* ____defaultViewManagerLock;

  /// @brief Field _objectID, offset: 0x88, size: 0x4, def value: None
  int32_t ____objectID;

  /// @brief Field _useDataSetSchemaOnly, offset: 0x8c, size: 0x1, def value: None
  bool ____useDataSetSchemaOnly;

  /// @brief Field _udtIsWrapped, offset: 0x8d, size: 0x1, def value: None
  bool ____udtIsWrapped;

  /// @brief Field PropertyChanging, offset: 0x90, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanging;

  /// @brief Field MergeFailed, offset: 0x98, size: 0x8, def value: None
  ::System::Data::MergeFailedEventHandler* ___MergeFailed;

  /// @brief Field DataRowCreated, offset: 0xa0, size: 0x8, def value: None
  ::System::Data::DataRowCreatedEventHandler* ___DataRowCreated;

  /// @brief Field ClearFunctionCalled, offset: 0xa8, size: 0x8, def value: None
  ::System::Data::DataSetClearEventhandler* ___ClearFunctionCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataSet, ____defaultViewManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____tableCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____relationCollection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____extendedProperties) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____dataSetName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____datasetPrefix) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____namespaceURI) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____enforceConstraints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____caseSensitive) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____culture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____cultureUserSet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fInReadXml) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fInLoadDiffgram) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fTopLevelTable) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fInitInProgress) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fEnableCascading) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____fIsSchemaLoading) == 0x6e, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____mainTableName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____remotingFormat) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____defaultViewManagerLock) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____objectID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____useDataSetSchemaOnly) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ____udtIsWrapped) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ___PropertyChanging) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ___MergeFailed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ___DataRowCreated) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataSet, ___ClearFunctionCalled) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataSet, 0xb0>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataSet*, "System.Data", "DataSet");
