#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HeadObstacleLowPassAudioEffect)
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class MainAudioEffects;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4901))
// CS Name: ::HeadObstacleLowPassAudioEffect*
class CORDL_TYPE HeadObstacleLowPassAudioEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x18, size 0x8
  __declspec(property(get = __get__playerHeadAndObstacleInteraction,
                      put = __set__playerHeadAndObstacleInteraction))::GlobalNamespace::PlayerHeadAndObstacleInteraction* _playerHeadAndObstacleInteraction;

  /// @brief Field _mainAudioEffects, offset 0x20, size 0x8
  __declspec(property(get = __get__mainAudioEffects, put = __set__mainAudioEffects))::GlobalNamespace::MainAudioEffects* _mainAudioEffects;

  /// @brief Field _headWasInObstacle, offset 0x28, size 0x1
  __declspec(property(get = __get__headWasInObstacle, put = __set__headWasInObstacle)) bool _headWasInObstacle;

  constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& __get__playerHeadAndObstacleInteraction();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> const& __get__playerHeadAndObstacleInteraction() const;

  constexpr void __set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction* value);

  constexpr ::GlobalNamespace::MainAudioEffects*& __get__mainAudioEffects();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainAudioEffects*> const& __get__mainAudioEffects() const;

  constexpr void __set__mainAudioEffects(::GlobalNamespace::MainAudioEffects* value);

  constexpr bool& __get__headWasInObstacle();

  constexpr bool const& __get__headWasInObstacle() const;

  constexpr void __set__headWasInObstacle(bool value);

  /// @brief Method Update, addr 0x23a5620, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::HeadObstacleLowPassAudioEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23a567c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HeadObstacleLowPassAudioEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeadObstacleLowPassAudioEffect(HeadObstacleLowPassAudioEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeadObstacleLowPassAudioEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeadObstacleLowPassAudioEffect(HeadObstacleLowPassAudioEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeadObstacleLowPassAudioEffect();

public:
  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerHeadAndObstacleInteraction* ____playerHeadAndObstacleInteraction;

  /// @brief Field _mainAudioEffects, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainAudioEffects* ____mainAudioEffects;

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
