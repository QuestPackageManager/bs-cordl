#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpawnLaserAnimation)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnLaserAnimation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnLaserAnimation);
// Type: ::SpawnLaserAnimation
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4883))
// CS Name: ::SpawnLaserAnimation*
class CORDL_TYPE SpawnLaserAnimation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _centerThresholdTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__centerThresholdTransform, put = __set__centerThresholdTransform))::UnityEngine::Transform* _centerThresholdTransform;

  /// @brief Field _horizontalLasersTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__horizontalLasersTransform, put = __set__horizontalLasersTransform))::UnityEngine::Transform* _horizontalLasersTransform;

  /// @brief Field _leftHorizontalLaser, offset 0x28, size 0x8
  __declspec(property(get = __get__leftHorizontalLaser, put = __set__leftHorizontalLaser))::GlobalNamespace::TubeBloomPrePassLight* _leftHorizontalLaser;

  /// @brief Field _rightHorizontalLaser, offset 0x30, size 0x8
  __declspec(property(get = __get__rightHorizontalLaser, put = __set__rightHorizontalLaser))::GlobalNamespace::TubeBloomPrePassLight* _rightHorizontalLaser;

  /// @brief Field _normalizedDistance, offset 0x38, size 0x4
  __declspec(property(get = __get__normalizedDistance, put = __set__normalizedDistance)) float_t _normalizedDistance;

  /// @brief Field _alphaMultiplier, offset 0x3c, size 0x4
  __declspec(property(get = __get__alphaMultiplier, put = __set__alphaMultiplier)) float_t _alphaMultiplier;

  /// @brief Field _laserLength, offset 0x40, size 0x4
  __declspec(property(get = __get__laserLength, put = __set__laserLength)) float_t _laserLength;

  /// @brief Field _centerDistance, offset 0x44, size 0x4
  __declspec(property(get = __get__centerDistance, put = __set__centerDistance)) float_t _centerDistance;

  /// @brief Field _initialized, offset 0x48, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  constexpr ::UnityEngine::Transform*& __get__centerThresholdTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__centerThresholdTransform() const;

  constexpr void __set__centerThresholdTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__horizontalLasersTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__horizontalLasersTransform() const;

  constexpr void __set__horizontalLasersTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::TubeBloomPrePassLight*& __get__leftHorizontalLaser();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& __get__leftHorizontalLaser() const;

  constexpr void __set__leftHorizontalLaser(::GlobalNamespace::TubeBloomPrePassLight* value);

  constexpr ::GlobalNamespace::TubeBloomPrePassLight*& __get__rightHorizontalLaser();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& __get__rightHorizontalLaser() const;

  constexpr void __set__rightHorizontalLaser(::GlobalNamespace::TubeBloomPrePassLight* value);

  constexpr float_t& __get__normalizedDistance();

  constexpr float_t const& __get__normalizedDistance() const;

  constexpr void __set__normalizedDistance(float_t value);

  constexpr float_t& __get__alphaMultiplier();

  constexpr float_t const& __get__alphaMultiplier() const;

  constexpr void __set__alphaMultiplier(float_t value);

  constexpr float_t& __get__laserLength();

  constexpr float_t const& __get__laserLength() const;

  constexpr void __set__laserLength(float_t value);

  constexpr float_t& __get__centerDistance();

  constexpr float_t const& __get__centerDistance() const;

  constexpr void __set__centerDistance(float_t value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  /// @brief Method InitIfNeeded, addr 0x23a0cd4, size 0xc0, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  /// @brief Method LateUpdate, addr 0x23a0d94, size 0x108, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SpawnLaserAnimation* New_ctor();

  /// @brief Method .ctor, addr 0x23a0e9c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpawnLaserAnimation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnLaserAnimation(SpawnLaserAnimation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnLaserAnimation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnLaserAnimation(SpawnLaserAnimation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnLaserAnimation();

public:
  /// @brief Field _centerThresholdTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____centerThresholdTransform;

  /// @brief Field _horizontalLasersTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____horizontalLasersTransform;

  /// @brief Field _leftHorizontalLaser, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::TubeBloomPrePassLight* ____leftHorizontalLaser;

  /// @brief Field _rightHorizontalLaser, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::TubeBloomPrePassLight* ____rightHorizontalLaser;

  /// @brief Field _normalizedDistance, offset: 0x38, size: 0x4, def value: None
  float_t ____normalizedDistance;

  /// @brief Field _alphaMultiplier, offset: 0x3c, size: 0x4, def value: None
  float_t ____alphaMultiplier;

  /// @brief Field _laserLength, offset: 0x40, size: 0x4, def value: None
  float_t ____laserLength;

  /// @brief Field _centerDistance, offset: 0x44, size: 0x4, def value: None
  float_t ____centerDistance;

  /// @brief Field _initialized, offset: 0x48, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnLaserAnimation, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____centerThresholdTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____horizontalLasersTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____leftHorizontalLaser) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____rightHorizontalLaser) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____normalizedDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____alphaMultiplier) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____laserLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____centerDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnLaserAnimation, ____initialized) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnLaserAnimation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnLaserAnimation*, "", "SpawnLaserAnimation");
