#pragma once
// IWYU pragma private; include "GlobalNamespace/IFlyingObjectEffectDidFinishEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFlyingObjectEffectDidFinishEvent)
namespace GlobalNamespace {
class FlyingObjectEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IFlyingObjectEffectDidFinishEvent);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IFlyingObjectEffectDidFinishEvent
class CORDL_TYPE IFlyingObjectEffectDidFinishEvent {
public:
  // Declarations
  /// @brief Method HandleFlyingObjectEffectDidFinish, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  // Ctor Parameters [CppParam { name: "", ty: "IFlyingObjectEffectDidFinishEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFlyingObjectEffectDidFinishEvent(IFlyingObjectEffectDidFinishEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4213 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IFlyingObjectEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*, "", "IFlyingObjectEffectDidFinishEvent");
