#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14378))
// CS Name: ::Rotate*
class CORDL_TYPE Rotate : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rotationVector, offset 0x18, size 0xc
  __declspec(property(get = __get__rotationVector, put = __set__rotationVector))::UnityEngine::Vector3 _rotationVector;

  /// @brief Field _speed, offset 0x24, size 0x4
  __declspec(property(get = __get__speed, put = __set__speed)) float_t _speed;

  /// @brief Field _randomize, offset 0x28, size 0x1
  __declspec(property(get = __get__randomize, put = __set__randomize)) bool _randomize;

  /// @brief Field _randomMinMultiplier, offset 0x2c, size 0xc
  __declspec(property(get = __get__randomMinMultiplier, put = __set__randomMinMultiplier))::UnityEngine::Vector3 _randomMinMultiplier;

  /// @brief Field _randomMaxMultiplier, offset 0x38, size 0xc
  __declspec(property(get = __get__randomMaxMultiplier, put = __set__randomMaxMultiplier))::UnityEngine::Vector3 _randomMaxMultiplier;

  /// @brief Field _transform, offset 0x48, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _startRotationAngles, offset 0x50, size 0xc
  __declspec(property(get = __get__startRotationAngles, put = __set__startRotationAngles))::UnityEngine::Vector3 _startRotationAngles;

  /// @brief Field _randomizedMultiplier, offset 0x5c, size 0xc
  __declspec(property(get = __get__randomizedMultiplier, put = __set__randomizedMultiplier))::UnityEngine::Vector3 _randomizedMultiplier;

  constexpr ::UnityEngine::Vector3& __get__rotationVector();

  constexpr ::UnityEngine::Vector3 const& __get__rotationVector() const;

  constexpr void __set__rotationVector(::UnityEngine::Vector3 value);

  constexpr float_t& __get__speed();

  constexpr float_t const& __get__speed() const;

  constexpr void __set__speed(float_t value);

  constexpr bool& __get__randomize();

  constexpr bool const& __get__randomize() const;

  constexpr void __set__randomize(bool value);

  constexpr ::UnityEngine::Vector3& __get__randomMinMultiplier();

  constexpr ::UnityEngine::Vector3 const& __get__randomMinMultiplier() const;

  constexpr void __set__randomMinMultiplier(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__randomMaxMultiplier();

  constexpr ::UnityEngine::Vector3 const& __get__randomMaxMultiplier() const;

  constexpr void __set__randomMaxMultiplier(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__startRotationAngles();

  constexpr ::UnityEngine::Vector3 const& __get__startRotationAngles() const;

  constexpr void __set__startRotationAngles(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__randomizedMultiplier();

  constexpr ::UnityEngine::Vector3 const& __get__randomizedMultiplier() const;

  constexpr void __set__randomizedMultiplier(::UnityEngine::Vector3 value);

  /// @brief Method Awake addr 0x20f3c90 size 0xc8 virtual false final false
  inline void Awake();

  /// @brief Method OnBecameVisible addr 0x20f3d58 size 0x20 virtual false final false
  inline void OnBecameVisible();

  /// @brief Method OnBecameInvisible addr 0x20f3de0 size 0xc virtual false final false
  inline void OnBecameInvisible();

  /// @brief Method Update addr 0x20f3dec size 0xbc virtual false final false
  inline void Update();

  /// @brief Method Randomize addr 0x20f3d78 size 0x68 virtual false final false
  inline void Randomize();

  static inline ::GlobalNamespace::Rotate* New_ctor();

  /// @brief Method .ctor addr 0x20f3ea8 size 0x80 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Rotate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rotate(Rotate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rotate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rotate(Rotate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rotate();

public:
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
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _startRotationAngles, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startRotationAngles;

  /// @brief Field _randomizedMultiplier, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____randomizedMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Rotate, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Rotate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Rotate*, "", "Rotate");
