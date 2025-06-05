#pragma once
// IWYU pragma private; include "System/Data/DataRelationCollection_DataSetRelationCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataRelationCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRelationCollection_DataSetRelationCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
class DataSet;
}
// Forward declare root types
namespace GlobalNamespace {
class DataRelationCollection_DataSetRelationCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DataRelationCollection_DataSetRelationCollection);
// Dependencies System.Data.DataRelationCollection
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Data.DataRelationCollection/DataSetRelationCollection
class CORDL_TYPE DataRelationCollection_DataSetRelationCollection : public ::System::Data::DataRelationCollection {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Data::DataRelation* Item[];

  __declspec(property(get = get_Item)) ::System::Data::DataRelation* Item[];

  __declspec(property(get = get_List)) ::System::Collections::ArrayList* List;

  /// @brief Field _dataSet, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet)) ::System::Data::DataSet* _dataSet;

  /// @brief Field _delayLoadingRelations, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__delayLoadingRelations,
                      put = __cordl_internal_set__delayLoadingRelations)) ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*>
      _delayLoadingRelations;

  /// @brief Field _relations, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__relations, put = __cordl_internal_set__relations)) ::System::Collections::ArrayList* _relations;

  /// @brief Method AddCore, addr 0x4162e5c, size 0x534, virtual true, abstract: false, final false
  inline void AddCore(::System::Data::DataRelation* relation);

  /// @brief Method Clear, addr 0x4162c34, size 0x34, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetDataSet, addr 0x4162c68, size 0x8, virtual true, abstract: false, final false
  inline ::System::Data::DataSet* GetDataSet();

  static inline ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection* New_ctor(::System::Data::DataSet* dataSet);

  /// @brief Method RemoveCore, addr 0x4163390, size 0x230, virtual true, abstract: false, final false
  inline void RemoveCore(::System::Data::DataRelation* relation);

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__dataSet() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> const& __cordl_internal_get__delayLoadingRelations() const;

  constexpr ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*>& __cordl_internal_get__delayLoadingRelations();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__relations() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__relations();

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__delayLoadingRelations(::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> value);

  constexpr void __cordl_internal_set__relations(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x4162b9c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet);

  /// @brief Method get_Item, addr 0x4162c70, size 0x100, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x4162d70, size 0xec, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(::StringW name);

  /// @brief Method get_List, addr 0x4162c2c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* get_List();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRelationCollection_DataSetRelationCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRelationCollection_DataSetRelationCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRelationCollection_DataSetRelationCollection(DataRelationCollection_DataSetRelationCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRelationCollection_DataSetRelationCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRelationCollection_DataSetRelationCollection(DataRelationCollection_DataSetRelationCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11385 };

  /// @brief Field _dataSet, offset: 0x38, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _relations, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____relations;

  /// @brief Field _delayLoadingRelations, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> ____delayLoadingRelations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DataRelationCollection_DataSetRelationCollection, ____dataSet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataRelationCollection_DataSetRelationCollection, ____relations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataRelationCollection_DataSetRelationCollection, ____delayLoadingRelations) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DataRelationCollection_DataSetRelationCollection, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DataRelationCollection_DataSetRelationCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DataRelationCollection_DataSetRelationCollection*, "System.Data", "DataRelationCollection/DataSetRelationCollection");
