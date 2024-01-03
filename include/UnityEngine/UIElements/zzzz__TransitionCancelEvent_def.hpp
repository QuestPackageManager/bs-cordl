#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionCancelEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionCancelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionCancelEvent);
// Type: UnityEngine.UIElements::TransitionCancelEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7188), inst: 5154 }), TypeDefinitionIndex(TypeDefinitionIndex(7188))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7192))
// CS Name: ::UnityEngine.UIElements::TransitionCancelEvent*
class CORDL_TYPE TransitionCancelEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionCancelEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::TransitionCancelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e4e9e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionCancelEvent(TransitionCancelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionCancelEvent(TransitionCancelEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionCancelEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionCancelEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionCancelEvent*, "UnityEngine.UIElements", "TransitionCancelEvent");
