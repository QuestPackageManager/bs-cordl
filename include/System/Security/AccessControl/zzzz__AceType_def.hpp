#pragma once
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
// Type: System.Security.AccessControl::AceType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: ::System.Security.AccessControl::AceType
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

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field AccessAllowed value: static_cast<uint8_t>(0x0u)
  static ::System::Security::AccessControl::AceType const AccessAllowed;

  /// @brief Field AccessAllowedCallback value: static_cast<uint8_t>(0x9u)
  static ::System::Security::AccessControl::AceType const AccessAllowedCallback;

  /// @brief Field AccessAllowedCallbackObject value: static_cast<uint8_t>(0xbu)
  static ::System::Security::AccessControl::AceType const AccessAllowedCallbackObject;

  /// @brief Field AccessAllowedCompound value: static_cast<uint8_t>(0x4u)
  static ::System::Security::AccessControl::AceType const AccessAllowedCompound;

  /// @brief Field AccessAllowedObject value: static_cast<uint8_t>(0x5u)
  static ::System::Security::AccessControl::AceType const AccessAllowedObject;

  /// @brief Field AccessDenied value: static_cast<uint8_t>(0x1u)
  static ::System::Security::AccessControl::AceType const AccessDenied;

  /// @brief Field AccessDeniedCallback value: static_cast<uint8_t>(0xau)
  static ::System::Security::AccessControl::AceType const AccessDeniedCallback;

  /// @brief Field AccessDeniedCallbackObject value: static_cast<uint8_t>(0xcu)
  static ::System::Security::AccessControl::AceType const AccessDeniedCallbackObject;

  /// @brief Field AccessDeniedObject value: static_cast<uint8_t>(0x6u)
  static ::System::Security::AccessControl::AceType const AccessDeniedObject;

  /// @brief Field MaxDefinedAceType value: static_cast<uint8_t>(0x10u)
  static ::System::Security::AccessControl::AceType const MaxDefinedAceType;

  /// @brief Field SystemAlarm value: static_cast<uint8_t>(0x3u)
  static ::System::Security::AccessControl::AceType const SystemAlarm;

  /// @brief Field SystemAlarmCallback value: static_cast<uint8_t>(0xeu)
  static ::System::Security::AccessControl::AceType const SystemAlarmCallback;

  /// @brief Field SystemAlarmCallbackObject value: static_cast<uint8_t>(0x10u)
  static ::System::Security::AccessControl::AceType const SystemAlarmCallbackObject;

  /// @brief Field SystemAlarmObject value: static_cast<uint8_t>(0x8u)
  static ::System::Security::AccessControl::AceType const SystemAlarmObject;

  /// @brief Field SystemAudit value: static_cast<uint8_t>(0x2u)
  static ::System::Security::AccessControl::AceType const SystemAudit;

  /// @brief Field SystemAuditCallback value: static_cast<uint8_t>(0xdu)
  static ::System::Security::AccessControl::AceType const SystemAuditCallback;

  /// @brief Field SystemAuditCallbackObject value: static_cast<uint8_t>(0xfu)
  static ::System::Security::AccessControl::AceType const SystemAuditCallbackObject;

  /// @brief Field SystemAuditObject value: static_cast<uint8_t>(0x7u)
  static ::System::Security::AccessControl::AceType const SystemAuditObject;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AceType, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AceType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceType, "System.Security.AccessControl", "AceType");
