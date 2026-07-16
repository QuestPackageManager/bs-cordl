#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventConsumer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(EventConsumer)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::InputForUI {
struct Event;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class EventConsumer;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputForUI::EventConsumer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::EventConsumer*, "UnityEngine.InputForUI", "EventConsumer");
// Dependencies System.MulticastDelegate
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.EventConsumer
class CORDL_TYPE EventConsumer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6b58e74, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::by_ref<::UnityEngine::InputForUI::Event> ev);

  static inline ::UnityEngine::InputForUI::EventConsumer* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6b58df8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventConsumer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventConsumer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventConsumer(EventConsumer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventConsumer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventConsumer(EventConsumer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputForUI::EventConsumer) == 0x80, "Size mismatch!");

} // namespace UnityEngine::InputForUI
