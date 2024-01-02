#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerOverEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerOverEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerOverEvent);
// Type: UnityEngine.UIElements::PointerOverEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7198)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 4839 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7207))
// CS Name: ::UnityEngine.UIElements::PointerOverEvent*
class CORDL_TYPE PointerOverEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOverEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::PointerOverEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e50868, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PointerOverEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOverEvent(PointerOverEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOverEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOverEvent(PointerOverEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOverEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerOverEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerOverEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOverEvent*, "UnityEngine.UIElements", "PointerOverEvent");
