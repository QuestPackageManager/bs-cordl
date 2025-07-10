#pragma once
// IWYU pragma private; include "System/EventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(EventHandler)
namespace System {
class EventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class EventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::EventHandler);
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.EventHandler
class CORDL_TYPE EventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3dd4ca4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::EventArgs* e);

  static inline ::System::EventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3dd4ba0, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventHandler(EventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventHandler(EventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EventHandler, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::EventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::EventHandler*, "System", "EventHandler");
