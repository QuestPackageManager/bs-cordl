#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_Permissions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_Permissions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Permissions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Permissions);
// Type: HoudiniEngineUnity::HAPI_Permissions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_Permissions
struct CORDL_TYPE HAPI_Permissions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_Permissions_Unwrapped
  enum struct __HAPI_Permissions_Unwrapped : int32_t {
    __E_HAPI_PERMISSIONS_NON_APPLICABLE = static_cast<int32_t>(0x0),
    __E_HAPI_PERMISSIONS_READ_WRITE = static_cast<int32_t>(0x1),
    __E_HAPI_PERMISSIONS_READ_ONLY = static_cast<int32_t>(0x2),
    __E_HAPI_PERMISSIONS_WRITE_ONLY = static_cast<int32_t>(0x3),
    __E_HAPI_PERMISSIONS_MAX = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_Permissions_Unwrapped() const noexcept {
    return static_cast<__HAPI_Permissions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_Permissions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_Permissions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HAPI_PERMISSIONS_MAX value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_MAX;

  /// @brief Field HAPI_PERMISSIONS_NON_APPLICABLE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_NON_APPLICABLE;

  /// @brief Field HAPI_PERMISSIONS_READ_ONLY value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_READ_ONLY;

  /// @brief Field HAPI_PERMISSIONS_READ_WRITE value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_READ_WRITE;

  /// @brief Field HAPI_PERMISSIONS_WRITE_ONLY value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_WRITE_ONLY;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11638 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Permissions, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Permissions, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Permissions, "HoudiniEngineUnity", "HAPI_Permissions");
