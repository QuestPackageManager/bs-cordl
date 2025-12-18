#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/GeometryType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryType)
// Forward declare root types
namespace UnityEngine::LowLevelPhysics {
struct GeometryType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics::GeometryType);
// Dependencies
namespace UnityEngine::LowLevelPhysics {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics.GeometryType
struct CORDL_TYPE GeometryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GeometryType_Unwrapped
  enum struct __GeometryType_Unwrapped : int32_t {
    __E_Sphere = static_cast<int32_t>(0x0),
    __E_Capsule = static_cast<int32_t>(0x2),
    __E_Box = static_cast<int32_t>(0x3),
    __E_ConvexMesh = static_cast<int32_t>(0x4),
    __E_TriangleMesh = static_cast<int32_t>(0x5),
    __E_Terrain = static_cast<int32_t>(0x6),
    __E_Invalid = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GeometryType_Unwrapped() const noexcept {
    return static_cast<__GeometryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GeometryType(int32_t value__) noexcept;

  /// @brief Field Box value: I32(3)
  static ::UnityEngine::LowLevelPhysics::GeometryType const Box;

  /// @brief Field Capsule value: I32(2)
  static ::UnityEngine::LowLevelPhysics::GeometryType const Capsule;

  /// @brief Field ConvexMesh value: I32(4)
  static ::UnityEngine::LowLevelPhysics::GeometryType const ConvexMesh;

  /// @brief Field Invalid value: I32(-1)
  static ::UnityEngine::LowLevelPhysics::GeometryType const Invalid;

  /// @brief Field Sphere value: I32(0)
  static ::UnityEngine::LowLevelPhysics::GeometryType const Sphere;

  /// @brief Field Terrain value: I32(6)
  static ::UnityEngine::LowLevelPhysics::GeometryType const Terrain;

  /// @brief Field TriangleMesh value: I32(5)
  static ::UnityEngine::LowLevelPhysics::GeometryType const TriangleMesh;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18660 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevelPhysics::GeometryType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevelPhysics::GeometryType, "UnityEngine.LowLevelPhysics", "GeometryType");
