#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PreAssetEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(HEU_PreAssetEvent)
namespace HoudiniEngineUnity {
class HEU_PreAssetEventData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PreAssetEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PreAssetEvent);
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_PreAssetEvent
class CORDL_TYPE HEU_PreAssetEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_PreAssetEventData*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_PreAssetEvent* New_ctor();

  /// @brief Method .ctor, addr 0x3a011f8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PreAssetEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PreAssetEvent(HEU_PreAssetEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PreAssetEvent(HEU_PreAssetEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11593 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PreAssetEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PreAssetEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PreAssetEvent*, "HoudiniEngineUnity", "HEU_PreAssetEvent");
