#pragma once
// IWYU pragma private; include "GlobalNamespace/PhysicsPositionsMovementEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicsPositionsMovementEventEffect)
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
class SongTimeFixedUpdateController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PhysicsPositionsMovementEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PhysicsPositionsMovementEventEffect);
// Dependencies BasicBeatmapEventType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhysicsPositionsMovementEventEffect
class CORDL_TYPE PhysicsPositionsMovementEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _elasticity, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__elasticity, put = __cordl_internal_set__elasticity)) float_t _elasticity;

  /// @brief Field _event, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__event, put = __cordl_internal_set__event)) ::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _friction, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__friction, put = __cordl_internal_set__friction)) float_t _friction;

  /// @brief Field _maxAcceleration, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAcceleration, put = __cordl_internal_set__maxAcceleration)) float_t _maxAcceleration;

  /// @brief Field _maxMaxSpeed, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__maxMaxSpeed, put = __cordl_internal_set__maxMaxSpeed)) float_t _maxMaxSpeed;

  /// @brief Field _maxSpeed, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxSpeed, put = __cordl_internal_set__maxSpeed)) float_t _maxSpeed;

  /// @brief Field _minMaxSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__minMaxSpeed, put = __cordl_internal_set__minMaxSpeed)) float_t _minMaxSpeed;

  /// @brief Field _movementVector, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__movementVector, put = __cordl_internal_set__movementVector)) ::UnityEngine::Vector3 _movementVector;

  /// @brief Field _position, offset 0x84, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) ::UnityEngine::Vector3 _position;

  /// @brief Field _prevPosition, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get__prevPosition, put = __cordl_internal_set__prevPosition)) ::UnityEngine::Vector3 _prevPosition;

  /// @brief Field _songTimeFixedUpdateController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimeFixedUpdateController, put = __cordl_internal_set__songTimeFixedUpdateController)) ::UnityW<::GlobalNamespace::SongTimeFixedUpdateController>
      _songTimeFixedUpdateController;

  /// @brief Field _sqrMaxSpeed, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__sqrMaxSpeed, put = __cordl_internal_set__sqrMaxSpeed)) float_t _sqrMaxSpeed;

  /// @brief Field _startPos, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get__startPos, put = __cordl_internal_set__startPos)) ::UnityEngine::Vector3 _startPos;

  /// @brief Field _stepSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__stepSize, put = __cordl_internal_set__stepSize)) float_t _stepSize;

  /// @brief Field _targetPosition, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get__targetPosition, put = __cordl_internal_set__targetPosition)) ::UnityEngine::Vector3 _targetPosition;

  /// @brief Field _transform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _velocity, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get__velocity, put = __cordl_internal_set__velocity)) ::UnityEngine::Vector3 _velocity;

  /// @brief Method HandleBeatmapEvent, addr 0x3b98f7c, size 0x7c, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method HandleSongTimeFixedUpdate, addr 0x3b98e30, size 0xdc, virtual false, abstract: false, final false
  inline void HandleSongTimeFixedUpdate(float_t fixedDeltaTime);

  /// @brief Method HandleSongTimeUpdate, addr 0x3b98f0c, size 0x70, virtual false, abstract: false, final false
  inline void HandleSongTimeUpdate();

  static inline ::GlobalNamespace::PhysicsPositionsMovementEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b98cf0, size 0x140, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b98aac, size 0x244, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr float_t const& __cordl_internal_get__elasticity() const;

  constexpr float_t& __cordl_internal_get__elasticity();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__event() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__event();

  constexpr float_t const& __cordl_internal_get__friction() const;

  constexpr float_t& __cordl_internal_get__friction();

  constexpr float_t const& __cordl_internal_get__maxAcceleration() const;

  constexpr float_t& __cordl_internal_get__maxAcceleration();

  constexpr float_t const& __cordl_internal_get__maxMaxSpeed() const;

  constexpr float_t& __cordl_internal_get__maxMaxSpeed();

  constexpr float_t const& __cordl_internal_get__maxSpeed() const;

  constexpr float_t& __cordl_internal_get__maxSpeed();

  constexpr float_t const& __cordl_internal_get__minMaxSpeed() const;

  constexpr float_t& __cordl_internal_get__minMaxSpeed();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__movementVector() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__movementVector();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__prevPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__prevPosition();

  constexpr ::UnityW<::GlobalNamespace::SongTimeFixedUpdateController> const& __cordl_internal_get__songTimeFixedUpdateController() const;

  constexpr ::UnityW<::GlobalNamespace::SongTimeFixedUpdateController>& __cordl_internal_get__songTimeFixedUpdateController();

  constexpr float_t const& __cordl_internal_get__sqrMaxSpeed() const;

  constexpr float_t& __cordl_internal_get__sqrMaxSpeed();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos();

  constexpr float_t const& __cordl_internal_get__stepSize() const;

  constexpr float_t& __cordl_internal_get__stepSize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__velocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__velocity();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__elasticity(float_t value);

  constexpr void __cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__friction(float_t value);

  constexpr void __cordl_internal_set__maxAcceleration(float_t value);

  constexpr void __cordl_internal_set__maxMaxSpeed(float_t value);

  constexpr void __cordl_internal_set__maxSpeed(float_t value);

  constexpr void __cordl_internal_set__minMaxSpeed(float_t value);

  constexpr void __cordl_internal_set__movementVector(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__prevPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__songTimeFixedUpdateController(::UnityW<::GlobalNamespace::SongTimeFixedUpdateController> value);

  constexpr void __cordl_internal_set__sqrMaxSpeed(float_t value);

  constexpr void __cordl_internal_set__startPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__stepSize(float_t value);

  constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__velocity(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3b98ff8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsPositionsMovementEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsPositionsMovementEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsPositionsMovementEventEffect(PhysicsPositionsMovementEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsPositionsMovementEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsPositionsMovementEventEffect(PhysicsPositionsMovementEventEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4336 };

  /// @brief Field _event, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _movementVector, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____movementVector;

  /// @brief Field _stepSize, offset: 0x30, size: 0x4, def value: None
  float_t ____stepSize;

  /// @brief Field _elasticity, offset: 0x34, size: 0x4, def value: None
  float_t ____elasticity;

  /// @brief Field _friction, offset: 0x38, size: 0x4, def value: None
  float_t ____friction;

  /// @brief Field _minMaxSpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ____minMaxSpeed;

  /// @brief Field _maxMaxSpeed, offset: 0x40, size: 0x4, def value: None
  float_t ____maxMaxSpeed;

  /// @brief Field _maxAcceleration, offset: 0x44, size: 0x4, def value: None
  float_t ____maxAcceleration;

  /// @brief Field _beatmapCallbacksController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _songTimeFixedUpdateController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongTimeFixedUpdateController> ____songTimeFixedUpdateController;

  /// @brief Field _transform, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _startPos, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _velocity, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____velocity;

  /// @brief Field _prevPosition, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevPosition;

  /// @brief Field _position, offset: 0x84, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _targetPosition, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetPosition;

  /// @brief Field _maxSpeed, offset: 0x9c, size: 0x4, def value: None
  float_t ____maxSpeed;

  /// @brief Field _sqrMaxSpeed, offset: 0xa0, size: 0x4, def value: None
  float_t ____sqrMaxSpeed;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____event) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____movementVector) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____stepSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____elasticity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____friction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____minMaxSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____maxMaxSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____maxAcceleration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____beatmapCallbacksController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____songTimeFixedUpdateController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____transform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____startPos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____velocity) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____prevPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____position) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____targetPosition) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____maxSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____sqrMaxSpeed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____beatmapDataCallbackWrapper) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PhysicsPositionsMovementEventEffect, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PhysicsPositionsMovementEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicsPositionsMovementEventEffect*, "", "PhysicsPositionsMovementEventEffect");
