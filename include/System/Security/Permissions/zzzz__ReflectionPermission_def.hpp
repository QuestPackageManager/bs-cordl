#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__ReflectionPermissionFlag_def.hpp"
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
CORDL_MODULE_EXPORT(ReflectionPermission)
namespace System::Security::Permissions {
struct ReflectionPermissionFlag;
}
namespace System::Security {
class IPermission;
}
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Security::Permissions {
class ReflectionPermission;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Permissions::ReflectionPermission);
// Type: System.Security.Permissions::ReflectionPermission
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Permissions {
// Is value type: false
// CS Name: ::System.Security.Permissions::ReflectionPermission*
class CORDL_TYPE ReflectionPermission : public ::System::Security::CodeAccessPermission {
public:
  // Declarations
  __declspec(property(get = get_Flags, put = set_Flags))::System::Security::Permissions::ReflectionPermissionFlag Flags;

  /// @brief Field flags, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags))::System::Security::Permissions::ReflectionPermissionFlag flags;

  /// @brief Method Cast, addr 0x254a74c, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Security::Permissions::ReflectionPermission* Cast(::System::Security::IPermission* target);

  /// @brief Method IsSubsetOf, addr 0x254a6fc, size 0x50, virtual true, abstract: false, final false
  inline bool IsSubsetOf(::System::Security::IPermission* target);

  /// @brief Method IsUnrestricted, addr 0x254a7f0, size 0x10, virtual true, abstract: false, final true
  inline bool IsUnrestricted();

  static inline ::System::Security::Permissions::ReflectionPermission* New_ctor(::System::Security::Permissions::ReflectionPermissionFlag flag);

  /// @brief Method ToXml, addr 0x254a800, size 0x1e8, virtual true, abstract: false, final false
  inline ::System::Security::SecurityElement* ToXml();

  constexpr ::System::Security::Permissions::ReflectionPermissionFlag const& __cordl_internal_get_flags() const;

  constexpr ::System::Security::Permissions::ReflectionPermissionFlag& __cordl_internal_get_flags();

  constexpr void __cordl_internal_set_flags(::System::Security::Permissions::ReflectionPermissionFlag value);

  /// @brief Method .ctor, addr 0x254a610, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Permissions::ReflectionPermissionFlag flag);

  /// @brief Method get_Flags, addr 0x254a6f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Permissions::ReflectionPermissionFlag get_Flags();

  /// @brief Method set_Flags, addr 0x254a63c, size 0xb8, virtual false, abstract: false, final false
  inline void set_Flags(::System::Security::Permissions::ReflectionPermissionFlag value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionPermission();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionPermission", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionPermission(ReflectionPermission&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionPermission", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionPermission(ReflectionPermission const&) = delete;

  /// @brief Field flags, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Permissions::ReflectionPermissionFlag ___flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Permissions::ReflectionPermission, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Permissions::ReflectionPermission, ___flags) == 0x10, "Offset mismatch!");

} // namespace System::Security::Permissions
NEED_NO_BOX(::System::Security::Permissions::ReflectionPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::ReflectionPermission*, "System.Security.Permissions", "ReflectionPermission");
