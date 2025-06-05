#pragma once
// IWYU pragma private; include "System/UnhandledExceptionEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(UnhandledExceptionEventHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class UnhandledExceptionEventArgs;
}
// Forward declare root types
namespace System {
class UnhandledExceptionEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::UnhandledExceptionEventHandler);
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.UnhandledExceptionEventHandler
class CORDL_TYPE UnhandledExceptionEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3e0a230, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::UnhandledExceptionEventArgs* e);

  static inline ::System::UnhandledExceptionEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3e0a12c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnhandledExceptionEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnhandledExceptionEventHandler(UnhandledExceptionEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnhandledExceptionEventHandler(UnhandledExceptionEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2502 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UnhandledExceptionEventHandler, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UnhandledExceptionEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::UnhandledExceptionEventHandler*, "System", "UnhandledExceptionEventHandler");
