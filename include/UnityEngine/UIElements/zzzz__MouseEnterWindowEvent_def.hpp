#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseEnterWindowEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseEnterWindowEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEnterWindowEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEnterWindowEvent);
// Type: UnityEngine.UIElements::MouseEnterWindowEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseEnterWindowEvent*
class CORDL_TYPE MouseEnterWindowEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseEnterWindowEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x35a65c0, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x35a6614, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseEnterWindowEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x35a6674, size 0x15c, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x35a6620, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEnterWindowEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEnterWindowEvent(MouseEnterWindowEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEnterWindowEvent(MouseEnterWindowEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEnterWindowEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEnterWindowEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEnterWindowEvent*, "UnityEngine.UIElements", "MouseEnterWindowEvent");
