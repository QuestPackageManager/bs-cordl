#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatEffectDidFinishEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatEffectDidFinishEvent)
namespace GlobalNamespace {
class BeatEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatEffectDidFinishEvent);
// Type: ::IBeatEffectDidFinishEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IBeatEffectDidFinishEvent*
class CORDL_TYPE IBeatEffectDidFinishEvent {
public:
  // Declarations
  /// @brief Method HandleBeatEffectDidFinish, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect* beatEffect);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatEffectDidFinishEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatEffectDidFinishEvent(IBeatEffectDidFinishEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatEffectDidFinishEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatEffectDidFinishEvent(IBeatEffectDidFinishEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatEffectDidFinishEvent*, "", "IBeatEffectDidFinishEvent");
