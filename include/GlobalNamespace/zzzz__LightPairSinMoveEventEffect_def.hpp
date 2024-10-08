#pragma once
// IWYU pragma private; include "GlobalNamespace/LightPairSinMoveEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightPairSinMoveEventEffect)
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
class __LightPairSinMoveEventEffect__MovementData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LightPairSinMoveEventEffect;
}
namespace GlobalNamespace {
class __LightPairSinMoveEventEffect__MovementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightPairSinMoveEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData);
// Type: ::MovementData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightPairSinMoveEventEffect::MovementData*
class CORDL_TYPE __LightPairSinMoveEventEffect__MovementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  /// @brief Field movementValue, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_movementValue, put = __cordl_internal_set_movementValue)) float_t movementValue;

  /// @brief Field side, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_side, put = __cordl_internal_set_side)) float_t side;

  /// @brief Field speed, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_speed, put = __cordl_internal_set_speed)) float_t speed;

  /// @brief Field startMovementValue, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_startMovementValue, put = __cordl_internal_set_startMovementValue)) float_t startMovementValue;

  /// @brief Field startPosition, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_startPosition, put = __cordl_internal_set_startPosition)) ::UnityEngine::Vector3 startPosition;

  /// @brief Field transform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform> transform;

  static inline ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* New_ctor();

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr float_t const& __cordl_internal_get_movementValue() const;

  constexpr float_t& __cordl_internal_get_movementValue();

  constexpr float_t const& __cordl_internal_get_side() const;

  constexpr float_t& __cordl_internal_get_side();

  constexpr float_t const& __cordl_internal_get_speed() const;

  constexpr float_t& __cordl_internal_get_speed();

  constexpr float_t const& __cordl_internal_get_startMovementValue() const;

  constexpr float_t& __cordl_internal_get_startMovementValue();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr void __cordl_internal_set_enabled(bool value);

  constexpr void __cordl_internal_set_movementValue(float_t value);

  constexpr void __cordl_internal_set_side(float_t value);

  constexpr void __cordl_internal_set_speed(float_t value);

  constexpr void __cordl_internal_set_startMovementValue(float_t value);

  constexpr void __cordl_internal_set_startPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3b1a388, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightPairSinMoveEventEffect__MovementData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightPairSinMoveEventEffect__MovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightPairSinMoveEventEffect__MovementData(__LightPairSinMoveEventEffect__MovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightPairSinMoveEventEffect__MovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightPairSinMoveEventEffect__MovementData(__LightPairSinMoveEventEffect__MovementData const&) = delete;

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field speed, offset: 0x14, size: 0x4, def value: None
  float_t ___speed;

  /// @brief Field startPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___startPosition;

  /// @brief Field transform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field startMovementValue, offset: 0x30, size: 0x4, def value: None
  float_t ___startMovementValue;

  /// @brief Field movementValue, offset: 0x34, size: 0x4, def value: None
  float_t ___movementValue;

  /// @brief Field side, offset: 0x38, size: 0x4, def value: None
  float_t ___side;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData, ___speed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData, ___startPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData, ___transform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData, ___startMovementValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData, ___movementValue) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData, ___side) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightPairSinMoveEventEffect
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightPairSinMoveEventEffect*
class CORDL_TYPE LightPairSinMoveEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MovementData = ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData;

  /// @brief Field _audioTimeSource, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _endPositionOffset, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get__endPositionOffset, put = __cordl_internal_set__endPositionOffset)) ::UnityEngine::Vector3 _endPositionOffset;

  /// @brief Field _eventL, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__eventL, put = __cordl_internal_set__eventL)) ::GlobalNamespace::BasicBeatmapEventType _eventL;

  /// @brief Field _eventR, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__eventR, put = __cordl_internal_set__eventR)) ::GlobalNamespace::BasicBeatmapEventType _eventR;

  /// @brief Field _movementDataL, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__movementDataL, put = __cordl_internal_set__movementDataL)) ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* _movementDataL;

  /// @brief Field _movementDataR, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__movementDataR, put = __cordl_internal_set__movementDataR)) ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* _movementDataR;

  /// @brief Field _overrideRandomValues, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideRandomValues, put = __cordl_internal_set__overrideRandomValues)) bool _overrideRandomValues;

  /// @brief Field _randomGenerationFrameNum, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__randomGenerationFrameNum, put = __cordl_internal_set__randomGenerationFrameNum)) int32_t _randomGenerationFrameNum;

  /// @brief Field _randomStartOffset, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__randomStartOffset, put = __cordl_internal_set__randomStartOffset)) float_t _randomStartOffset;

  /// @brief Field _startPositionOffset, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get__startPositionOffset, put = __cordl_internal_set__startPositionOffset)) ::UnityEngine::Vector3 _startPositionOffset;

  /// @brief Field _startValueOffset, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__startValueOffset, put = __cordl_internal_set__startValueOffset)) float_t _startValueOffset;

  /// @brief Field _switchOverrideRandomValuesEvent, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__switchOverrideRandomValuesEvent,
                      put = __cordl_internal_set__switchOverrideRandomValuesEvent)) ::GlobalNamespace::BasicBeatmapEventType _switchOverrideRandomValuesEvent;

  /// @brief Field _transformL, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__transformL, put = __cordl_internal_set__transformL)) ::UnityW<::UnityEngine::Transform> _transformL;

  /// @brief Field _transformR, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__transformR, put = __cordl_internal_set__transformR)) ::UnityW<::UnityEngine::Transform> _transformR;

  /// @brief Method HandleBeatmapEvent, addr 0x3b1a588, size 0x15c, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::LightPairSinMoveEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b1a56c, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b1a078, size 0x310, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b1a390, size 0x1dc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateMovementData, addr 0x3b1a6e4, size 0x138, virtual false, abstract: false, final false
  inline void UpdateMovementData(int32_t beatmapEventDataValue, ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* movementData, float_t movementValueOffset);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__endPositionOffset();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__eventL() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__eventL();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__eventR() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__eventR();

  constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*& __cordl_internal_get__movementDataL();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> const& __cordl_internal_get__movementDataL() const;

  constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*& __cordl_internal_get__movementDataR();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> const& __cordl_internal_get__movementDataR() const;

  constexpr bool const& __cordl_internal_get__overrideRandomValues() const;

  constexpr bool& __cordl_internal_get__overrideRandomValues();

  constexpr int32_t const& __cordl_internal_get__randomGenerationFrameNum() const;

  constexpr int32_t& __cordl_internal_get__randomGenerationFrameNum();

  constexpr float_t const& __cordl_internal_get__randomStartOffset() const;

  constexpr float_t& __cordl_internal_get__randomStartOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPositionOffset();

  constexpr float_t const& __cordl_internal_get__startValueOffset() const;

  constexpr float_t& __cordl_internal_get__startValueOffset();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__switchOverrideRandomValuesEvent() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__switchOverrideRandomValuesEvent();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transformL() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transformL();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transformR() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transformR();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__endPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__eventL(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__eventR(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__movementDataL(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* value);

  constexpr void __cordl_internal_set__movementDataR(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* value);

  constexpr void __cordl_internal_set__overrideRandomValues(bool value);

  constexpr void __cordl_internal_set__randomGenerationFrameNum(int32_t value);

  constexpr void __cordl_internal_set__randomStartOffset(float_t value);

  constexpr void __cordl_internal_set__startPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startValueOffset(float_t value);

  constexpr void __cordl_internal_set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__transformL(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__transformR(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3b1a81c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightPairSinMoveEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightPairSinMoveEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightPairSinMoveEventEffect(LightPairSinMoveEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightPairSinMoveEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightPairSinMoveEventEffect(LightPairSinMoveEventEffect const&) = delete;

  /// @brief Field _eventL, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____eventL;

  /// @brief Field _eventR, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____eventR;

  /// @brief Field _switchOverrideRandomValuesEvent, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____switchOverrideRandomValuesEvent;

  /// @brief Field _overrideRandomValues, offset: 0x2c, size: 0x1, def value: None
  bool ____overrideRandomValues;

  /// @brief Field _startValueOffset, offset: 0x30, size: 0x4, def value: None
  float_t ____startValueOffset;

  /// @brief Field _startPositionOffset, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPositionOffset;

  /// @brief Field _endPositionOffset, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPositionOffset;

  /// @brief Field _transformL, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transformL;

  /// @brief Field _transformR, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transformR;

  /// @brief Field _beatmapCallbacksController, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _movementDataL, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* ____movementDataL;

  /// @brief Field _movementDataR, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* ____movementDataR;

  /// @brief Field _randomGenerationFrameNum, offset: 0x80, size: 0x4, def value: None
  int32_t ____randomGenerationFrameNum;

  /// @brief Field _randomStartOffset, offset: 0x84, size: 0x4, def value: None
  float_t ____randomStartOffset;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4303 };

  /// @brief Field kSpeedMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kSpeedMultiplier{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightPairSinMoveEventEffect, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____eventL) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____eventR) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____switchOverrideRandomValuesEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____overrideRandomValues) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____startValueOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____startPositionOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____endPositionOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____transformL) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____transformR) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____beatmapCallbacksController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____audioTimeSource) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____movementDataL) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____movementDataR) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____randomGenerationFrameNum) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____randomStartOffset) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____beatmapDataCallbackWrapper) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightPairSinMoveEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightPairSinMoveEventEffect*, "", "LightPairSinMoveEventEffect");
NEED_NO_BOX(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, "", "LightPairSinMoveEventEffect/MovementData");
