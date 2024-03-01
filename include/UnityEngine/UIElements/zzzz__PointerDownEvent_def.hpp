#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerDownEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerDownEvent);
// Type: UnityEngine.UIElements::PointerDownEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerDownEvent*
class CORDL_TYPE PointerDownEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerDownEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x2f5c978, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2f5c9c8, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerDownEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x2f5cb1c, size 0x264, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x2f5cacc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDownEvent(PointerDownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDownEvent(PointerDownEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDownEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDownEvent*, "UnityEngine.UIElements", "PointerDownEvent");
