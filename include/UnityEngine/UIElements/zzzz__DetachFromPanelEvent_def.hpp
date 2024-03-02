#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(DetachFromPanelEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DetachFromPanelEvent);
// Type: UnityEngine.UIElements::DetachFromPanelEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DetachFromPanelEvent*
class CORDL_TYPE DetachFromPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::DetachFromPanelEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::DetachFromPanelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2f60804, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DetachFromPanelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DetachFromPanelEvent(DetachFromPanelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DetachFromPanelEvent(DetachFromPanelEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DetachFromPanelEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DetachFromPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DetachFromPanelEvent*, "UnityEngine.UIElements", "DetachFromPanelEvent");
