#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/ReloadEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
CORDL_MODULE_EXPORT(ReloadEvent)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class ReloadEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::ReloadEvent);
// Dependencies UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.ReloadEvent
class CORDL_TYPE ReloadEvent
    : public ::UnityEngine::Events::UnityEvent_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::ReloadEvent* New_ctor();

  /// @brief Method .ctor, addr 0x3a05c20, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReloadEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReloadEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReloadEvent(ReloadEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReloadEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReloadEvent(ReloadEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11587 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::ReloadEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::ReloadEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::ReloadEvent*, "HoudiniEngineUnity", "ReloadEvent");
