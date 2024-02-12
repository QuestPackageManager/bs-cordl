#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(KeyUpEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyUpEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyUpEvent);
// Type: UnityEngine.UIElements::KeyUpEvent
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6499)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6499), inst: 3923 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6501))
// CS Name: ::UnityEngine.UIElements::KeyUpEvent*
class CORDL_TYPE KeyUpEvent : public ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyUpEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::KeyUpEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e6e04c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "KeyUpEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyUpEvent(KeyUpEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyUpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyUpEvent(KeyUpEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyUpEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyUpEvent, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyUpEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyUpEvent*, "UnityEngine.UIElements", "KeyUpEvent");
