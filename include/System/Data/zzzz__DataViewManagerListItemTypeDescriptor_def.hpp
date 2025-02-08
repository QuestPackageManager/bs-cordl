#pragma once
// IWYU pragma private; include "System/Data/DataViewManagerListItemTypeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataViewManagerListItemTypeDescriptor)
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManager;
}
namespace System::Data {
class DataView;
}
// Forward declare root types
namespace System::Data {
class DataViewManagerListItemTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataViewManagerListItemTypeDescriptor);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataViewManagerListItemTypeDescriptor
class CORDL_TYPE DataViewManagerListItemTypeDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dataViewManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataViewManager, put = __cordl_internal_set__dataViewManager)) ::System::Data::DataViewManager* _dataViewManager;

  /// @brief Method GetDataView, addr 0x416e8d0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Data::DataView* GetDataView(::System::Data::DataTable* table);

  constexpr ::System::Data::DataViewManager* const& __cordl_internal_get__dataViewManager() const;

  constexpr ::System::Data::DataViewManager*& __cordl_internal_get__dataViewManager();

  constexpr void __cordl_internal_set__dataViewManager(::System::Data::DataViewManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataViewManagerListItemTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataViewManagerListItemTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataViewManagerListItemTypeDescriptor(DataViewManagerListItemTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataViewManagerListItemTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataViewManagerListItemTypeDescriptor(DataViewManagerListItemTypeDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11412 };

  /// @brief Field _dataViewManager, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataViewManager* ____dataViewManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataViewManagerListItemTypeDescriptor, ____dataViewManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataViewManagerListItemTypeDescriptor, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataViewManagerListItemTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewManagerListItemTypeDescriptor*, "System.Data", "DataViewManagerListItemTypeDescriptor");
