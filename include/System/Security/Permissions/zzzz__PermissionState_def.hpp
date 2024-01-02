#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PermissionState)
// Forward declare root types
namespace System::Security::Permissions {
struct PermissionState;
}
// Write type traits
MARK_VAL_T(::System::Security::Permissions::PermissionState);
// Type: System.Security.Permissions::PermissionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Permissions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2902))
// CS Name: ::System.Security.Permissions::PermissionState
struct CORDL_TYPE PermissionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PermissionState_Unwrapped
  enum struct __PermissionState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Unrestricted = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PermissionState_Unwrapped() const noexcept {
    return static_cast<__PermissionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PermissionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PermissionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Security::Permissions::PermissionState const None;

  /// @brief Field Unrestricted value: static_cast<int32_t>(0x1)
  static ::System::Security::Permissions::PermissionState const Unrestricted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Permissions::PermissionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Permissions::PermissionState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Permissions
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::PermissionState, "System.Security.Permissions", "PermissionState");
