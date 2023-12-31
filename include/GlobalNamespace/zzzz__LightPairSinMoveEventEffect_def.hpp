#pragma once
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4951))
// CS Name: ::LightPairSinMoveEventEffect::MovementData*
class CORDL_TYPE __LightPairSinMoveEventEffect__MovementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __get_enabled, put = __set_enabled)) bool enabled;

  /// @brief Field speed, offset 0x14, size 0x4
  __declspec(property(get = __get_speed, put = __set_speed)) float_t speed;

  /// @brief Field startPosition, offset 0x18, size 0xc
  __declspec(property(get = __get_startPosition, put = __set_startPosition))::UnityEngine::Vector3 startPosition;

  /// @brief Field transform, offset 0x28, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field startMovementValue, offset 0x30, size 0x4
  __declspec(property(get = __get_startMovementValue, put = __set_startMovementValue)) float_t startMovementValue;

  /// @brief Field movementValue, offset 0x34, size 0x4
  __declspec(property(get = __get_movementValue, put = __set_movementValue)) float_t movementValue;

  /// @brief Field side, offset 0x38, size 0x4
  __declspec(property(get = __get_side, put = __set_side)) float_t side;

  constexpr bool& __get_enabled();

  constexpr bool const& __get_enabled() const;

  constexpr void __set_enabled(bool value);

  constexpr float_t& __get_speed();

  constexpr float_t const& __get_speed() const;

  constexpr void __set_speed(float_t value);

  constexpr ::UnityEngine::Vector3& __get_startPosition();

  constexpr ::UnityEngine::Vector3 const& __get_startPosition() const;

  constexpr void __set_startPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr float_t& __get_startMovementValue();

  constexpr float_t const& __get_startMovementValue() const;

  constexpr void __set_startMovementValue(float_t value);

  constexpr float_t& __get_movementValue();

  constexpr float_t const& __get_movementValue() const;

  constexpr void __set_movementValue(float_t value);

  constexpr float_t& __get_side();

  constexpr float_t const& __get_side() const;

  constexpr void __set_side(float_t value);

  static inline ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* New_ctor();

  /// @brief Method .ctor, addr 0x23ad0ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LightPairSinMoveEventEffect__MovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightPairSinMoveEventEffect__MovementData(__LightPairSinMoveEventEffect__MovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightPairSinMoveEventEffect__MovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightPairSinMoveEventEffect__MovementData(__LightPairSinMoveEventEffect__MovementData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightPairSinMoveEventEffect__MovementData();

