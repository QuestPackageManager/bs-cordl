#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ClickEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClickEvent)
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickEvent);
// Type: UnityEngine.UIElements::ClickEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ClickEvent*
class CORDL_TYPE ClickEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::ClickEvent*> {
public:
  // Declarations
  /// @brief Method GetPooled, addr 0x35e68ac, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ClickEvent* GetPooled(::UnityEngine::UIElements::PointerUpEvent* pointerEvent, int32_t clickCount);

  /// @brief Method Init, addr 0x35e67f8, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x35e684c, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::ClickEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35e6858, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickEvent(ClickEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickEvent(ClickEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ClickEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickEvent*, "UnityEngine.UIElements", "ClickEvent");
