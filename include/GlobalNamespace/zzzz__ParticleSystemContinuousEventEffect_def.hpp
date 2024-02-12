#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ParticleSystemContinuousEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemContinuousEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemContinuousEventEffect);
// Type: ::ParticleSystemContinuousEventEffect
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(15108))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4313))
// CS Name: ::ParticleSystemContinuousEventEffect*
class CORDL_TYPE ParticleSystemContinuousEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapEvent, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEvent, put = __cordl_internal_set__beatmapEvent))::GlobalNamespace::BasicBeatmapEventType _beatmapEvent;

  /// @brief Field _particleSystems, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems,
                      put = __cordl_internal_set__particleSystems))::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> _particleSystems;

  /// @brief Field _beatmapCallbacksController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEvent();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEvent() const;

  constexpr void __cordl_internal_set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& __cordl_internal_get__particleSystems();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const& __cordl_internal_get__particleSystems() const;

  constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start, addr 0x236edb4, size 0x124, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x236eed8, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapEvent, addr 0x236eef4, size 0x20, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method ToggleEmitting, addr 0x236ef14, size 0xb4, virtual false, abstract: false, final false
  inline void ToggleEmitting(bool shouldPlay);

  static inline ::GlobalNamespace::ParticleSystemContinuousEventEffect* New_ctor();

  /// @brief Method .ctor, addr 0x236efc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemContinuousEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemContinuousEventEffect(ParticleSystemContinuousEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemContinuousEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemContinuousEventEffect(ParticleSystemContinuousEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemContinuousEventEffect();

public:
  /// @brief Field _beatmapEvent, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEvent;

  /// @brief Field _particleSystems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> ____particleSystems;

  /// @brief Field _beatmapCallbacksController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemContinuousEventEffect, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemContinuousEventEffect, ____beatmapEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemContinuousEventEffect, ____particleSystems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemContinuousEventEffect, ____beatmapCallbacksController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemContinuousEventEffect, ____beatmapDataCallbackWrapper) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemContinuousEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemContinuousEventEffect*, "", "ParticleSystemContinuousEventEffect");
