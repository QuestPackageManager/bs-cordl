#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingCar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingCar)
// Forward declare root types
namespace GlobalNamespace {
class FlyingCar;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingCar);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingCar
class CORDL_TYPE FlyingCar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _endZ, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__endZ, put = __cordl_internal_set__endZ)) float_t _endZ;

  /// @brief Field _pos, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__pos, put = __cordl_internal_set__pos)) ::UnityEngine::Vector3 _pos;

  /// @brief Field _progress, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__progress, put = __cordl_internal_set__progress)) float_t _progress;

  /// @brief Field _speed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__speed, put = __cordl_internal_set__speed)) float_t _speed;

  /// @brief Field _startZ, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__startZ, put = __cordl_internal_set__startZ)) float_t _startZ;

  static inline ::GlobalNamespace::FlyingCar* New_ctor();

  /// @brief Method Start, addr 0x3b9c8b8, size 0x44, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b9c940, size 0x60, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePos, addr 0x3b9c8fc, size 0x44, virtual false, abstract: false, final false
  inline void UpdatePos();

  constexpr float_t const& __cordl_internal_get__endZ() const;

  constexpr float_t& __cordl_internal_get__endZ();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__pos();

  constexpr float_t const& __cordl_internal_get__progress() const;

  constexpr float_t& __cordl_internal_get__progress();

  constexpr float_t const& __cordl_internal_get__speed() const;

  constexpr float_t& __cordl_internal_get__speed();

  constexpr float_t const& __cordl_internal_get__startZ() const;

  constexpr float_t& __cordl_internal_get__startZ();

  constexpr void __cordl_internal_set__endZ(float_t value);

  constexpr void __cordl_internal_set__pos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__progress(float_t value);

  constexpr void __cordl_internal_set__speed(float_t value);

  constexpr void __cordl_internal_set__startZ(float_t value);

  /// @brief Method .ctor, addr 0x3b9c9a0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingCar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingCar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingCar(FlyingCar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingCar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingCar(FlyingCar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4361 };

  /// @brief Field _startZ, offset: 0x20, size: 0x4, def value: None
  float_t ____startZ;

  /// @brief Field _endZ, offset: 0x24, size: 0x4, def value: None
  float_t ____endZ;

  /// @brief Field _speed, offset: 0x28, size: 0x4, def value: None
  float_t ____speed;

  /// @brief Field _progress, offset: 0x2c, size: 0x4, def value: None
  float_t ____progress;

  /// @brief Field _pos, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingCar, ____startZ) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingCar, ____endZ) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingCar, ____speed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingCar, ____progress) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingCar, ____pos) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingCar, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingCar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingCar*, "", "FlyingCar");
