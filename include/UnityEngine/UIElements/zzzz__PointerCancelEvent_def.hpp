#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCancelEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCancelEvent);
// Type: UnityEngine.UIElements::PointerCancelEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerCancelEvent*
class CORDL_TYPE PointerCancelEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x35a4fa0, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x35a4ff0, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerCancelEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x35a5144, size 0x330, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x35a50f4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCancelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCancelEvent(PointerCancelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCancelEvent(PointerCancelEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCancelEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCancelEvent*, "UnityEngine.UIElements", "PointerCancelEvent");
