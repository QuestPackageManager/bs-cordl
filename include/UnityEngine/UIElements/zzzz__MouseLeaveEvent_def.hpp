#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseLeaveEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseLeaveEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseLeaveEvent);
// Type: UnityEngine.UIElements::MouseLeaveEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseLeaveEvent*
class CORDL_TYPE MouseLeaveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseLeaveEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x35a650c, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x35a6560, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseLeaveEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35a656c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLeaveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLeaveEvent(MouseLeaveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLeaveEvent(MouseLeaveEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseLeaveEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveEvent*, "UnityEngine.UIElements", "MouseLeaveEvent");
