#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(KeyDownEvent)
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyDownEvent);
// Type: UnityEngine.UIElements::KeyDownEvent
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::KeyDownEvent*
class CORDL_TYPE KeyDownEvent : public ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyDownEvent*> {
public:
  // Declarations
  /// @brief Method GetEquivalentImguiEvent, addr 0x33a1cbc, size 0xc0, virtual false, abstract: false, final false
  inline void GetEquivalentImguiEvent(::UnityEngine::Event* outImguiEvent);

  static inline ::UnityEngine::UIElements::KeyDownEvent* New_ctor();

  /// @brief Method .ctor, addr 0x33a1d7c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyDownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyDownEvent(KeyDownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyDownEvent(KeyDownEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyDownEvent, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyDownEvent*, "UnityEngine.UIElements", "KeyDownEvent");
