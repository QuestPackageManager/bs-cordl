#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFType
struct CORDL_TYPE OVRGLTFType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRGLTFType_Unwrapped
  enum struct __OVRGLTFType_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_SCALAR = static_cast<int32_t>(0x1),
    __E_VEC2 = static_cast<int32_t>(0x2),
    __E_VEC3 = static_cast<int32_t>(0x3),
    __E_VEC4 = static_cast<int32_t>(0x4),
    __E_MAT4 = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRGLTFType_Unwrapped() const noexcept {
    return static_cast<__OVRGLTFType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRGLTFType(int32_t value__) noexcept;

  /// @brief Field MAT4 value: I32(5)
  static ::GlobalNamespace::OVRGLTFType const MAT4;

  /// @brief Field NONE value: I32(0)
  static ::GlobalNamespace::OVRGLTFType const NONE;

  /// @brief Field SCALAR value: I32(1)
  static ::GlobalNamespace::OVRGLTFType const SCALAR;

  /// @brief Field VEC2 value: I32(2)
  static ::GlobalNamespace::OVRGLTFType const VEC2;

  /// @brief Field VEC3 value: I32(3)
  static ::GlobalNamespace::OVRGLTFType const VEC3;

  /// @brief Field VEC4 value: I32(4)
  static ::GlobalNamespace::OVRGLTFType const VEC4;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7126 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFType, "", "OVRGLTFType");
