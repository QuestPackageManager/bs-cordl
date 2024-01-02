#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFComponentType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFComponentType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFComponentType);
// Type: ::OVRGLTFComponentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7552))
// CS Name: ::OVRGLTFComponentType
struct CORDL_TYPE OVRGLTFComponentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRGLTFComponentType_Unwrapped
  enum struct __OVRGLTFComponentType_Unwrapped : int32_t {
    __E_BYTE = static_cast<int32_t>(0x1400),
    __E_UNSIGNED_BYTE = static_cast<int32_t>(0x1401),
    __E_SHORT = static_cast<int32_t>(0x1402),
    __E_UNSIGNED_SHORT = static_cast<int32_t>(0x1403),
    __E_UNSIGNED_INT = static_cast<int32_t>(0x1405),
    __E_FLOAT = static_cast<int32_t>(0x1406),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRGLTFComponentType_Unwrapped() const noexcept {
    return static_cast<__OVRGLTFComponentType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRGLTFComponentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFComponentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field BYTE value: static_cast<int32_t>(0x1400)
  static ::GlobalNamespace::OVRGLTFComponentType const BYTE;

  /// @brief Field UNSIGNED_BYTE value: static_cast<int32_t>(0x1401)
  static ::GlobalNamespace::OVRGLTFComponentType const UNSIGNED_BYTE;

  /// @brief Field SHORT value: static_cast<int32_t>(0x1402)
  static ::GlobalNamespace::OVRGLTFComponentType const SHORT;

  /// @brief Field UNSIGNED_SHORT value: static_cast<int32_t>(0x1403)
  static ::GlobalNamespace::OVRGLTFComponentType const UNSIGNED_SHORT;

  /// @brief Field UNSIGNED_INT value: static_cast<int32_t>(0x1405)
  static ::GlobalNamespace::OVRGLTFComponentType const UNSIGNED_INT;

  /// @brief Field FLOAT value: static_cast<int32_t>(0x1406)
  static ::GlobalNamespace::OVRGLTFComponentType const FLOAT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFComponentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFComponentType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFComponentType, "", "OVRGLTFComponentType");
