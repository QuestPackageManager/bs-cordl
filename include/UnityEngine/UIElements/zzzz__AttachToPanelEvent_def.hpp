#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(AttachToPanelEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AttachToPanelEvent);
// Type: UnityEngine.UIElements::AttachToPanelEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7243), inst: 4819 }), TypeDefinitionIndex(TypeDefinitionIndex(7243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7244))
// CS Name: ::UnityEngine.UIElements::AttachToPanelEvent*
class CORDL_TYPE AttachToPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::AttachToPanelEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::AttachToPanelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e52cac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttachToPanelEvent(AttachToPanelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttachToPanelEvent(AttachToPanelEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttachToPanelEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AttachToPanelEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AttachToPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AttachToPanelEvent*, "UnityEngine.UIElements", "AttachToPanelEvent");
