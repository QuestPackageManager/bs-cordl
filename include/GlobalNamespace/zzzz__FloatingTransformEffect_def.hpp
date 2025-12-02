#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatingTransformEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatingTransformEffect)
namespace GlobalNamespace {
class IRandom;
}
namespace GlobalNamespace {
class TimeHelper;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatingTransformEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatingTransformEffect);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatingTransformEffect
class CORDL_TYPE FloatingTransformEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _amplitudeX, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__amplitudeX, put = __cordl_internal_set__amplitudeX)) float_t _amplitudeX;

  /// @brief Field _amplitudeY, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__amplitudeY, put = __cordl_internal_set__amplitudeY)) float_t _amplitudeY;

  /// @brief Field _amplitudeZ, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__amplitudeZ, put = __cordl_internal_set__amplitudeZ)) float_t _amplitudeZ;

  /// @brief Field _frequencyX, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__frequencyX, put = __cordl_internal_set__frequencyX)) float_t _frequencyX;

  /// @brief Field _frequencyY, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__frequencyY, put = __cordl_internal_set__frequencyY)) float_t _frequencyY;

  /// @brief Field _frequencyZ, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__frequencyZ, put = __cordl_internal_set__frequencyZ)) float_t _frequencyZ;

  /// @brief Field _maxRotationDegrees, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__maxRotationDegrees, put = __cordl_internal_set__maxRotationDegrees)) float_t _maxRotationDegrees;

  /// @brief Field _offsetX, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__offsetX, put = __cordl_internal_set__offsetX)) float_t _offsetX;

  /// @brief Field _offsetY, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__offsetY, put = __cordl_internal_set__offsetY)) float_t _offsetY;

  /// @brief Field _offsetZ, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__offsetZ, put = __cordl_internal_set__offsetZ)) float_t _offsetZ;

  /// @brief Field _origin, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get__origin, put = __cordl_internal_set__origin)) ::UnityEngine::Vector3 _origin;

  /// @brief Field _positionMultiplier, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__positionMultiplier, put = __cordl_internal_set__positionMultiplier)) ::UnityEngine::Vector3 _positionMultiplier;

  /// @brief Field _random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::GlobalNamespace::IRandom* _random;

  /// @brief Field _rotationMultiplier, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__rotationMultiplier, put = __cordl_internal_set__rotationMultiplier)) ::UnityEngine::Vector3 _rotationMultiplier;

  /// @brief Field _rotationTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationTransform, put = __cordl_internal_set__rotationTransform)) ::UnityW<::UnityEngine::Transform> _rotationTransform;

  /// @brief Field _targetRotation, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get__targetRotation, put = __cordl_internal_set__targetRotation)) ::UnityEngine::Quaternion _targetRotation;

  /// @brief Field _timeHelper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__timeHelper, put = __cordl_internal_set__timeHelper)) ::UnityW<::GlobalNamespace::TimeHelper> _timeHelper;

  /// @brief Field _transform, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _xAmplitude, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get__xAmplitude, put = __cordl_internal_set__xAmplitude)) ::UnityEngine::Vector2 _xAmplitude;

  /// @brief Field _xFrequency, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get__xFrequency, put = __cordl_internal_set__xFrequency)) ::UnityEngine::Vector2 _xFrequency;

  /// @brief Field _yAmplitude, offset 0x64, size 0x8
  __declspec(property(get = __cordl_internal_get__yAmplitude, put = __cordl_internal_set__yAmplitude)) ::UnityEngine::Vector2 _yAmplitude;

  /// @brief Field _yFrequency, offset 0x6c, size 0x8
  __declspec(property(get = __cordl_internal_get__yFrequency, put = __cordl_internal_set__yFrequency)) ::UnityEngine::Vector2 _yFrequency;

  /// @brief Field _zAmplitude, offset 0x74, size 0x8
  __declspec(property(get = __cordl_internal_get__zAmplitude, put = __cordl_internal_set__zAmplitude)) ::UnityEngine::Vector2 _zAmplitude;

  /// @brief Field _zFrequency, offset 0x7c, size 0x8
  __declspec(property(get = __cordl_internal_get__zFrequency, put = __cordl_internal_set__zFrequency)) ::UnityEngine::Vector2 _zFrequency;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method GetPoint, addr 0x576d98c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPoint(float_t time);

  static inline ::GlobalNamespace::FloatingTransformEffect* New_ctor();

  /// @brief Method Refresh, addr 0x576d6c4, size 0x168, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Start, addr 0x576d68c, size 0x38, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Tick, addr 0x576d82c, size 0x160, virtual true, abstract: false, final true
  inline void Tick();

  constexpr float_t const& __cordl_internal_get__amplitudeX() const;

  constexpr float_t& __cordl_internal_get__amplitudeX();

  constexpr float_t const& __cordl_internal_get__amplitudeY() const;

  constexpr float_t& __cordl_internal_get__amplitudeY();

  constexpr float_t const& __cordl_internal_get__amplitudeZ() const;

  constexpr float_t& __cordl_internal_get__amplitudeZ();

  constexpr float_t const& __cordl_internal_get__frequencyX() const;

  constexpr float_t& __cordl_internal_get__frequencyX();

  constexpr float_t const& __cordl_internal_get__frequencyY() const;

  constexpr float_t& __cordl_internal_get__frequencyY();

  constexpr float_t const& __cordl_internal_get__frequencyZ() const;

  constexpr float_t& __cordl_internal_get__frequencyZ();

  constexpr float_t const& __cordl_internal_get__maxRotationDegrees() const;

  constexpr float_t& __cordl_internal_get__maxRotationDegrees();

  constexpr float_t const& __cordl_internal_get__offsetX() const;

  constexpr float_t& __cordl_internal_get__offsetX();

  constexpr float_t const& __cordl_internal_get__offsetY() const;

  constexpr float_t& __cordl_internal_get__offsetY();

  constexpr float_t const& __cordl_internal_get__offsetZ() const;

  constexpr float_t& __cordl_internal_get__offsetZ();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__origin() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__origin();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__positionMultiplier() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__positionMultiplier();

  constexpr ::GlobalNamespace::IRandom* const& __cordl_internal_get__random() const;

  constexpr ::GlobalNamespace::IRandom*& __cordl_internal_get__random();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationMultiplier() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationMultiplier();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rotationTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rotationTransform();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__targetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__targetRotation();

  constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& __cordl_internal_get__timeHelper() const;

  constexpr ::UnityW<::GlobalNamespace::TimeHelper>& __cordl_internal_get__timeHelper();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__xAmplitude() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__xAmplitude();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__xFrequency() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__xFrequency();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__yAmplitude() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__yAmplitude();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__yFrequency() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__yFrequency();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__zAmplitude() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__zAmplitude();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__zFrequency() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__zFrequency();

  constexpr void __cordl_internal_set__amplitudeX(float_t value);

  constexpr void __cordl_internal_set__amplitudeY(float_t value);

  constexpr void __cordl_internal_set__amplitudeZ(float_t value);

  constexpr void __cordl_internal_set__frequencyX(float_t value);

  constexpr void __cordl_internal_set__frequencyY(float_t value);

  constexpr void __cordl_internal_set__frequencyZ(float_t value);

  constexpr void __cordl_internal_set__maxRotationDegrees(float_t value);

  constexpr void __cordl_internal_set__offsetX(float_t value);

  constexpr void __cordl_internal_set__offsetY(float_t value);

  constexpr void __cordl_internal_set__offsetZ(float_t value);

  constexpr void __cordl_internal_set__origin(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__positionMultiplier(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__random(::GlobalNamespace::IRandom* value);

  constexpr void __cordl_internal_set__rotationMultiplier(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rotationTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__targetRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__xAmplitude(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__xFrequency(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__yAmplitude(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__yFrequency(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__zAmplitude(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__zFrequency(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x576da18, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatingTransformEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatingTransformEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatingTransformEffect(FloatingTransformEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatingTransformEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatingTransformEffect(FloatingTransformEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5777 };

  /// @brief Field _random, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IRandom* ____random;

  /// @brief Field _timeHelper, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TimeHelper> ____timeHelper;

  /// @brief Field _positionMultiplier, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionMultiplier;

  /// @brief Field _rotationMultiplier, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationMultiplier;

  /// @brief Field _rotationTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rotationTransform;

  /// @brief Field _maxRotationDegrees, offset: 0x50, size: 0x4, def value: None
  float_t ____maxRotationDegrees;

  /// @brief Field _xAmplitude, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xAmplitude;

  /// @brief Field _xFrequency, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xFrequency;

  /// @brief Field _yAmplitude, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yAmplitude;

  /// @brief Field _yFrequency, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yFrequency;

  /// @brief Field _zAmplitude, offset: 0x74, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zAmplitude;

  /// @brief Field _zFrequency, offset: 0x7c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zFrequency;

  /// @brief Field _transform, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _origin, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____origin;

  /// @brief Field _offsetX, offset: 0x9c, size: 0x4, def value: None
  float_t ____offsetX;

  /// @brief Field _offsetY, offset: 0xa0, size: 0x4, def value: None
  float_t ____offsetY;

  /// @brief Field _offsetZ, offset: 0xa4, size: 0x4, def value: None
  float_t ____offsetZ;

  /// @brief Field _amplitudeX, offset: 0xa8, size: 0x4, def value: None
  float_t ____amplitudeX;

  /// @brief Field _amplitudeY, offset: 0xac, size: 0x4, def value: None
  float_t ____amplitudeY;

  /// @brief Field _amplitudeZ, offset: 0xb0, size: 0x4, def value: None
  float_t ____amplitudeZ;

  /// @brief Field _frequencyX, offset: 0xb4, size: 0x4, def value: None
  float_t ____frequencyX;

  /// @brief Field _frequencyY, offset: 0xb8, size: 0x4, def value: None
  float_t ____frequencyY;

  /// @brief Field _frequencyZ, offset: 0xbc, size: 0x4, def value: None
  float_t ____frequencyZ;

  /// @brief Field _targetRotation, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____targetRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____random) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____timeHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____positionMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____rotationMultiplier) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____rotationTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____maxRotationDegrees) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____xAmplitude) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____xFrequency) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____yAmplitude) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____yFrequency) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____zAmplitude) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____zFrequency) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____transform) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____origin) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____offsetX) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____offsetY) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____offsetZ) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____amplitudeX) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____amplitudeY) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____amplitudeZ) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____frequencyX) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____frequencyY) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____frequencyZ) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____targetRotation) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatingTransformEffect, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatingTransformEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatingTransformEffect*, "", "FloatingTransformEffect");
