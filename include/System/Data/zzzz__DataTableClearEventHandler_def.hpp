#pragma once
// IWYU pragma private; include "System/Data/DataTableClearEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataTableClearEventHandler)
namespace System::Data {
class DataTableClearEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataTableClearEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTableClearEventHandler);
// Type: System.Data::DataTableClearEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataTableClearEventHandler*
class CORDL_TYPE DataTableClearEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2cd8564, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Data::DataTableClearEventArgs* e);

  static inline ::System::Data::DataTableClearEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2cd8434, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTableClearEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTableClearEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTableClearEventHandler(DataTableClearEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTableClearEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTableClearEventHandler(DataTableClearEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataTableClearEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTableClearEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableClearEventHandler*, "System.Data", "DataTableClearEventHandler");
