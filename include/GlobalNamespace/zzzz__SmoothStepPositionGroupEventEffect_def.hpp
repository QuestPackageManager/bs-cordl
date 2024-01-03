#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::SmoothStepPositionGroupEventEffect
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16090)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14724)),
// TypeDefinitionIndex(TypeDefinitionIndex(10249))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4971)) CS Name: ::SmoothStepPositionGroupEventEffect*
class CORDL_TYPE SmoothStepPositionGroupEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _event, offset 0x18, size 0x4
  __declspec(property(get = __get__event, put = __set__event))::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _elements, offset 0x20, size 0x8
  __declspec(property(get = __get__elements, put = __set__elements))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> _elements;

  /// @brief Field _clampValue, offset 0x28, size 0x1
  __declspec(property(get = __get__clampValue, put = __set__clampValue)) bool _clampValue;

  /// @brief Field _eventValueMin, offset 0x2c, size 0x4
  __declspec(property(get = __get__eventValueMin, put = __set__eventValueMin)) int32_t _eventValueMin;

  /// @brief Field _eventValueMax, offset 0x30, size 0x4
  __declspec(property(get = __get__eventValueMax, put = __set__eventValueMax)) int32_t _eventValueMax;

  /// @brief Field _baseOffset, offset 0x34, size 0xc
  __declspec(property(get = __get__baseOffset, put = __set__baseOffset))::UnityEngine::Vector3 _baseOffset;

  /// @brief Field _movementVector, offset 0x40, size 0xc
  __declspec(property(get = __get__movementVector, put = __set__movementVector))::UnityEngine::Vector3 _movementVector;

  /// @brief Field _stepSize, offset 0x4c, size 0x4
  __declspec(property(get = __get__stepSize, put = __set__stepSize)) float_t _stepSize;

  /// @brief Field _easeType, offset 0x50, size 0x4
  __declspec(property(get = __get__easeType, put = __set__easeType))::GlobalNamespace::EaseType _easeType;

  /// @brief Field _beatmapCallbacksController, offset 0x58, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _tweeningManager, offset 0x60, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::SongTimeTweeningManager* _tweeningManager;

  /// @brief Field _positionTween, offset 0x68, size 0x8
  __declspec(property(get = __get__positionTween, put = __set__positionTween))::Tweening::Vector3Tween* _positionTween;

  /// @brief Field _transform, offset 0x70, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _startPos, offset 0x78, size 0xc
  __declspec(property(get = __get__startPos, put = __set__startPos))::UnityEngine::Vector3 _startPos;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x88, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__event();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__event() const;

  constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get__elements();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get__elements() const;

  constexpr void __set__elements(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr bool& __get__clampValue();

  constexpr bool const& __get__clampValue() const;

  constexpr void __set__clampValue(bool value);

  constexpr int32_t& __get__eventValueMin();

  constexpr int32_t const& __get__eventValueMin() const;

  constexpr void __set__eventValueMin(int32_t value);

  constexpr int32_t& __get__eventValueMax();

  constexpr int32_t const& __get__eventValueMax() const;

  constexpr void __set__eventValueMax(int32_t value);

  constexpr ::UnityEngine::Vector3& __get__baseOffset();

  constexpr ::UnityEngine::Vector3 const& __get__baseOffset() const;

  constexpr void __set__baseOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__movementVector();

  constexpr ::UnityEngine::Vector3 const& __get__movementVector() const;

  constexpr void __set__movementVector(::UnityEngine::Vector3 value);

  constexpr float_t& __get__stepSize();

  constexpr float_t const& __get__stepSize() const;

  constexpr void __set__stepSize(float_t value);

  constexpr ::GlobalNamespace::EaseType& __get__easeType();

  constexpr ::GlobalNamespace::EaseType const& __get__easeType() const;

  constexpr void __set__easeType(::GlobalNamespace::EaseType value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::Tweening::SongTimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager* value);

  constexpr ::Tweening::Vector3Tween*& __get__positionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __get__positionTween() const;

  constexpr void __set__positionTween(::Tweening::Vector3Tween* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__startPos();

  constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

  constexpr void __set__startPos(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Awake, addr 0x23b28f0, size 0x11c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x23b2a0c, size 0x124, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23b2b30, size 0x9c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapEvent, addr 0x23b2bcc, size 0xdc, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method GetPositionForValue, addr 0x23b2ca8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPositionForValue(int32_t value);

  /// @brief Method SetPosition, addr 0x23b2d04, size 0x8c, virtual false, abstract: false, final false
  inline void SetPosition(::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::SmoothStepPositionGroupEventEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23b2d90, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionGroupEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothStepPositionGroupEventEffect(SmoothStepPositionGroupEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionGroupEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothStepPositionGroupEventEffect(SmoothStepPositionGroupEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothStepPositionGroupEventEffect();

public:
  /// @brief Field _event, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _elements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ____elements;

  /// @brief Field _clampValue, offset: 0x28, size: 0x1, def value: None
  bool ____clampValue;

  /// @brief Field _eventValueMin, offset: 0x2c, size: 0x4, def value: None
  int32_t ____eventValueMin;

  /// @brief Field _eventValueMax, offset: 0x30, size: 0x4, def value: None
  int32_t ____eventValueMax;

  /// @brief Field _baseOffset, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____baseOffset;

  /// @brief Field _movementVector, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____movementVector;

  /// @brief Field _stepSize, offset: 0x4c, size: 0x4, def value: None
  float_t ____stepSize;

  /// @brief Field _easeType, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType;

  /// @brief Field _beatmapCallbacksController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _tweeningManager, offset: 0x60, size: 0x8, def value: None
  ::Tweening::SongTimeTweeningManager* ____tweeningManager;

  /// @brief Field _positionTween, offset: 0x68, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____positionTween;

  /// @brief Field _transform, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _startPos, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothStepPositionGroupEventEffect, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____event) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____elements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____clampValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____eventValueMin) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____eventValueMax) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____baseOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____movementVector) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____stepSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____easeType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____beatmapCallbacksController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____tweeningManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____positionTween) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____transform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____startPos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothStepPositionGroupEventEffect, ____beatmapDataCallbackWrapper) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothStepPositionGroupEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothStepPositionGroupEventEffect*, "", "SmoothStepPositionGroupEventEffect");
