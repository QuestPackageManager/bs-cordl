#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AceQualifier)
// Forward declare root types
namespace System::Security::AccessControl {
struct AceQualifier;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AceQualifier);
// Type: System.Security.AccessControl::AceQualifier
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: ::System.Security.AccessControl::AceQualifier
struct CORDL_TYPE AceQualifier {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AceQualifier_Unwrapped
  enum struct __AceQualifier_Unwrapped : int32_t {
    __E_AccessAllowed = static_cast<int32_t>(0x0),
    __E_AccessDenied = static_cast<int32_t>(0x1),
    __E_SystemAudit = static_cast<int32_t>(0x2),
    __E_SystemAlarm = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AceQualifier_Unwrapped() const noexcept {
    return static_cast<__AceQualifier_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__AceQualifier_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AceQualifier();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AceQualifier(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AccessAllowed value: static_cast<int32_t>(0x0)
  static ::System::Security::AccessControl::AceQualifier const AccessAllowed;

  /// @brief Field AccessDenied value: static_cast<int32_t>(0x1)
  static ::System::Security::AccessControl::AceQualifier const AccessDenied;

  /// @brief Field SystemAlarm value: static_cast<int32_t>(0x3)
  static ::System::Security::AccessControl::AceQualifier const SystemAlarm;

  /// @brief Field SystemAudit value: static_cast<int32_t>(0x2)
  static ::System::Security::AccessControl::AceQualifier const SystemAudit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AceQualifier, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AceQualifier, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceQualifier, "System.Security.AccessControl", "AceQualifier");
