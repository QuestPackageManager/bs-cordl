#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AceType)
// Forward declare root types
namespace System::Security::AccessControl {
struct AceType;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AceType);
// Dependencies
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: System.Security.AccessControl.AceType
struct CORDL_TYPE AceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __AceType_Unwrapped
  enum struct __AceType_Unwrapped : uint8_t {
    __E_AccessAllowed = static_cast<uint8_t>(0x0u),
    __E_AccessDenied = static_cast<uint8_t>(0x1u),
    __E_SystemAudit = static_cast<uint8_t>(0x2u),
    __E_SystemAlarm = static_cast<uint8_t>(0x3u),
    __E_AccessAllowedCompound = static_cast<uint8_t>(0x4u),
    __E_AccessAllowedObject = static_cast<uint8_t>(0x5u),
    __E_AccessDeniedObject = static_cast<uint8_t>(0x6u),
    __E_SystemAuditObject = static_cast<uint8_t>(0x7u),
    __E_SystemAlarmObject = static_cast<uint8_t>(0x8u),
    __E_AccessAllowedCallback = static_cast<uint8_t>(0x9u),
    __E_AccessDeniedCallback = static_cast<uint8_t>(0xau),
    __E_AccessAllowedCallbackObject = static_cast<uint8_t>(0xbu),
    __E_AccessDeniedCallbackObject = static_cast<uint8_t>(0xcu),
    __E_SystemAuditCallback = static_cast<uint8_t>(0xdu),
    __E_SystemAlarmCallback = static_cast<uint8_t>(0xeu),
    __E_SystemAuditCallbackObject = static_cast<uint8_t>(0xfu),
    __E_SystemAlarmCallbackObject = static_cast<uint8_t>(0x10u),
    __E_MaxDefinedAceType = static_cast<uint8_t>(0x10u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AceType_Unwrapped() const noexcept {
    return static_cast<__AceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr AceType(uint8_t value__) noexcept;

  /// @brief Field AccessAllowed value: U8(0)
  static ::System::Security::AccessControl::AceType const AccessAllowed;

  /// @brief Field AccessAllowedCallback value: U8(9)
  static ::System::Security::AccessControl::AceType const AccessAllowedCallback;

  /// @brief Field AccessAllowedCallbackObject value: U8(11)
  static ::System::Security::AccessControl::AceType const AccessAllowedCallbackObject;

  /// @brief Field AccessAllowedCompound value: U8(4)
  static ::System::Security::AccessControl::AceType const AccessAllowedCompound;

  /// @brief Field AccessAllowedObject value: U8(5)
  static ::System::Security::AccessControl::AceType const AccessAllowedObject;

  /// @brief Field AccessDenied value: U8(1)
  static ::System::Security::AccessControl::AceType const AccessDenied;

  /// @brief Field AccessDeniedCallback value: U8(10)
  static ::System::Security::AccessControl::AceType const AccessDeniedCallback;

  /// @brief Field AccessDeniedCallbackObject value: U8(12)
  static ::System::Security::AccessControl::AceType const AccessDeniedCallbackObject;

  /// @brief Field AccessDeniedObject value: U8(6)
  static ::System::Security::AccessControl::AceType const AccessDeniedObject;

  /// @brief Field MaxDefinedAceType value: U8(16)
  static ::System::Security::AccessControl::AceType const MaxDefinedAceType;

  /// @brief Field SystemAlarm value: U8(3)
  static ::System::Security::AccessControl::AceType const SystemAlarm;

  /// @brief Field SystemAlarmCallback value: U8(14)
  static ::System::Security::AccessControl::AceType const SystemAlarmCallback;

  /// @brief Field SystemAlarmCallbackObject value: U8(16)
  static ::System::Security::AccessControl::AceType const SystemAlarmCallbackObject;

  /// @brief Field SystemAlarmObject value: U8(8)
  static ::System::Security::AccessControl::AceType const SystemAlarmObject;

  /// @brief Field SystemAudit value: U8(2)
  static ::System::Security::AccessControl::AceType const SystemAudit;

  /// @brief Field SystemAuditCallback value: U8(13)
  static ::System::Security::AccessControl::AceType const SystemAuditCallback;

  /// @brief Field SystemAuditCallbackObject value: U8(15)
  static ::System::Security::AccessControl::AceType const SystemAuditCallbackObject;

  /// @brief Field SystemAuditObject value: U8(7)
  static ::System::Security::AccessControl::AceType const SystemAuditObject;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3035 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::AceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AceType, 0x1>, "Size mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceType, "System.Security.AccessControl", "AceType");
