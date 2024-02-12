#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseOverEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseOverEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseOverEvent);
// Type: UnityEngine.UIElements::MouseOverEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6474)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6474), inst: 4629 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6484))
// CS Name: ::UnityEngine.UIElements::MouseOverEvent*
class CORDL_TYPE MouseOverEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOverEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::MouseOverEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e6d070, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseOverEvent(MouseOverEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseOverEvent(MouseOverEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseOverEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseOverEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseOverEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOverEvent*, "UnityEngine.UIElements", "MouseOverEvent");
