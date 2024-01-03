#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseOutEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseOutEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseOutEvent);
// Type: UnityEngine.UIElements::MouseOutEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7215), inst: 4647 }), TypeDefinitionIndex(TypeDefinitionIndex(7215))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7226))
// CS Name: ::UnityEngine.UIElements::MouseOutEvent*
class CORDL_TYPE MouseOutEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOutEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::MouseOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e51cd0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseOutEvent(MouseOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseOutEvent(MouseOutEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseOutEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseOutEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOutEvent*, "UnityEngine.UIElements", "MouseOutEvent");
