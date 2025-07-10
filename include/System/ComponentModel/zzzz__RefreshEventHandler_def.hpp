#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(RefreshEventHandler)
namespace System::ComponentModel {
class RefreshEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::RefreshEventHandler);
// Dependencies System.MulticastDelegate
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.RefreshEventHandler
class CORDL_TYPE RefreshEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x445a9fc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::ComponentModel::RefreshEventArgs* e);

  static inline ::System::ComponentModel::RefreshEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x445a8fc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RefreshEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RefreshEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RefreshEventHandler(RefreshEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RefreshEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RefreshEventHandler(RefreshEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::RefreshEventHandler, 0x80>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::RefreshEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshEventHandler*, "System.ComponentModel", "RefreshEventHandler");
