#pragma once
// IWYU pragma private; include "System/Data/DataColumn.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include "System/Data/Common/zzzz__StorageType_def.hpp"
#include "System/Data/zzzz__DataSetDateTime_def.hpp"
#include "System/Data/zzzz__MappingType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataColumn)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class BitArray;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::Data::Common {
class DataStorage;
}
namespace System::Data::Common {
struct StorageType;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class AutoIncrementValue;
}
namespace System::Data {
class DataExpression;
}
namespace System::Data {
struct DataRowAction;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
struct DataSetDateTime;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class Index;
}
namespace System::Data {
struct MappingType;
}
namespace System::Data {
class PropertyCollection;
}
namespace System::Data {
class SimpleType;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataColumn;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataColumn);
// Dependencies System.ComponentModel.MarshalByValueComponent, System.Data.Common.StorageType, System.Data.DataSetDateTime, System.Data.MappingType
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataColumn
class CORDL_TYPE DataColumn : public ::System::ComponentModel::MarshalByValueComponent {
public:
  // Declarations
  __declspec(property(get = get_AllowDBNull, put = set_AllowDBNull)) bool AllowDBNull;

  __declspec(property(get = get_AutoInc)) ::System::Data::AutoIncrementValue* AutoInc;

  __declspec(property(get = get_AutoIncrement, put = set_AutoIncrement)) bool AutoIncrement;

  __declspec(property(get = get_AutoIncrementCurrent, put = set_AutoIncrementCurrent)) ::System::Object* AutoIncrementCurrent;

  __declspec(property(get = get_AutoIncrementSeed, put = set_AutoIncrementSeed)) int64_t AutoIncrementSeed;

  __declspec(property(get = get_AutoIncrementStep, put = set_AutoIncrementStep)) int64_t AutoIncrementStep;

  __declspec(property(get = get_Caption, put = set_Caption)) ::StringW Caption;

  __declspec(property(get = get_ColumnMapping, put = set_ColumnMapping)) ::System::Data::MappingType ColumnMapping;

  __declspec(property(get = get_ColumnName, put = set_ColumnName)) ::StringW ColumnName;

  __declspec(property(get = get_Computed)) bool Computed;

  __declspec(property(get = get_DataExpression)) ::System::Data::DataExpression* DataExpression;

  __declspec(property(get = get_DataType, put = set_DataType)) ::System::Type* DataType;

  __declspec(property(get = get_DateTimeMode, put = set_DateTimeMode)) ::System::Data::DataSetDateTime DateTimeMode;

  __declspec(property(get = get_DefaultValue, put = set_DefaultValue)) ::System::Object* DefaultValue;

  __declspec(property(get = get_DefaultValueIsNull)) bool DefaultValueIsNull;

  __declspec(property(get = get_EncodedColumnName)) ::StringW EncodedColumnName;

  __declspec(property(get = get_Expression, put = set_Expression)) ::StringW Expression;

  __declspec(property(get = get_ExtendedProperties)) ::System::Data::PropertyCollection* ExtendedProperties;

  __declspec(property(get = get_FormatProvider)) ::System::IFormatProvider* FormatProvider;

  __declspec(property(get = get_HasData)) bool HasData;

  __declspec(property(get = get_ImplementsIChangeTracking)) bool ImplementsIChangeTracking;

  __declspec(property(get = get_ImplementsINullable)) bool ImplementsINullable;

  __declspec(property(get = get_ImplementsIRevertibleChangeTracking)) bool ImplementsIRevertibleChangeTracking;

  __declspec(property(get = get_ImplementsIXMLSerializable)) bool ImplementsIXMLSerializable;

  __declspec(property(get = get_IsCustomType)) bool IsCustomType;

  __declspec(property(get = get_IsSqlType)) bool IsSqlType;

