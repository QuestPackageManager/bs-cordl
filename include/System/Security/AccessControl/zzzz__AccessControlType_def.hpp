#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AccessControlType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessControlType)
// Forward declare root types
namespace System::Security::AccessControl {
struct AccessControlType;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AccessControlType);
// Type: System.Security.AccessControl::AccessControlType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: ::System.Security.AccessControl::AccessControlType
struct CORDL_TYPE AccessControlType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AccessControlType_Unwrapped
  enum struct __AccessControlType_Unwrapped : int32_t {
    __E_Allow = static_cast<int32_t>(0x0),
    __E_Deny = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AccessControlType_Unwrapped() const noexcept {
    return static_cast<__AccessControlType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AccessControlType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AccessControlType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Allow value: static_cast<int32_t>(0x0)
  static ::System::Security::AccessControl::AccessControlType const Allow;

  /// @brief Field Deny value: static_cast<int32_t>(0x1)
  static ::System::Security::AccessControl::AccessControlType const Deny;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AccessControlType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AccessControlType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AccessControlType, "System.Security.AccessControl", "AccessControlType");
