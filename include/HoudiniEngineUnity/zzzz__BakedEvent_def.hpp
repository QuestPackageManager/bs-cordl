#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/BakedEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
CORDL_MODULE_EXPORT(BakedEvent)
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
class BakedEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::BakedEvent);
// Dependencies UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.BakedEvent
class CORDL_TYPE BakedEvent
    : public ::UnityEngine::Events::UnityEvent_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::BakedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x3a068f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedEvent(BakedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedEvent(BakedEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11586 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::BakedEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::BakedEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::BakedEvent*, "HoudiniEngineUnity", "BakedEvent");
