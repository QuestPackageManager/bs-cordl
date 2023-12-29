#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCaptureEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureEvent);
// Type: UnityEngine.UIElements::PointerCaptureEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7236), inst: 4731 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7238))
// CS Name: ::UnityEngine.UIElements::PointerCaptureEvent*
class CORDL_TYPE PointerCaptureEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::PointerCaptureEvent* New_ctor();

  /// @brief Method .ctor addr 0x2cdfab4 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureEvent(PointerCaptureEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureEvent(PointerCaptureEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureEvent*, "UnityEngine.UIElements", "PointerCaptureEvent");
