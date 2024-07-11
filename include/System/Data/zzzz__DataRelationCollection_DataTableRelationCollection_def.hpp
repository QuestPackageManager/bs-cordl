#pragma once
// IWYU pragma private; include "System/Data/DataRelationCollection_DataTableRelationCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataRelationCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRelationCollection_DataTableRelationCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::ComponentModel {
class CollectionChangeEventHandler;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace System::Data {
class __DataRelationCollection__DataTableRelationCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::__DataRelationCollection__DataTableRelationCollection);
// Type: ::DataTableRelationCollection
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::DataRelationCollection::DataTableRelationCollection*
class CORDL_TYPE __DataRelationCollection__DataTableRelationCollection : public ::System::Data::DataRelationCollection {
public:
  // Declarations
  __declspec(property(get = get_Item))::System::Data::DataRelation* Item[];

  __declspec(property(get = get_Item))::System::Data::DataRelation* Item[];

  __declspec(property(get = get_List))::System::Collections::ArrayList* List;

  /// @brief Field RelationPropertyChanged, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_RelationPropertyChanged,
                      put = __cordl_internal_set_RelationPropertyChanged))::System::ComponentModel::CollectionChangeEventHandler* RelationPropertyChanged;

  /// @brief Field _fParentCollection, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__fParentCollection, put = __cordl_internal_set__fParentCollection)) bool _fParentCollection;

  /// @brief Field _relations, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__relations, put = __cordl_internal_set__relations))::System::Collections::ArrayList* _relations;

  /// @brief Field _table, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::System::Data::DataTable* _table;

  /// @brief Method AddCache, addr 0x2cdb190, size 0x48, virtual false, abstract: false, final false
  inline void AddCache(::System::Data::DataRelation* relation);

  /// @brief Method AddCore, addr 0x2cdb1d8, size 0xc0, virtual true, abstract: false, final false
  inline void AddCore(::System::Data::DataRelation* relation);

  /// @brief Method EnsureDataSet, addr 0x2cdae04, size 0x44, virtual false, abstract: false, final false
  inline void EnsureDataSet();

  /// @brief Method GetDataSet, addr 0x2cdae48, size 0x24, virtual true, abstract: false, final false
  inline ::System::Data::DataSet* GetDataSet();

  static inline ::System::Data::__DataRelationCollection__DataTableRelationCollection* New_ctor(::System::Data::DataTable* table, bool fParentCollection);

  /// @brief Method RemoveCache, addr 0x2cdb298, size 0xd4, virtual false, abstract: false, final false
  inline void RemoveCache(::System::Data::DataRelation* relation);

  /// @brief Method RemoveCore, addr 0x2cdb36c, size 0xc0, virtual true, abstract: false, final false
  inline void RemoveCore(::System::Data::DataRelation* relation);

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get_RelationPropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CollectionChangeEventHandler*> const& __cordl_internal_get_RelationPropertyChanged() const;

  constexpr bool const& __cordl_internal_get__fParentCollection() const;

  constexpr bool& __cordl_internal_get__fParentCollection();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__relations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__relations() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  constexpr void __cordl_internal_set__fParentCollection(bool value);

  constexpr void __cordl_internal_set__relations(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x2cdad50, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, bool fParentCollection);

  /// @brief Method add_RelationPropertyChanged, addr 0x2cdb058, size 0x9c, virtual false, abstract: false, final false
  inline void add_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  /// @brief Method get_Item, addr 0x2cdae6c, size 0x100, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x2cdaf6c, size 0xec, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(::StringW name);

  /// @brief Method get_List, addr 0x2cdadfc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* get_List();

  /// @brief Method remove_RelationPropertyChanged, addr 0x2cdb0f4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DataRelationCollection__DataTableRelationCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DataRelationCollection__DataTableRelationCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DataRelationCollection__DataTableRelationCollection(__DataRelationCollection__DataTableRelationCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DataRelationCollection__DataTableRelationCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DataRelationCollection__DataTableRelationCollection(__DataRelationCollection__DataTableRelationCollection const&) = delete;

  /// @brief Field _table, offset: 0x38, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _relations, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____relations;

  /// @brief Field _fParentCollection, offset: 0x48, size: 0x1, def value: None
  bool ____fParentCollection;

  /// @brief Field RelationPropertyChanged, offset: 0x50, size: 0x8, def value: None
  ::System::ComponentModel::CollectionChangeEventHandler* ___RelationPropertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__DataRelationCollection__DataTableRelationCollection, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::__DataRelationCollection__DataTableRelationCollection, ____table) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::__DataRelationCollection__DataTableRelationCollection, ____relations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::__DataRelationCollection__DataTableRelationCollection, ____fParentCollection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::__DataRelationCollection__DataTableRelationCollection, ___RelationPropertyChanged) == 0x50, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::__DataRelationCollection__DataTableRelationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__DataRelationCollection__DataTableRelationCollection*, "System.Data", "DataRelationCollection/DataTableRelationCollection");
