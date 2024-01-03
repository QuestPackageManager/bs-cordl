#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicsPositionsMovementEventEffect)
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class SongTimeFixedUpdateController;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class PhysicsPositionsMovementEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PhysicsPositionsMovementEventEffect);
// Type: ::PhysicsPositionsMovementEventEffect
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14724)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4968))
// CS Name: ::PhysicsPositionsMovementEventEffect*
class CORDL_TYPE PhysicsPositionsMovementEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _event, offset 0x18, size 0x4
  __declspec(property(get = __get__event, put = __set__event))::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _movementVector, offset 0x1c, size 0xc
  __declspec(property(get = __get__movementVector, put = __set__movementVector))::UnityEngine::Vector3 _movementVector;

  /// @brief Field _stepSize, offset 0x28, size 0x4
  __declspec(property(get = __get__stepSize, put = __set__stepSize)) float_t _stepSize;

  /// @brief Field _elasticity, offset 0x2c, size 0x4
  __declspec(property(get = __get__elasticity, put = __set__elasticity)) float_t _elasticity;

  /// @brief Field _friction, offset 0x30, size 0x4
  __declspec(property(get = __get__friction, put = __set__friction)) float_t _friction;

  /// @brief Field _minMaxSpeed, offset 0x34, size 0x4
  __declspec(property(get = __get__minMaxSpeed, put = __set__minMaxSpeed)) float_t _minMaxSpeed;

  /// @brief Field _maxMaxSpeed, offset 0x38, size 0x4
  __declspec(property(get = __get__maxMaxSpeed, put = __set__maxMaxSpeed)) float_t _maxMaxSpeed;

  /// @brief Field _maxAcceleration, offset 0x3c, size 0x4
  __declspec(property(get = __get__maxAcceleration, put = __set__maxAcceleration)) float_t _maxAcceleration;

  /// @brief Field _beatmapCallbacksController, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _songTimeFixedUpdateController, offset 0x48, size 0x8
  __declspec(property(get = __get__songTimeFixedUpdateController, put = __set__songTimeFixedUpdateController))::GlobalNamespace::SongTimeFixedUpdateController* _songTimeFixedUpdateController;

  /// @brief Field _transform, offset 0x50, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _startPos, offset 0x58, size 0xc
  __declspec(property(get = __get__startPos, put = __set__startPos))::UnityEngine::Vector3 _startPos;

  /// @brief Field _velocity, offset 0x64, size 0xc
  __declspec(property(get = __get__velocity, put = __set__velocity))::UnityEngine::Vector3 _velocity;

  /// @brief Field _prevPosition, offset 0x70, size 0xc
  __declspec(property(get = __get__prevPosition, put = __set__prevPosition))::UnityEngine::Vector3 _prevPosition;

  /// @brief Field _position, offset 0x7c, size 0xc
  __declspec(property(get = __get__position, put = __set__position))::UnityEngine::Vector3 _position;

  /// @brief Field _targetPosition, offset 0x88, size 0xc
  __declspec(property(get = __get__targetPosition, put = __set__targetPosition))::UnityEngine::Vector3 _targetPosition;

  /// @brief Field _maxSpeed, offset 0x94, size 0x4
  __declspec(property(get = __get__maxSpeed, put = __set__maxSpeed)) float_t _maxSpeed;

  /// @brief Field _sqrMaxSpeed, offset 0x98, size 0x4
  __declspec(property(get = __get__sqrMaxSpeed, put = __set__sqrMaxSpeed)) float_t _sqrMaxSpeed;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0xa0, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__event();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__event() const;

  constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::UnityEngine::Vector3& __get__movementVector();

  constexpr ::UnityEngine::Vector3 const& __get__movementVector() const;

  constexpr void __set__movementVector(::UnityEngine::Vector3 value);

  constexpr float_t& __get__stepSize();

  constexpr float_t const& __get__stepSize() const;

  constexpr void __set__stepSize(float_t value);

  constexpr float_t& __get__elasticity();

  constexpr float_t const& __get__elasticity() const;

  constexpr void __set__elasticity(float_t value);

  constexpr float_t& __get__friction();

  constexpr float_t const& __get__friction() const;

  constexpr void __set__friction(float_t value);

  constexpr float_t& __get__minMaxSpeed();

  constexpr float_t const& __get__minMaxSpeed() const;

  constexpr void __set__minMaxSpeed(float_t value);

  constexpr float_t& __get__maxMaxSpeed();

  constexpr float_t const& __get__maxMaxSpeed() const;

  constexpr void __set__maxMaxSpeed(float_t value);

  constexpr float_t& __get__maxAcceleration();

  constexpr float_t const& __get__maxAcceleration() const;

  constexpr void __set__maxAcceleration(float_t value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::SongTimeFixedUpdateController*& __get__songTimeFixedUpdateController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongTimeFixedUpdateController*> const& __get__songTimeFixedUpdateController() const;

  constexpr void __set__songTimeFixedUpdateController(::GlobalNamespace::SongTimeFixedUpdateController* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__startPos();

  constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

  constexpr void __set__startPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__velocity();

  constexpr ::UnityEngine::Vector3 const& __get__velocity() const;

  constexpr void __set__velocity(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__prevPosition();

  constexpr ::UnityEngine::Vector3 const& __get__prevPosition() const;

  constexpr void __set__prevPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__position();

  constexpr ::UnityEngine::Vector3 const& __get__position() const;

  constexpr void __set__position(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__targetPosition();

  constexpr ::UnityEngine::Vector3 const& __get__targetPosition() const;

  constexpr void __set__targetPosition(::UnityEngine::Vector3 value);

  constexpr float_t& __get__maxSpeed();

  constexpr float_t const& __get__maxSpeed() const;

  constexpr void __set__maxSpeed(float_t value);

  constexpr float_t& __get__sqrMaxSpeed();

  constexpr float_t const& __get__sqrMaxSpeed() const;

  constexpr void __set__sqrMaxSpeed(float_t value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start, addr 0x23b0b88, size 0x248, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23b0dd0, size 0x154, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleSongTimeFixedUpdate, addr 0x23b0f24, size 0xdc, virtual false, abstract: false, final false
  inline void HandleSongTimeFixedUpdate(float_t fixedDeltaTime);

  /// @brief Method HandleSongTimeUpdate, addr 0x23b1000, size 0x70, virtual false, abstract: false, final false
  inline void HandleSongTimeUpdate();

  /// @brief Method HandleBeatmapEvent, addr 0x23b1070, size 0x7c, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::PhysicsPositionsMovementEventEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23b10ec, size 0x107c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsPositionsMovementEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsPositionsMovementEventEffect(PhysicsPositionsMovementEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsPositionsMovementEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsPositionsMovementEventEffect(PhysicsPositionsMovementEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsPositionsMovementEventEffect();

public:
  /// @brief Field _event, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _movementVector, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____movementVector;

  /// @brief Field _stepSize, offset: 0x28, size: 0x4, def value: None
  float_t ____stepSize;

  /// @brief Field _elasticity, offset: 0x2c, size: 0x4, def value: None
  float_t ____elasticity;

  /// @brief Field _friction, offset: 0x30, size: 0x4, def value: None
  float_t ____friction;

  /// @brief Field _minMaxSpeed, offset: 0x34, size: 0x4, def value: None
  float_t ____minMaxSpeed;

  /// @brief Field _maxMaxSpeed, offset: 0x38, size: 0x4, def value: None
  float_t ____maxMaxSpeed;

  /// @brief Field _maxAcceleration, offset: 0x3c, size: 0x4, def value: None
  float_t ____maxAcceleration;

  /// @brief Field _beatmapCallbacksController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _songTimeFixedUpdateController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::SongTimeFixedUpdateController* ____songTimeFixedUpdateController;

  /// @brief Field _transform, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _startPos, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _velocity, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____velocity;

  /// @brief Field _prevPosition, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____prevPosition;

  /// @brief Field _position, offset: 0x7c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _targetPosition, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetPosition;

  /// @brief Field _maxSpeed, offset: 0x94, size: 0x4, def value: None
  float_t ____maxSpeed;

  /// @brief Field _sqrMaxSpeed, offset: 0x98, size: 0x4, def value: None
  float_t ____sqrMaxSpeed;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PhysicsPositionsMovementEventEffect, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____event) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____movementVector) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____stepSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____elasticity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____friction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____minMaxSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____maxMaxSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____maxAcceleration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____beatmapCallbacksController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____songTimeFixedUpdateController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____transform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____startPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____velocity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____prevPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____position) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____targetPosition) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____maxSpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____sqrMaxSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsPositionsMovementEventEffect, ____beatmapDataCallbackWrapper) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PhysicsPositionsMovementEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicsPositionsMovementEventEffect*, "", "PhysicsPositionsMovementEventEffect");
