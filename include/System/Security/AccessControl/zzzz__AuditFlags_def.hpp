#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AuditFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuditFlags)
// Forward declare root types
namespace System::Security::AccessControl {
struct AuditFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AuditFlags);
// Dependencies
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: System.Security.AccessControl.AuditFlags
struct CORDL_TYPE AuditFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AuditFlags_Unwrapped
  enum struct __AuditFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Success = static_cast<int32_t>(0x1),
    __E_Failure = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AuditFlags_Unwrapped() const noexcept {
    return static_cast<__AuditFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AuditFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AuditFlags(int32_t value__) noexcept;

  /// @brief Field Failure value: I32(2)
  static ::System::Security::AccessControl::AuditFlags const Failure;

  /// @brief Field None value: I32(0)
  static ::System::Security::AccessControl::AuditFlags const None;

  /// @brief Field Success value: I32(1)
  static ::System::Security::AccessControl::AuditFlags const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3036 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::AuditFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AuditFlags, 0x4>, "Size mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AuditFlags, "System.Security.AccessControl", "AuditFlags");
