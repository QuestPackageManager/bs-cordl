#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(HEU_CookedDataEvent)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookedDataEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_CookedDataEvent);
// Type: HoudiniEngineUnity::HEU_CookedDataEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10387), inst: 5120 }), TypeDefinitionIndex(TypeDefinitionIndex(10387)),
// TypeDefinitionIndex(TypeDefinitionIndex(9524))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9530)) CS Name: ::HoudiniEngineUnity::HEU_CookedDataEvent*
class CORDL_TYPE HEU_CookedDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_CookedEventData*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_CookedDataEvent* New_ctor();

  /// @brief Method .ctor addr 0x1ff6af4 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookedDataEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_CookedDataEvent(HEU_CookedDataEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookedDataEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_CookedDataEvent(HEU_CookedDataEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_CookedDataEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_CookedDataEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookedDataEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookedDataEvent*, "HoudiniEngineUnity", "HEU_CookedDataEvent");
