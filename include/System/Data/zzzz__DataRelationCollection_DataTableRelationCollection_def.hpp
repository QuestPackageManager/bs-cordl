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
namespace GlobalNamespace {
class DataRelationCollection_DataTableRelationCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DataRelationCollection_DataTableRelationCollection);
// Dependencies System.Data.DataRelationCollection
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Data.DataRelationCollection/DataTableRelationCollection
class CORDL_TYPE DataRelationCollection_DataTableRelationCollection : public ::System::Data::DataRelationCollection {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Data::DataRelation* Item[];

  __declspec(property(get = get_Item)) ::System::Data::DataRelation* Item[];

  __declspec(property(get = get_List)) ::System::Collections::ArrayList* List;

  /// @brief Field RelationPropertyChanged, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_RelationPropertyChanged,
                      put = __cordl_internal_set_RelationPropertyChanged)) ::System::ComponentModel::CollectionChangeEventHandler* RelationPropertyChanged;

  /// @brief Field _fParentCollection, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__fParentCollection, put = __cordl_internal_set__fParentCollection)) bool _fParentCollection;

  /// @brief Field _relations, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__relations, put = __cordl_internal_set__relations)) ::System::Collections::ArrayList* _relations;

  /// @brief Field _table, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Method AddCache, addr 0x4166e14, size 0x48, virtual false, abstract: false, final false
  inline void AddCache(::System::Data::DataRelation* relation);

  /// @brief Method AddCore, addr 0x4166e5c, size 0xc0, virtual true, abstract: false, final false
  inline void AddCore(::System::Data::DataRelation* relation);

  /// @brief Method EnsureDataSet, addr 0x4166a88, size 0x44, virtual false, abstract: false, final false
  inline void EnsureDataSet();

  /// @brief Method GetDataSet, addr 0x4166acc, size 0x24, virtual true, abstract: false, final false
  inline ::System::Data::DataSet* GetDataSet();

  static inline ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection* New_ctor(::System::Data::DataTable* table, bool fParentCollection);

  /// @brief Method RemoveCache, addr 0x4166f1c, size 0xd4, virtual false, abstract: false, final false
  inline void RemoveCache(::System::Data::DataRelation* relation);

  /// @brief Method RemoveCore, addr 0x4166ff0, size 0xc0, virtual true, abstract: false, final false
  inline void RemoveCore(::System::Data::DataRelation* relation);

  constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& __cordl_internal_get_RelationPropertyChanged() const;

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get_RelationPropertyChanged();

  constexpr bool const& __cordl_internal_get__fParentCollection() const;

  constexpr bool& __cordl_internal_get__fParentCollection();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__relations() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__relations();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr void __cordl_internal_set_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  constexpr void __cordl_internal_set__fParentCollection(bool value);

  constexpr void __cordl_internal_set__relations(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x41669dc, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, bool fParentCollection);

  /// @brief Method add_RelationPropertyChanged, addr 0x4166cdc, size 0x9c, virtual false, abstract: false, final false
  inline void add_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  /// @brief Method get_Item, addr 0x4166af0, size 0x100, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x4166bf0, size 0xec, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(::StringW name);

  /// @brief Method get_List, addr 0x4166a80, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* get_List();

  /// @brief Method remove_RelationPropertyChanged, addr 0x4166d78, size 0x9c, virtual false, abstract: false, final false
  inline void remove_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRelationCollection_DataTableRelationCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRelationCollection_DataTableRelationCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRelationCollection_DataTableRelationCollection(DataRelationCollection_DataTableRelationCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRelationCollection_DataTableRelationCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRelationCollection_DataTableRelationCollection(DataRelationCollection_DataTableRelationCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11383 };

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
static_assert(offsetof(::GlobalNamespace::DataRelationCollection_DataTableRelationCollection, ____table) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataRelationCollection_DataTableRelationCollection, ____relations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataRelationCollection_DataTableRelationCollection, ____fParentCollection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataRelationCollection_DataTableRelationCollection, ___RelationPropertyChanged) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DataRelationCollection_DataTableRelationCollection, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DataRelationCollection_DataTableRelationCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DataRelationCollection_DataTableRelationCollection*, "System.Data", "DataRelationCollection/DataTableRelationCollection");
