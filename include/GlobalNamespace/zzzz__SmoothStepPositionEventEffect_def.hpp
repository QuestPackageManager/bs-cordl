#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothStepPositionEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SmoothStepPositionEventEffect)
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
class SmoothStepPositionEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmoothStepPositionEventEffect);
// Dependencies BasicBeatmapEventType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SmoothStepPositionEventEffect
class CORDL_TYPE SmoothStepPositionEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _clampValue, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__clampValue, put = __cordl_internal_set__clampValue)) bool _clampValue;

  /// @brief Field _event, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__event, put = __cordl_internal_set__event)) ::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _eventValueMax, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__eventValueMax, put = __cordl_internal_set__eventValueMax)) int32_t _eventValueMax;

  /// @brief Field _eventValueMin, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__eventValueMin, put = __cordl_internal_set__eventValueMin)) int32_t _eventValueMin;

  /// @brief Field _movementVector, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__movementVector, put = __cordl_internal_set__movementVector)) ::UnityEngine::Vector3 _movementVector;

  /// @brief Field _positionTween, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__positionTween, put = __cordl_internal_set__positionTween)) ::Tweening::Vector3Tween* _positionTween;

  /// @brief Field _startPos, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get__startPos, put = __cordl_internal_set__startPos)) ::UnityEngine::Vector3 _startPos;

  /// @brief Field _stepSize, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__stepSize, put = __cordl_internal_set__stepSize)) float_t _stepSize;

  /// @brief Field _transform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _tweeningManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Method Awake, addr 0x3b9e514, size 0x110, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetPositionForValue, addr 0x3b9e8c8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPositionForValue(int32_t value);

  /// @brief Method HandleBeatmapEvent, addr 0x3b9e7e8, size 0xe0, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::SmoothStepPositionEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b9e74c, size 0x9c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetPosition, addr 0x3b9e924, size 0x48, virtual false, abstract: false, final false
  inline void SetPosition(::UnityEngine::Vector3 position);

  /// @brief Method Start, addr 0x3b9e624, size 0x128, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr bool const& __cordl_internal_get__clampValue() const;

  constexpr bool& __cordl_internal_get__clampValue();

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

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__clampValue(bool value);

  constexpr void __cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__eventValueMax(int32_t value);

  constexpr void __cordl_internal_set__eventValueMin(int32_t value);

  constexpr void __cordl_internal_set__movementVector(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__positionTween(::Tweening::Vector3Tween* value);

  constexpr void __cordl_internal_set__startPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__stepSize(float_t value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x3b9e96c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothStepPositionEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothStepPositionEventEffect(SmoothStepPositionEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothStepPositionEventEffect(SmoothStepPositionEventEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4342 };

  /// @brief Field _event, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _clampValue, offset: 0x24, size: 0x1, def value: None
  bool ____clampValue;

  /// @brief Field _eventValueMin, offset: 0x28, size: 0x4, def value: None
  int32_t ____eventValueMin;

  /// @brief Field _eventValueMax, offset: 0x2c, size: 0x4, def value: None
  int32_t ____eventValueMax;

  /// @brief Field _movementVector, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____movementVector;

  /// @brief Field _stepSize, offset: 0x3c, size: 0x4, def value: None
  float_t ____stepSize;

  /// @brief Field _beatmapCallbacksController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _tweeningManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _positionTween, offset: 0x50, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____positionTween;

  /// @brief Field _transform, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _startPos, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____event) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____clampValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____eventValueMin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____eventValueMax) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____movementVector) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____stepSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____beatmapCallbacksController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____tweeningManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____positionTween) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____transform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____startPos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionEventEffect, ____beatmapDataCallbackWrapper) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothStepPositionEventEffect, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothStepPositionEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothStepPositionEventEffect*, "", "SmoothStepPositionEventEffect");
