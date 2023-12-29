#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseUpEvent)
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7301)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7301), inst: 4555 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7303))
// CS Name: ::UnityEngine.UIElements::MouseUpEvent*
class CORDL_TYPE MouseUpEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseUpEvent*> {
public:
  // Declarations
  /// @brief Method Init addr 0x2ce8cc4 size 0x54 virtual true final false
  inline void Init();

  /// @brief Method LocalInit addr 0x2ce8d18 size 0xc virtual false final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseUpEvent* New_ctor();

  /// @brief Method .ctor addr 0x2ce8d24 size 0x54 virtual false final false
  inline void _ctor();

  /// @brief Method MakeFromPointerEvent addr 0x2ce8d78 size 0x18c virtual false final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* MakeFromPointerEvent(::UnityEngine::UIElements::IPointerEvent* pointerEvent);

  /// @brief Method GetPooled addr 0x2ce7d50 size 0x4 virtual false final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerUpEvent* pointerEvent);

  /// @brief Method GetPooled addr 0x2ce7690 size 0x4 virtual false final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);

  /// @brief Method GetPooled addr 0x2ce8228 size 0x4 virtual false final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerCancelEvent* pointerEvent);

  // Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseUpEvent(MouseUpEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseUpEvent(MouseUpEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseUpEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseUpEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseUpEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseUpEvent*, "UnityEngine.UIElements", "MouseUpEvent");
