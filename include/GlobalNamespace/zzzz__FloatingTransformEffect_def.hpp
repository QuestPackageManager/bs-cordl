#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatingTransformEffect)
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
// Type: ::FloatingTransformEffect
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10249)),
// TypeDefinitionIndex(TypeDefinitionIndex(10225))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4850)) CS Name: ::FloatingTransformEffect*
class CORDL_TYPE FloatingTransformEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _positionMultiplier, offset 0x18, size 0xc
  __declspec(property(get = __get__positionMultiplier, put = __set__positionMultiplier))::UnityEngine::Vector3 _positionMultiplier;

  /// @brief Field _rotationMultiplier, offset 0x24, size 0xc
  __declspec(property(get = __get__rotationMultiplier, put = __set__rotationMultiplier))::UnityEngine::Vector3 _rotationMultiplier;

  /// @brief Field _rotationTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__rotationTransform, put = __set__rotationTransform))::UnityEngine::Transform* _rotationTransform;

  /// @brief Field _maxRotationDegrees, offset 0x38, size 0x4
  __declspec(property(get = __get__maxRotationDegrees, put = __set__maxRotationDegrees)) float_t _maxRotationDegrees;

  /// @brief Field _xAmplitude, offset 0x3c, size 0x8
  __declspec(property(get = __get__xAmplitude, put = __set__xAmplitude))::UnityEngine::Vector2 _xAmplitude;

  /// @brief Field _xFrequency, offset 0x44, size 0x8
  __declspec(property(get = __get__xFrequency, put = __set__xFrequency))::UnityEngine::Vector2 _xFrequency;

  /// @brief Field _yAmplitude, offset 0x4c, size 0x8
  __declspec(property(get = __get__yAmplitude, put = __set__yAmplitude))::UnityEngine::Vector2 _yAmplitude;

  /// @brief Field _yFrequency, offset 0x54, size 0x8
  __declspec(property(get = __get__yFrequency, put = __set__yFrequency))::UnityEngine::Vector2 _yFrequency;

  /// @brief Field _zAmplitude, offset 0x5c, size 0x8
  __declspec(property(get = __get__zAmplitude, put = __set__zAmplitude))::UnityEngine::Vector2 _zAmplitude;

  /// @brief Field _zFrequency, offset 0x64, size 0x8
  __declspec(property(get = __get__zFrequency, put = __set__zFrequency))::UnityEngine::Vector2 _zFrequency;

  /// @brief Field _transform, offset 0x70, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _origin, offset 0x78, size 0xc
  __declspec(property(get = __get__origin, put = __set__origin))::UnityEngine::Vector3 _origin;

  /// @brief Field _offsetX, offset 0x84, size 0x4
  __declspec(property(get = __get__offsetX, put = __set__offsetX)) float_t _offsetX;

  /// @brief Field _offsetY, offset 0x88, size 0x4
  __declspec(property(get = __get__offsetY, put = __set__offsetY)) float_t _offsetY;

  /// @brief Field _offsetZ, offset 0x8c, size 0x4
  __declspec(property(get = __get__offsetZ, put = __set__offsetZ)) float_t _offsetZ;

  /// @brief Field _amplitudeX, offset 0x90, size 0x4
  __declspec(property(get = __get__amplitudeX, put = __set__amplitudeX)) float_t _amplitudeX;

  /// @brief Field _amplitudeY, offset 0x94, size 0x4
  __declspec(property(get = __get__amplitudeY, put = __set__amplitudeY)) float_t _amplitudeY;

  /// @brief Field _amplitudeZ, offset 0x98, size 0x4
  __declspec(property(get = __get__amplitudeZ, put = __set__amplitudeZ)) float_t _amplitudeZ;

  /// @brief Field _frequencyX, offset 0x9c, size 0x4
  __declspec(property(get = __get__frequencyX, put = __set__frequencyX)) float_t _frequencyX;

  /// @brief Field _frequencyY, offset 0xa0, size 0x4
  __declspec(property(get = __get__frequencyY, put = __set__frequencyY)) float_t _frequencyY;

  /// @brief Field _frequencyZ, offset 0xa4, size 0x4
  __declspec(property(get = __get__frequencyZ, put = __set__frequencyZ)) float_t _frequencyZ;

  /// @brief Field _targetRotation, offset 0xa8, size 0x10
  __declspec(property(get = __get__targetRotation, put = __set__targetRotation))::UnityEngine::Quaternion _targetRotation;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  constexpr ::UnityEngine::Vector3& __get__positionMultiplier();

  constexpr ::UnityEngine::Vector3 const& __get__positionMultiplier() const;

  constexpr void __set__positionMultiplier(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__rotationMultiplier();

  constexpr ::UnityEngine::Vector3 const& __get__rotationMultiplier() const;

  constexpr void __set__rotationMultiplier(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get__rotationTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rotationTransform() const;

  constexpr void __set__rotationTransform(::UnityEngine::Transform* value);

  constexpr float_t& __get__maxRotationDegrees();

  constexpr float_t const& __get__maxRotationDegrees() const;

  constexpr void __set__maxRotationDegrees(float_t value);

  constexpr ::UnityEngine::Vector2& __get__xAmplitude();

  constexpr ::UnityEngine::Vector2 const& __get__xAmplitude() const;

  constexpr void __set__xAmplitude(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__xFrequency();

  constexpr ::UnityEngine::Vector2 const& __get__xFrequency() const;

  constexpr void __set__xFrequency(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__yAmplitude();

  constexpr ::UnityEngine::Vector2 const& __get__yAmplitude() const;

  constexpr void __set__yAmplitude(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__yFrequency();

  constexpr ::UnityEngine::Vector2 const& __get__yFrequency() const;

  constexpr void __set__yFrequency(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__zAmplitude();

  constexpr ::UnityEngine::Vector2 const& __get__zAmplitude() const;

  constexpr void __set__zAmplitude(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__zFrequency();

  constexpr ::UnityEngine::Vector2 const& __get__zFrequency() const;

  constexpr void __set__zFrequency(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__origin();

  constexpr ::UnityEngine::Vector3 const& __get__origin() const;

  constexpr void __set__origin(::UnityEngine::Vector3 value);

  constexpr float_t& __get__offsetX();

  constexpr float_t const& __get__offsetX() const;

  constexpr void __set__offsetX(float_t value);

  constexpr float_t& __get__offsetY();

  constexpr float_t const& __get__offsetY() const;

  constexpr void __set__offsetY(float_t value);

  constexpr float_t& __get__offsetZ();

  constexpr float_t const& __get__offsetZ() const;

  constexpr void __set__offsetZ(float_t value);

  constexpr float_t& __get__amplitudeX();

  constexpr float_t const& __get__amplitudeX() const;

  constexpr void __set__amplitudeX(float_t value);

  constexpr float_t& __get__amplitudeY();

  constexpr float_t const& __get__amplitudeY() const;

  constexpr void __set__amplitudeY(float_t value);

  constexpr float_t& __get__amplitudeZ();

  constexpr float_t const& __get__amplitudeZ() const;

  constexpr void __set__amplitudeZ(float_t value);

  constexpr float_t& __get__frequencyX();

  constexpr float_t const& __get__frequencyX() const;

  constexpr void __set__frequencyX(float_t value);

  constexpr float_t& __get__frequencyY();

  constexpr float_t const& __get__frequencyY() const;

  constexpr void __set__frequencyY(float_t value);

  constexpr float_t& __get__frequencyZ();

  constexpr float_t const& __get__frequencyZ() const;

  constexpr void __set__frequencyZ(float_t value);

  constexpr ::UnityEngine::Quaternion& __get__targetRotation();

  constexpr ::UnityEngine::Quaternion const& __get__targetRotation() const;

  constexpr void __set__targetRotation(::UnityEngine::Quaternion value);

  /// @brief Method Start, addr 0x2397e88, size 0x38, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Tick, addr 0x2397f98, size 0x150, virtual true, abstract: false, final true
  inline void Tick();

  /// @brief Method Refresh, addr 0x2397ec0, size 0xd8, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method GetPoint, addr 0x23980e8, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPoint(float_t time);

  static inline ::GlobalNamespace::FloatingTransformEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2398174, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloatingTransformEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatingTransformEffect(FloatingTransformEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatingTransformEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatingTransformEffect(FloatingTransformEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatingTransformEffect();

public:
  /// @brief Field _positionMultiplier, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionMultiplier;

  /// @brief Field _rotationMultiplier, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationMultiplier;

  /// @brief Field _rotationTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rotationTransform;

  /// @brief Field _maxRotationDegrees, offset: 0x38, size: 0x4, def value: None
  float_t ____maxRotationDegrees;

  /// @brief Field _xAmplitude, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xAmplitude;

  /// @brief Field _xFrequency, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xFrequency;

  /// @brief Field _yAmplitude, offset: 0x4c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yAmplitude;

  /// @brief Field _yFrequency, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yFrequency;

  /// @brief Field _zAmplitude, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zAmplitude;

  /// @brief Field _zFrequency, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zFrequency;

  /// @brief Field _transform, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _origin, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____origin;

  /// @brief Field _offsetX, offset: 0x84, size: 0x4, def value: None
  float_t ____offsetX;

  /// @brief Field _offsetY, offset: 0x88, size: 0x4, def value: None
  float_t ____offsetY;

  /// @brief Field _offsetZ, offset: 0x8c, size: 0x4, def value: None
  float_t ____offsetZ;

  /// @brief Field _amplitudeX, offset: 0x90, size: 0x4, def value: None
  float_t ____amplitudeX;

  /// @brief Field _amplitudeY, offset: 0x94, size: 0x4, def value: None
  float_t ____amplitudeY;

  /// @brief Field _amplitudeZ, offset: 0x98, size: 0x4, def value: None
  float_t ____amplitudeZ;

  /// @brief Field _frequencyX, offset: 0x9c, size: 0x4, def value: None
  float_t ____frequencyX;

  /// @brief Field _frequencyY, offset: 0xa0, size: 0x4, def value: None
  float_t ____frequencyY;

  /// @brief Field _frequencyZ, offset: 0xa4, size: 0x4, def value: None
  float_t ____frequencyZ;

  /// @brief Field _targetRotation, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____targetRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatingTransformEffect, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____positionMultiplier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____rotationMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____rotationTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____maxRotationDegrees) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____xAmplitude) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____xFrequency) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____yAmplitude) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____yFrequency) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____zAmplitude) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____zFrequency) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____transform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____origin) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____offsetX) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____offsetY) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____offsetZ) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____amplitudeX) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____amplitudeY) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____amplitudeZ) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____frequencyX) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____frequencyY) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____frequencyZ) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingTransformEffect, ____targetRotation) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatingTransformEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatingTransformEffect*, "", "FloatingTransformEffect");
