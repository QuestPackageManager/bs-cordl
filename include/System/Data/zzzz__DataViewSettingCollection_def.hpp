#pragma once
// IWYU pragma private; include "System/Data/DataViewSettingCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataViewSettingCollection)
namespace System::Collections {
class Hashtable;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManager;
}
namespace System::Data {
class DataViewSetting;
}
// Forward declare root types
namespace System::Data {
class DataViewSettingCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataViewSettingCollection);
// Type: System.Data::DataViewSettingCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataViewSettingCollection*
class CORDL_TYPE DataViewSettingCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Data::DataViewSetting* Item[];

  /// @brief Field _dataViewManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataViewManager, put = __cordl_internal_set__dataViewManager))::System::Data::DataViewManager* _dataViewManager;

  /// @brief Field _list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list))::System::Collections::Hashtable* _list;

  /// @brief Method Remove, addr 0x2cde5fc, size 0x24, virtual false, abstract: false, final false
  inline void Remove(::System::Data::DataTable* table);

  constexpr ::System::Data::DataViewManager*& __cordl_internal_get__dataViewManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataViewManager*> const& __cordl_internal_get__dataViewManager() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__list() const;

  constexpr void __cordl_internal_set__dataViewManager(::System::Data::DataViewManager* value);

  constexpr void __cordl_internal_set__list(::System::Collections::Hashtable* value);

  /// @brief Method get_Item, addr 0x2cde478, size 0x104, virtual true, abstract: false, final false
  inline ::System::Data::DataViewSetting* get_Item(::System::Data::DataTable* table);

  /// @brief Method set_Item, addr 0x2cde57c, size 0x80, virtual true, abstract: false, final false
  inline void set_Item(::System::Data::DataTable* table, ::System::Data::DataViewSetting* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataViewSettingCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataViewSettingCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataViewSettingCollection(DataViewSettingCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataViewSettingCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataViewSettingCollection(DataViewSettingCollection const&) = delete;

  /// @brief Field _dataViewManager, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataViewManager* ____dataViewManager;

  /// @brief Field _list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataViewSettingCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataViewSettingCollection, ____dataViewManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewSettingCollection, ____list) == 0x18, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataViewSettingCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewSettingCollection*, "System.Data", "DataViewSettingCollection");
