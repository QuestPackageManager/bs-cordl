#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerEnterEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerEnterEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerEnterEvent);
// Type: UnityEngine.UIElements::PointerEnterEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7284)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7284), inst: 4738 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7291))
// CS Name: ::UnityEngine.UIElements::PointerEnterEvent*
class CORDL_TYPE PointerEnterEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerEnterEvent*> {
public:
  // Declarations
  /// @brief Method Init addr 0x2ce8350 size 0x54 virtual true final false
  inline void Init();

  /// @brief Method LocalInit addr 0x2ce83a4 size 0xc virtual false final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerEnterEvent* New_ctor();

  /// @brief Method .ctor addr 0x2ce83b0 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEnterEvent(PointerEnterEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEnterEvent(PointerEnterEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEnterEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerEnterEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEnterEvent*, "UnityEngine.UIElements", "PointerEnterEvent");
