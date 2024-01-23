#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(BlurEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BlurEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BlurEvent);
// Type: UnityEngine.UIElements::BlurEvent
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7232)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7232), inst: 1984 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7234))
// CS Name: ::UnityEngine.UIElements::BlurEvent*
class CORDL_TYPE BlurEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::BlurEvent*> {
public:
  // Declarations
  /// @brief Method PreDispatch, addr 0x2e52020, size 0x7c, virtual true, abstract: false, final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  static inline ::UnityEngine::UIElements::BlurEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e5209c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BlurEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlurEvent(BlurEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlurEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlurEvent(BlurEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlurEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BlurEvent, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BlurEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BlurEvent*, "UnityEngine.UIElements", "BlurEvent");
