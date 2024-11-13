#pragma once
// IWYU pragma private; include "System/Data/DataRelation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRelation)
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataKey;
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
class DataTable;
}
namespace System::Data {
class ForeignKeyConstraint;
}
namespace System::Data {
class PropertyCollection;
}
namespace System::Data {
class UniqueConstraint;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataRelation;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRelation);
// Type: System.Data::DataRelation
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataRelation*
class CORDL_TYPE DataRelation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CheckMultipleNested, put = set_CheckMultipleNested)) bool CheckMultipleNested;

  __declspec(property(get = get_ChildColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> ChildColumnNames;

  __declspec(property(get = get_ChildColumns)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ChildColumns;

  __declspec(property(get = get_ChildColumnsReference)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ChildColumnsReference;

  __declspec(property(get = get_ChildKey)) ::System::Data::DataKey ChildKey;

  __declspec(property(get = get_ChildKeyConstraint)) ::System::Data::ForeignKeyConstraint* ChildKeyConstraint;

  __declspec(property(get = get_ChildTable)) ::System::Data::DataTable* ChildTable;

  __declspec(property(get = get_DataSet)) ::System::Data::DataSet* DataSet;

  __declspec(property(get = get_ExtendedProperties)) ::System::Data::PropertyCollection* ExtendedProperties;

  __declspec(property(get = get_Nested, put = set_Nested)) bool Nested;

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  __declspec(property(get = get_ParentColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> ParentColumnNames;

  __declspec(property(get = get_ParentColumns)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ParentColumns;

  __declspec(property(get = get_ParentColumnsReference)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ParentColumnsReference;

  __declspec(property(get = get_ParentKey)) ::System::Data::DataKey ParentKey;

  __declspec(property(get = get_ParentKeyConstraint)) ::System::Data::UniqueConstraint* ParentKeyConstraint;

  __declspec(property(get = get_ParentTable)) ::System::Data::DataTable* ParentTable;

  /// @brief Field PropertyChanging, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanging, put = __cordl_internal_set_PropertyChanging)) ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanging;

  __declspec(property(get = get_RelationName)) ::StringW RelationName;

  /// @brief Field _checkMultipleNested, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get__checkMultipleNested, put = __cordl_internal_set__checkMultipleNested)) bool _checkMultipleNested;

  /// @brief Field _childColumnNames, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__childColumnNames, put = __cordl_internal_set__childColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _childColumnNames;

  /// @brief Field _childKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__childKey, put = __cordl_internal_set__childKey)) ::System::Data::DataKey _childKey;

  /// @brief Field _childKeyConstraint, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__childKeyConstraint, put = __cordl_internal_set__childKeyConstraint)) ::System::Data::ForeignKeyConstraint* _childKeyConstraint;

  /// @brief Field _childTableName, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__childTableName, put = __cordl_internal_set__childTableName)) ::StringW _childTableName;

  /// @brief Field _childTableNamespace, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__childTableNamespace, put = __cordl_internal_set__childTableNamespace)) ::StringW _childTableNamespace;

  /// @brief Field _createConstraints, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__createConstraints, put = __cordl_internal_set__createConstraints)) bool _createConstraints;

  /// @brief Field _dataSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet)) ::System::Data::DataSet* _dataSet;

  /// @brief Field _extendedProperties, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__extendedProperties, put = __cordl_internal_set__extendedProperties)) ::System::Data::PropertyCollection* _extendedProperties;

  /// @brief Field _nested, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__nested, put = __cordl_internal_set__nested)) bool _nested;

  /// @brief Field _objectID, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _parentColumnNames, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__parentColumnNames, put = __cordl_internal_set__parentColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _parentColumnNames;

  /// @brief Field _parentKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__parentKey, put = __cordl_internal_set__parentKey)) ::System::Data::DataKey _parentKey;

  /// @brief Field _parentKeyConstraint, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parentKeyConstraint, put = __cordl_internal_set__parentKeyConstraint)) ::System::Data::UniqueConstraint* _parentKeyConstraint;

  /// @brief Field _parentTableName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__parentTableName, put = __cordl_internal_set__parentTableName)) ::StringW _parentTableName;

  /// @brief Field _parentTableNamespace, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__parentTableNamespace, put = __cordl_internal_set__parentTableNamespace)) ::StringW _parentTableNamespace;

  /// @brief Field _relationName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__relationName, put = __cordl_internal_set__relationName)) ::StringW _relationName;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Method CheckNamespaceValidityForNestedRelations, addr 0x40fb780, size 0x3a4, virtual false, abstract: false, final false
  inline void CheckNamespaceValidityForNestedRelations(::StringW ns);

  /// @brief Method CheckNestedRelations, addr 0x40fbb24, size 0x410, virtual false, abstract: false, final false
  inline void CheckNestedRelations();

  /// @brief Method CheckState, addr 0x40fd6c8, size 0x23c, virtual false, abstract: false, final false
  inline void CheckState();

  /// @brief Method CheckStateForProperty, addr 0x40fb1e4, size 0xec, virtual false, abstract: false, final false
  inline void CheckStateForProperty();

  /// @brief Method Clone, addr 0x40fd904, size 0x650, virtual false, abstract: false, final false
  inline ::System::Data::DataRelation* Clone(::System::Data::DataSet* destination);

  /// @brief Method Create, addr 0x40fac3c, size 0x2fc, virtual false, abstract: false, final false
  inline void Create(::StringW relationName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                     ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns, bool createConstraints);

  /// @brief Method GetChildRows, addr 0x40fb3ec, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> GetChildRows(::System::Data::DataKey parentKey, ::System::Data::DataKey childKey,
                                                                                                    ::System::Data::DataRow* parentRow, ::System::Data::DataRowVersion version);

  /// @brief Method GetParentRow, addr 0x40fb540, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Data::DataRow* GetParentRow(::System::Data::DataKey parentKey, ::System::Data::DataKey childKey, ::System::Data::DataRow* childRow, ::System::Data::DataRowVersion version);

  /// @brief Method GetParentRows, addr 0x40fb4a8, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> GetParentRows(::System::Data::DataKey parentKey, ::System::Data::DataKey childKey,
                                                                                                     ::System::Data::DataRow* childRow, ::System::Data::DataRowVersion version);

  /// @brief Method IsAutoGenerated, addr 0x40fe138, size 0x1d4, virtual false, abstract: false, final false
  inline bool IsAutoGenerated(::System::Data::DataColumn* col);

  /// @brief Method IsKeyNull, addr 0x40fb328, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsKeyNull(::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  static inline ::System::Data::DataRelation* New_ctor(::StringW relationName, ::System::Data::DataColumn* parentColumn, ::System::Data::DataColumn* childColumn, bool createConstraints);

  static inline ::System::Data::DataRelation* New_ctor(::StringW relationName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                                                       ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns);

  static inline ::System::Data::DataRelation* New_ctor(::StringW relationName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                                                       ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns, bool createConstraints);

  static inline ::System::Data::DataRelation* New_ctor(::StringW relationName, ::StringW parentTableName, ::StringW childTableName, ::ArrayW<::StringW, ::Array<::StringW>*> parentColumnNames,
                                                       ::ArrayW<::StringW, ::Array<::StringW>*> childColumnNames, bool nested);

  static inline ::System::Data::DataRelation* New_ctor(::StringW relationName, ::StringW parentTableName, ::StringW parentTableNamespace, ::StringW childTableName, ::StringW childTableNamespace,
                                                       ::ArrayW<::StringW, ::Array<::StringW>*> parentColumnNames, ::ArrayW<::StringW, ::Array<::StringW>*> childColumnNames, bool nested);

  /// @brief Method OnPropertyChanging, addr 0x40fe05c, size 0xd0, virtual false, abstract: false, final false
  inline void OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent);

  /// @brief Method RaisePropertyChanging, addr 0x40fd4c8, size 0x6c, virtual false, abstract: false, final false
  inline void RaisePropertyChanging(::StringW name);

  /// @brief Method SetChildKeyConstraint, addr 0x40fd6c0, size 0x8, virtual false, abstract: false, final false
  inline void SetChildKeyConstraint(::System::Data::ForeignKeyConstraint* value);

  /// @brief Method SetDataSet, addr 0x40fb71c, size 0x14, virtual false, abstract: false, final false
  inline void SetDataSet(::System::Data::DataSet* dataSet);

  /// @brief Method SetParentKeyConstraint, addr 0x40fd628, size 0x8, virtual false, abstract: false, final false
  inline void SetParentKeyConstraint(::System::Data::UniqueConstraint* value);

  /// @brief Method ToString, addr 0x40fe12c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ValidateMultipleNestedRelations, addr 0x40fcff8, size 0x4d0, virtual false, abstract: false, final false
  inline void ValidateMultipleNestedRelations();

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanging();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanging() const;

  constexpr bool const& __cordl_internal_get__checkMultipleNested() const;

  constexpr bool& __cordl_internal_get__checkMultipleNested();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__childColumnNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__childColumnNames();

  constexpr ::System::Data::DataKey const& __cordl_internal_get__childKey() const;

  constexpr ::System::Data::DataKey& __cordl_internal_get__childKey();

  constexpr ::System::Data::ForeignKeyConstraint*& __cordl_internal_get__childKeyConstraint();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::ForeignKeyConstraint*> const& __cordl_internal_get__childKeyConstraint() const;

  constexpr ::StringW const& __cordl_internal_get__childTableName() const;

  constexpr ::StringW& __cordl_internal_get__childTableName();

  constexpr ::StringW const& __cordl_internal_get__childTableNamespace() const;

  constexpr ::StringW& __cordl_internal_get__childTableNamespace();

  constexpr bool const& __cordl_internal_get__createConstraints() const;

  constexpr bool& __cordl_internal_get__createConstraints();

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& __cordl_internal_get__dataSet() const;

  constexpr ::System::Data::PropertyCollection*& __cordl_internal_get__extendedProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::PropertyCollection*> const& __cordl_internal_get__extendedProperties() const;

  constexpr bool const& __cordl_internal_get__nested() const;

  constexpr bool& __cordl_internal_get__nested();

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__parentColumnNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__parentColumnNames();

  constexpr ::System::Data::DataKey const& __cordl_internal_get__parentKey() const;

  constexpr ::System::Data::DataKey& __cordl_internal_get__parentKey();

  constexpr ::System::Data::UniqueConstraint*& __cordl_internal_get__parentKeyConstraint();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::UniqueConstraint*> const& __cordl_internal_get__parentKeyConstraint() const;

  constexpr ::StringW const& __cordl_internal_get__parentTableName() const;

  constexpr ::StringW& __cordl_internal_get__parentTableName();

  constexpr ::StringW const& __cordl_internal_get__parentTableNamespace() const;

  constexpr ::StringW& __cordl_internal_get__parentTableNamespace();

  constexpr ::StringW const& __cordl_internal_get__relationName() const;

  constexpr ::StringW& __cordl_internal_get__relationName();

  constexpr void __cordl_internal_set_PropertyChanging(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__checkMultipleNested(bool value);

  constexpr void __cordl_internal_set__childColumnNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__childKey(::System::Data::DataKey value);

  constexpr void __cordl_internal_set__childKeyConstraint(::System::Data::ForeignKeyConstraint* value);

  constexpr void __cordl_internal_set__childTableName(::StringW value);

  constexpr void __cordl_internal_set__childTableNamespace(::StringW value);

  constexpr void __cordl_internal_set__createConstraints(bool value);

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value);

  constexpr void __cordl_internal_set__nested(bool value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__parentColumnNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__parentKey(::System::Data::DataKey value);

  constexpr void __cordl_internal_set__parentKeyConstraint(::System::Data::UniqueConstraint* value);

  constexpr void __cordl_internal_set__parentTableName(::StringW value);

  constexpr void __cordl_internal_set__parentTableNamespace(::StringW value);

  constexpr void __cordl_internal_set__relationName(::StringW value);

  /// @brief Method .ctor, addr 0x40faa44, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::StringW relationName, ::System::Data::DataColumn* parentColumn, ::System::Data::DataColumn* childColumn, bool createConstraints);

  /// @brief Method .ctor, addr 0x40faf38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW relationName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                    ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns);

  /// @brief Method .ctor, addr 0x40faf40, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::StringW relationName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                    ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns, bool createConstraints);

  /// @brief Method .ctor, addr 0x40fb008, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::StringW relationName, ::StringW parentTableName, ::StringW childTableName, ::ArrayW<::StringW, ::Array<::StringW>*> parentColumnNames,
                    ::ArrayW<::StringW, ::Array<::StringW>*> childColumnNames, bool nested);

  /// @brief Method .ctor, addr 0x40fb0e0, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::StringW relationName, ::StringW parentTableName, ::StringW parentTableNamespace, ::StringW childTableName, ::StringW childTableNamespace,
                    ::ArrayW<::StringW, ::Array<::StringW>*> parentColumnNames, ::ArrayW<::StringW, ::Array<::StringW>*> childColumnNames, bool nested);

  static inline int32_t getStaticF_s_objectTypeCount();

  /// @brief Method get_CheckMultipleNested, addr 0x40fd6ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_CheckMultipleNested();

  /// @brief Method get_ChildColumnNames, addr 0x40fb320, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ChildColumnNames();

  /// @brief Method get_ChildColumns, addr 0x40fb1cc, size 0x18, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_ChildColumns();

  /// @brief Method get_ChildColumnsReference, addr 0x40fb2d0, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_ChildColumnsReference();

  /// @brief Method get_ChildKey, addr 0x40f8ae0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Data::DataKey get_ChildKey();

  /// @brief Method get_ChildKeyConstraint, addr 0x40fd630, size 0x18, virtual true, abstract: false, final false
  inline ::System::Data::ForeignKeyConstraint* get_ChildKeyConstraint();

  /// @brief Method get_ChildTable, addr 0x40fb2e8, size 0x18, virtual true, abstract: false, final false
  inline ::System::Data::DataTable* get_ChildTable();

  /// @brief Method get_DataSet, addr 0x40fb300, size 0x18, virtual true, abstract: false, final false
  inline ::System::Data::DataSet* get_DataSet();

  /// @brief Method get_ExtendedProperties, addr 0x40fd648, size 0x64, virtual false, abstract: false, final false
  inline ::System::Data::PropertyCollection* get_ExtendedProperties();

  /// @brief Method get_Nested, addr 0x40fbf34, size 0x18, virtual true, abstract: false, final false
  inline bool get_Nested();

  /// @brief Method get_ObjectID, addr 0x40fe30c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method get_ParentColumnNames, addr 0x40fb318, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ParentColumnNames();

  /// @brief Method get_ParentColumns, addr 0x40fb730, size 0x18, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_ParentColumns();

  /// @brief Method get_ParentColumnsReference, addr 0x40fb748, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_ParentColumnsReference();

  /// @brief Method get_ParentKey, addr 0x40f8af8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Data::DataKey get_ParentKey();

  /// @brief Method get_ParentKeyConstraint, addr 0x40fd610, size 0x18, virtual true, abstract: false, final false
  inline ::System::Data::UniqueConstraint* get_ParentKeyConstraint();

  /// @brief Method get_ParentTable, addr 0x40fb750, size 0x18, virtual true, abstract: false, final false
  inline ::System::Data::DataTable* get_ParentTable();

  /// @brief Method get_RelationName, addr 0x40fb768, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_RelationName();

  static inline void setStaticF_s_objectTypeCount(int32_t value);

  /// @brief Method set_CheckMultipleNested, addr 0x40fd6b4, size 0xc, virtual false, abstract: false, final false
  inline void set_CheckMultipleNested(bool value);

  /// @brief Method set_Nested, addr 0x40fbf4c, size 0x10ac, virtual true, abstract: false, final false
  inline void set_Nested(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRelation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRelation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRelation(DataRelation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRelation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRelation(DataRelation const&) = delete;

  /// @brief Field _dataSet, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _extendedProperties, offset: 0x18, size: 0x8, def value: None
  ::System::Data::PropertyCollection* ____extendedProperties;

  /// @brief Field _relationName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____relationName;

  /// @brief Field _childKey, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataKey ____childKey;

  /// @brief Field _parentKey, offset: 0x30, size: 0x8, def value: None
  ::System::Data::DataKey ____parentKey;

  /// @brief Field _parentKeyConstraint, offset: 0x38, size: 0x8, def value: None
  ::System::Data::UniqueConstraint* ____parentKeyConstraint;

  /// @brief Field _childKeyConstraint, offset: 0x40, size: 0x8, def value: None
  ::System::Data::ForeignKeyConstraint* ____childKeyConstraint;

  /// @brief Field _parentColumnNames, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____parentColumnNames;

  /// @brief Field _childColumnNames, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____childColumnNames;

  /// @brief Field _parentTableName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____parentTableName;

  /// @brief Field _childTableName, offset: 0x60, size: 0x8, def value: None
  ::StringW ____childTableName;

  /// @brief Field _parentTableNamespace, offset: 0x68, size: 0x8, def value: None
  ::StringW ____parentTableNamespace;

  /// @brief Field _childTableNamespace, offset: 0x70, size: 0x8, def value: None
  ::StringW ____childTableNamespace;

  /// @brief Field _nested, offset: 0x78, size: 0x1, def value: None
  bool ____nested;

  /// @brief Field _createConstraints, offset: 0x79, size: 0x1, def value: None
  bool ____createConstraints;

  /// @brief Field _checkMultipleNested, offset: 0x7a, size: 0x1, def value: None
  bool ____checkMultipleNested;

  /// @brief Field _objectID, offset: 0x7c, size: 0x4, def value: None
  int32_t ____objectID;

  /// @brief Field PropertyChanging, offset: 0x80, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanging;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRelation, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____dataSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____extendedProperties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____relationName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____childKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____parentKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____parentKeyConstraint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____childKeyConstraint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____parentColumnNames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____childColumnNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____parentTableName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____childTableName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____parentTableNamespace) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____childTableNamespace) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____nested) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____createConstraints) == 0x79, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____checkMultipleNested) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ____objectID) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelation, ___PropertyChanging) == 0x80, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRelation);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRelation*, "System.Data", "DataRelation");
