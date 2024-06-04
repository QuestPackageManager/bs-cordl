#pragma once
// IWYU pragma private; include "GlobalNamespace/Rotate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rotate)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Rotate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Rotate);
// Type: ::Rotate
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Rotate*
class CORDL_TYPE Rotate : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _randomMaxMultiplier, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__randomMaxMultiplier, put = __cordl_internal_set__randomMaxMultiplier))::UnityEngine::Vector3 _randomMaxMultiplier;

  /// @brief Field _randomMinMultiplier, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__randomMinMultiplier, put = __cordl_internal_set__randomMinMultiplier))::UnityEngine::Vector3 _randomMinMultiplier;

  /// @brief Field _randomize, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__randomize, put = __cordl_internal_set__randomize)) bool _randomize;

  /// @brief Field _randomizedMultiplier, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get__randomizedMultiplier, put = __cordl_internal_set__randomizedMultiplier))::UnityEngine::Vector3 _randomizedMultiplier;

  /// @brief Field _rotationVector, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__rotationVector, put = __cordl_internal_set__rotationVector))::UnityEngine::Vector3 _rotationVector;

  /// @brief Field _speed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__speed, put = __cordl_internal_set__speed)) float_t _speed;

  /// @brief Field _startRotationAngles, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__startRotationAngles, put = __cordl_internal_set__startRotationAngles))::UnityEngine::Vector3 _startRotationAngles;

  /// @brief Field _transform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method Awake, addr 0x24ef670, size 0xc8, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::Rotate* New_ctor();

  /// @brief Method OnBecameInvisible, addr 0x24ef7c0, size 0xc, virtual false, abstract: false, final false
  inline void OnBecameInvisible();

  /// @brief Method OnBecameVisible, addr 0x24ef738, size 0x20, virtual false, abstract: false, final false
  inline void OnBecameVisible();

  /// @brief Method Randomize, addr 0x24ef758, size 0x68, virtual false, abstract: false, final false
  inline void Randomize();

  /// @brief Method Update, addr 0x24ef7cc, size 0xbc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__randomMaxMultiplier() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__randomMaxMultiplier();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__randomMinMultiplier() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__randomMinMultiplier();

  constexpr bool const& __cordl_internal_get__randomize() const;

  constexpr bool& __cordl_internal_get__randomize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__randomizedMultiplier() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__randomizedMultiplier();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationVector() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationVector();

  constexpr float_t const& __cordl_internal_get__speed() const;

  constexpr float_t& __cordl_internal_get__speed();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startRotationAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startRotationAngles();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__randomMaxMultiplier(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__randomMinMultiplier(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__randomize(bool value);

  constexpr void __cordl_internal_set__randomizedMultiplier(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rotationVector(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__speed(float_t value);

  constexpr void __cordl_internal_set__startRotationAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x24ef888, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rotate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rotate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rotate(Rotate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rotate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rotate(Rotate const&) = delete;

  /// @brief Field _rotationVector, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationVector;

  /// @brief Field _speed, offset: 0x24, size: 0x4, def value: None
  float_t ____speed;

  /// @brief Field _randomize, offset: 0x28, size: 0x1, def value: None
  bool ____randomize;

  /// @brief Field _randomMinMultiplier, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____randomMinMultiplier;

  /// @brief Field _randomMaxMultiplier, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____randomMaxMultiplier;

  /// @brief Field _transform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _startRotationAngles, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startRotationAngles;

  /// @brief Field _randomizedMultiplier, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____randomizedMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Rotate, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Rotate, ____rotationVector) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rotate, ____speed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rotate, ____randomize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rotate, ____randomMinMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rotate, ____randomMaxMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rotate, ____transform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rotate, ____startRotationAngles) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Rotate, ____randomizedMultiplier) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Rotate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Rotate*, "", "Rotate");
