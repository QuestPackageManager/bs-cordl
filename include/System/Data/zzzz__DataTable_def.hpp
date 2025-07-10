#pragma once
// IWYU pragma private; include "System/Data/DataTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include "System/Data/zzzz__SerializationFormat_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataTable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class BitArray;
}
namespace System::Collections {
class Hashtable;
}
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
class PropertyDescriptorCollection;
}
namespace System::Data {
class ConstraintCollection;
}
namespace System::Data {
class DataColumnChangeEventArgs;
}
namespace System::Data {
class DataColumnChangeEventHandler;
}
namespace System::Data {
class DataColumnCollection;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataExpression;
}
namespace System::Data {
struct DataKey;
}
namespace System::Data {
class DataRelationCollection;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
struct DataRowAction;
}
namespace System::Data {
class DataRowBuilder;
}
namespace System::Data {
class DataRowChangeEventArgs;
}
namespace System::Data {
class DataRowChangeEventHandler;
}
namespace System::Data {
class DataRowCollection;
}
namespace System::Data {
struct DataRowState;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTableClearEventArgs;
}
namespace System::Data {
class DataTableClearEventHandler;
}
namespace System::Data {
class DataTableNewRowEventArgs;
}
namespace System::Data {
class DataTableNewRowEventHandler;
}
namespace System::Data {
struct DataTable_DSRowDiffIdUsageSection;
}
namespace System::Data {
struct DataTable_RowDiffIdUsageSection;
}
namespace System::Data {
class DataViewListener;
}
namespace System::Data {
struct DataViewRowState;
}
namespace System::Data {
class DataView;
}
namespace System::Data {
class IFilter;
}
namespace System::Data {
struct IndexField;
}
namespace System::Data {
class Index;
}
namespace System::Data {
struct MissingSchemaAction;
}
namespace System::Data {
class PropertyCollection;
}
namespace System::Data {
class RecordManager;
}
namespace System::Data {
struct SerializationFormat;
}
namespace System::Data {
class UniqueConstraint;
}
namespace System::Data {
struct XmlReadMode;
}
namespace System::Data {
struct XmlWriteMode;
}
namespace System::Globalization {
class CompareInfo;
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
namespace System::Threading {
class ReaderWriterLockSlim;
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
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Attribute;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class StringComparer;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataTable;
}
namespace System::Data {
struct DataTable_DSRowDiffIdUsageSection;
}
namespace System::Data {
struct DataTable_RowDiffIdUsageSection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTable);
MARK_VAL_T(::System::Data::DataTable_DSRowDiffIdUsageSection);
MARK_VAL_T(::System::Data::DataTable_RowDiffIdUsageSection);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.DataTable/RowDiffIdUsageSection
struct CORDL_TYPE DataTable_RowDiffIdUsageSection {
public:
  // Declarations
  /// @brief Method Prepare, addr 0x414ed30, size 0x1c, virtual false, abstract: false, final false
  inline void Prepare(::System::Data::DataTable* table);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTable_RowDiffIdUsageSection();

  // Ctor Parameters [CppParam { name: "_targetTable", ty: "::System::Data::DataTable*", modifiers: "", def_value: None }]
  constexpr DataTable_RowDiffIdUsageSection(::System::Data::DataTable* _targetTable) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11354 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _targetTable, offset: 0x0, size: 0x8, def value: None
  ::System::Data::DataTable* _targetTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataTable_RowDiffIdUsageSection, _targetTable) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataTable_RowDiffIdUsageSection, 0x8>, "Size mismatch!");

} // namespace System::Data
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.DataTable/DSRowDiffIdUsageSection
struct CORDL_TYPE DataTable_DSRowDiffIdUsageSection {
public:
  // Declarations
  /// @brief Method Prepare, addr 0x414b304, size 0x6c, virtual false, abstract: false, final false
  inline void Prepare(::System::Data::DataSet* ds);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTable_DSRowDiffIdUsageSection();

  // Ctor Parameters [CppParam { name: "_targetDS", ty: "::System::Data::DataSet*", modifiers: "", def_value: None }]
  constexpr DataTable_DSRowDiffIdUsageSection(::System::Data::DataSet* _targetDS) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11355 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _targetDS, offset: 0x0, size: 0x8, def value: None
  ::System::Data::DataSet* _targetDS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataTable_DSRowDiffIdUsageSection, _targetDS) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataTable_DSRowDiffIdUsageSection, 0x8>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.ComponentModel.MarshalByValueComponent, System.Data.SerializationFormat, System.Decimal, System.Globalization.CompareOptions, System.Runtime.Serialization.ISerializable,
// System.Xml.Serialization.IXmlSerializable
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataTable
class CORDL_TYPE DataTable : public ::System::ComponentModel::MarshalByValueComponent {
public:
  // Declarations
  using DSRowDiffIdUsageSection = ::System::Data::DataTable_DSRowDiffIdUsageSection;

  using RowDiffIdUsageSection = ::System::Data::DataTable_RowDiffIdUsageSection;

  __declspec(property(get = get_AreIndexEventsSuspended)) bool AreIndexEventsSuspended;

  __declspec(property(get = get_CaseSensitive, put = set_CaseSensitive)) bool CaseSensitive;

  __declspec(property(get = get_ChildRelations)) ::System::Data::DataRelationCollection* ChildRelations;

  __declspec(property(get = get_Columns)) ::System::Data::DataColumnCollection* Columns;

  __declspec(property(get = get_CompareInfo)) ::System::Globalization::CompareInfo* CompareInfo;

  __declspec(property(get = get_Constraints)) ::System::Data::ConstraintCollection* Constraints;

  __declspec(property(get = get_DataSet)) ::System::Data::DataSet* DataSet;

  __declspec(property(get = get_DisplayExpressionInternal)) ::StringW DisplayExpressionInternal;

  __declspec(property(get = get_ElementColumnCount, put = set_ElementColumnCount)) int32_t ElementColumnCount;

  __declspec(property(get = get_EncodedTableName)) ::StringW EncodedTableName;

  __declspec(property(get = get_EnforceConstraints, put = set_EnforceConstraints)) bool EnforceConstraints;

  __declspec(property(get = get_ExtendedProperties)) ::System::Data::PropertyCollection* ExtendedProperties;

  __declspec(property(get = get_FormatProvider)) ::System::IFormatProvider* FormatProvider;

  __declspec(property(get = get_IsTypedDataTable)) bool IsTypedDataTable;

  __declspec(property(get = get_LiveIndexes)) ::System::Collections::Generic::List_1<::System::Data::Index*>* LiveIndexes;

  __declspec(property(get = get_Locale, put = set_Locale)) ::System::Globalization::CultureInfo* Locale;

  __declspec(property(get = get_MaxOccurs, put = set_MaxOccurs)) ::System::Decimal MaxOccurs;

  __declspec(property(get = get_MergingData, put = set_MergingData)) bool MergingData;

  __declspec(property(get = get_MinOccurs, put = set_MinOccurs)) ::System::Decimal MinOccurs;

