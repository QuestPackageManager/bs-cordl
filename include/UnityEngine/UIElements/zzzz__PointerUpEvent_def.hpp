#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerUpEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerUpEvent);
// Type: UnityEngine.UIElements::PointerUpEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7198)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 1734 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7202))
// CS Name: ::UnityEngine.UIElements::PointerUpEvent*
class CORDL_TYPE PointerUpEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerUpEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x2e4fc30, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2e4fc80, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerUpEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e4fd84, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method PostDispatch, addr 0x2e4fdd4, size 0x32c, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  // Ctor Parameters [CppParam { name: "", ty: "PointerUpEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerUpEvent(PointerUpEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerUpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerUpEvent(PointerUpEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerUpEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerUpEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerUpEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerUpEvent*, "UnityEngine.UIElements", "PointerUpEvent");
