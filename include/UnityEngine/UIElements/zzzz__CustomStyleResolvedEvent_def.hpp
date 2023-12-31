#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(CustomStyleResolvedEvent)
namespace UnityEngine::UIElements {
class ICustomStyle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CustomStyleResolvedEvent);
// Type: UnityEngine.UIElements::CustomStyleResolvedEvent
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1721 }), TypeDefinitionIndex(TypeDefinitionIndex(7180))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7209))
// CS Name: ::UnityEngine.UIElements::CustomStyleResolvedEvent*
class CORDL_TYPE CustomStyleResolvedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::CustomStyleResolvedEvent*> {
public:
  // Declarations
  __declspec(property(get = get_customStyle))::UnityEngine::UIElements::ICustomStyle* customStyle;

  /// @brief Method get_customStyle, addr 0x2e454b0, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ICustomStyle* get_customStyle();

  static inline ::UnityEngine::UIElements::CustomStyleResolvedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e508f8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CustomStyleResolvedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomStyleResolvedEvent(CustomStyleResolvedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomStyleResolvedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomStyleResolvedEvent(CustomStyleResolvedEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomStyleResolvedEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CustomStyleResolvedEvent, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CustomStyleResolvedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CustomStyleResolvedEvent*, "UnityEngine.UIElements", "CustomStyleResolvedEvent");
