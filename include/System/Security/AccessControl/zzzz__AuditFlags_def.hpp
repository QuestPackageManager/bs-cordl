#pragma once
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
// Type: System.Security.AccessControl::AuditFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3020))
// CS Name: ::System.Security.AccessControl::AuditFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AuditFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AuditFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Security::AccessControl::AuditFlags const None;

  /// @brief Field Success value: static_cast<int32_t>(0x1)
  static ::System::Security::AccessControl::AuditFlags const Success;

  /// @brief Field Failure value: static_cast<int32_t>(0x2)
  static ::System::Security::AccessControl::AuditFlags const Failure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AuditFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AuditFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AuditFlags, "System.Security.AccessControl", "AuditFlags");
