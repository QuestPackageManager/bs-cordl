#pragma once
// IWYU pragma private; include "System/ResolveEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ResolveEventHandler)
namespace System::Reflection {
class Assembly;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class ResolveEventArgs;
}
// Forward declare root types
namespace System {
class ResolveEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ResolveEventHandler);
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.ResolveEventHandler
class CORDL_TYPE ResolveEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3e01218, size 0x14, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* Invoke(::System::Object* sender, ::System::ResolveEventArgs* args);

  static inline ::System::ResolveEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3e01114, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolveEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolveEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolveEventHandler(ResolveEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolveEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolveEventHandler(ResolveEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ResolveEventHandler, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ResolveEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ResolveEventHandler*, "System", "ResolveEventHandler");
