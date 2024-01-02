#pragma once
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
// Type: ::IFlyingObjectEffectDidFinishEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4851))
// CS Name: ::IFlyingObjectEffectDidFinishEvent*
class CORDL_TYPE IFlyingObjectEffectDidFinishEvent {
public:
  // Declarations
  /// @brief Method HandleFlyingObjectEffectDidFinish, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  // Ctor Parameters [CppParam { name: "", ty: "IFlyingObjectEffectDidFinishEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFlyingObjectEffectDidFinishEvent(IFlyingObjectEffectDidFinishEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFlyingObjectEffectDidFinishEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFlyingObjectEffectDidFinishEvent(IFlyingObjectEffectDidFinishEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IFlyingObjectEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*, "", "IFlyingObjectEffectDidFinishEvent");
