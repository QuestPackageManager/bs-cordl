#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerOutEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerOutEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerOutEvent);
// Type: UnityEngine.UIElements::PointerOutEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerOutEvent*
class CORDL_TYPE PointerOutEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOutEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::PointerOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35d0c48, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOutEvent(PointerOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOutEvent(PointerOutEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerOutEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOutEvent*, "UnityEngine.UIElements", "PointerOutEvent");
