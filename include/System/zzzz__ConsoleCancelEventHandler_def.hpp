#pragma once
// IWYU pragma private; include "System\ConsoleCancelEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ConsoleCancelEventHandler)
namespace System {
class ConsoleCancelEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class ConsoleCancelEventHandler;
}
// Write type traits
MARK_REF_T(::System::ConsoleCancelEventHandler*);
DEFINE_IL2CPP_CLASS(::System::ConsoleCancelEventHandler*, "System", "ConsoleCancelEventHandler");
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.ConsoleCancelEventHandler
class CORDL_TYPE ConsoleCancelEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5c68534, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ConsoleCancelEventArgs* e);

  static inline ::System::ConsoleCancelEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5c683ec, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCancelEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCancelEventHandler(ConsoleCancelEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCancelEventHandler(ConsoleCancelEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2523 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ConsoleCancelEventHandler) == 0x80, "Size mismatch!");

} // namespace System