  __declspec(property(get = get_MinimumCapacity, put = set_MinimumCapacity)) int32_t MinimumCapacity;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_NeedColumnChangeEvents)) bool NeedColumnChangeEvents;

  __declspec(property(get = get_NestedParentRelations)) ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> NestedParentRelations;

  __declspec(property(get = get_NestedParentsCount)) int32_t NestedParentsCount;

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  __declspec(property(get = get_ParentRelations)) ::System::Data::DataRelationCollection* ParentRelations;

  __declspec(property(get = get_Prefix, put = set_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_PrimaryKey, put = set_PrimaryKey)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> PrimaryKey;

  __declspec(property(get = get_RecordCapacity)) int32_t RecordCapacity;

  __declspec(property(get = get_RemotingFormat, put = set_RemotingFormat)) ::System::Data::SerializationFormat RemotingFormat;

  __declspec(property(get = get_RowDiffId)) ::System::Collections::Hashtable* RowDiffId;

  __declspec(property(get = get_Rows)) ::System::Data::DataRowCollection* Rows;

  __declspec(property(get = get_SchemaLoading)) bool SchemaLoading;

  __declspec(property(get = get_SelfNested)) bool SelfNested;

  __declspec(property(get = get_Site)) ::System::ComponentModel::ISite* Site;

  __declspec(property(get = get_SuspendEnforceConstraints, put = set_SuspendEnforceConstraints)) bool SuspendEnforceConstraints;

  __declspec(property(get = get_TableName, put = set_TableName)) ::StringW TableName;

  __declspec(property(get = get_TypeName, put = set_TypeName)) ::System::Xml::XmlQualifiedName* TypeName;

  __declspec(property(get = get_UKColumnPositionForInference, put = set_UKColumnPositionForInference)) int32_t UKColumnPositionForInference;

  __declspec(property(get = get_XmlText, put = set_XmlText)) ::System::Data::DataColumn* XmlText;

  /// @brief Field _caseSensitive, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get__caseSensitive, put = __cordl_internal_set__caseSensitive)) bool _caseSensitive;

  /// @brief Field _caseSensitiveUserSet, offset 0xe9, size 0x1
  __declspec(property(get = __cordl_internal_get__caseSensitiveUserSet, put = __cordl_internal_set__caseSensitiveUserSet)) bool _caseSensitiveUserSet;

  /// @brief Field _childRelationsCollection, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__childRelationsCollection, put = __cordl_internal_set__childRelationsCollection)) ::System::Data::DataRelationCollection* _childRelationsCollection;

  /// @brief Field _colUnique, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__colUnique, put = __cordl_internal_set__colUnique)) ::System::Data::DataColumn* _colUnique;

  /// @brief Field _columnCollection, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__columnCollection, put = __cordl_internal_set__columnCollection)) ::System::Data::DataColumnCollection* _columnCollection;

  /// @brief Field _compareFlags, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__compareFlags, put = __cordl_internal_set__compareFlags)) ::System::Globalization::CompareOptions _compareFlags;

  /// @brief Field _compareInfo, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__compareInfo, put = __cordl_internal_set__compareInfo)) ::System::Globalization::CompareInfo* _compareInfo;

  /// @brief Field _constraintCollection, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__constraintCollection, put = __cordl_internal_set__constraintCollection)) ::System::Data::ConstraintCollection* _constraintCollection;

  /// @brief Field _culture, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture)) ::System::Globalization::CultureInfo* _culture;

  /// @brief Field _cultureUserSet, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__cultureUserSet, put = __cordl_internal_set__cultureUserSet)) bool _cultureUserSet;

  /// @brief Field _dataSet, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet)) ::System::Data::DataSet* _dataSet;

  /// @brief Field _dataViewListeners, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__dataViewListeners,
                      put = __cordl_internal_set__dataViewListeners)) ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* _dataViewListeners;

  /// @brief Field _defaultView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultView, put = __cordl_internal_set__defaultView)) ::System::Data::DataView* _defaultView;

  /// @brief Field _delayedSetPrimaryKey, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__delayedSetPrimaryKey, put = __cordl_internal_set__delayedSetPrimaryKey)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>
      _delayedSetPrimaryKey;

  /// @brief Field _delayedViews, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__delayedViews, put = __cordl_internal_set__delayedViews)) ::System::Collections::Generic::List_1<::System::Data::DataView*>* _delayedViews;

  /// @brief Field _dependentColumns, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__dependentColumns,
                      put = __cordl_internal_set__dependentColumns)) ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* _dependentColumns;

  /// @brief Field _displayExpression, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__displayExpression, put = __cordl_internal_set__displayExpression)) ::System::Data::DataExpression* _displayExpression;

  /// @brief Field _elementColumnCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__elementColumnCount, put = __cordl_internal_set__elementColumnCount)) int32_t _elementColumnCount;

  /// @brief Field _emptyDataRowArray, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyDataRowArray, put = __cordl_internal_set__emptyDataRowArray)) ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>
      _emptyDataRowArray;

  /// @brief Field _encodedTableName, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__encodedTableName, put = __cordl_internal_set__encodedTableName)) ::StringW _encodedTableName;

  /// @brief Field _enforceConstraints, offset 0x16e, size 0x1
  __declspec(property(get = __cordl_internal_get__enforceConstraints, put = __cordl_internal_set__enforceConstraints)) bool _enforceConstraints;

  /// @brief Field _extendedProperties, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__extendedProperties, put = __cordl_internal_set__extendedProperties)) ::System::Data::PropertyCollection* _extendedProperties;

  /// @brief Field _fInLoadDiffgram, offset 0x172, size 0x1
  __declspec(property(get = __cordl_internal_get__fInLoadDiffgram, put = __cordl_internal_set__fInLoadDiffgram)) bool _fInLoadDiffgram;

  /// @brief Field _fNestedInDataset, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__fNestedInDataset, put = __cordl_internal_set__fNestedInDataset)) bool _fNestedInDataset;

  /// @brief Field _formatProvider, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__formatProvider, put = __cordl_internal_set__formatProvider)) ::System::IFormatProvider* _formatProvider;

  /// @brief Field _hashCodeProvider, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__hashCodeProvider, put = __cordl_internal_set__hashCodeProvider)) ::System::StringComparer* _hashCodeProvider;

  /// @brief Field _inDataLoad, offset 0x16c, size 0x1
  __declspec(property(get = __cordl_internal_get__inDataLoad, put = __cordl_internal_set__inDataLoad)) bool _inDataLoad;

  /// @brief Field _inLoad, offset 0x171, size 0x1
  __declspec(property(get = __cordl_internal_get__inLoad, put = __cordl_internal_set__inLoad)) bool _inLoad;

  /// @brief Field _indexes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__indexes, put = __cordl_internal_set__indexes)) ::System::Collections::Generic::List_1<::System::Data::Index*>* _indexes;

  /// @brief Field _indexesLock, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__indexesLock, put = __cordl_internal_set__indexesLock)) ::System::Threading::ReaderWriterLockSlim* _indexesLock;

  /// @brief Field _isTypedDataTable, offset 0x173, size 0x1
  __declspec(property(get = __cordl_internal_get__isTypedDataTable, put = __cordl_internal_set__isTypedDataTable)) uint8_t _isTypedDataTable;

  /// @brief Field _loadIndex, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__loadIndex, put = __cordl_internal_set__loadIndex)) ::System::Data::Index* _loadIndex;

  /// @brief Field _loadIndexwithCurrentDeleted, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__loadIndexwithCurrentDeleted, put = __cordl_internal_set__loadIndexwithCurrentDeleted)) ::System::Data::Index* _loadIndexwithCurrentDeleted;

  /// @brief Field _loadIndexwithOriginalAdded, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__loadIndexwithOriginalAdded, put = __cordl_internal_set__loadIndexwithOriginalAdded)) ::System::Data::Index* _loadIndexwithOriginalAdded;

  /// @brief Field _maxOccurs, offset 0x118, size 0x10
  __declspec(property(get = __cordl_internal_get__maxOccurs, put = __cordl_internal_set__maxOccurs)) ::System::Decimal _maxOccurs;

  /// @brief Field _mergingData, offset 0x198, size 0x1
  __declspec(property(get = __cordl_internal_get__mergingData, put = __cordl_internal_set__mergingData)) bool _mergingData;

  /// @brief Field _minOccurs, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get__minOccurs, put = __cordl_internal_set__minOccurs)) ::System::Decimal _minOccurs;

  /// @brief Field _nestedParentRelations, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__nestedParentRelations,
                      put = __cordl_internal_set__nestedParentRelations)) ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*>
      _nestedParentRelations;

  /// @brief Field _nextRowID, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextRowID, put = __cordl_internal_set__nextRowID)) int64_t _nextRowID;

  /// @brief Field _objectID, offset 0x220, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _onColumnChangedDelegate, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__onColumnChangedDelegate, put = __cordl_internal_set__onColumnChangedDelegate)) ::System::Data::DataColumnChangeEventHandler* _onColumnChangedDelegate;

  /// @brief Field _onColumnChangingDelegate, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__onColumnChangingDelegate,
                      put = __cordl_internal_set__onColumnChangingDelegate)) ::System::Data::DataColumnChangeEventHandler* _onColumnChangingDelegate;

  /// @brief Field _onPropertyChangingDelegate, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__onPropertyChangingDelegate,
                      put = __cordl_internal_set__onPropertyChangingDelegate)) ::System::ComponentModel::PropertyChangedEventHandler* _onPropertyChangingDelegate;

  /// @brief Field _onRowChangedDelegate, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__onRowChangedDelegate, put = __cordl_internal_set__onRowChangedDelegate)) ::System::Data::DataRowChangeEventHandler* _onRowChangedDelegate;

  /// @brief Field _onRowChangingDelegate, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__onRowChangingDelegate, put = __cordl_internal_set__onRowChangingDelegate)) ::System::Data::DataRowChangeEventHandler* _onRowChangingDelegate;

  /// @brief Field _onRowDeletedDelegate, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__onRowDeletedDelegate, put = __cordl_internal_set__onRowDeletedDelegate)) ::System::Data::DataRowChangeEventHandler* _onRowDeletedDelegate;

  /// @brief Field _onRowDeletingDelegate, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__onRowDeletingDelegate, put = __cordl_internal_set__onRowDeletingDelegate)) ::System::Data::DataRowChangeEventHandler* _onRowDeletingDelegate;

  /// @brief Field _onTableClearedDelegate, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__onTableClearedDelegate, put = __cordl_internal_set__onTableClearedDelegate)) ::System::Data::DataTableClearEventHandler* _onTableClearedDelegate;

  /// @brief Field _onTableClearingDelegate, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__onTableClearingDelegate, put = __cordl_internal_set__onTableClearingDelegate)) ::System::Data::DataTableClearEventHandler* _onTableClearingDelegate;

  /// @brief Field _onTableNewRowDelegate, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__onTableNewRowDelegate, put = __cordl_internal_set__onTableNewRowDelegate)) ::System::Data::DataTableNewRowEventHandler* _onTableNewRowDelegate;

  /// @brief Field _parentRelationsCollection, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__parentRelationsCollection, put = __cordl_internal_set__parentRelationsCollection)) ::System::Data::DataRelationCollection* _parentRelationsCollection;

  /// @brief Field _primaryIndex, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryIndex, put = __cordl_internal_set__primaryIndex)) ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> _primaryIndex;

  /// @brief Field _primaryKey, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryKey, put = __cordl_internal_set__primaryKey)) ::System::Data::UniqueConstraint* _primaryKey;

  /// @brief Field _propertyDescriptorCollectionCache, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyDescriptorCollectionCache,
                      put = __cordl_internal_set__propertyDescriptorCollectionCache)) ::System::ComponentModel::PropertyDescriptorCollection* _propertyDescriptorCollectionCache;

  /// @brief Field _recordManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__recordManager, put = __cordl_internal_set__recordManager)) ::System::Data::RecordManager* _recordManager;

  /// @brief Field _remotingFormat, offset 0x21c, size 0x4
  __declspec(property(get = __cordl_internal_get__remotingFormat, put = __cordl_internal_set__remotingFormat)) ::System::Data::SerializationFormat _remotingFormat;

  /// @brief Field _repeatableElement, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get__repeatableElement, put = __cordl_internal_set__repeatableElement)) bool _repeatableElement;

  /// @brief Field _rowBuilder, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__rowBuilder, put = __cordl_internal_set__rowBuilder)) ::System::Data::DataRowBuilder* _rowBuilder;

  /// @brief Field _rowCollection, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rowCollection, put = __cordl_internal_set__rowCollection)) ::System::Data::DataRowCollection* _rowCollection;

  /// @brief Field _rowDiffId, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__rowDiffId, put = __cordl_internal_set__rowDiffId)) ::System::Collections::Hashtable* _rowDiffId;

  /// @brief Field _schemaLoading, offset 0x16d, size 0x1
  __declspec(property(get = __cordl_internal_get__schemaLoading, put = __cordl_internal_set__schemaLoading)) bool _schemaLoading;

  /// @brief Field _shadowCount, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__shadowCount, put = __cordl_internal_set__shadowCount)) int32_t _shadowCount;

  /// @brief Field _shadowIndexes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__shadowIndexes, put = __cordl_internal_set__shadowIndexes)) ::System::Collections::Generic::List_1<::System::Data::Index*>* _shadowIndexes;

  /// @brief Field _suspendEnforceConstraints, offset 0x16f, size 0x1
  __declspec(property(get = __cordl_internal_get__suspendEnforceConstraints, put = __cordl_internal_set__suspendEnforceConstraints)) bool _suspendEnforceConstraints;

  /// @brief Field _suspendIndexEvents, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get__suspendIndexEvents, put = __cordl_internal_set__suspendIndexEvents)) int32_t _suspendIndexEvents;

  /// @brief Field _tableName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName)) ::StringW _tableName;

  /// @brief Field _tableNamespace, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__tableNamespace, put = __cordl_internal_set__tableNamespace)) ::StringW _tableNamespace;

  /// @brief Field _tablePrefix, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__tablePrefix, put = __cordl_internal_set__tablePrefix)) ::StringW _tablePrefix;

  /// @brief Field _typeName, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__typeName, put = __cordl_internal_set__typeName)) ::System::Object* _typeName;

  /// @brief Field _ukColumnPositionForInference, offset 0x218, size 0x4
  __declspec(property(get = __cordl_internal_get__ukColumnPositionForInference, put = __cordl_internal_set__ukColumnPositionForInference)) int32_t _ukColumnPositionForInference;

  /// @brief Field _xmlText, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlText, put = __cordl_internal_set__xmlText)) ::System::Data::DataColumn* _xmlText;

  /// @brief Field fInitInProgress, offset 0x170, size 0x1
  __declspec(property(get = __cordl_internal_get_fInitInProgress, put = __cordl_internal_set_fInitInProgress)) bool fInitInProgress;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*() noexcept;

  /// @brief Method AddDependentColumn, addr 0x4135444, size 0x118, virtual false, abstract: false, final false
  inline void AddDependentColumn(::System::Data::DataColumn* expressionColumn);

  /// @brief Method AddForeignKey, addr 0x4130444, size 0xac, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* AddForeignKey(::System::Data::DataColumn* parentKey);

  /// @brief Method AddRow, addr 0x412aa2c, size 0x10, virtual false, abstract: false, final false
  inline void AddRow(::System::Data::DataRow* row, int32_t proposedID);

  /// @brief Method AddUniqueKey, addr 0x413043c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* AddUniqueKey();

  /// @brief Method AddUniqueKey, addr 0x41301c4, size 0x278, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* AddUniqueKey(int32_t position);

  /// @brief Method CacheNestedParent, addr 0x41268d8, size 0x18, virtual false, abstract: false, final false
  inline void CacheNestedParent();

  /// @brief Method CascadeAll, addr 0x412bff0, size 0xb8, virtual false, abstract: false, final false
  inline void CascadeAll(::System::Data::DataRow* row, ::System::Data::DataRowAction action);

  /// @brief Method CheckCascadingNamespaceConflict, addr 0x4127d38, size 0x3dc, virtual false, abstract: false, final false
  inline void CheckCascadingNamespaceConflict(::StringW realNamespace);

  /// @brief Method CheckForClosureOnExpressionTables, addr 0x41225a0, size 0x508, virtual false, abstract: false, final false
  inline bool CheckForClosureOnExpressionTables(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList);

  /// @brief Method CheckForClosureOnExpressions, addr 0x4130d6c, size 0x10c, virtual false, abstract: false, final false
  inline bool CheckForClosureOnExpressions(::System::Data::DataTable* dt, bool writeHierarchy);

  /// @brief Method CheckNamespaceValidityForNestedParentRelations, addr 0x4128b14, size 0x380, virtual false, abstract: false, final false
  inline void CheckNamespaceValidityForNestedParentRelations(::StringW ns, ::System::Data::DataTable* parentTable);

  /// @brief Method CheckNamespaceValidityForNestedRelations, addr 0x4128114, size 0x424, virtual false, abstract: false, final false
  inline void CheckNamespaceValidityForNestedRelations(::StringW realNamespace);

  /// @brief Method CheckNotModifying, addr 0x412b5e4, size 0x30, virtual false, abstract: false, final false
  inline void CheckNotModifying(::System::Data::DataRow* row);

  /// @brief Method Clear, addr 0x412b614, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x412b61c, size 0x874, virtual false, abstract: false, final false
  inline void Clear(bool clearAll);

  /// @brief Method Clone, addr 0x412a068, size 0x8, virtual true, abstract: false, final false
  inline ::System::Data::DataTable* Clone();

  /// @brief Method Clone, addr 0x412a070, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* Clone(::System::Data::DataSet* cloneDS);

  /// @brief Method CloneHierarchy, addr 0x412a5a4, size 0x480, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* CloneHierarchy(::System::Data::DataTable* sourceTable, ::System::Data::DataSet* ds, ::System::Collections::Hashtable* visitedMap);

  /// @brief Method CloneTo, addr 0x4121554, size 0xcbc, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* CloneTo(::System::Data::DataTable* clone, ::System::Data::DataSet* cloneDS, bool skipExpressionColumns);

  /// @brief Method CommitRow, addr 0x412c0a8, size 0x70, virtual false, abstract: false, final false
  inline void CommitRow(::System::Data::DataRow* row);

  /// @brief Method Compare, addr 0x412c260, size 0x8, virtual false, abstract: false, final false
  inline int32_t Compare(::StringW s1, ::StringW s2);

  /// @brief Method Compare, addr 0x412c268, size 0x164, virtual false, abstract: false, final false
  inline int32_t Compare(::StringW s1, ::StringW s2, ::System::Globalization::CompareInfo* comparer);

  /// @brief Method ConvertToRowError, addr 0x4124d94, size 0x2d4, virtual false, abstract: false, final false
  inline void ConvertToRowError(int32_t rowIndex, ::System::Collections::Hashtable* rowErrors, ::System::Collections::Hashtable* colErrors);

  /// @brief Method ConvertToRowState, addr 0x4124cec, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Data::DataRowState ConvertToRowState(::System::Collections::BitArray* bitStates, int32_t bitIndex);

  /// @brief Method CreateEmptyRow, addr 0x412da94, size 0x3d8, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* CreateEmptyRow();

  /// @brief Method CreateInstance, addr 0x4129fdc, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Data::DataTable* CreateInstance();

  /// @brief Method CreateRelationList, addr 0x41348d0, size 0x518, virtual false, abstract: false, final false
  inline void CreateRelationList(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList, ::System::Collections::Generic::List_1<::System::Data::DataRelation*>* relationList);

  /// @brief Method CreateTableList, addr 0x4130e78, size 0x3e4, virtual false, abstract: false, final false
  inline void CreateTableList(::System::Data::DataTable* currentTable, ::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList);

  /// @brief Method DeleteRow, addr 0x412c44c, size 0x58, virtual false, abstract: false, final false
  inline void DeleteRow(::System::Data::DataRow* row);

  /// @brief Method DeserializeConstraints, addr 0x4123af4, size 0xc9c, virtual false, abstract: false, final false
  inline void DeserializeConstraints(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex, bool allConstraints);

  /// @brief Method DeserializeDataTable, addr 0x411e34c, size 0x31c, virtual false, abstract: false, final false
  inline void DeserializeDataTable(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable,
                                   ::System::Data::SerializationFormat remotingFormat);

  /// @brief Method DeserializeExpressionColumns, addr 0x41248ec, size 0x164, virtual false, abstract: false, final false
  inline void DeserializeExpressionColumns(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex);

  /// @brief Method DeserializeTableData, addr 0x4120bb4, size 0x998, virtual false, abstract: false, final false
  inline void DeserializeTableData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex);

  /// @brief Method DeserializeTableSchema, addr 0x411fd08, size 0xeac, virtual false, abstract: false, final false
  inline void DeserializeTableSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable);

  /// @brief Method DoRaiseNamespaceChange, addr 0x4128538, size 0x5cc, virtual false, abstract: false, final false
  inline void DoRaiseNamespaceChange();

  /// @brief Method EnableConstraints, addr 0x4125cfc, size 0x5d8, virtual false, abstract: false, final false
  inline void EnableConstraints();

  /// @brief Method EvaluateDependentExpressions, addr 0x412be90, size 0x160, virtual false, abstract: false, final false
  inline void EvaluateDependentExpressions(::System::Data::DataColumn* column);

  /// @brief Method EvaluateDependentExpressions, addr 0x412f12c, size 0x770, virtual false, abstract: false, final false
  inline void EvaluateDependentExpressions(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* columns, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version,
                                           ::System::Collections::Generic::List_1<::System::Data::DataRow*>* cachedRows);

  /// @brief Method EvaluateExpressions, addr 0x41355ec, size 0x378, virtual false, abstract: false, final false
  inline void EvaluateExpressions();

  /// @brief Method EvaluateExpressions, addr 0x4135964, size 0x228, virtual false, abstract: false, final false
  inline void EvaluateExpressions(::System::Data::DataColumn* column);

  /// @brief Method EvaluateExpressions, addr 0x412d084, size 0x5b0, virtual false, abstract: false, final false
  inline void EvaluateExpressions(::System::Data::DataRow* row, ::System::Data::DataRowAction action, ::System::Collections::Generic::List_1<::System::Data::DataRow*>* cachedRows);

  /// @brief Method FindByIndex, addr 0x4129164, size 0x90, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* FindByIndex(::System::Data::Index* ndx, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> key);

  /// @brief Method FindMergeTarget, addr 0x41291f4, size 0x80, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* FindMergeTarget(::System::Data::DataRow* row, ::System::Data::DataKey key, ::System::Data::Index* ndx);

  /// @brief Method FindNestedParentRelations, addr 0x41268f0, size 0x47c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> FindNestedParentRelations();

  /// @brief Method FormatSortString, addr 0x412c4a4, size 0x12c, virtual false, abstract: false, final false
  inline ::StringW FormatSortString(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexDesc);

  /// @brief Method FreeRecord, addr 0x412c5d0, size 0x1c, virtual false, abstract: false, final false
  inline void FreeRecord(::ByRef<int32_t> record);

  /// @brief Method GetDataTableSchema, addr 0x4134de8, size 0x220, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* GetDataTableSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GetIndex, addr 0x412c97c, size 0x1c8, virtual false, abstract: false, final false
  inline ::System::Data::Index* GetIndex(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexDesc, ::System::Data::DataViewRowState recordStates,
                                         ::System::Data::IFilter* rowFilter);

  /// @brief Method GetIndex, addr 0x412c5ec, size 0x34, virtual false, abstract: false, final false
  inline ::System::Data::Index* GetIndex(::StringW sort, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter);

  /// @brief Method GetInheritedNamespace, addr 0x4127af0, size 0x248, virtual false, abstract: false, final false
  inline ::StringW GetInheritedNamespace(::System::Collections::Generic::List_1<::System::Data::DataTable*>* visitedTables);

  /// @brief Method GetListeners, addr 0x412cb44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* GetListeners();

  /// @brief Method GetObjectData, addr 0x411e668, size 0xd8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPropertyDescriptorCollection, addr 0x41304f8, size 0x240, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetPropertyDescriptorCollection(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetRowAndColumnErrors, addr 0x4124a50, size 0x248, virtual false, abstract: false, final false
  inline void GetRowAndColumnErrors(int32_t rowIndex, ::System::Collections::Hashtable* rowErrors, ::System::Collections::Hashtable* colErrors);

  /// @brief Method GetRowType, addr 0x412dec8, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* GetRowType();

  /// @brief Method GetSchema, addr 0x4135018, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* GetSchema();

  /// @brief Method GetSpecialHashCode, addr 0x4126738, size 0xf0, virtual false, abstract: false, final false
  inline int32_t GetSpecialHashCode(::StringW name);

  /// @brief Method IncrementalCloneTo, addr 0x412a264, size 0x340, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* IncrementalCloneTo(::System::Data::DataTable* sourceTable, ::System::Data::DataTable* targetTable);

  /// @brief Method IndexOf, addr 0x412c3cc, size 0x40, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW s1, ::StringW s2);

  /// @brief Method InsertRecordToIndexes, addr 0x412ee48, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> InsertRecordToIndexes(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method InsertRow, addr 0x412aa3c, size 0xc, virtual false, abstract: false, final false
  inline void InsertRow(::System::Data::DataRow* row, int32_t proposedID, int32_t pos);

  /// @brief Method InsertRow, addr 0x4129b30, size 0x4ac, virtual false, abstract: false, final false
  inline void InsertRow(::System::Data::DataRow* row, int64_t proposedID);

  /// @brief Method InsertRow, addr 0x412aa48, size 0x38c, virtual false, abstract: false, final false
  inline void InsertRow(::System::Data::DataRow* row, int64_t proposedID, int32_t pos, bool fireEvent);

  /// @brief Method IsEmptyXml, addr 0x41315e4, size 0x1d0, virtual false, abstract: false, final false
  inline bool IsEmptyXml(::System::Xml::XmlReader* reader);

  /// @brief Method IsNamespaceInherited, addr 0x4128b04, size 0x10, virtual false, abstract: false, final false
  inline bool IsNamespaceInherited();

  /// @brief Method IsSuffix, addr 0x412c40c, size 0x40, virtual false, abstract: false, final false
  inline bool IsSuffix(::StringW s1, ::StringW s2);

  /// @brief Method Merge, addr 0x4130740, size 0xc, virtual false, abstract: false, final false
  inline void Merge(::System::Data::DataTable* table);

  /// @brief Method Merge, addr 0x413074c, size 0x270, virtual false, abstract: false, final false
  inline void Merge(::System::Data::DataTable* table, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction);

  /// @brief Method MergeRow, addr 0x4129600, size 0x530, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* MergeRow(::System::Data::DataRow* row, ::System::Data::DataRow* targetRow, bool preserveChanges, ::System::Data::Index* idxSearch);

  /// @brief Method MoveToElement, addr 0x4134688, size 0xb4, virtual false, abstract: false, final false
  inline bool MoveToElement(::System::Xml::XmlReader* reader, int32_t depth);

  /// @brief Method NewEmptyRow, addr 0x4124c98, size 0x54, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* NewEmptyRow();

  /// @brief Method NewRecord, addr 0x412d81c, size 0x8, virtual false, abstract: false, final false
  inline int32_t NewRecord();

  /// @brief Method NewRecord, addr 0x412d824, size 0xe4, virtual false, abstract: false, final false
  inline int32_t NewRecord(int32_t sourceRecord);

  /// @brief Method NewRow, addr 0x412d9dc, size 0x34, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* NewRow();

  /// @brief Method NewRow, addr 0x412d950, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* NewRow(int32_t record);

  /// @brief Method NewRowArray, addr 0x412df34, size 0x1a4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> NewRowArray(int32_t size);

  /// @brief Method NewRowCreated, addr 0x412da10, size 0x84, virtual false, abstract: false, final false
  inline void NewRowCreated(::System::Data::DataRow* row);

  /// @brief Method NewRowFromBuilder, addr 0x412de6c, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Data::DataRow* NewRowFromBuilder(::System::Data::DataRowBuilder* builder);

  /// @brief Method NewUninitializedRecord, addr 0x412d908, size 0x1c, virtual false, abstract: false, final false
  inline int32_t NewUninitializedRecord();

  /// @brief Method NewUninitializedRow, addr 0x412d924, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* NewUninitializedRow();

  static inline ::System::Data::DataTable* New_ctor();

  static inline ::System::Data::DataTable* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::DataTable* New_ctor(::StringW tableName);

  /// @brief Method OnColumnChanged, addr 0x412e1dc, size 0xd0, virtual true, abstract: false, final false
  inline void OnColumnChanged(::System::Data::DataColumnChangeEventArgs* e);

  /// @brief Method OnColumnChanging, addr 0x412e10c, size 0xd0, virtual true, abstract: false, final false
  inline void OnColumnChanging(::System::Data::DataColumnChangeEventArgs* e);

  /// @brief Method OnPropertyChanging, addr 0x412e2ac, size 0xd0, virtual true, abstract: false, final false
  inline void OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent);

  /// @brief Method OnRemoveColumn, addr 0x412e38c, size 0x4, virtual true, abstract: false, final false
  inline void OnRemoveColumn(::System::Data::DataColumn* column);

  /// @brief Method OnRemoveColumnInternal, addr 0x412e37c, size 0x10, virtual false, abstract: false, final false
  inline void OnRemoveColumnInternal(::System::Data::DataColumn* column);

  /// @brief Method OnRowChanged, addr 0x412c1bc, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Data::DataRowChangeEventArgs* OnRowChanged(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction);

  /// @brief Method OnRowChanged, addr 0x412e390, size 0xd0, virtual true, abstract: false, final false
  inline void OnRowChanged(::System::Data::DataRowChangeEventArgs* e);

  /// @brief Method OnRowChanging, addr 0x412c118, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Data::DataRowChangeEventArgs* OnRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction);

  /// @brief Method OnRowChanging, addr 0x412e460, size 0xd0, virtual true, abstract: false, final false
  inline void OnRowChanging(::System::Data::DataRowChangeEventArgs* e);

  /// @brief Method OnRowDeleted, addr 0x412e600, size 0xd0, virtual true, abstract: false, final false
  inline void OnRowDeleted(::System::Data::DataRowChangeEventArgs* e);

  /// @brief Method OnRowDeleting, addr 0x412e530, size 0xd0, virtual true, abstract: false, final false
  inline void OnRowDeleting(::System::Data::DataRowChangeEventArgs* e);

  /// @brief Method OnTableCleared, addr 0x412e6d0, size 0xd0, virtual true, abstract: false, final false
  inline void OnTableCleared(::System::Data::DataTableClearEventArgs* e);

  /// @brief Method OnTableClearing, addr 0x412e7a0, size 0xd0, virtual true, abstract: false, final false
  inline void OnTableClearing(::System::Data::DataTableClearEventArgs* e);

  /// @brief Method OnTableNewRow, addr 0x412e870, size 0xd0, virtual true, abstract: false, final false
  inline void OnTableNewRow(::System::Data::DataTableNewRowEventArgs* e);

  /// @brief Method ParseSortString, addr 0x412c620, size 0x35c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> ParseSortString(::StringW sortString);

  /// @brief Method RaisePropertyChanging, addr 0x4127a0c, size 0x78, virtual false, abstract: false, final false
  inline void RaisePropertyChanging(::StringW name);

  /// @brief Method RaiseRowChanged, addr 0x412d634, size 0x1e8, virtual false, abstract: false, final false
  inline ::System::Data::DataRowChangeEventArgs* RaiseRowChanged(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction);

  /// @brief Method RaiseRowChanging, addr 0x412ff08, size 0x1b0, virtual false, abstract: false, final false
  inline ::System::Data::DataRowChangeEventArgs* RaiseRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction);

  /// @brief Method RaiseRowChanging, addr 0x412cb4c, size 0x194, virtual false, abstract: false, final false
  inline ::System::Data::DataRowChangeEventArgs* RaiseRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction, bool fireEvent);

  /// @brief Method ReadEndElement, addr 0x4133180, size 0x94, virtual false, abstract: false, final false
  inline void ReadEndElement(::System::Xml::XmlReader* reader);

  /// @brief Method ReadXDRSchema, addr 0x4133214, size 0x70, virtual false, abstract: false, final false
  inline void ReadXDRSchema(::System::Xml::XmlReader* reader);

  /// @brief Method ReadXSDSchema, addr 0x413473c, size 0x194, virtual false, abstract: false, final false
  inline void ReadXSDSchema(::System::Xml::XmlReader* reader, bool denyResolving);

  /// @brief Method ReadXml, addr 0x41317b4, size 0xfd0, virtual false, abstract: false, final false
  inline ::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode, bool denyResolving);

  /// @brief Method ReadXmlDiffgram, addr 0x4132784, size 0x9fc, virtual false, abstract: false, final false
  inline void ReadXmlDiffgram(::System::Xml::XmlReader* reader);

  /// @brief Method ReadXmlSchema, addr 0x4133284, size 0x1404, virtual false, abstract: false, final false
  inline void ReadXmlSchema(::System::Xml::XmlReader* reader, bool denyResolving);

  /// @brief Method ReadXmlSerializable, addr 0x41353cc, size 0xc, virtual true, abstract: false, final false
  inline void ReadXmlSerializable(::System::Xml::XmlReader* reader);

  /// @brief Method RecordChanged, addr 0x412eab0, size 0x1d4, virtual false, abstract: false, final false
  inline void RecordChanged(::ArrayW<int32_t, ::Array<int32_t>*> oldIndex, ::ArrayW<int32_t, ::Array<int32_t>*> newIndex);

  /// @brief Method RecordChanged, addr 0x412e940, size 0x170, virtual false, abstract: false, final false
  inline void RecordChanged(int32_t record);

  /// @brief Method RecordStateChanged, addr 0x412cce0, size 0x188, virtual false, abstract: false, final false
  inline void RecordStateChanged(int32_t record, ::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState);

  /// @brief Method RecordStateChanged, addr 0x412ce68, size 0x21c, virtual false, abstract: false, final false
  inline void RecordStateChanged(int32_t record1, ::System::Data::DataViewRowState oldState1, ::System::Data::DataViewRowState newState1, int32_t record2, ::System::Data::DataViewRowState oldState2,
                                 ::System::Data::DataViewRowState newState2);

  /// @brief Method RemoveDependentColumn, addr 0x413555c, size 0x90, virtual false, abstract: false, final false
  inline void RemoveDependentColumn(::System::Data::DataColumn* expressionColumn);

  /// @brief Method RemoveRecordFromIndexes, addr 0x412ec84, size 0x1c4, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> RemoveRecordFromIndexes(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method RemoveRow, addr 0x412f89c, size 0x19c, virtual false, abstract: false, final false
  inline void RemoveRow(::System::Data::DataRow* row, bool check);

  /// @brief Method Reset, addr 0x412fa38, size 0x288, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetConstraints, addr 0x4125b58, size 0x1c, virtual false, abstract: false, final false
  inline void ResetConstraints();

  /// @brief Method ResetIndexes, addr 0x412154c, size 0x8, virtual false, abstract: false, final false
  inline void ResetIndexes();

  /// @brief Method ResetInternalIndexes, addr 0x412fcc0, size 0x1d4, virtual false, abstract: false, final false
  inline void ResetInternalIndexes(::System::Data::DataColumn* column);

  /// @brief Method RestoreConstraint, addr 0x4131590, size 0x54, virtual false, abstract: false, final false
  inline void RestoreConstraint(bool originalEnforceConstraint);

  /// @brief Method RestoreIndexEvents, addr 0x4125120, size 0x338, virtual false, abstract: false, final false
  inline void RestoreIndexEvents(bool forceReset);

  /// @brief Method RestoreShadowIndexes, addr 0x41300b8, size 0x1c, virtual false, abstract: false, final false
  inline void RestoreShadowIndexes();

  /// @brief Method RollbackRow, addr 0x412fe94, size 0x4c, virtual false, abstract: false, final false
  inline void RollbackRow(::System::Data::DataRow* row);

  /// @brief Method SerializeConstraints, addr 0x4122aa8, size 0x734, virtual false, abstract: false, final false
  inline void SerializeConstraints(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex, bool allConstraints);

  /// @brief Method SerializeDataTable, addr 0x411e740, size 0x2b0, virtual false, abstract: false, final false
  inline void SerializeDataTable(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable,
                                 ::System::Data::SerializationFormat remotingFormat);

  /// @brief Method SerializeExpressionColumns, addr 0x4124790, size 0x15c, virtual false, abstract: false, final false
  inline void SerializeExpressionColumns(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex);

  /// @brief Method SerializeTableData, addr 0x411f6b8, size 0x5cc, virtual false, abstract: false, final false
  inline void SerializeTableData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, int32_t serIndex);

  /// @brief Method SerializeTableSchema, addr 0x411e9f0, size 0xcc8, virtual false, abstract: false, final false
  inline void SerializeTableSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, bool isSingleTable);

  /// @brief Method SetCaseSensitiveValue, addr 0x41231dc, size 0x328, virtual false, abstract: false, final false
  inline bool SetCaseSensitiveValue(bool isCaseSensitive, bool userSet, bool resetIndexes);

  /// @brief Method SetDataSet, addr 0x4125b7c, size 0xac, virtual false, abstract: false, final false
  inline void SetDataSet(::System::Data::DataSet* dataSet);

  /// @brief Method SetKeyValues, addr 0x41290d4, size 0x90, virtual false, abstract: false, final false
  inline void SetKeyValues(::System::Data::DataKey key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keyValues, int32_t record);

  /// @brief Method SetLocaleValue, addr 0x4123504, size 0x5c0, virtual false, abstract: false, final false
  inline bool SetLocaleValue(::System::Globalization::CultureInfo* culture, bool userSet, bool resetIndexes);

  /// @brief Method SetMergeRecords, addr 0x4129274, size 0xbc, virtual false, abstract: false, final false
  inline void SetMergeRecords(::System::Data::DataRow* row, int32_t newRecord, int32_t oldRecord, ::System::Data::DataRowAction action);

  /// @brief Method SetNewRecord, addr 0x4129330, size 0x58, virtual false, abstract: false, final false
  inline void SetNewRecord(::System::Data::DataRow* row, int32_t proposedRecord, ::System::Data::DataRowAction action, bool isInMerge, bool fireEvent, bool suppressEnsurePropertyChanged);

  /// @brief Method SetNewRecordWorker, addr 0x412add4, size 0x810, virtual false, abstract: false, final false
  inline void SetNewRecordWorker(::System::Data::DataRow* row, int32_t proposedRecord, ::System::Data::DataRowAction action, bool isInMerge, bool suppressEnsurePropertyChanged, int32_t position,
                                 bool fireEvent, ::ByRef<::System::Exception*> deferredException);

  /// @brief Method SetOldRecord, addr 0x4129388, size 0x278, virtual false, abstract: false, final false
  inline void SetOldRecord(::System::Data::DataRow* row, int32_t proposedRecord);

  /// @brief Method SetShadowIndexes, addr 0x4125458, size 0x38, virtual false, abstract: false, final false
  inline void SetShadowIndexes();

  /// @brief Method ShadowIndexCopy, addr 0x41300d4, size 0x7c, virtual false, abstract: false, final false
  inline void ShadowIndexCopy();

  /// @brief Method ShouldSerializeCaseSensitive, addr 0x41255f8, size 0x8, virtual false, abstract: false, final false
  inline bool ShouldSerializeCaseSensitive();

  /// @brief Method ShouldSerializeLocale, addr 0x4126828, size 0x8, virtual false, abstract: false, final false
  inline bool ShouldSerializeLocale();

  /// @brief Method SilentlySetValue, addr 0x412efbc, size 0x170, virtual false, abstract: false, final false
  inline void SilentlySetValue(::System::Data::DataRow* dr, ::System::Data::DataColumn* dc, ::System::Data::DataRowVersion version, ::System::Object* newValue);

  /// @brief Method SuspendIndexEvents, addr 0x4125490, size 0xac, virtual false, abstract: false, final false
  inline void SuspendIndexEvents();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x4135008, size 0x10, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x41351ec, size 0x1ac, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x4135398, size 0x34, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToString, addr 0x4130150, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdatePropertyDescriptorCollectionCache, addr 0x41304f0, size 0x8, virtual false, abstract: false, final false
  inline void UpdatePropertyDescriptorCollectionCache();

  /// @brief Method UpdatingCurrent, addr 0x412fee0, size 0x28, virtual false, abstract: false, final false
  inline bool UpdatingCurrent(::System::Data::DataRow* row, ::System::Data::DataRowAction action);

  /// @brief Method WriteXml, addr 0x41309bc, size 0x3b0, virtual false, abstract: false, final false
  inline void WriteXml(::System::Xml::XmlWriter* writer, ::System::Data::XmlWriteMode mode, bool writeHierarchy);

  /// @brief Method WriteXmlSchema, addr 0x413125c, size 0x334, virtual false, abstract: false, final false
  inline void WriteXmlSchema(::System::Xml::XmlWriter* writer, bool writeHierarchy);

  constexpr bool const& __cordl_internal_get__caseSensitive() const;

  constexpr bool& __cordl_internal_get__caseSensitive();

  constexpr bool const& __cordl_internal_get__caseSensitiveUserSet() const;

  constexpr bool& __cordl_internal_get__caseSensitiveUserSet();

  constexpr ::System::Data::DataRelationCollection* const& __cordl_internal_get__childRelationsCollection() const;

  constexpr ::System::Data::DataRelationCollection*& __cordl_internal_get__childRelationsCollection();

  constexpr ::System::Data::DataColumn* const& __cordl_internal_get__colUnique() const;

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__colUnique();

  constexpr ::System::Data::DataColumnCollection* const& __cordl_internal_get__columnCollection() const;

  constexpr ::System::Data::DataColumnCollection*& __cordl_internal_get__columnCollection();

  constexpr ::System::Globalization::CompareOptions const& __cordl_internal_get__compareFlags() const;

  constexpr ::System::Globalization::CompareOptions& __cordl_internal_get__compareFlags();

  constexpr ::System::Globalization::CompareInfo* const& __cordl_internal_get__compareInfo() const;

  constexpr ::System::Globalization::CompareInfo*& __cordl_internal_get__compareInfo();

  constexpr ::System::Data::ConstraintCollection* const& __cordl_internal_get__constraintCollection() const;

  constexpr ::System::Data::ConstraintCollection*& __cordl_internal_get__constraintCollection();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr bool const& __cordl_internal_get__cultureUserSet() const;

  constexpr bool& __cordl_internal_get__cultureUserSet();

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__dataSet() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* const& __cordl_internal_get__dataViewListeners() const;

  constexpr ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>*& __cordl_internal_get__dataViewListeners();

  constexpr ::System::Data::DataView* const& __cordl_internal_get__defaultView() const;

  constexpr ::System::Data::DataView*& __cordl_internal_get__defaultView();

  constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> const& __cordl_internal_get__delayedSetPrimaryKey() const;

  constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>& __cordl_internal_get__delayedSetPrimaryKey();

  constexpr ::System::Collections::Generic::List_1<::System::Data::DataView*>* const& __cordl_internal_get__delayedViews() const;

  constexpr ::System::Collections::Generic::List_1<::System::Data::DataView*>*& __cordl_internal_get__delayedViews();

  constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* const& __cordl_internal_get__dependentColumns() const;

  constexpr ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*& __cordl_internal_get__dependentColumns();

  constexpr ::System::Data::DataExpression* const& __cordl_internal_get__displayExpression() const;

  constexpr ::System::Data::DataExpression*& __cordl_internal_get__displayExpression();

  constexpr int32_t const& __cordl_internal_get__elementColumnCount() const;

  constexpr int32_t& __cordl_internal_get__elementColumnCount();

  constexpr ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> const& __cordl_internal_get__emptyDataRowArray() const;

  constexpr ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>& __cordl_internal_get__emptyDataRowArray();

  constexpr ::StringW const& __cordl_internal_get__encodedTableName() const;

  constexpr ::StringW& __cordl_internal_get__encodedTableName();

  constexpr bool const& __cordl_internal_get__enforceConstraints() const;

  constexpr bool& __cordl_internal_get__enforceConstraints();

  constexpr ::System::Data::PropertyCollection* const& __cordl_internal_get__extendedProperties() const;

  constexpr ::System::Data::PropertyCollection*& __cordl_internal_get__extendedProperties();

  constexpr bool const& __cordl_internal_get__fInLoadDiffgram() const;

  constexpr bool& __cordl_internal_get__fInLoadDiffgram();

  constexpr bool const& __cordl_internal_get__fNestedInDataset() const;

  constexpr bool& __cordl_internal_get__fNestedInDataset();

  constexpr ::System::IFormatProvider* const& __cordl_internal_get__formatProvider() const;

  constexpr ::System::IFormatProvider*& __cordl_internal_get__formatProvider();

  constexpr ::System::StringComparer* const& __cordl_internal_get__hashCodeProvider() const;

  constexpr ::System::StringComparer*& __cordl_internal_get__hashCodeProvider();

  constexpr bool const& __cordl_internal_get__inDataLoad() const;

  constexpr bool& __cordl_internal_get__inDataLoad();

  constexpr bool const& __cordl_internal_get__inLoad() const;

  constexpr bool& __cordl_internal_get__inLoad();

  constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>* const& __cordl_internal_get__indexes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>*& __cordl_internal_get__indexes();

  constexpr ::System::Threading::ReaderWriterLockSlim* const& __cordl_internal_get__indexesLock() const;

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__indexesLock();

  constexpr uint8_t const& __cordl_internal_get__isTypedDataTable() const;

  constexpr uint8_t& __cordl_internal_get__isTypedDataTable();

  constexpr ::System::Data::Index* const& __cordl_internal_get__loadIndex() const;

  constexpr ::System::Data::Index*& __cordl_internal_get__loadIndex();

  constexpr ::System::Data::Index* const& __cordl_internal_get__loadIndexwithCurrentDeleted() const;

  constexpr ::System::Data::Index*& __cordl_internal_get__loadIndexwithCurrentDeleted();

  constexpr ::System::Data::Index* const& __cordl_internal_get__loadIndexwithOriginalAdded() const;

  constexpr ::System::Data::Index*& __cordl_internal_get__loadIndexwithOriginalAdded();

  constexpr ::System::Decimal const& __cordl_internal_get__maxOccurs() const;

  constexpr ::System::Decimal& __cordl_internal_get__maxOccurs();

  constexpr bool const& __cordl_internal_get__mergingData() const;

  constexpr bool& __cordl_internal_get__mergingData();

  constexpr ::System::Decimal const& __cordl_internal_get__minOccurs() const;

  constexpr ::System::Decimal& __cordl_internal_get__minOccurs();

  constexpr ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> const& __cordl_internal_get__nestedParentRelations() const;

  constexpr ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*>& __cordl_internal_get__nestedParentRelations();

  constexpr int64_t const& __cordl_internal_get__nextRowID() const;

  constexpr int64_t& __cordl_internal_get__nextRowID();

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr ::System::Data::DataColumnChangeEventHandler* const& __cordl_internal_get__onColumnChangedDelegate() const;

  constexpr ::System::Data::DataColumnChangeEventHandler*& __cordl_internal_get__onColumnChangedDelegate();

  constexpr ::System::Data::DataColumnChangeEventHandler* const& __cordl_internal_get__onColumnChangingDelegate() const;

  constexpr ::System::Data::DataColumnChangeEventHandler*& __cordl_internal_get__onColumnChangingDelegate();

  constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& __cordl_internal_get__onPropertyChangingDelegate() const;

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get__onPropertyChangingDelegate();

  constexpr ::System::Data::DataRowChangeEventHandler* const& __cordl_internal_get__onRowChangedDelegate() const;

  constexpr ::System::Data::DataRowChangeEventHandler*& __cordl_internal_get__onRowChangedDelegate();

  constexpr ::System::Data::DataRowChangeEventHandler* const& __cordl_internal_get__onRowChangingDelegate() const;

  constexpr ::System::Data::DataRowChangeEventHandler*& __cordl_internal_get__onRowChangingDelegate();

  constexpr ::System::Data::DataRowChangeEventHandler* const& __cordl_internal_get__onRowDeletedDelegate() const;

  constexpr ::System::Data::DataRowChangeEventHandler*& __cordl_internal_get__onRowDeletedDelegate();

  constexpr ::System::Data::DataRowChangeEventHandler* const& __cordl_internal_get__onRowDeletingDelegate() const;

  constexpr ::System::Data::DataRowChangeEventHandler*& __cordl_internal_get__onRowDeletingDelegate();

  constexpr ::System::Data::DataTableClearEventHandler* const& __cordl_internal_get__onTableClearedDelegate() const;

  constexpr ::System::Data::DataTableClearEventHandler*& __cordl_internal_get__onTableClearedDelegate();

  constexpr ::System::Data::DataTableClearEventHandler* const& __cordl_internal_get__onTableClearingDelegate() const;

  constexpr ::System::Data::DataTableClearEventHandler*& __cordl_internal_get__onTableClearingDelegate();

  constexpr ::System::Data::DataTableNewRowEventHandler* const& __cordl_internal_get__onTableNewRowDelegate() const;

  constexpr ::System::Data::DataTableNewRowEventHandler*& __cordl_internal_get__onTableNewRowDelegate();

  constexpr ::System::Data::DataRelationCollection* const& __cordl_internal_get__parentRelationsCollection() const;

  constexpr ::System::Data::DataRelationCollection*& __cordl_internal_get__parentRelationsCollection();

  constexpr ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> const& __cordl_internal_get__primaryIndex() const;

  constexpr ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>& __cordl_internal_get__primaryIndex();

  constexpr ::System::Data::UniqueConstraint* const& __cordl_internal_get__primaryKey() const;

  constexpr ::System::Data::UniqueConstraint*& __cordl_internal_get__primaryKey();

  constexpr ::System::ComponentModel::PropertyDescriptorCollection* const& __cordl_internal_get__propertyDescriptorCollectionCache() const;

  constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __cordl_internal_get__propertyDescriptorCollectionCache();

  constexpr ::System::Data::RecordManager* const& __cordl_internal_get__recordManager() const;

  constexpr ::System::Data::RecordManager*& __cordl_internal_get__recordManager();

  constexpr ::System::Data::SerializationFormat const& __cordl_internal_get__remotingFormat() const;

  constexpr ::System::Data::SerializationFormat& __cordl_internal_get__remotingFormat();

  constexpr bool const& __cordl_internal_get__repeatableElement() const;

  constexpr bool& __cordl_internal_get__repeatableElement();

  constexpr ::System::Data::DataRowBuilder* const& __cordl_internal_get__rowBuilder() const;

  constexpr ::System::Data::DataRowBuilder*& __cordl_internal_get__rowBuilder();

  constexpr ::System::Data::DataRowCollection* const& __cordl_internal_get__rowCollection() const;

  constexpr ::System::Data::DataRowCollection*& __cordl_internal_get__rowCollection();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__rowDiffId() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__rowDiffId();

  constexpr bool const& __cordl_internal_get__schemaLoading() const;

  constexpr bool& __cordl_internal_get__schemaLoading();

  constexpr int32_t const& __cordl_internal_get__shadowCount() const;

  constexpr int32_t& __cordl_internal_get__shadowCount();

  constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>* const& __cordl_internal_get__shadowIndexes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Data::Index*>*& __cordl_internal_get__shadowIndexes();

  constexpr bool const& __cordl_internal_get__suspendEnforceConstraints() const;

  constexpr bool& __cordl_internal_get__suspendEnforceConstraints();

  constexpr int32_t const& __cordl_internal_get__suspendIndexEvents() const;

  constexpr int32_t& __cordl_internal_get__suspendIndexEvents();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::StringW const& __cordl_internal_get__tableNamespace() const;

  constexpr ::StringW& __cordl_internal_get__tableNamespace();

  constexpr ::StringW const& __cordl_internal_get__tablePrefix() const;

  constexpr ::StringW& __cordl_internal_get__tablePrefix();

  constexpr ::System::Object* const& __cordl_internal_get__typeName() const;

  constexpr ::System::Object*& __cordl_internal_get__typeName();

  constexpr int32_t const& __cordl_internal_get__ukColumnPositionForInference() const;

  constexpr int32_t& __cordl_internal_get__ukColumnPositionForInference();

  constexpr ::System::Data::DataColumn* const& __cordl_internal_get__xmlText() const;

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__xmlText();

  constexpr bool const& __cordl_internal_get_fInitInProgress() const;

  constexpr bool& __cordl_internal_get_fInitInProgress();

  constexpr void __cordl_internal_set__caseSensitive(bool value);

  constexpr void __cordl_internal_set__caseSensitiveUserSet(bool value);

  constexpr void __cordl_internal_set__childRelationsCollection(::System::Data::DataRelationCollection* value);

  constexpr void __cordl_internal_set__colUnique(::System::Data::DataColumn* value);

  constexpr void __cordl_internal_set__columnCollection(::System::Data::DataColumnCollection* value);

  constexpr void __cordl_internal_set__compareFlags(::System::Globalization::CompareOptions value);

  constexpr void __cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value);

  constexpr void __cordl_internal_set__constraintCollection(::System::Data::ConstraintCollection* value);

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__cultureUserSet(bool value);

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__dataViewListeners(::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* value);

  constexpr void __cordl_internal_set__defaultView(::System::Data::DataView* value);

  constexpr void __cordl_internal_set__delayedSetPrimaryKey(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value);

  constexpr void __cordl_internal_set__delayedViews(::System::Collections::Generic::List_1<::System::Data::DataView*>* value);

  constexpr void __cordl_internal_set__dependentColumns(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* value);

  constexpr void __cordl_internal_set__displayExpression(::System::Data::DataExpression* value);

  constexpr void __cordl_internal_set__elementColumnCount(int32_t value);

  constexpr void __cordl_internal_set__emptyDataRowArray(::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> value);

  constexpr void __cordl_internal_set__encodedTableName(::StringW value);

  constexpr void __cordl_internal_set__enforceConstraints(bool value);

  constexpr void __cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value);

  constexpr void __cordl_internal_set__fInLoadDiffgram(bool value);

  constexpr void __cordl_internal_set__fNestedInDataset(bool value);

  constexpr void __cordl_internal_set__formatProvider(::System::IFormatProvider* value);

  constexpr void __cordl_internal_set__hashCodeProvider(::System::StringComparer* value);

  constexpr void __cordl_internal_set__inDataLoad(bool value);

  constexpr void __cordl_internal_set__inLoad(bool value);

  constexpr void __cordl_internal_set__indexes(::System::Collections::Generic::List_1<::System::Data::Index*>* value);

  constexpr void __cordl_internal_set__indexesLock(::System::Threading::ReaderWriterLockSlim* value);

  constexpr void __cordl_internal_set__isTypedDataTable(uint8_t value);

  constexpr void __cordl_internal_set__loadIndex(::System::Data::Index* value);

  constexpr void __cordl_internal_set__loadIndexwithCurrentDeleted(::System::Data::Index* value);

  constexpr void __cordl_internal_set__loadIndexwithOriginalAdded(::System::Data::Index* value);

  constexpr void __cordl_internal_set__maxOccurs(::System::Decimal value);

  constexpr void __cordl_internal_set__mergingData(bool value);

  constexpr void __cordl_internal_set__minOccurs(::System::Decimal value);

  constexpr void __cordl_internal_set__nestedParentRelations(::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> value);

  constexpr void __cordl_internal_set__nextRowID(int64_t value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__onColumnChangedDelegate(::System::Data::DataColumnChangeEventHandler* value);

  constexpr void __cordl_internal_set__onColumnChangingDelegate(::System::Data::DataColumnChangeEventHandler* value);

  constexpr void __cordl_internal_set__onPropertyChangingDelegate(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__onRowChangedDelegate(::System::Data::DataRowChangeEventHandler* value);

  constexpr void __cordl_internal_set__onRowChangingDelegate(::System::Data::DataRowChangeEventHandler* value);

  constexpr void __cordl_internal_set__onRowDeletedDelegate(::System::Data::DataRowChangeEventHandler* value);

  constexpr void __cordl_internal_set__onRowDeletingDelegate(::System::Data::DataRowChangeEventHandler* value);

  constexpr void __cordl_internal_set__onTableClearedDelegate(::System::Data::DataTableClearEventHandler* value);

  constexpr void __cordl_internal_set__onTableClearingDelegate(::System::Data::DataTableClearEventHandler* value);

  constexpr void __cordl_internal_set__onTableNewRowDelegate(::System::Data::DataTableNewRowEventHandler* value);

  constexpr void __cordl_internal_set__parentRelationsCollection(::System::Data::DataRelationCollection* value);

  constexpr void __cordl_internal_set__primaryIndex(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> value);

  constexpr void __cordl_internal_set__primaryKey(::System::Data::UniqueConstraint* value);

  constexpr void __cordl_internal_set__propertyDescriptorCollectionCache(::System::ComponentModel::PropertyDescriptorCollection* value);

  constexpr void __cordl_internal_set__recordManager(::System::Data::RecordManager* value);

  constexpr void __cordl_internal_set__remotingFormat(::System::Data::SerializationFormat value);

  constexpr void __cordl_internal_set__repeatableElement(bool value);

  constexpr void __cordl_internal_set__rowBuilder(::System::Data::DataRowBuilder* value);

  constexpr void __cordl_internal_set__rowCollection(::System::Data::DataRowCollection* value);

  constexpr void __cordl_internal_set__rowDiffId(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__schemaLoading(bool value);

  constexpr void __cordl_internal_set__shadowCount(int32_t value);

  constexpr void __cordl_internal_set__shadowIndexes(::System::Collections::Generic::List_1<::System::Data::Index*>* value);

  constexpr void __cordl_internal_set__suspendEnforceConstraints(bool value);

  constexpr void __cordl_internal_set__suspendIndexEvents(int32_t value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__tableNamespace(::StringW value);

  constexpr void __cordl_internal_set__tablePrefix(::StringW value);

  constexpr void __cordl_internal_set__typeName(::System::Object* value);

  constexpr void __cordl_internal_set__ukColumnPositionForInference(int32_t value);

  constexpr void __cordl_internal_set__xmlText(::System::Data::DataColumn* value);

  constexpr void __cordl_internal_set_fInitInProgress(bool value);

  /// @brief Method .ctor, addr 0x411dc9c, size 0x4b4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x411e1b4, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x411e150, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName);

  static inline int32_t getStaticF_s_objectTypeCount();

  /// @brief Method get_AreIndexEventsSuspended, addr 0x4125110, size 0x10, virtual false, abstract: false, final false
  inline bool get_AreIndexEventsSuspended();

  /// @brief Method get_CaseSensitive, addr 0x4125068, size 0x8, virtual false, abstract: false, final false
  inline bool get_CaseSensitive();

  /// @brief Method get_ChildRelations, addr 0x4125aa8, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Data::DataRelationCollection* get_ChildRelations();

  /// @brief Method get_Columns, addr 0x4125b14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataColumnCollection* get_Columns();

  /// @brief Method get_CompareInfo, addr 0x4125b1c, size 0x34, virtual false, abstract: false, final false
  inline ::System::Globalization::CompareInfo* get_CompareInfo();

  /// @brief Method get_Constraints, addr 0x4125b50, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::ConstraintCollection* get_Constraints();

  /// @brief Method get_DataSet, addr 0x4125b74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataSet* get_DataSet();

  /// @brief Method get_DisplayExpressionInternal, addr 0x4125c28, size 0x64, virtual false, abstract: false, final false
  inline ::StringW get_DisplayExpressionInternal();

  /// @brief Method get_ElementColumnCount, addr 0x4126868, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ElementColumnCount();

  /// @brief Method get_EncodedTableName, addr 0x4127a84, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW get_EncodedTableName();

  /// @brief Method get_EnforceConstraints, addr 0x4125c8c, size 0x30, virtual false, abstract: false, final false
  inline bool get_EnforceConstraints();

  /// @brief Method get_ExtendedProperties, addr 0x412253c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Data::PropertyCollection* get_ExtendedProperties();

  /// @brief Method get_FormatProvider, addr 0x41262e8, size 0x90, virtual false, abstract: false, final false
  inline ::System::IFormatProvider* get_FormatProvider();

  /// @brief Method get_IsTypedDataTable, addr 0x412553c, size 0xbc, virtual false, abstract: false, final false
  inline bool get_IsTypedDataTable();

  /// @brief Method get_LiveIndexes, addr 0x4125988, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Data::Index*>* get_LiveIndexes();

  /// @brief Method get_Locale, addr 0x4126378, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Locale();

  /// @brief Method get_MaxOccurs, addr 0x41290ac, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_MaxOccurs();

  /// @brief Method get_MergingData, addr 0x41268b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_MergingData();

  /// @brief Method get_MinOccurs, addr 0x41290c0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_MinOccurs();

  /// @brief Method get_MinimumCapacity, addr 0x4126830, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_MinimumCapacity();

  /// @brief Method get_Namespace, addr 0x411fc84, size 0x84, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_NeedColumnChangeEvents, addr 0x412e0d8, size 0x34, virtual false, abstract: false, final false
  inline bool get_NeedColumnChangeEvents();

  /// @brief Method get_NestedParentRelations, addr 0x41268c8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> get_NestedParentRelations();

  /// @brief Method get_NestedParentsCount, addr 0x4126d6c, size 0x2e0, virtual false, abstract: false, final false
  inline int32_t get_NestedParentsCount();

  /// @brief Method get_ObjectID, addr 0x413543c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method get_ParentRelations, addr 0x412591c, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Data::DataRelationCollection* get_ParentRelations();

  /// @brief Method get_Prefix, addr 0x4128e94, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_PrimaryKey, addr 0x412704c, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_PrimaryKey();

  /// @brief Method get_RecordCapacity, addr 0x412684c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_RecordCapacity();

  /// @brief Method get_RemotingFormat, addr 0x4125a30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::SerializationFormat get_RemotingFormat();

  /// @brief Method get_RowDiffId, addr 0x41353d8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_RowDiffId();

  /// @brief Method get_Rows, addr 0x41274f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataRowCollection* get_Rows();

  /// @brief Method get_SchemaLoading, addr 0x41268d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_SchemaLoading();

  /// @brief Method get_SelfNested, addr 0x4125600, size 0x31c, virtual false, abstract: false, final false
  inline bool get_SelfNested();

  /// @brief Method get_Site, addr 0x412aa24, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ISite* get_Site();

  /// @brief Method get_SuspendEnforceConstraints, addr 0x41262d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_SuspendEnforceConstraints();

  /// @brief Method get_TableName, addr 0x41274fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_TypeName, addr 0x41224a8, size 0x94, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_TypeName();

  /// @brief Method get_UKColumnPositionForInference, addr 0x4125a98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_UKColumnPositionForInference();

  /// @brief Method get_XmlText, addr 0x4128ffc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* get_XmlText();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() noexcept;

  static inline void setStaticF_s_objectTypeCount(int32_t value);

  /// @brief Method set_CaseSensitive, addr 0x4125070, size 0xa0, virtual false, abstract: false, final false
  inline void set_CaseSensitive(bool value);

  /// @brief Method set_ElementColumnCount, addr 0x4126870, size 0x44, virtual false, abstract: false, final false
  inline void set_ElementColumnCount(int32_t value);

  /// @brief Method set_EnforceConstraints, addr 0x4125cbc, size 0x40, virtual false, abstract: false, final false
  inline void set_EnforceConstraints(bool value);

  /// @brief Method set_Locale, addr 0x4126380, size 0x3b8, virtual false, abstract: false, final false
  inline void set_Locale(::System::Globalization::CultureInfo* value);

  /// @brief Method set_MaxOccurs, addr 0x41290b8, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxOccurs(::System::Decimal value);

  /// @brief Method set_MergingData, addr 0x41268bc, size 0xc, virtual false, abstract: false, final false
  inline void set_MergingData(bool value);

  /// @brief Method set_MinOccurs, addr 0x41290cc, size 0x8, virtual false, abstract: false, final false
  inline void set_MinOccurs(::System::Decimal value);

  /// @brief Method set_MinimumCapacity, addr 0x4123ac4, size 0x30, virtual false, abstract: false, final false
  inline void set_MinimumCapacity(int32_t value);

  /// @brief Method set_Namespace, addr 0x4122210, size 0x298, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

  /// @brief Method set_Prefix, addr 0x4128e9c, size 0x160, virtual false, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_PrimaryKey, addr 0x4127100, size 0x3f4, virtual false, abstract: false, final false
  inline void set_PrimaryKey(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value);

  /// @brief Method set_RemotingFormat, addr 0x4125a38, size 0x60, virtual false, abstract: false, final false
  inline void set_RemotingFormat(::System::Data::SerializationFormat value);

  /// @brief Method set_SuspendEnforceConstraints, addr 0x41262dc, size 0xc, virtual false, abstract: false, final false
  inline void set_SuspendEnforceConstraints(bool value);

  /// @brief Method set_TableName, addr 0x4127504, size 0x508, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_TypeName, addr 0x4130738, size 0x8, virtual false, abstract: false, final false
  inline void set_TypeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_UKColumnPositionForInference, addr 0x4125aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_UKColumnPositionForInference(int32_t value);

  /// @brief Method set_XmlText, addr 0x4129004, size 0xa8, virtual false, abstract: false, final false
  inline void set_XmlText(::System::Data::DataColumn* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTable(DataTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTable(DataTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11356 };

  /// @brief Field _dataSet, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _defaultView, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataView* ____defaultView;

  /// @brief Field _nextRowID, offset: 0x30, size: 0x8, def value: None
  int64_t ____nextRowID;

  /// @brief Field _rowCollection, offset: 0x38, size: 0x8, def value: None
  ::System::Data::DataRowCollection* ____rowCollection;

  /// @brief Field _columnCollection, offset: 0x40, size: 0x8, def value: None
  ::System::Data::DataColumnCollection* ____columnCollection;

  /// @brief Field _constraintCollection, offset: 0x48, size: 0x8, def value: None
  ::System::Data::ConstraintCollection* ____constraintCollection;

  /// @brief Field _elementColumnCount, offset: 0x50, size: 0x4, def value: None
  int32_t ____elementColumnCount;

  /// @brief Field _parentRelationsCollection, offset: 0x58, size: 0x8, def value: None
  ::System::Data::DataRelationCollection* ____parentRelationsCollection;

  /// @brief Field _childRelationsCollection, offset: 0x60, size: 0x8, def value: None
  ::System::Data::DataRelationCollection* ____childRelationsCollection;

  /// @brief Field _recordManager, offset: 0x68, size: 0x8, def value: None
  ::System::Data::RecordManager* ____recordManager;

  /// @brief Field _indexes, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Data::Index*>* ____indexes;

  /// @brief Field _shadowIndexes, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Data::Index*>* ____shadowIndexes;

  /// @brief Field _shadowCount, offset: 0x80, size: 0x4, def value: None
  int32_t ____shadowCount;

  /// @brief Field _extendedProperties, offset: 0x88, size: 0x8, def value: None
  ::System::Data::PropertyCollection* ____extendedProperties;

  /// @brief Field _tableName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _tableNamespace, offset: 0x98, size: 0x8, def value: None
  ::StringW ____tableNamespace;

  /// @brief Field _tablePrefix, offset: 0xa0, size: 0x8, def value: None
  ::StringW ____tablePrefix;

  /// @brief Field _displayExpression, offset: 0xa8, size: 0x8, def value: None
  ::System::Data::DataExpression* ____displayExpression;

  /// @brief Field _fNestedInDataset, offset: 0xb0, size: 0x1, def value: None
  bool ____fNestedInDataset;

  /// @brief Field _culture, offset: 0xb8, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  /// @brief Field _cultureUserSet, offset: 0xc0, size: 0x1, def value: None
  bool ____cultureUserSet;

  /// @brief Field _compareInfo, offset: 0xc8, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ____compareInfo;

  /// @brief Field _compareFlags, offset: 0xd0, size: 0x4, def value: None
  ::System::Globalization::CompareOptions ____compareFlags;

  /// @brief Field _formatProvider, offset: 0xd8, size: 0x8, def value: None
  ::System::IFormatProvider* ____formatProvider;

  /// @brief Field _hashCodeProvider, offset: 0xe0, size: 0x8, def value: None
  ::System::StringComparer* ____hashCodeProvider;

  /// @brief Field _caseSensitive, offset: 0xe8, size: 0x1, def value: None
  bool ____caseSensitive;

  /// @brief Field _caseSensitiveUserSet, offset: 0xe9, size: 0x1, def value: None
  bool ____caseSensitiveUserSet;

  /// @brief Field _encodedTableName, offset: 0xf0, size: 0x8, def value: None
  ::StringW ____encodedTableName;

  /// @brief Field _xmlText, offset: 0xf8, size: 0x8, def value: None
  ::System::Data::DataColumn* ____xmlText;

  /// @brief Field _colUnique, offset: 0x100, size: 0x8, def value: None
  ::System::Data::DataColumn* ____colUnique;

  /// @brief Field _minOccurs, offset: 0x108, size: 0x10, def value: None
  ::System::Decimal ____minOccurs;

  /// @brief Field _maxOccurs, offset: 0x118, size: 0x10, def value: None
  ::System::Decimal ____maxOccurs;

  /// @brief Field _repeatableElement, offset: 0x128, size: 0x1, def value: None
  bool ____repeatableElement;

  /// @brief Field _typeName, offset: 0x130, size: 0x8, def value: None
  ::System::Object* ____typeName;

  /// @brief Field _primaryKey, offset: 0x138, size: 0x8, def value: None
  ::System::Data::UniqueConstraint* ____primaryKey;

  /// @brief Field _primaryIndex, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> ____primaryIndex;

  /// @brief Field _delayedSetPrimaryKey, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ____delayedSetPrimaryKey;

  /// @brief Field _loadIndex, offset: 0x150, size: 0x8, def value: None
  ::System::Data::Index* ____loadIndex;

  /// @brief Field _loadIndexwithOriginalAdded, offset: 0x158, size: 0x8, def value: None
  ::System::Data::Index* ____loadIndexwithOriginalAdded;

  /// @brief Field _loadIndexwithCurrentDeleted, offset: 0x160, size: 0x8, def value: None
  ::System::Data::Index* ____loadIndexwithCurrentDeleted;

  /// @brief Field _suspendIndexEvents, offset: 0x168, size: 0x4, def value: None
  int32_t ____suspendIndexEvents;

  /// @brief Field _inDataLoad, offset: 0x16c, size: 0x1, def value: None
  bool ____inDataLoad;

  /// @brief Field _schemaLoading, offset: 0x16d, size: 0x1, def value: None
  bool ____schemaLoading;

  /// @brief Field _enforceConstraints, offset: 0x16e, size: 0x1, def value: None
  bool ____enforceConstraints;

  /// @brief Field _suspendEnforceConstraints, offset: 0x16f, size: 0x1, def value: None
  bool ____suspendEnforceConstraints;

  /// @brief Field fInitInProgress, offset: 0x170, size: 0x1, def value: None
  bool ___fInitInProgress;

  /// @brief Field _inLoad, offset: 0x171, size: 0x1, def value: None
  bool ____inLoad;

  /// @brief Field _fInLoadDiffgram, offset: 0x172, size: 0x1, def value: None
  bool ____fInLoadDiffgram;

  /// @brief Field _isTypedDataTable, offset: 0x173, size: 0x1, def value: None
  uint8_t ____isTypedDataTable;

  /// @brief Field _emptyDataRowArray, offset: 0x178, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> ____emptyDataRowArray;

  /// @brief Field _propertyDescriptorCollectionCache, offset: 0x180, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptorCollection* ____propertyDescriptorCollectionCache;

  /// @brief Field _nestedParentRelations, offset: 0x188, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> ____nestedParentRelations;

  /// @brief Field _dependentColumns, offset: 0x190, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* ____dependentColumns;

  /// @brief Field _mergingData, offset: 0x198, size: 0x1, def value: None
  bool ____mergingData;

  /// @brief Field _onRowChangedDelegate, offset: 0x1a0, size: 0x8, def value: None
  ::System::Data::DataRowChangeEventHandler* ____onRowChangedDelegate;

  /// @brief Field _onRowChangingDelegate, offset: 0x1a8, size: 0x8, def value: None
  ::System::Data::DataRowChangeEventHandler* ____onRowChangingDelegate;

  /// @brief Field _onRowDeletingDelegate, offset: 0x1b0, size: 0x8, def value: None
  ::System::Data::DataRowChangeEventHandler* ____onRowDeletingDelegate;

  /// @brief Field _onRowDeletedDelegate, offset: 0x1b8, size: 0x8, def value: None
  ::System::Data::DataRowChangeEventHandler* ____onRowDeletedDelegate;

  /// @brief Field _onColumnChangedDelegate, offset: 0x1c0, size: 0x8, def value: None
  ::System::Data::DataColumnChangeEventHandler* ____onColumnChangedDelegate;

  /// @brief Field _onColumnChangingDelegate, offset: 0x1c8, size: 0x8, def value: None
  ::System::Data::DataColumnChangeEventHandler* ____onColumnChangingDelegate;

  /// @brief Field _onTableClearingDelegate, offset: 0x1d0, size: 0x8, def value: None
  ::System::Data::DataTableClearEventHandler* ____onTableClearingDelegate;

  /// @brief Field _onTableClearedDelegate, offset: 0x1d8, size: 0x8, def value: None
  ::System::Data::DataTableClearEventHandler* ____onTableClearedDelegate;

  /// @brief Field _onTableNewRowDelegate, offset: 0x1e0, size: 0x8, def value: None
  ::System::Data::DataTableNewRowEventHandler* ____onTableNewRowDelegate;

  /// @brief Field _onPropertyChangingDelegate, offset: 0x1e8, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ____onPropertyChangingDelegate;

  /// @brief Field _rowBuilder, offset: 0x1f0, size: 0x8, def value: None
  ::System::Data::DataRowBuilder* ____rowBuilder;

  /// @brief Field _delayedViews, offset: 0x1f8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Data::DataView*>* ____delayedViews;

  /// @brief Field _dataViewListeners, offset: 0x200, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* ____dataViewListeners;

  /// @brief Field _rowDiffId, offset: 0x208, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____rowDiffId;

  /// @brief Field _indexesLock, offset: 0x210, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____indexesLock;

  /// @brief Field _ukColumnPositionForInference, offset: 0x218, size: 0x4, def value: None
  int32_t ____ukColumnPositionForInference;

  /// @brief Field _remotingFormat, offset: 0x21c, size: 0x4, def value: None
  ::System::Data::SerializationFormat ____remotingFormat;

  /// @brief Field _objectID, offset: 0x220, size: 0x4, def value: None
  int32_t ____objectID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataTable, ____dataSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____defaultView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____nextRowID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____rowCollection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____columnCollection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____constraintCollection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____elementColumnCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____parentRelationsCollection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____childRelationsCollection) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____recordManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____indexes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____shadowIndexes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____shadowCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____extendedProperties) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____tableName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____tableNamespace) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____tablePrefix) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____displayExpression) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____fNestedInDataset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____culture) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____cultureUserSet) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____compareInfo) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____compareFlags) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____formatProvider) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____hashCodeProvider) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____caseSensitive) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____caseSensitiveUserSet) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____encodedTableName) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____xmlText) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____colUnique) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____minOccurs) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____maxOccurs) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____repeatableElement) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____typeName) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____primaryKey) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____primaryIndex) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____delayedSetPrimaryKey) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____loadIndex) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____loadIndexwithOriginalAdded) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____loadIndexwithCurrentDeleted) == 0x160, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____suspendIndexEvents) == 0x168, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____inDataLoad) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____schemaLoading) == 0x16d, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____enforceConstraints) == 0x16e, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____suspendEnforceConstraints) == 0x16f, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ___fInitInProgress) == 0x170, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____inLoad) == 0x171, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____fInLoadDiffgram) == 0x172, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____isTypedDataTable) == 0x173, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____emptyDataRowArray) == 0x178, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____propertyDescriptorCollectionCache) == 0x180, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____nestedParentRelations) == 0x188, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____dependentColumns) == 0x190, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____mergingData) == 0x198, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onRowChangedDelegate) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onRowChangingDelegate) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onRowDeletingDelegate) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onRowDeletedDelegate) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onColumnChangedDelegate) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onColumnChangingDelegate) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onTableClearingDelegate) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onTableClearedDelegate) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onTableNewRowDelegate) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____onPropertyChangingDelegate) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____rowBuilder) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____delayedViews) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____dataViewListeners) == 0x200, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____rowDiffId) == 0x208, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____indexesLock) == 0x210, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____ukColumnPositionForInference) == 0x218, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____remotingFormat) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTable, ____objectID) == 0x220, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataTable, 0x228>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTable*, "System.Data", "DataTable");
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTable_DSRowDiffIdUsageSection, "System.Data", "DataTable/DSRowDiffIdUsageSection");
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTable_RowDiffIdUsageSection, "System.Data", "DataTable/RowDiffIdUsageSection");
