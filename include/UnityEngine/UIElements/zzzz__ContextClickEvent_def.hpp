#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ContextClickEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextClickEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextClickEvent);
// Type: UnityEngine.UIElements::ContextClickEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6474)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6474), inst: 4620 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6478))
// CS Name: ::UnityEngine.UIElements::ContextClickEvent*
class CORDL_TYPE ContextClickEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextClickEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ContextClickEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e6c750, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextClickEvent(ContextClickEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextClickEvent(ContextClickEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextClickEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextClickEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextClickEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextClickEvent*, "UnityEngine.UIElements", "ContextClickEvent");
