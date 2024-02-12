#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseEnterEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEnterEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEnterEvent);
// Type: UnityEngine.UIElements::MouseEnterEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6474)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6474), inst: 4623 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6480))
// CS Name: ::UnityEngine.UIElements::MouseEnterEvent*
class CORDL_TYPE MouseEnterEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseEnterEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x2e6c9a4, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2e6c9f8, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseEnterEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e6ca04, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEnterEvent(MouseEnterEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEnterEvent(MouseEnterEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEnterEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEnterEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEnterEvent*, "UnityEngine.UIElements", "MouseEnterEvent");
