#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveType)
// Forward declare root types
namespace UnityEngine {
struct PrimitiveType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PrimitiveType);
// Type: UnityEngine::PrimitiveType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::PrimitiveType
struct CORDL_TYPE PrimitiveType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PrimitiveType_Unwrapped
  enum struct __PrimitiveType_Unwrapped : int32_t {
    __E_Sphere = static_cast<int32_t>(0x0),
    __E_Capsule = static_cast<int32_t>(0x1),
    __E_Cylinder = static_cast<int32_t>(0x2),
    __E_Cube = static_cast<int32_t>(0x3),
    __E_Plane = static_cast<int32_t>(0x4),
    __E_Quad = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PrimitiveType_Unwrapped() const noexcept {
    return static_cast<__PrimitiveType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PrimitiveType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Capsule value: static_cast<int32_t>(0x1)
  static ::UnityEngine::PrimitiveType const Capsule;

  /// @brief Field Cube value: static_cast<int32_t>(0x3)
  static ::UnityEngine::PrimitiveType const Cube;

  /// @brief Field Cylinder value: static_cast<int32_t>(0x2)
  static ::UnityEngine::PrimitiveType const Cylinder;

  /// @brief Field Plane value: static_cast<int32_t>(0x4)
  static ::UnityEngine::PrimitiveType const Plane;

  /// @brief Field Quad value: static_cast<int32_t>(0x5)
  static ::UnityEngine::PrimitiveType const Quad;

  /// @brief Field Sphere value: static_cast<int32_t>(0x0)
  static ::UnityEngine::PrimitiveType const Sphere;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PrimitiveType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::PrimitiveType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PrimitiveType, "UnityEngine", "PrimitiveType");
