#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseDownEvent)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseDownEvent);
// Type: UnityEngine.UIElements::MouseDownEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseDownEvent*
class CORDL_TYPE MouseDownEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseDownEvent*> {
public:
  // Declarations
  /// @brief Method GetPooled, addr 0x339e3d0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseDownEvent* GetPooled(::UnityEngine::UIElements::PointerDownEvent* pointerEvent);

  /// @brief Method GetPooled, addr 0x339eb9c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseDownEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);

  /// @brief Method Init, addr 0x339ff94, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x339ffe8, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method MakeFromPointerEvent, addr 0x33a0048, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseDownEvent* MakeFromPointerEvent(::UnityEngine::UIElements::IPointerEvent* pointerEvent);

  static inline ::UnityEngine::UIElements::MouseDownEvent* New_ctor();

  /// @brief Method .ctor, addr 0x339fff4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseDownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseDownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseDownEvent(MouseDownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseDownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseDownEvent(MouseDownEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseDownEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseDownEvent*, "UnityEngine.UIElements", "MouseDownEvent");
