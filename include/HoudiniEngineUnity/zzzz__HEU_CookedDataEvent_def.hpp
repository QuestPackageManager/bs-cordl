#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_CookedDataEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(HEU_CookedDataEvent)
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookedDataEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_CookedDataEvent);
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_CookedDataEvent
class CORDL_TYPE HEU_CookedDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_CookedEventData*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_CookedDataEvent* New_ctor();

  /// @brief Method .ctor, addr 0x3a05cf8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_CookedDataEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookedDataEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_CookedDataEvent(HEU_CookedDataEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookedDataEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_CookedDataEvent(HEU_CookedDataEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_CookedDataEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookedDataEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookedDataEvent*, "HoudiniEngineUnity", "HEU_CookedDataEvent");
