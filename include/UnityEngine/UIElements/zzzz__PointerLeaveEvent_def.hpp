#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerLeaveEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerLeaveEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerLeaveEvent);
// Type: UnityEngine.UIElements::PointerLeaveEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerLeaveEvent*
class CORDL_TYPE PointerLeaveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerLeaveEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x2f5e2c4, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2f5e318, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerLeaveEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2f5e324, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerLeaveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerLeaveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerLeaveEvent(PointerLeaveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerLeaveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerLeaveEvent(PointerLeaveEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerLeaveEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerLeaveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerLeaveEvent*, "UnityEngine.UIElements", "PointerLeaveEvent");
