#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerStationaryEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerStationaryEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerStationaryEvent);
// Type: UnityEngine.UIElements::PointerStationaryEvent
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 234, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7198)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 4840 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7201))
// CS Name: ::UnityEngine.UIElements::PointerStationaryEvent*
class CORDL_TYPE PointerStationaryEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerStationaryEvent*> {
public:
  // Declarations
  /// @brief Method Init, addr 0x2e4fa8c, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2e4fadc, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerStationaryEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e4fbe0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerStationaryEvent(PointerStationaryEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerStationaryEvent(PointerStationaryEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerStationaryEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerStationaryEvent, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerStationaryEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerStationaryEvent*, "UnityEngine.UIElements", "PointerStationaryEvent");
