#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HeadObstacleLowPassAudioEffect)
namespace GlobalNamespace {
class MainAudioEffects;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadObstacleLowPassAudioEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HeadObstacleLowPassAudioEffect);
// Type: ::HeadObstacleLowPassAudioEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HeadObstacleLowPassAudioEffect*
class CORDL_TYPE HeadObstacleLowPassAudioEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _headWasInObstacle, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__headWasInObstacle, put = __cordl_internal_set__headWasInObstacle)) bool _headWasInObstacle;

  /// @brief Field _mainAudioEffects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainAudioEffects, put = __cordl_internal_set__mainAudioEffects))::UnityW<::GlobalNamespace::MainAudioEffects> _mainAudioEffects;

  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeadAndObstacleInteraction,
                      put = __cordl_internal_set__playerHeadAndObstacleInteraction))::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> _playerHeadAndObstacleInteraction;

  static inline ::GlobalNamespace::HeadObstacleLowPassAudioEffect* New_ctor();

  /// @brief Method Update, addr 0x24336a0, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__headWasInObstacle() const;

  constexpr bool& __cordl_internal_get__headWasInObstacle();

  constexpr ::UnityW<::GlobalNamespace::MainAudioEffects> const& __cordl_internal_get__mainAudioEffects() const;

  constexpr ::UnityW<::GlobalNamespace::MainAudioEffects>& __cordl_internal_get__mainAudioEffects();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& __cordl_internal_get__playerHeadAndObstacleInteraction() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& __cordl_internal_get__playerHeadAndObstacleInteraction();

  constexpr void __cordl_internal_set__headWasInObstacle(bool value);

  constexpr void __cordl_internal_set__mainAudioEffects(::UnityW<::GlobalNamespace::MainAudioEffects> value);

  constexpr void __cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value);

  /// @brief Method .ctor, addr 0x24336fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeadObstacleLowPassAudioEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeadObstacleLowPassAudioEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeadObstacleLowPassAudioEffect(HeadObstacleLowPassAudioEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeadObstacleLowPassAudioEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeadObstacleLowPassAudioEffect(HeadObstacleLowPassAudioEffect const&) = delete;

  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> ____playerHeadAndObstacleInteraction;

  /// @brief Field _mainAudioEffects, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainAudioEffects> ____mainAudioEffects;

  /// @brief Field _headWasInObstacle, offset: 0x28, size: 0x1, def value: None
  bool ____headWasInObstacle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HeadObstacleLowPassAudioEffect, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadObstacleLowPassAudioEffect, ____playerHeadAndObstacleInteraction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadObstacleLowPassAudioEffect, ____mainAudioEffects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadObstacleLowPassAudioEffect, ____headWasInObstacle) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HeadObstacleLowPassAudioEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HeadObstacleLowPassAudioEffect*, "", "HeadObstacleLowPassAudioEffect");
