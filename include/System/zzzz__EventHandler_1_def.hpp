#pragma once
// IWYU pragma private; include "System/EventHandler_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(EventHandler_1)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::EventHandler_1);
// Dependencies System.MulticastDelegate
namespace System {
// cpp template
template <typename TEventArgs>
// Is value type: false
// CS Name: System.EventHandler`1<TEventArgs>
class CORDL_TYPE EventHandler_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, TEventArgs e);

  static inline ::System::EventHandler_1<TEventArgs>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventHandler_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventHandler_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventHandler_1(EventHandler_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventHandler_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventHandler_1(EventHandler_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::EventHandler_1, "System", "EventHandler`1");
