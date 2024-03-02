#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityPermissionFlag)
// Forward declare root types
namespace System::Security::Permissions {
struct SecurityPermissionFlag;
}
// Write type traits
MARK_VAL_T(::System::Security::Permissions::SecurityPermissionFlag);
// Type: System.Security.Permissions::SecurityPermissionFlag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Permissions {
// Is value type: true
// CS Name: ::System.Security.Permissions::SecurityPermissionFlag
struct CORDL_TYPE SecurityPermissionFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SecurityPermissionFlag_Unwrapped
  enum struct __SecurityPermissionFlag_Unwrapped : int32_t {
    __E_NoFlags = static_cast<int32_t>(0x0),
    __E_Assertion = static_cast<int32_t>(0x1),
    __E_UnmanagedCode = static_cast<int32_t>(0x2),
    __E_SkipVerification = static_cast<int32_t>(0x4),
    __E_Execution = static_cast<int32_t>(0x8),
    __E_ControlThread = static_cast<int32_t>(0x10),
    __E_ControlEvidence = static_cast<int32_t>(0x20),
    __E_ControlPolicy = static_cast<int32_t>(0x40),
    __E_SerializationFormatter = static_cast<int32_t>(0x80),
    __E_ControlDomainPolicy = static_cast<int32_t>(0x100),
    __E_ControlPrincipal = static_cast<int32_t>(0x200),
    __E_ControlAppDomain = static_cast<int32_t>(0x400),
    __E_RemotingConfiguration = static_cast<int32_t>(0x800),
    __E_Infrastructure = static_cast<int32_t>(0x1000),
    __E_BindingRedirects = static_cast<int32_t>(0x2000),
    __E_AllFlags = static_cast<int32_t>(0x3fff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SecurityPermissionFlag_Unwrapped() const noexcept {
    return static_cast<__SecurityPermissionFlag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityPermissionFlag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SecurityPermissionFlag(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllFlags value: static_cast<int32_t>(0x3fff)
  static ::System::Security::Permissions::SecurityPermissionFlag const AllFlags;

  /// @brief Field Assertion value: static_cast<int32_t>(0x1)
  static ::System::Security::Permissions::SecurityPermissionFlag const Assertion;

  /// @brief Field BindingRedirects value: static_cast<int32_t>(0x2000)
  static ::System::Security::Permissions::SecurityPermissionFlag const BindingRedirects;

  /// @brief Field ControlAppDomain value: static_cast<int32_t>(0x400)
  static ::System::Security::Permissions::SecurityPermissionFlag const ControlAppDomain;

  /// @brief Field ControlDomainPolicy value: static_cast<int32_t>(0x100)
  static ::System::Security::Permissions::SecurityPermissionFlag const ControlDomainPolicy;

  /// @brief Field ControlEvidence value: static_cast<int32_t>(0x20)
  static ::System::Security::Permissions::SecurityPermissionFlag const ControlEvidence;

  /// @brief Field ControlPolicy value: static_cast<int32_t>(0x40)
  static ::System::Security::Permissions::SecurityPermissionFlag const ControlPolicy;

  /// @brief Field ControlPrincipal value: static_cast<int32_t>(0x200)
  static ::System::Security::Permissions::SecurityPermissionFlag const ControlPrincipal;

  /// @brief Field ControlThread value: static_cast<int32_t>(0x10)
  static ::System::Security::Permissions::SecurityPermissionFlag const ControlThread;

  /// @brief Field Execution value: static_cast<int32_t>(0x8)
  static ::System::Security::Permissions::SecurityPermissionFlag const Execution;

  /// @brief Field Infrastructure value: static_cast<int32_t>(0x1000)
  static ::System::Security::Permissions::SecurityPermissionFlag const Infrastructure;

  /// @brief Field NoFlags value: static_cast<int32_t>(0x0)
  static ::System::Security::Permissions::SecurityPermissionFlag const NoFlags;

  /// @brief Field RemotingConfiguration value: static_cast<int32_t>(0x800)
  static ::System::Security::Permissions::SecurityPermissionFlag const RemotingConfiguration;

  /// @brief Field SerializationFormatter value: static_cast<int32_t>(0x80)
  static ::System::Security::Permissions::SecurityPermissionFlag const SerializationFormatter;

  /// @brief Field SkipVerification value: static_cast<int32_t>(0x4)
  static ::System::Security::Permissions::SecurityPermissionFlag const SkipVerification;

  /// @brief Field UnmanagedCode value: static_cast<int32_t>(0x2)
  static ::System::Security::Permissions::SecurityPermissionFlag const UnmanagedCode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Permissions::SecurityPermissionFlag, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Permissions::SecurityPermissionFlag, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Permissions
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::SecurityPermissionFlag, "System.Security.Permissions", "SecurityPermissionFlag");
