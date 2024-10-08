#pragma once
// IWYU pragma private; include "GlobalNamespace/BackgroundTextureGradientSwitchEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BackgroundTextureGradientSwitchEventEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundTextureGradient;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class BackgroundTextureGradientSwitchEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect);
// Type: ::BackgroundTextureGradientSwitchEventEffect
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BackgroundTextureGradientSwitchEventEffect*
class CORDL_TYPE BackgroundTextureGradientSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _boostTextureGradient, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__boostTextureGradient, put = __cordl_internal_set__boostTextureGradient)) ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient>
      _boostTextureGradient;

  /// @brief Field _defaultTextureGradient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultTextureGradient, put = __cordl_internal_set__defaultTextureGradient)) ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient>
      _defaultTextureGradient;

  /// @brief Method HandleBeatmapEvent, addr 0x3b11c30, size 0x50, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData);

  static inline ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b11c14, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b11b68, size 0xac, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> const& __cordl_internal_get__boostTextureGradient() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient>& __cordl_internal_get__boostTextureGradient();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> const& __cordl_internal_get__defaultTextureGradient() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient>& __cordl_internal_get__defaultTextureGradient();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__boostTextureGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> value);

  constexpr void __cordl_internal_set__defaultTextureGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> value);

  /// @brief Method .ctor, addr 0x3b11c80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundTextureGradientSwitchEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundTextureGradientSwitchEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundTextureGradientSwitchEventEffect(BackgroundTextureGradientSwitchEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundTextureGradientSwitchEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundTextureGradientSwitchEventEffect(BackgroundTextureGradientSwitchEventEffect const&) = delete;

  /// @brief Field _defaultTextureGradient, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> ____defaultTextureGradient;

  /// @brief Field _boostTextureGradient, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> ____boostTextureGradient;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect, ____defaultTextureGradient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect, ____boostTextureGradient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect, ____beatmapCallbacksController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect, ____beatmapDataCallbackWrapper) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*, "", "BackgroundTextureGradientSwitchEventEffect");
