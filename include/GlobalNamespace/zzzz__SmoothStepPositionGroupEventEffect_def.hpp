#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothStepPositionGroupEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SmoothStepPositionGroupEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace Tweening {
class Vector3Tween;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothStepPositionGroupEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmoothStepPositionGroupEventEffect);
// Dependencies BasicBeatmapEventType, EaseType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SmoothStepPositionGroupEventEffect
class CORDL_TYPE SmoothStepPositionGroupEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _baseOffset, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__baseOffset, put = __cordl_internal_set__baseOffset)) ::UnityEngine::Vector3 _baseOffset;

  /// @brief Field _beatmapCallbacksController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _clampValue, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__clampValue, put = __cordl_internal_set__clampValue)) bool _clampValue;

  /// @brief Field _easeType, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType, put = __cordl_internal_set__easeType)) ::GlobalNamespace::EaseType _easeType;

  /// @brief Field _elements, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__elements, put = __cordl_internal_set__elements)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> _elements;

  /// @brief Field _event, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__event, put = __cordl_internal_set__event)) ::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _eventValueMax, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__eventValueMax, put = __cordl_internal_set__eventValueMax)) int32_t _eventValueMax;

  /// @brief Field _eventValueMin, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__eventValueMin, put = __cordl_internal_set__eventValueMin)) int32_t _eventValueMin;

  /// @brief Field _movementVector, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__movementVector, put = __cordl_internal_set__movementVector)) ::UnityEngine::Vector3 _movementVector;

  /// @brief Field _positionTween, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__positionTween, put = __cordl_internal_set__positionTween)) ::Tweening::Vector3Tween* _positionTween;

  /// @brief Field _startPos, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get__startPos, put = __cordl_internal_set__startPos)) ::UnityEngine::Vector3 _startPos;

  /// @brief Field _stepSize, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__stepSize, put = __cordl_internal_set__stepSize)) float_t _stepSize;

  /// @brief Field _transform, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _tweeningManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Method Awake, addr 0x57ef140, size 0x17c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetPositionForValue, addr 0x57ef554, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPositionForValue(int32_t value);

  /// @brief Method HandleBeatmapEvent, addr 0x57ef484, size 0xd0, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::SmoothStepPositionGroupEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x57ef3e4, size 0xa0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetPosition, addr 0x57ef5a0, size 0x80, virtual false, abstract: false, final false
  inline void SetPosition(::UnityEngine::Vector3 position);

  /// @brief Method Start, addr 0x57ef2bc, size 0x128, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__baseOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__baseOffset();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr bool const& __cordl_internal_get__clampValue() const;

  constexpr bool& __cordl_internal_get__clampValue();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__elements() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__elements();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__event() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__event();

  constexpr int32_t const& __cordl_internal_get__eventValueMax() const;

  constexpr int32_t& __cordl_internal_get__eventValueMax();

  constexpr int32_t const& __cordl_internal_get__eventValueMin() const;

  constexpr int32_t& __cordl_internal_get__eventValueMin();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__movementVector() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__movementVector();

  constexpr ::Tweening::Vector3Tween* const& __cordl_internal_get__positionTween() const;

  constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__positionTween();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos();

  constexpr float_t const& __cordl_internal_get__stepSize() const;

  constexpr float_t& __cordl_internal_get__stepSize();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__baseOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__clampValue(bool value);

  constexpr void __cordl_internal_set__easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__elements(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__eventValueMax(int32_t value);

  constexpr void __cordl_internal_set__eventValueMin(int32_t value);

  constexpr void __cordl_internal_set__movementVector(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__positionTween(::Tweening::Vector3Tween* value);

  constexpr void __cordl_internal_set__startPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__stepSize(float_t value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x57ef620, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothStepPositionGroupEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionGroupEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothStepPositionGroupEventEffect(SmoothStepPositionGroupEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionGroupEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothStepPositionGroupEventEffect(SmoothStepPositionGroupEventEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5926 };

  /// @brief Field _event, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _elements, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____elements;

  /// @brief Field _clampValue, offset: 0x30, size: 0x1, def value: None
  bool ____clampValue;

  /// @brief Field _eventValueMin, offset: 0x34, size: 0x4, def value: None
  int32_t ____eventValueMin;

  /// @brief Field _eventValueMax, offset: 0x38, size: 0x4, def value: None
  int32_t ____eventValueMax;

  /// @brief Field _baseOffset, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____baseOffset;

  /// @brief Field _movementVector, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____movementVector;

  /// @brief Field _stepSize, offset: 0x54, size: 0x4, def value: None
  float_t ____stepSize;

  /// @brief Field _easeType, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType;

  /// @brief Field _beatmapCallbacksController, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _tweeningManager, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _positionTween, offset: 0x70, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____positionTween;

  /// @brief Field _transform, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _startPos, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____event) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____elements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____clampValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____eventValueMin) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____eventValueMax) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____baseOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____movementVector) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____stepSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____easeType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____beatmapCallbacksController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____tweeningManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____positionTween) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____transform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____startPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____beatmapDataCallbackWrapper) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothStepPositionGroupEventEffect, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothStepPositionGroupEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothStepPositionGroupEventEffect*, "", "SmoothStepPositionGroupEventEffect");
