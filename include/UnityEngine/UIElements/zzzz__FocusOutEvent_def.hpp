#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusOutEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusOutEvent);
// Type: UnityEngine.UIElements::FocusOutEvent
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::FocusOutEvent*
class CORDL_TYPE FocusOutEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusOutEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x35e8188, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x35e81dc, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::FocusOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35e81e8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusOutEvent(FocusOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusOutEvent(FocusOutEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusOutEvent, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusOutEvent*, "UnityEngine.UIElements", "FocusOutEvent");
