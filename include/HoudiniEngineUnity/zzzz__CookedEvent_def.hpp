#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
CORDL_MODULE_EXPORT(CookedEvent)
// Forward declare root types
namespace HoudiniEngineUnity {
class CookedEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::CookedEvent);
// Type: HoudiniEngineUnity::CookedEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3831)), TypeDefinitionIndex(TypeDefinitionIndex(9566)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10389), inst:
// 5116 }), TypeDefinitionIndex(TypeDefinitionIndex(10389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3831), inst: 312 }), TypeDefinitionIndex(TypeDefinitionIndex(10124))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9529))
// CS Name: ::HoudiniEngineUnity::CookedEvent*
class CORDL_TYPE CookedEvent : public ::UnityEngine::Events::UnityEvent_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::CookedEvent* New_ctor();

  /// @brief Method .ctor addr 0x1ff6aac size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CookedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CookedEvent(CookedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CookedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CookedEvent(CookedEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CookedEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::CookedEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::CookedEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::CookedEvent*, "HoudiniEngineUnity", "CookedEvent");
