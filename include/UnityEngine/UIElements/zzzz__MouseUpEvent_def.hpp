#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseUpEvent)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseUpEvent);
// Type: UnityEngine.UIElements::MouseUpEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseUpEvent*
class CORDL_TYPE MouseUpEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseUpEvent*> {
public:
  // Declarations
  /// @brief Method GetPooled, addr 0x2fb7920, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerCancelEvent* pointerEvent);

  /// @brief Method GetPooled, addr 0x2fb6d88, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);

  /// @brief Method GetPooled, addr 0x2fb7448, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerUpEvent* pointerEvent);

  /// @brief Method Init, addr 0x2fb83bc, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2fb8410, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method MakeFromPointerEvent, addr 0x2fb8470, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* MakeFromPointerEvent(::UnityEngine::UIElements::IPointerEvent* pointerEvent);

  static inline ::UnityEngine::UIElements::MouseUpEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2fb841c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseUpEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseUpEvent(MouseUpEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseUpEvent(MouseUpEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseUpEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseUpEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseUpEvent*, "UnityEngine.UIElements", "MouseUpEvent");