public:
  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field speed, offset: 0x14, size: 0x4, def value: None
  float_t ___speed;

  /// @brief Field startPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___startPosition;

  /// @brief Field transform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___transform;

  /// @brief Field startMovementValue, offset: 0x30, size: 0x4, def value: None
  float_t ___startMovementValue;

  /// @brief Field movementValue, offset: 0x34, size: 0x4, def value: None
  float_t ___movementValue;

  /// @brief Field side, offset: 0x38, size: 0x4, def value: None
  float_t ___side;

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
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(14724)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4952))
// CS Name: ::LightPairSinMoveEventEffect*
class CORDL_TYPE LightPairSinMoveEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MovementData = ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData;

  /// @brief Field _eventL, offset 0x18, size 0x4
  __declspec(property(get = __get__eventL, put = __set__eventL))::GlobalNamespace::BasicBeatmapEventType _eventL;

  /// @brief Field _eventR, offset 0x1c, size 0x4
  __declspec(property(get = __get__eventR, put = __set__eventR))::GlobalNamespace::BasicBeatmapEventType _eventR;

  /// @brief Field _switchOverrideRandomValuesEvent, offset 0x20, size 0x4
  __declspec(property(get = __get__switchOverrideRandomValuesEvent, put = __set__switchOverrideRandomValuesEvent))::GlobalNamespace::BasicBeatmapEventType _switchOverrideRandomValuesEvent;

  /// @brief Field _overrideRandomValues, offset 0x24, size 0x1
  __declspec(property(get = __get__overrideRandomValues, put = __set__overrideRandomValues)) bool _overrideRandomValues;

  /// @brief Field _startValueOffset, offset 0x28, size 0x4
  __declspec(property(get = __get__startValueOffset, put = __set__startValueOffset)) float_t _startValueOffset;

  /// @brief Field _startPositionOffset, offset 0x2c, size 0xc
  __declspec(property(get = __get__startPositionOffset, put = __set__startPositionOffset))::UnityEngine::Vector3 _startPositionOffset;

  /// @brief Field _endPositionOffset, offset 0x38, size 0xc
  __declspec(property(get = __get__endPositionOffset, put = __set__endPositionOffset))::UnityEngine::Vector3 _endPositionOffset;

  /// @brief Field _transformL, offset 0x48, size 0x8
  __declspec(property(get = __get__transformL, put = __set__transformL))::UnityEngine::Transform* _transformL;

  /// @brief Field _transformR, offset 0x50, size 0x8
  __declspec(property(get = __get__transformR, put = __set__transformR))::UnityEngine::Transform* _transformR;

  /// @brief Field _beatmapCallbacksController, offset 0x58, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset 0x60, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _movementDataL, offset 0x68, size 0x8
  __declspec(property(get = __get__movementDataL, put = __set__movementDataL))::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* _movementDataL;

  /// @brief Field _movementDataR, offset 0x70, size 0x8
  __declspec(property(get = __get__movementDataR, put = __set__movementDataR))::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* _movementDataR;

  /// @brief Field _randomGenerationFrameNum, offset 0x78, size 0x4
  __declspec(property(get = __get__randomGenerationFrameNum, put = __set__randomGenerationFrameNum)) int32_t _randomGenerationFrameNum;

  /// @brief Field _randomStartOffset, offset 0x7c, size 0x4
  __declspec(property(get = __get__randomStartOffset, put = __set__randomStartOffset)) float_t _randomStartOffset;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x80, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__eventL();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__eventL() const;

  constexpr void __set__eventL(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__eventR();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__eventR() const;

  constexpr void __set__eventR(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__switchOverrideRandomValuesEvent();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__switchOverrideRandomValuesEvent() const;

  constexpr void __set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr bool& __get__overrideRandomValues();

  constexpr bool const& __get__overrideRandomValues() const;

  constexpr void __set__overrideRandomValues(bool value);

  constexpr float_t& __get__startValueOffset();

  constexpr float_t const& __get__startValueOffset() const;

  constexpr void __set__startValueOffset(float_t value);

  constexpr ::UnityEngine::Vector3& __get__startPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__startPositionOffset() const;

  constexpr void __set__startPositionOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__endPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__endPositionOffset() const;

  constexpr void __set__endPositionOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get__transformL();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transformL() const;

  constexpr void __set__transformL(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__transformR();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transformR() const;

  constexpr void __set__transformR(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*& __get__movementDataL();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> const& __get__movementDataL() const;

  constexpr void __set__movementDataL(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* value);

  constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*& __get__movementDataR();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> const& __get__movementDataR() const;

  constexpr void __set__movementDataR(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* value);

  constexpr int32_t& __get__randomGenerationFrameNum();

  constexpr int32_t const& __get__randomGenerationFrameNum() const;

  constexpr void __set__randomGenerationFrameNum(int32_t value);

  constexpr float_t& __get__randomStartOffset();

  constexpr float_t const& __get__randomStartOffset() const;

  constexpr void __set__randomStartOffset(float_t value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start, addr 0x23acddc, size 0x310, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x23ad0f4, size 0x1d8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method OnDestroy, addr 0x23ad2cc, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapEvent, addr 0x23ad2e8, size 0x15c, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method UpdateMovementData, addr 0x23ad444, size 0x138, virtual false, abstract: false, final false
  inline void UpdateMovementData(int32_t beatmapEventDataValue, ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* movementData, float_t movementValueOffset);

  static inline ::GlobalNamespace::LightPairSinMoveEventEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23ad57c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightPairSinMoveEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightPairSinMoveEventEffect(LightPairSinMoveEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightPairSinMoveEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightPairSinMoveEventEffect(LightPairSinMoveEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightPairSinMoveEventEffect();

public:
  /// @brief Field _eventL, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____eventL;

  /// @brief Field _eventR, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____eventR;

  /// @brief Field _switchOverrideRandomValuesEvent, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____switchOverrideRandomValuesEvent;

  /// @brief Field _overrideRandomValues, offset: 0x24, size: 0x1, def value: None
  bool ____overrideRandomValues;

  /// @brief Field _startValueOffset, offset: 0x28, size: 0x4, def value: None
  float_t ____startValueOffset;

  /// @brief Field _startPositionOffset, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPositionOffset;

  /// @brief Field _endPositionOffset, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPositionOffset;

  /// @brief Field _transformL, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transformL;

  /// @brief Field _transformR, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transformR;

  /// @brief Field _beatmapCallbacksController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _movementDataL, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* ____movementDataL;

  /// @brief Field _movementDataR, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* ____movementDataR;

  /// @brief Field _randomGenerationFrameNum, offset: 0x78, size: 0x4, def value: None
  int32_t ____randomGenerationFrameNum;

  /// @brief Field _randomStartOffset, offset: 0x7c, size: 0x4, def value: None
  float_t ____randomStartOffset;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief Field kSpeedMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kSpeedMultiplier{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightPairSinMoveEventEffect, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____eventL) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____eventR) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____switchOverrideRandomValuesEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____overrideRandomValues) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____startValueOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____startPositionOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____endPositionOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____transformL) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____transformR) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____beatmapCallbacksController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____audioTimeSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____movementDataL) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____movementDataR) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____randomGenerationFrameNum) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____randomStartOffset) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightPairSinMoveEventEffect, ____beatmapDataCallbackWrapper) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightPairSinMoveEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightPairSinMoveEventEffect*, "", "LightPairSinMoveEventEffect");
NEED_NO_BOX(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, "", "LightPairSinMoveEventEffect/MovementData");
