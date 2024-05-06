#pragma once
// IWYU pragma private; include "System/Data/DataRelationCollection_DataSetRelationCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataRelationCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System::Data {
class __DataRelationCollection__DataSetRelationCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::__DataRelationCollection__DataSetRelationCollection);
// Type: ::DataSetRelationCollection
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::DataRelationCollection::DataSetRelationCollection*
class CORDL_TYPE __DataRelationCollection__DataSetRelationCollection : public ::System::Data::DataRelationCollection {
public:
  // Declarations
  __declspec(property(get = get_Item))::System::Data::DataRelation* Item[];

  __declspec(property(get = get_Item))::System::Data::DataRelation* Item[];

  __declspec(property(get = get_List))::System::Collections::ArrayList* List;

  /// @brief Field _dataSet, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet))::System::Data::DataSet* _dataSet;

  /// @brief Field _delayLoadingRelations, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__delayLoadingRelations,
                      put = __cordl_internal_set__delayLoadingRelations))::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> _delayLoadingRelations;

  /// @brief Field _relations, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__relations, put = __cordl_internal_set__relations))::System::Collections::ArrayList* _relations;

  /// @brief Method AddCore, addr 0x2ca55f0, size 0x574, virtual true, abstract: false, final false
  inline void AddCore(::System::Data::DataRelation* relation);

  /// @brief Method Clear, addr 0x2ca53c8, size 0x34, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetDataSet, addr 0x2ca53fc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Data::DataSet* GetDataSet();

  static inline ::System::Data::__DataRelationCollection__DataSetRelationCollection* New_ctor(::System::Data::DataSet* dataSet);

  /// @brief Method RemoveCore, addr 0x2ca5b64, size 0x240, virtual true, abstract: false, final false
  inline void RemoveCore(::System::Data::DataRelation* relation);

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& __cordl_internal_get__dataSet() const;

  constexpr ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> const& __cordl_internal_get__delayLoadingRelations() const;

  constexpr ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*>& __cordl_internal_get__delayLoadingRelations();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__relations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__relations() const;

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__delayLoadingRelations(::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> value);

  constexpr void __cordl_internal_set__relations(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x2ca5328, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet);

  /// @brief Method get_Item, addr 0x2ca5404, size 0x100, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x2ca5504, size 0xec, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(::StringW name);

  /// @brief Method get_List, addr 0x2ca53c0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* get_List();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DataRelationCollection__DataSetRelationCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DataRelationCollection__DataSetRelationCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DataRelationCollection__DataSetRelationCollection(__DataRelationCollection__DataSetRelationCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DataRelationCollection__DataSetRelationCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DataRelationCollection__DataSetRelationCollection(__DataRelationCollection__DataSetRelationCollection const&) = delete;

  /// @brief Field _dataSet, offset: 0x38, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _relations, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____relations;

  /// @brief Field _delayLoadingRelations, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataRelation*, ::Array<::System::Data::DataRelation*>*> ____delayLoadingRelations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__DataRelationCollection__DataSetRelationCollection, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Data::__DataRelationCollection__DataSetRelationCollection, ____dataSet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::__DataRelationCollection__DataSetRelationCollection, ____relations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::__DataRelationCollection__DataSetRelationCollection, ____delayLoadingRelations) == 0x48, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::__DataRelationCollection__DataSetRelationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__DataRelationCollection__DataSetRelationCollection*, "System.Data", "DataRelationCollection/DataSetRelationCollection");
