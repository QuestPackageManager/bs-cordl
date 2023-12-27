#pragma once
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
// Type: System.Security.AccessControl::ControlFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3028))
// CS Name: ::System.Security.AccessControl::ControlFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ControlFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Security::AccessControl::ControlFlags const None;

  /// @brief Field OwnerDefaulted value: static_cast<int32_t>(0x1)
  static ::System::Security::AccessControl::ControlFlags const OwnerDefaulted;

  /// @brief Field GroupDefaulted value: static_cast<int32_t>(0x2)
  static ::System::Security::AccessControl::ControlFlags const GroupDefaulted;

  /// @brief Field DiscretionaryAclPresent value: static_cast<int32_t>(0x4)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclPresent;

  /// @brief Field DiscretionaryAclDefaulted value: static_cast<int32_t>(0x8)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclDefaulted;

  /// @brief Field SystemAclPresent value: static_cast<int32_t>(0x10)
  static ::System::Security::AccessControl::ControlFlags const SystemAclPresent;

  /// @brief Field SystemAclDefaulted value: static_cast<int32_t>(0x20)
  static ::System::Security::AccessControl::ControlFlags const SystemAclDefaulted;

  /// @brief Field DiscretionaryAclUntrusted value: static_cast<int32_t>(0x40)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclUntrusted;

  /// @brief Field ServerSecurity value: static_cast<int32_t>(0x80)
  static ::System::Security::AccessControl::ControlFlags const ServerSecurity;

  /// @brief Field DiscretionaryAclAutoInheritRequired value: static_cast<int32_t>(0x100)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclAutoInheritRequired;

  /// @brief Field SystemAclAutoInheritRequired value: static_cast<int32_t>(0x200)
  static ::System::Security::AccessControl::ControlFlags const SystemAclAutoInheritRequired;

  /// @brief Field DiscretionaryAclAutoInherited value: static_cast<int32_t>(0x400)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclAutoInherited;

  /// @brief Field SystemAclAutoInherited value: static_cast<int32_t>(0x800)
  static ::System::Security::AccessControl::ControlFlags const SystemAclAutoInherited;

  /// @brief Field DiscretionaryAclProtected value: static_cast<int32_t>(0x1000)
  static ::System::Security::AccessControl::ControlFlags const DiscretionaryAclProtected;

  /// @brief Field SystemAclProtected value: static_cast<int32_t>(0x2000)
  static ::System::Security::AccessControl::ControlFlags const SystemAclProtected;

  /// @brief Field RMControlValid value: static_cast<int32_t>(0x4000)
  static ::System::Security::AccessControl::ControlFlags const RMControlValid;

  /// @brief Field SelfRelative value: static_cast<int32_t>(0x8000)
  static ::System::Security::AccessControl::ControlFlags const SelfRelative;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ControlFlags, 0x4>, "Size mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ControlFlags, "System.Security.AccessControl", "ControlFlags");
