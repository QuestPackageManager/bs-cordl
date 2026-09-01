#pragma once
// IWYU pragma private; include "System\UnhandledExceptionEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::System::UnhandledExceptionEventHandler*);
DEFINE_IL2CPP_CLASS(::System::UnhandledExceptionEventHandler*, "System", "UnhandledExceptionEventHandler");
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.UnhandledExceptionEventHandler
class CORDL_TYPE UnhandledExceptionEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5c66a30, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::UnhandledExceptionEventArgs* e);

  static inline ::System::UnhandledExceptionEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5c668e8, size 0x148, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2508 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::UnhandledExceptionEventHandler) == 0x80, "Size mismatch!");

} // namespace System
