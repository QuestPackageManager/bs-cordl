#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightRotationEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace System {
class Random;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationEventEffect);
// Dependencies BasicBeatmapEventType, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationEventEffect
class CORDL_TYPE LightRotationEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _event, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__event, put = __cordl_internal_set__event)) ::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _random, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Field _rotationSpeed, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationSpeed, put = __cordl_internal_set__rotationSpeed)) float_t _rotationSpeed;

  /// @brief Field _rotationSpeedMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationSpeedMultiplier, put = __cordl_internal_set__rotationSpeedMultiplier)) float_t _rotationSpeedMultiplier;

  /// @brief Field _rotationVector, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__rotationVector, put = __cordl_internal_set__rotationVector)) ::UnityEngine::Vector3 _rotationVector;

  /// @brief Field _startRotation, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__startRotation, put = __cordl_internal_set__startRotation)) ::UnityEngine::Quaternion _startRotation;

  /// @brief Field _transform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method HandleBeatmapEvent, addr 0x3ba2fb4, size 0x11c, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::LightRotationEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ba2f98, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ba2d58, size 0x158, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3ba2eb0, size 0xe8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__event() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__event();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

  constexpr float_t& __cordl_internal_get__rotationSpeed();

  constexpr float_t const& __cordl_internal_get__rotationSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get__rotationSpeedMultiplier();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationVector() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationVector();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__rotationSpeed(float_t value);

  constexpr void __cordl_internal_set__rotationSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set__rotationVector(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3ba30d0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationEventEffect(LightRotationEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationEventEffect(LightRotationEventEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4321 };

  /// @brief Field kSpeedMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kSpeedMultiplier{ static_cast<float_t>(20.0f) };

  /// @brief Field _event, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _rotationVector, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationVector;

  /// @brief Field _rotationSpeedMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ____rotationSpeedMultiplier;

  /// @brief Field _beatmapCallbacksController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _random, offset: 0x48, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _transform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _startRotation, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____startRotation;

  /// @brief Field _rotationSpeed, offset: 0x68, size: 0x4, def value: None
  float_t ____rotationSpeed;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____event) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____rotationVector) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____rotationSpeedMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____beatmapCallbacksController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____audioTimeSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____random) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____transform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____startRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____rotationSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____beatmapDataCallbackWrapper) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationEventEffect, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationEventEffect*, "", "LightRotationEventEffect");
