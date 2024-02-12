#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionEndEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionEndEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionEndEvent);
// Type: UnityEngine.UIElements::TransitionEndEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6447)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6447), inst: 5137 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6450))
// CS Name: ::UnityEngine.UIElements::TransitionEndEvent*
class CORDL_TYPE TransitionEndEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionEndEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::TransitionEndEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e69d80, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TransitionEndEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionEndEvent(TransitionEndEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionEndEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionEndEvent(TransitionEndEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionEndEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionEndEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionEndEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionEndEvent*, "UnityEngine.UIElements", "TransitionEndEvent");
