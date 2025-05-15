#pragma once
// IWYU pragma private; include "GlobalNamespace/LightPairRotationEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightPairRotationEventEffect)
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
namespace GlobalNamespace {
class LightPairRotationEventEffect_RotationData;
}
namespace System {
class Random;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LightPairRotationEventEffect;
}
namespace GlobalNamespace {
class LightPairRotationEventEffect_RotationData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightPairRotationEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::LightPairRotationEventEffect_RotationData);
// Dependencies System.Object, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightPairRotationEventEffect/RotationData
class CORDL_TYPE LightPairRotationEventEffect_RotationData : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  /// @brief Field rotationAngle, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationAngle, put = __cordl_internal_set_rotationAngle)) float_t rotationAngle;

  /// @brief Field rotationSpeed, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationSpeed, put = __cordl_internal_set_rotationSpeed)) float_t rotationSpeed;

  /// @brief Field startRotation, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_startRotation, put = __cordl_internal_set_startRotation)) ::UnityEngine::Quaternion startRotation;

  /// @brief Field startRotationAngle, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_startRotationAngle, put = __cordl_internal_set_startRotationAngle)) float_t startRotationAngle;

  /// @brief Field transform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform> transform;

  static inline ::GlobalNamespace::LightPairRotationEventEffect_RotationData* New_ctor();

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr float_t const& __cordl_internal_get_rotationAngle() const;

  constexpr float_t& __cordl_internal_get_rotationAngle();

  constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

  constexpr float_t& __cordl_internal_get_rotationSpeed();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_startRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_startRotation();

  constexpr float_t const& __cordl_internal_get_startRotationAngle() const;

  constexpr float_t& __cordl_internal_get_startRotationAngle();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr void __cordl_internal_set_enabled(bool value);

  constexpr void __cordl_internal_set_rotationAngle(float_t value);

  constexpr void __cordl_internal_set_rotationSpeed(float_t value);

  constexpr void __cordl_internal_set_startRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_startRotationAngle(float_t value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3b94720, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightPairRotationEventEffect_RotationData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightPairRotationEventEffect_RotationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightPairRotationEventEffect_RotationData(LightPairRotationEventEffect_RotationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightPairRotationEventEffect_RotationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightPairRotationEventEffect_RotationData(LightPairRotationEventEffect_RotationData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4317 };

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field rotationSpeed, offset: 0x14, size: 0x4, def value: None
  float_t ___rotationSpeed;

  /// @brief Field startRotation, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___startRotation;

  /// @brief Field transform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field startRotationAngle, offset: 0x30, size: 0x4, def value: None
  float_t ___startRotationAngle;

  /// @brief Field rotationAngle, offset: 0x34, size: 0x4, def value: None
  float_t ___rotationAngle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect_RotationData, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect_RotationData, ___rotationSpeed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect_RotationData, ___startRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect_RotationData, ___transform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect_RotationData, ___startRotationAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect_RotationData, ___rotationAngle) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightPairRotationEventEffect_RotationData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BasicBeatmapEventType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightPairRotationEventEffect
class CORDL_TYPE LightPairRotationEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RotationData = ::GlobalNamespace::LightPairRotationEventEffect_RotationData;

  /// @brief Field _audioTimeSource, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _eventL, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__eventL, put = __cordl_internal_set__eventL)) ::GlobalNamespace::BasicBeatmapEventType _eventL;

  /// @brief Field _eventR, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__eventR, put = __cordl_internal_set__eventR)) ::GlobalNamespace::BasicBeatmapEventType _eventR;

  /// @brief Field _overrideRandomValues, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideRandomValues, put = __cordl_internal_set__overrideRandomValues)) bool _overrideRandomValues;

  /// @brief Field _random, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Field _randomDirection, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__randomDirection, put = __cordl_internal_set__randomDirection)) float_t _randomDirection;

  /// @brief Field _randomGenerationFrameNum, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__randomGenerationFrameNum, put = __cordl_internal_set__randomGenerationFrameNum)) int32_t _randomGenerationFrameNum;

  /// @brief Field _randomStartRotation, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__randomStartRotation, put = __cordl_internal_set__randomStartRotation)) float_t _randomStartRotation;

  /// @brief Field _rotationDataL, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationDataL, put = __cordl_internal_set__rotationDataL)) ::GlobalNamespace::LightPairRotationEventEffect_RotationData* _rotationDataL;

  /// @brief Field _rotationDataR, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationDataR, put = __cordl_internal_set__rotationDataR)) ::GlobalNamespace::LightPairRotationEventEffect_RotationData* _rotationDataR;

  /// @brief Field _rotationVector, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__rotationVector, put = __cordl_internal_set__rotationVector)) ::UnityEngine::Vector3 _rotationVector;

  /// @brief Field _startRotation, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__startRotation, put = __cordl_internal_set__startRotation)) float_t _startRotation;

  /// @brief Field _switchOverrideRandomValuesEvent, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__switchOverrideRandomValuesEvent,
                      put = __cordl_internal_set__switchOverrideRandomValuesEvent)) ::GlobalNamespace::BasicBeatmapEventType _switchOverrideRandomValuesEvent;

  /// @brief Field _transformL, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__transformL, put = __cordl_internal_set__transformL)) ::UnityW<::UnityEngine::Transform> _transformL;

  /// @brief Field _transformR, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__transformR, put = __cordl_internal_set__transformR)) ::UnityW<::UnityEngine::Transform> _transformR;

  /// @brief Field _useZPositionForAngleOffset, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__useZPositionForAngleOffset, put = __cordl_internal_set__useZPositionForAngleOffset)) bool _useZPositionForAngleOffset;

  /// @brief Field _zPositionAngleOffsetScale, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__zPositionAngleOffsetScale, put = __cordl_internal_set__zPositionAngleOffsetScale)) float_t _zPositionAngleOffsetScale;

  /// @brief Method HandleBeatmapEvent, addr 0x3b949e8, size 0x384, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::LightPairRotationEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b949cc, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b94354, size 0x3cc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b94728, size 0x2a4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateRotationData, addr 0x3b94d6c, size 0x21c, virtual false, abstract: false, final false
  inline void UpdateRotationData(int32_t beatmapEventDataValue, ::GlobalNamespace::LightPairRotationEventEffect_RotationData* rotationData, float_t startRotationOffset, float_t direction);

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__eventL() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__eventL();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__eventR() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__eventR();

  constexpr bool const& __cordl_internal_get__overrideRandomValues() const;

  constexpr bool& __cordl_internal_get__overrideRandomValues();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr float_t const& __cordl_internal_get__randomDirection() const;

  constexpr float_t& __cordl_internal_get__randomDirection();

  constexpr int32_t const& __cordl_internal_get__randomGenerationFrameNum() const;

  constexpr int32_t& __cordl_internal_get__randomGenerationFrameNum();

  constexpr float_t const& __cordl_internal_get__randomStartRotation() const;

  constexpr float_t& __cordl_internal_get__randomStartRotation();

  constexpr ::GlobalNamespace::LightPairRotationEventEffect_RotationData* const& __cordl_internal_get__rotationDataL() const;

  constexpr ::GlobalNamespace::LightPairRotationEventEffect_RotationData*& __cordl_internal_get__rotationDataL();

  constexpr ::GlobalNamespace::LightPairRotationEventEffect_RotationData* const& __cordl_internal_get__rotationDataR() const;

  constexpr ::GlobalNamespace::LightPairRotationEventEffect_RotationData*& __cordl_internal_get__rotationDataR();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationVector() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationVector();

  constexpr float_t const& __cordl_internal_get__startRotation() const;

  constexpr float_t& __cordl_internal_get__startRotation();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__switchOverrideRandomValuesEvent() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__switchOverrideRandomValuesEvent();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transformL() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transformL();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transformR() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transformR();

  constexpr bool const& __cordl_internal_get__useZPositionForAngleOffset() const;

  constexpr bool& __cordl_internal_get__useZPositionForAngleOffset();

  constexpr float_t const& __cordl_internal_get__zPositionAngleOffsetScale() const;

  constexpr float_t& __cordl_internal_get__zPositionAngleOffsetScale();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__eventL(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__eventR(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__overrideRandomValues(bool value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__randomDirection(float_t value);

  constexpr void __cordl_internal_set__randomGenerationFrameNum(int32_t value);

  constexpr void __cordl_internal_set__randomStartRotation(float_t value);

  constexpr void __cordl_internal_set__rotationDataL(::GlobalNamespace::LightPairRotationEventEffect_RotationData* value);

  constexpr void __cordl_internal_set__rotationDataR(::GlobalNamespace::LightPairRotationEventEffect_RotationData* value);

  constexpr void __cordl_internal_set__rotationVector(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startRotation(float_t value);

  constexpr void __cordl_internal_set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__transformL(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__transformR(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__useZPositionForAngleOffset(bool value);

  constexpr void __cordl_internal_set__zPositionAngleOffsetScale(float_t value);

  /// @brief Method .ctor, addr 0x3b94f88, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightPairRotationEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightPairRotationEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightPairRotationEventEffect(LightPairRotationEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightPairRotationEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightPairRotationEventEffect(LightPairRotationEventEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4318 };

  /// @brief Field kSpeedMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kSpeedMultiplier{ static_cast<float_t>(20.0f) };

  /// @brief Field _eventL, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____eventL;

  /// @brief Field _eventR, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____eventR;

  /// @brief Field _switchOverrideRandomValuesEvent, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____switchOverrideRandomValuesEvent;

  /// @brief Field _rotationVector, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationVector;

  /// @brief Field _overrideRandomValues, offset: 0x38, size: 0x1, def value: None
  bool ____overrideRandomValues;

  /// @brief Field _useZPositionForAngleOffset, offset: 0x39, size: 0x1, def value: None
  bool ____useZPositionForAngleOffset;

  /// @brief Field _zPositionAngleOffsetScale, offset: 0x3c, size: 0x4, def value: None
  float_t ____zPositionAngleOffsetScale;

  /// @brief Field _startRotation, offset: 0x40, size: 0x4, def value: None
  float_t ____startRotation;

  /// @brief Field _transformL, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transformL;

  /// @brief Field _transformR, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transformR;

  /// @brief Field _beatmapCallbacksController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _random, offset: 0x68, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _rotationDataL, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LightPairRotationEventEffect_RotationData* ____rotationDataL;

  /// @brief Field _rotationDataR, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::LightPairRotationEventEffect_RotationData* ____rotationDataR;

  /// @brief Field _randomGenerationFrameNum, offset: 0x80, size: 0x4, def value: None
  int32_t ____randomGenerationFrameNum;

  /// @brief Field _randomStartRotation, offset: 0x84, size: 0x4, def value: None
  float_t ____randomStartRotation;

  /// @brief Field _randomDirection, offset: 0x88, size: 0x4, def value: None
  float_t ____randomDirection;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____eventL) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____eventR) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____switchOverrideRandomValuesEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____rotationVector) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____overrideRandomValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____useZPositionForAngleOffset) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____zPositionAngleOffsetScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____startRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____transformL) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____transformR) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____beatmapCallbacksController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____audioTimeSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____random) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____rotationDataL) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____rotationDataR) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____randomGenerationFrameNum) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____randomStartRotation) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____randomDirection) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairRotationEventEffect, ____beatmapDataCallbackWrapper) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightPairRotationEventEffect, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightPairRotationEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightPairRotationEventEffect*, "", "LightPairRotationEventEffect");
NEED_NO_BOX(::GlobalNamespace::LightPairRotationEventEffect_RotationData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightPairRotationEventEffect_RotationData*, "", "LightPairRotationEventEffect/RotationData");
