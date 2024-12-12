#pragma once
// IWYU pragma private; include "System/Security/AccessControl/ControlFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControlFlags)
// Forward declare root types
namespace System::Security::AccessControl {
struct ControlFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::ControlFlags);
// Dependencies
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: System.Security.AccessControl.ControlFlags
struct CORDL_TYPE ControlFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ControlFlags_Unwrapped
  enum struct __ControlFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OwnerDefaulted = static_cast<int32_t>(0x1),
    __E_GroupDefaulted = static_cast<int32_t>(0x2),
    __E_DiscretionaryAclPresent = static_cast<int32_t>(0x4),
    __E_DiscretionaryAclDefaulted = static_cast<int32_t>(0x8),
    __E_SystemAclPresent = static_cast<int32_t>(0x10),
    __E_SystemAclDefaulted = static_cast<int32_t>(0x20),
    __E_DiscretionaryAclUntrusted = static_cast<int32_t>(0x40),
    __E_ServerSecurity = static_cast<int32_t>(0x80),
    __E_DiscretionaryAclAutoInheritRequired = static_cast<int32_t>(0x100),
    __E_SystemAclAutoInheritRequired = static_cast<int32_t>(0x200),
    __E_DiscretionaryAclAutoInherited = static_cast<int32_t>(0x400),
    __E_SystemAclAutoInherited = static_cast<int32_t>(0x800),
    __E_DiscretionaryAclProtected = static_cast<int32_t>(0x1000),
    __E_SystemAclProtected = static_cast<int32_t>(0x2000),
    __E_RMControlValid = static_cast<int32_t>(0x4000),
    __E_SelfRelative = static_cast<int32_t>(0x8000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ControlFlags_Unwrapped() const noexcept {
    return static_cast<__ControlFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ControlFlags(int32_t value__) noexcept;

  /// @brief Field DiscretionaryAclAutoInheritRequired value: I32(256)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclAutoInheritRequired;

  /// @brief Field DiscretionaryAclAutoInherited value: I32(1024)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclAutoInherited;

  /// @brief Field DiscretionaryAclDefaulted value: I32(8)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclDefaulted;

  /// @brief Field DiscretionaryAclPresent value: I32(4)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclPresent;

  /// @brief Field DiscretionaryAclProtected value: I32(4096)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclProtected;

  /// @brief Field DiscretionaryAclUntrusted value: I32(64)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclUntrusted;

  /// @brief Field GroupDefaulted value: I32(2)
  static ::System::Security::AccessControl::ControlFlags const GroupDefaulted;

  /// @brief Field None value: I32(0)
  static ::System::Security::AccessControl::ControlFlags const None;

  /// @brief Field OwnerDefaulted value: I32(1)
  static ::System::Security::AccessControl::ControlFlags const OwnerDefaulted;

  /// @brief Field RMControlValid value: I32(16384)
  static ::System::Security::AccessControl::ControlFlags const RMControlValid;

  /// @brief Field SelfRelative value: I32(32768)
  static ::System::Security::AccessControl::ControlFlags const SelfRelative;

  /// @brief Field ServerSecurity value: I32(128)
  static ::System::Security::AccessControl::ControlFlags const ServerSecurity;

  /// @brief Field SystemAclAutoInheritRequired value: I32(512)
  static ::System::Security::AccessControl::ControlFlags const SystemAclAutoInheritRequired;

  /// @brief Field SystemAclAutoInherited value: I32(2048)
  static ::System::Security::AccessControl::ControlFlags const SystemAclAutoInherited;

  /// @brief Field SystemAclDefaulted value: I32(32)
  static ::System::Security::AccessControl::ControlFlags const SystemAclDefaulted;

  /// @brief Field SystemAclPresent value: I32(16)
  static ::System::Security::AccessControl::ControlFlags const SystemAclPresent;

  /// @brief Field SystemAclProtected value: I32(8192)
  static ::System::Security::AccessControl::ControlFlags const SystemAclProtected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3027 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::ControlFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ControlFlags, 0x4>, "Size mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ControlFlags, "System.Security.AccessControl", "ControlFlags");