  __declspec(property(get = get_IsValueType)) bool IsValueType;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Locale)) ::System::Globalization::CultureInfo* Locale;

  __declspec(property(get = get_MaxLength, put = set_MaxLength)) int32_t MaxLength;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  __declspec(property(get = get_Ordinal)) int32_t Ordinal;

  __declspec(property(get = get_Prefix, put = set_Prefix)) ::StringW Prefix;

  /// @brief Field PropertyChanging, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanging, put = __cordl_internal_set_PropertyChanging)) ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanging;

  __declspec(property(get = get_ReadOnly, put = set_ReadOnly)) bool ReadOnly;

  __declspec(property(get = get_SimpleType, put = set_SimpleType)) ::System::Data::SimpleType* SimpleType;

  __declspec(property(get = get_SortIndex)) ::System::Data::Index* SortIndex;

  __declspec(property(get = get_Table)) ::System::Data::DataTable* Table;

  __declspec(property(get = get_Unique, put = set_Unique)) bool Unique;

  __declspec(property(get = get_XmlDataType, put = set_XmlDataType)) ::StringW XmlDataType;

  /// @brief Field <XmlDataType>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__XmlDataType_k__BackingField, put = __cordl_internal_set__XmlDataType_k__BackingField)) ::StringW _XmlDataType_k__BackingField;

  /// @brief Field _allowNull, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__allowNull, put = __cordl_internal_set__allowNull)) bool _allowNull;

  /// @brief Field _autoInc, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__autoInc, put = __cordl_internal_set__autoInc)) ::System::Data::AutoIncrementValue* _autoInc;

  /// @brief Field _caption, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__caption, put = __cordl_internal_set__caption)) ::StringW _caption;

  /// @brief Field _columnMapping, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__columnMapping, put = __cordl_internal_set__columnMapping)) ::System::Data::MappingType _columnMapping;

  /// @brief Field _columnName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__columnName, put = __cordl_internal_set__columnName)) ::StringW _columnName;

  /// @brief Field _columnPrefix, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__columnPrefix, put = __cordl_internal_set__columnPrefix)) ::StringW _columnPrefix;

  /// @brief Field _columnUri, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__columnUri, put = __cordl_internal_set__columnUri)) ::StringW _columnUri;

  /// @brief Field _dataType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__dataType, put = __cordl_internal_set__dataType)) ::System::Type* _dataType;

  /// @brief Field _dateTimeMode, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__dateTimeMode, put = __cordl_internal_set__dateTimeMode)) ::System::Data::DataSetDateTime _dateTimeMode;

  /// @brief Field _defaultValue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue)) ::System::Object* _defaultValue;

  /// @brief Field _defaultValueIsNull, offset 0x95, size 0x1
  __declspec(property(get = __cordl_internal_get__defaultValueIsNull, put = __cordl_internal_set__defaultValueIsNull)) bool _defaultValueIsNull;

  /// @brief Field _dependentColumns, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__dependentColumns,
                      put = __cordl_internal_set__dependentColumns)) ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* _dependentColumns;

  /// @brief Field _encodedColumnName, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__encodedColumnName, put = __cordl_internal_set__encodedColumnName)) ::StringW _encodedColumnName;

  /// @brief Field _errors, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__errors, put = __cordl_internal_set__errors)) int32_t _errors;

  /// @brief Field _expression, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression)) ::System::Data::DataExpression* _expression;

  /// @brief Field _extendedProperties, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__extendedProperties, put = __cordl_internal_set__extendedProperties)) ::System::Data::PropertyCollection* _extendedProperties;

  /// @brief Field _hashCode, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__hashCode, put = __cordl_internal_set__hashCode)) int32_t _hashCode;

  /// @brief Field _implementsIChangeTracking, offset 0x92, size 0x1
  __declspec(property(get = __cordl_internal_get__implementsIChangeTracking, put = __cordl_internal_set__implementsIChangeTracking)) bool _implementsIChangeTracking;

  /// @brief Field _implementsINullable, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get__implementsINullable, put = __cordl_internal_set__implementsINullable)) bool _implementsINullable;

  /// @brief Field _implementsIRevertibleChangeTracking, offset 0x93, size 0x1
  __declspec(property(get = __cordl_internal_get__implementsIRevertibleChangeTracking, put = __cordl_internal_set__implementsIRevertibleChangeTracking)) bool _implementsIRevertibleChangeTracking;

  /// @brief Field _implementsIXMLSerializable, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get__implementsIXMLSerializable, put = __cordl_internal_set__implementsIXMLSerializable)) bool _implementsIXMLSerializable;

  /// @brief Field _isSqlType, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__isSqlType, put = __cordl_internal_set__isSqlType)) bool _isSqlType;

  /// @brief Field _maxLength, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__maxLength, put = __cordl_internal_set__maxLength)) int32_t _maxLength;

  /// @brief Field _objectID, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _ordinal, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__ordinal, put = __cordl_internal_set__ordinal)) int32_t _ordinal;

  /// @brief Field _readOnly, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__readOnly, put = __cordl_internal_set__readOnly)) bool _readOnly;

  /// @brief Field _simpleType, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleType, put = __cordl_internal_set__simpleType)) ::System::Data::SimpleType* _simpleType;

  /// @brief Field _sortIndex, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sortIndex, put = __cordl_internal_set__sortIndex)) ::System::Data::Index* _sortIndex;

  /// @brief Field _storage, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__storage, put = __cordl_internal_set__storage)) ::System::Data::Common::DataStorage* _storage;

  /// @brief Field _storageType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__storageType, put = __cordl_internal_set__storageType)) ::System::Data::Common::StorageType _storageType;

  /// @brief Field _table, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Field _unique, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__unique, put = __cordl_internal_set__unique)) bool _unique;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Method AddDependentColumn, addr 0x5e4fb04, size 0x10c, virtual false, abstract: false, final false
  inline void AddDependentColumn(::System::Data::DataColumn* expressionColumn);

  /// @brief Method CheckColumnConstraint, addr 0x5e4e480, size 0x64, virtual false, abstract: false, final false
  inline void CheckColumnConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action);

  /// @brief Method CheckMaxLength, addr 0x5e4d05c, size 0x334, virtual false, abstract: false, final false
  inline bool CheckMaxLength();

  /// @brief Method CheckMaxLength, addr 0x5e4e55c, size 0x7c, virtual false, abstract: false, final false
  inline void CheckMaxLength(::System::Data::DataRow* dr);

  /// @brief Method CheckNotAllowNull, addr 0x5e49cf8, size 0x420, virtual false, abstract: false, final false
  inline void CheckNotAllowNull();

  /// @brief Method CheckNullable, addr 0x5e4e4e4, size 0x78, virtual false, abstract: false, final false
  inline void CheckNullable(::System::Data::DataRow* row);

  /// @brief Method CheckUnique, addr 0x5e4e108, size 0x48, virtual false, abstract: false, final false
  inline void CheckUnique();

  /// @brief Method Clone, addr 0x5e4e93c, size 0x4a4, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* Clone();

  /// @brief Method Compare, addr 0x5e4e73c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t Compare(int32_t record1, int32_t record2);

  /// @brief Method CompareValueTo, addr 0x5e4e758, size 0x190, virtual false, abstract: false, final false
  inline bool CompareValueTo(int32_t record1, ::System::Object* value, bool checkType);

  /// @brief Method CompareValueTo, addr 0x5e4e8e8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t CompareValueTo(int32_t record1, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x5e4bae0, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x5e4fa10, size 0x54, virtual false, abstract: false, final false
  inline void ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);

  /// @brief Method ConvertValue, addr 0x5e4e904, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x5e4f990, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method ConvertXmlToObject, addr 0x5e4f9cc, size 0x44, virtual false, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);

  /// @brief Method Copy, addr 0x5e4e920, size 0x1c, virtual false, abstract: false, final false
  inline void Copy(int32_t srcRecordNo, int32_t dstRecordNo);

  /// @brief Method CopyValueIntoStore, addr 0x5e4faa0, size 0x20, virtual false, abstract: false, final false
  inline void CopyValueIntoStore(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method FreeRecord, addr 0x5e4dc8c, size 0x20, virtual false, abstract: false, final false
  inline void FreeRecord(int32_t record);

  /// @brief Method GetAggregateValue, addr 0x5e4eef0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Object* GetAggregateValue(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method GetColumnValueAsString, addr 0x5e4b9f8, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW GetColumnValueAsString(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method GetDataRow, addr 0x5e4d904, size 0x24, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* GetDataRow(int32_t index);

  /// @brief Method GetEmptyColumnStore, addr 0x5e4fa64, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* GetEmptyColumnStore(int32_t recordCount);

  /// @brief Method GetStringLength, addr 0x5e4e5d8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t GetStringLength(int32_t record);

  /// @brief Method HandleDependentColumnList, addr 0x5e4c964, size 0x144, virtual false, abstract: false, final false
  inline void HandleDependentColumnList(::System::Data::DataExpression* oldExpression, ::System::Data::DataExpression* newExpression);

  /// @brief Method Init, addr 0x5e4efb4, size 0x8c, virtual false, abstract: false, final false
  inline void Init(int32_t record);

  /// @brief Method InitializeRecord, addr 0x5e4caa8, size 0x3c, virtual false, abstract: false, final false
  inline void InitializeRecord(int32_t record);

  /// @brief Method InsureStorage, addr 0x5e4f85c, size 0x7c, virtual false, abstract: false, final false
  inline void InsureStorage();

  /// @brief Method InternalUnique, addr 0x5e4e150, size 0x8, virtual false, abstract: false, final false
  inline void InternalUnique(bool value);

  /// @brief Method IsAutoIncrementType, addr 0x5e4a35c, size 0x248, virtual false, abstract: false, final false
  static inline bool IsAutoIncrementType(::System::Type* dataType);

  /// @brief Method IsInRelation, addr 0x5e4bbc4, size 0x154, virtual false, abstract: false, final false
  inline bool IsInRelation();

  /// @brief Method IsMaxLengthViolated, addr 0x5e4f180, size 0x4e0, virtual false, abstract: false, final false
  inline bool IsMaxLengthViolated();

  /// @brief Method IsNotAllowDBNullViolated, addr 0x5e4f6ac, size 0x13c, virtual false, abstract: false, final false
  inline bool IsNotAllowDBNullViolated();

  /// @brief Method IsValueCustomTypeInstance, addr 0x5e4f0b8, size 0xc0, virtual false, abstract: false, final false
  inline bool IsValueCustomTypeInstance(::System::Object* value);

  static inline ::System::Data::DataColumn* New_ctor();

  static inline ::System::Data::DataColumn* New_ctor(::StringW columnName, ::System::Type* dataType);

  static inline ::System::Data::DataColumn* New_ctor(::StringW columnName, ::System::Type* dataType, ::StringW expr, ::System::Data::MappingType type);

  /// @brief Method OnPropertyChanging, addr 0x5e4f834, size 0x28, virtual true, abstract: false, final false
  inline void OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent);

  /// @brief Method OnSetDataSet, addr 0x5e4f914, size 0x4, virtual false, abstract: false, final false
  inline void OnSetDataSet();

  /// @brief Method RaisePropertyChanging, addr 0x5e4b754, size 0x78, virtual false, abstract: false, final false
  inline void RaisePropertyChanging(::StringW name);

  /// @brief Method RemoveDependentColumn, addr 0x5e4fc10, size 0xa8, virtual false, abstract: false, final false
  inline void RemoveDependentColumn(::System::Data::DataColumn* expressionColumn);

  /// @brief Method SetCapacity, addr 0x5e4f8d8, size 0x3c, virtual false, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetMaxLengthSimpleType, addr 0x5e4cbdc, size 0xac, virtual false, abstract: false, final false
  inline void SetMaxLengthSimpleType();

  /// @brief Method SetOrdinalInternal, addr 0x5e4d610, size 0x14c, virtual false, abstract: false, final false
  inline void SetOrdinalInternal(int32_t ordinal);

  /// @brief Method SetStorage, addr 0x5e4fac0, size 0x44, virtual false, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  /// @brief Method SetTable, addr 0x5e4d850, size 0xb4, virtual false, abstract: false, final false
  inline void SetTable(::System::Data::DataTable* table);

  /// @brief Method SetValue, addr 0x5e4db84, size 0x108, virtual false, abstract: false, final false
  inline void SetValue(int32_t record, ::System::Object* value);

  /// @brief Method ToString, addr 0x5e4f918, size 0x78, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateColumnType, addr 0x5e49200, size 0x100, virtual false, abstract: false, final false
  inline void UpdateColumnType(::System::Type* type, ::System::Data::Common::StorageType typeCode);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& __cordl_internal_get_PropertyChanging() const;

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanging();

  constexpr ::StringW const& __cordl_internal_get__XmlDataType_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__XmlDataType_k__BackingField();

  constexpr bool const& __cordl_internal_get__allowNull() const;

  constexpr bool& __cordl_internal_get__allowNull();

  constexpr ::System::Data::AutoIncrementValue* const& __cordl_internal_get__autoInc() const;

  constexpr ::System::Data::AutoIncrementValue*& __cordl_internal_get__autoInc();

  constexpr ::StringW const& __cordl_internal_get__caption() const;

  constexpr ::StringW& __cordl_internal_get__caption();

  constexpr ::System::Data::MappingType const& __cordl_internal_get__columnMapping() const;

  constexpr ::System::Data::MappingType& __cordl_internal_get__columnMapping();

  constexpr ::StringW const& __cordl_internal_get__columnName() const;

  constexpr ::StringW& __cordl_internal_get__columnName();

  constexpr ::StringW const& __cordl_internal_get__columnPrefix() const;

  constexpr ::StringW& __cordl_internal_get__columnPrefix();

  constexpr ::StringW const& __cordl_internal_get__columnUri() const;

  constexpr ::StringW& __cordl_internal_get__columnUri();

  constexpr ::System::Type* const& __cordl_internal_get__dataType() const;

  constexpr ::System::Type*& __cordl_internal_get__dataType();

  constexpr ::System::Data::DataSetDateTime const& __cordl_internal_get__dateTimeMode() const;

  constexpr ::System::Data::DataSetDateTime& __cordl_internal_get__dateTimeMode();

  constexpr ::System::Object* const& __cordl_internal_get__defaultValue() const;

  constexpr ::System::Object*& __cordl_internal_get__defaultValue();

  constexpr bool const& __cordl_internal_get__defaultValueIsNull() const;

  constexpr bool& __cordl_internal_get__defaultValueIsNull();

  constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* const& __cordl_internal_get__dependentColumns() const;

  constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*& __cordl_internal_get__dependentColumns();

  constexpr ::StringW const& __cordl_internal_get__encodedColumnName() const;

  constexpr ::StringW& __cordl_internal_get__encodedColumnName();

  constexpr int32_t const& __cordl_internal_get__errors() const;

  constexpr int32_t& __cordl_internal_get__errors();

  constexpr ::System::Data::DataExpression* const& __cordl_internal_get__expression() const;

  constexpr ::System::Data::DataExpression*& __cordl_internal_get__expression();

  constexpr ::System::Data::PropertyCollection* const& __cordl_internal_get__extendedProperties() const;

  constexpr ::System::Data::PropertyCollection*& __cordl_internal_get__extendedProperties();

  constexpr int32_t const& __cordl_internal_get__hashCode() const;

  constexpr int32_t& __cordl_internal_get__hashCode();

  constexpr bool const& __cordl_internal_get__implementsIChangeTracking() const;

  constexpr bool& __cordl_internal_get__implementsIChangeTracking();

  constexpr bool const& __cordl_internal_get__implementsINullable() const;

  constexpr bool& __cordl_internal_get__implementsINullable();

  constexpr bool const& __cordl_internal_get__implementsIRevertibleChangeTracking() const;

  constexpr bool& __cordl_internal_get__implementsIRevertibleChangeTracking();

  constexpr bool const& __cordl_internal_get__implementsIXMLSerializable() const;

  constexpr bool& __cordl_internal_get__implementsIXMLSerializable();

  constexpr bool const& __cordl_internal_get__isSqlType() const;

  constexpr bool& __cordl_internal_get__isSqlType();

  constexpr int32_t const& __cordl_internal_get__maxLength() const;

  constexpr int32_t& __cordl_internal_get__maxLength();

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr int32_t const& __cordl_internal_get__ordinal() const;

  constexpr int32_t& __cordl_internal_get__ordinal();

  constexpr bool const& __cordl_internal_get__readOnly() const;

  constexpr bool& __cordl_internal_get__readOnly();

  constexpr ::System::Data::SimpleType* const& __cordl_internal_get__simpleType() const;

  constexpr ::System::Data::SimpleType*& __cordl_internal_get__simpleType();

  constexpr ::System::Data::Index* const& __cordl_internal_get__sortIndex() const;

  constexpr ::System::Data::Index*& __cordl_internal_get__sortIndex();

  constexpr ::System::Data::Common::DataStorage* const& __cordl_internal_get__storage() const;

  constexpr ::System::Data::Common::DataStorage*& __cordl_internal_get__storage();

  constexpr ::System::Data::Common::StorageType const& __cordl_internal_get__storageType() const;

  constexpr ::System::Data::Common::StorageType& __cordl_internal_get__storageType();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr bool const& __cordl_internal_get__unique() const;

  constexpr bool& __cordl_internal_get__unique();

  constexpr void __cordl_internal_set_PropertyChanging(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__XmlDataType_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__allowNull(bool value);

  constexpr void __cordl_internal_set__autoInc(::System::Data::AutoIncrementValue* value);

  constexpr void __cordl_internal_set__caption(::StringW value);

  constexpr void __cordl_internal_set__columnMapping(::System::Data::MappingType value);

  constexpr void __cordl_internal_set__columnName(::StringW value);

  constexpr void __cordl_internal_set__columnPrefix(::StringW value);

  constexpr void __cordl_internal_set__columnUri(::StringW value);

  constexpr void __cordl_internal_set__dataType(::System::Type* value);

  constexpr void __cordl_internal_set__dateTimeMode(::System::Data::DataSetDateTime value);

  constexpr void __cordl_internal_set__defaultValue(::System::Object* value);

  constexpr void __cordl_internal_set__defaultValueIsNull(bool value);

  constexpr void __cordl_internal_set__dependentColumns(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* value);

  constexpr void __cordl_internal_set__encodedColumnName(::StringW value);

  constexpr void __cordl_internal_set__errors(int32_t value);

  constexpr void __cordl_internal_set__expression(::System::Data::DataExpression* value);

  constexpr void __cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value);

  constexpr void __cordl_internal_set__hashCode(int32_t value);

  constexpr void __cordl_internal_set__implementsIChangeTracking(bool value);

  constexpr void __cordl_internal_set__implementsINullable(bool value);

  constexpr void __cordl_internal_set__implementsIRevertibleChangeTracking(bool value);

  constexpr void __cordl_internal_set__implementsIXMLSerializable(bool value);

  constexpr void __cordl_internal_set__isSqlType(bool value);

  constexpr void __cordl_internal_set__maxLength(int32_t value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__ordinal(int32_t value);

  constexpr void __cordl_internal_set__readOnly(bool value);

  constexpr void __cordl_internal_set__simpleType(::System::Data::SimpleType* value);

  constexpr void __cordl_internal_set__sortIndex(::System::Data::Index* value);

  constexpr void __cordl_internal_set__storage(::System::Data::Common::DataStorage* value);

  constexpr void __cordl_internal_set__storageType(::System::Data::Common::StorageType value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__unique(bool value);

  /// @brief Method .ctor, addr 0x5e48dc0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5e490f0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW columnName, ::System::Type* dataType);

  /// @brief Method .ctor, addr 0x5e48e18, size 0x2d8, virtual false, abstract: false, final false
  inline void _ctor(::StringW columnName, ::System::Type* dataType, ::StringW expr, ::System::Data::MappingType type);

  static inline int32_t getStaticF_s_objectTypeCount();

  /// @brief Method get_AllowDBNull, addr 0x5e49b54, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowDBNull();

  /// @brief Method get_AutoInc, addr 0x5e4ad8c, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Data::AutoIncrementValue* get_AutoInc();

  /// @brief Method get_AutoIncrement, addr 0x5e4a118, size 0x20, virtual false, abstract: false, final false
  inline bool get_AutoIncrement();

  /// @brief Method get_AutoIncrementCurrent, addr 0x5e4ae68, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* get_AutoIncrementCurrent();

  /// @brief Method get_AutoIncrementSeed, addr 0x5e4ae98, size 0x18, virtual false, abstract: false, final false
  inline int64_t get_AutoIncrementSeed();

  /// @brief Method get_AutoIncrementStep, addr 0x5e4b1c4, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_AutoIncrementStep();

  /// @brief Method get_Caption, addr 0x5e4b2e4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Caption();

  /// @brief Method get_ColumnMapping, addr 0x5e4e170, size 0x8, virtual true, abstract: false, final false
  inline ::System::Data::MappingType get_ColumnMapping();

  /// @brief Method get_ColumnName, addr 0x5e4b3cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ColumnName();

  /// @brief Method get_Computed, addr 0x5e4bb1c, size 0x10, virtual false, abstract: false, final false
  inline bool get_Computed();

  /// @brief Method get_DataExpression, addr 0x5e4bb2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataExpression* get_DataExpression();

  /// @brief Method get_DataType, addr 0x5e4bb34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_DataType();

  /// @brief Method get_DateTimeMode, addr 0x5e4c2cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataSetDateTime get_DateTimeMode();

  /// @brief Method get_DefaultValue, addr 0x5e4bd5c, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Object* get_DefaultValue();

  /// @brief Method get_DefaultValueIsNull, addr 0x5e4c630, size 0x8, virtual false, abstract: false, final false
  inline bool get_DefaultValueIsNull();

  /// @brief Method get_EncodedColumnName, addr 0x5e4b7cc, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_EncodedColumnName();

  /// @brief Method get_Expression, addr 0x5e4c638, size 0x90, virtual false, abstract: false, final false
  inline ::StringW get_Expression();

  /// @brief Method get_ExtendedProperties, addr 0x5e4cb38, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Data::PropertyCollection* get_ExtendedProperties();

  /// @brief Method get_FormatProvider, addr 0x5e4afc4, size 0x70, virtual false, abstract: false, final false
  inline ::System::IFormatProvider* get_FormatProvider();

  /// @brief Method get_HasData, addr 0x5e4a5a4, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasData();

  /// @brief Method get_ImplementsIChangeTracking, addr 0x5e4cbac, size 0x8, virtual false, abstract: false, final false
  inline bool get_ImplementsIChangeTracking();

  /// @brief Method get_ImplementsINullable, addr 0x5e4cba4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ImplementsINullable();

  /// @brief Method get_ImplementsIRevertibleChangeTracking, addr 0x5e4cbb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ImplementsIRevertibleChangeTracking();

  /// @brief Method get_ImplementsIXMLSerializable, addr 0x5e4f178, size 0x8, virtual false, abstract: false, final false
  inline bool get_ImplementsIXMLSerializable();

  /// @brief Method get_IsCustomType, addr 0x5e4f040, size 0x78, virtual false, abstract: false, final false
  inline bool get_IsCustomType();

  /// @brief Method get_IsSqlType, addr 0x5e4cbd4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsSqlType();

  /// @brief Method get_IsValueType, addr 0x5e4cbbc, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsValueType();

  /// @brief Method get_Item, addr 0x5e4bac4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t record);

  /// @brief Method get_Locale, addr 0x5e4b35c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Locale();

  /// @brief Method get_MaxLength, addr 0x5e4cc88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxLength();

  /// @brief Method get_Namespace, addr 0x5e4d440, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_ObjectID, addr 0x5e4b83c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method get_Ordinal, addr 0x5e4d608, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Ordinal();

  /// @brief Method get_Prefix, addr 0x5e4b844, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_ReadOnly, addr 0x5e4d75c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReadOnly();

  /// @brief Method get_SimpleType, addr 0x5e4e168, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::SimpleType* get_SimpleType();

  /// @brief Method get_SortIndex, addr 0x5e4d7a8, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Data::Index* get_SortIndex();

  /// @brief Method get_Table, addr 0x5e4d848, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_Table();

  /// @brief Method get_Unique, addr 0x5e4dcac, size 0x8, virtual false, abstract: false, final false
  inline bool get_Unique();

  /// @brief Method get_XmlDataType, addr 0x5e4e158, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlDataType();

  static inline void setStaticF_s_objectTypeCount(int32_t value);

  /// @brief Method set_AllowDBNull, addr 0x5e49b5c, size 0x19c, virtual false, abstract: false, final false
  inline void set_AllowDBNull(bool value);

  /// @brief Method set_AutoIncrement, addr 0x5e4a138, size 0x19c, virtual false, abstract: false, final false
  inline void set_AutoIncrement(bool value);

  /// @brief Method set_AutoIncrementCurrent, addr 0x5e4aeb0, size 0x114, virtual false, abstract: false, final false
  inline void set_AutoIncrementCurrent(::System::Object* value);

  /// @brief Method set_AutoIncrementSeed, addr 0x5e4b0c8, size 0xfc, virtual false, abstract: false, final false
  inline void set_AutoIncrementSeed(int64_t value);

  /// @brief Method set_AutoIncrementStep, addr 0x5e4b1e0, size 0x104, virtual false, abstract: false, final false
  inline void set_AutoIncrementStep(int64_t value);

  /// @brief Method set_Caption, addr 0x5e4b300, size 0x5c, virtual false, abstract: false, final false
  inline void set_Caption(::StringW value);

  /// @brief Method set_ColumnMapping, addr 0x5e4e178, size 0x214, virtual true, abstract: false, final false
  inline void set_ColumnMapping(::System::Data::MappingType value);

  /// @brief Method set_ColumnName, addr 0x5e4b3d4, size 0x33c, virtual false, abstract: false, final false
  inline void set_ColumnName(::StringW value);

  /// @brief Method set_DataType, addr 0x5e4a604, size 0x788, virtual false, abstract: false, final false
  inline void set_DataType(::System::Type* value);

  /// @brief Method set_DateTimeMode, addr 0x5e4c2d4, size 0x114, virtual false, abstract: false, final false
  inline void set_DateTimeMode(::System::Data::DataSetDateTime value);

  /// @brief Method set_DefaultValue, addr 0x5e4be68, size 0x2e0, virtual false, abstract: false, final false
  inline void set_DefaultValue(::System::Object* value);

  /// @brief Method set_Expression, addr 0x5e49300, size 0x854, virtual false, abstract: false, final false
  inline void set_Expression(::StringW value);

  /// @brief Method set_Item, addr 0x5e4d928, size 0x180, virtual false, abstract: false, final false
  inline void set_Item(int32_t record, ::System::Object* value);

  /// @brief Method set_MaxLength, addr 0x5e4cc90, size 0x31c, virtual false, abstract: false, final false
  inline void set_MaxLength(int32_t value);

  /// @brief Method set_Namespace, addr 0x5e4d480, size 0x138, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

  /// @brief Method set_Prefix, addr 0x5e4b84c, size 0x15c, virtual false, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_ReadOnly, addr 0x5e4c790, size 0xf8, virtual false, abstract: false, final false
  inline void set_ReadOnly(bool value);

  /// @brief Method set_SimpleType, addr 0x5e491c4, size 0x3c, virtual false, abstract: false, final false
  inline void set_SimpleType(::System::Data::SimpleType* value);

  /// @brief Method set_Unique, addr 0x5e4dcb4, size 0x410, virtual false, abstract: false, final false
  inline void set_Unique(bool value);

  /// @brief Method set_XmlDataType, addr 0x5e4e160, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlDataType(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataColumn();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataColumn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataColumn(DataColumn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataColumn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataColumn(DataColumn const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13700 };

  /// @brief Field _allowNull, offset: 0x20, size: 0x1, def value: None
  bool ____allowNull;

  /// @brief Field _caption, offset: 0x28, size: 0x8, def value: None
  ::StringW ____caption;

  /// @brief Field _columnName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____columnName;

  /// @brief Field _dataType, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____dataType;

  /// @brief Field _storageType, offset: 0x40, size: 0x4, def value: None
  ::System::Data::Common::StorageType ____storageType;

  /// @brief Field _defaultValue, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____defaultValue;

  /// @brief Field _dateTimeMode, offset: 0x50, size: 0x4, def value: None
  ::System::Data::DataSetDateTime ____dateTimeMode;

  /// @brief Field _expression, offset: 0x58, size: 0x8, def value: None
  ::System::Data::DataExpression* ____expression;

  /// @brief Field _maxLength, offset: 0x60, size: 0x4, def value: None
  int32_t ____maxLength;

  /// @brief Field _ordinal, offset: 0x64, size: 0x4, def value: None
  int32_t ____ordinal;

  /// @brief Field _readOnly, offset: 0x68, size: 0x1, def value: None
  bool ____readOnly;

  /// @brief Field _sortIndex, offset: 0x70, size: 0x8, def value: None
  ::System::Data::Index* ____sortIndex;

  /// @brief Field _table, offset: 0x78, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _unique, offset: 0x80, size: 0x1, def value: None
  bool ____unique;

  /// @brief Field _columnMapping, offset: 0x84, size: 0x4, def value: None
  ::System::Data::MappingType ____columnMapping;

  /// @brief Field _hashCode, offset: 0x88, size: 0x4, def value: None
  int32_t ____hashCode;

  /// @brief Field _errors, offset: 0x8c, size: 0x4, def value: None
  int32_t ____errors;

  /// @brief Field _isSqlType, offset: 0x90, size: 0x1, def value: None
  bool ____isSqlType;

  /// @brief Field _implementsINullable, offset: 0x91, size: 0x1, def value: None
  bool ____implementsINullable;

  /// @brief Field _implementsIChangeTracking, offset: 0x92, size: 0x1, def value: None
  bool ____implementsIChangeTracking;

  /// @brief Field _implementsIRevertibleChangeTracking, offset: 0x93, size: 0x1, def value: None
  bool ____implementsIRevertibleChangeTracking;

  /// @brief Field _implementsIXMLSerializable, offset: 0x94, size: 0x1, def value: None
  bool ____implementsIXMLSerializable;

  /// @brief Field _defaultValueIsNull, offset: 0x95, size: 0x1, def value: None
  bool ____defaultValueIsNull;

  /// @brief Field _dependentColumns, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* ____dependentColumns;

  /// @brief Field _extendedProperties, offset: 0xa0, size: 0x8, def value: None
  ::System::Data::PropertyCollection* ____extendedProperties;

  /// @brief Field _storage, offset: 0xa8, size: 0x8, def value: None
  ::System::Data::Common::DataStorage* ____storage;

  /// @brief Field _autoInc, offset: 0xb0, size: 0x8, def value: None
  ::System::Data::AutoIncrementValue* ____autoInc;

  /// @brief Field _columnUri, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____columnUri;

  /// @brief Field _columnPrefix, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____columnPrefix;

  /// @brief Field _encodedColumnName, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____encodedColumnName;

  /// @brief Field _simpleType, offset: 0xd0, size: 0x8, def value: None
  ::System::Data::SimpleType* ____simpleType;

  /// @brief Field _objectID, offset: 0xd8, size: 0x4, def value: None
  int32_t ____objectID;

  /// @brief Field <XmlDataType>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::StringW ____XmlDataType_k__BackingField;

  /// @brief Field PropertyChanging, offset: 0xe8, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanging;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataColumn, ____allowNull) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____caption) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____columnName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____dataType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____storageType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____defaultValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____dateTimeMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____expression) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____maxLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____ordinal) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____readOnly) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____sortIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____table) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____unique) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____columnMapping) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____hashCode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____errors) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____isSqlType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____implementsINullable) == 0x91, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____implementsIChangeTracking) == 0x92, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____implementsIRevertibleChangeTracking) == 0x93, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____implementsIXMLSerializable) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____defaultValueIsNull) == 0x95, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____dependentColumns) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____extendedProperties) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____storage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____autoInc) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____columnUri) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____columnPrefix) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____encodedColumnName) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____simpleType) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____objectID) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ____XmlDataType_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumn, ___PropertyChanging) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataColumn, 0xf0>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataColumn);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataColumn*, "System.Data", "DataColumn");
