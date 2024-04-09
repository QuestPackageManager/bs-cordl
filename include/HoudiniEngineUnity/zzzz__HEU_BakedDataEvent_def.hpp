#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(HEU_BakedDataEvent)
namespace HoudiniEngineUnity {
class HEU_BakedEventData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_BakedDataEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_BakedDataEvent);
// Type: HoudiniEngineUnity::HEU_BakedDataEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_BakedDataEvent*
class CORDL_TYPE HEU_BakedDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_BakedEventData*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_BakedDataEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2430790, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_BakedDataEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_BakedDataEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_BakedDataEvent(HEU_BakedDataEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_BakedDataEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_BakedDataEvent(HEU_BakedDataEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_BakedDataEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_BakedDataEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_BakedDataEvent*, "HoudiniEngineUnity", "HEU_BakedDataEvent");
