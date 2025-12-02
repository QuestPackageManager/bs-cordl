#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AceFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AceFlags)
// Forward declare root types
namespace System::Security::AccessControl {
struct AceFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AceFlags);
// Dependencies
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: System.Security.AccessControl.AceFlags
struct CORDL_TYPE AceFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __AceFlags_Unwrapped
  enum struct __AceFlags_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_ObjectInherit = static_cast<uint8_t>(0x1u),
    __E_ContainerInherit = static_cast<uint8_t>(0x2u),
    __E_NoPropagateInherit = static_cast<uint8_t>(0x4u),
    __E_InheritOnly = static_cast<uint8_t>(0x8u),
    __E_InheritanceFlags = static_cast<uint8_t>(0xfu),
    __E_Inherited = static_cast<uint8_t>(0x10u),
    __E_SuccessfulAccess = static_cast<uint8_t>(0x40u),
    __E_FailedAccess = static_cast<uint8_t>(0x80u),
    __E_AuditFlags = static_cast<uint8_t>(0xc0u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AceFlags_Unwrapped() const noexcept {
    return static_cast<__AceFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AceFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr AceFlags(uint8_t value__) noexcept;

  /// @brief Field AuditFlags value: U8(192)
  static ::System::Security::AccessControl::AceFlags const AuditFlags;

  /// @brief Field ContainerInherit value: U8(2)
  static ::System::Security::AccessControl::AceFlags const ContainerInherit;

  /// @brief Field FailedAccess value: U8(128)
  static ::System::Security::AccessControl::AceFlags const FailedAccess;

  /// @brief Field InheritOnly value: U8(8)
  static ::System::Security::AccessControl::AceFlags const InheritOnly;

  /// @brief Field InheritanceFlags value: U8(15)
  static ::System::Security::AccessControl::AceFlags const InheritanceFlags;

  /// @brief Field Inherited value: U8(16)
  static ::System::Security::AccessControl::AceFlags const Inherited;

  /// @brief Field NoPropagateInherit value: U8(4)
  static ::System::Security::AccessControl::AceFlags const NoPropagateInherit;

  /// @brief Field None value: U8(0)
  static ::System::Security::AccessControl::AceFlags const None;

  /// @brief Field ObjectInherit value: U8(1)
  static ::System::Security::AccessControl::AceFlags const ObjectInherit;

  /// @brief Field SuccessfulAccess value: U8(64)
  static ::System::Security::AccessControl::AceFlags const SuccessfulAccess;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3033 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::AceFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AceFlags, 0x1>, "Size mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceFlags, "System.Security.AccessControl", "AceFlags");
