#pragma once
// IWYU pragma private; include "System/Security/CodeAccessPermission.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodeAccessPermission)
namespace System::Security::Permissions {
struct PermissionState;
}
namespace System::Security {
class IPermission;
}
namespace System::Security {
class SecurityElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security {
class CodeAccessPermission;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::CodeAccessPermission);
// Dependencies System.Object, System.Security.IPermission, System.Security.ISecurityEncodable
namespace System::Security {
// Is value type: false
// CS Name: System.Security.CodeAccessPermission
class CORDL_TYPE CodeAccessPermission : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Security::IPermission"
  constexpr operator ::System::Security::IPermission*() noexcept;

  /// @brief Convert operator to "::System::Security::ISecurityEncodable"
  constexpr operator ::System::Security::ISecurityEncodable*() noexcept;

  /// @brief Method CheckPermissionState, addr 0x3c98c7c, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Security::Permissions::PermissionState CheckPermissionState(::System::Security::Permissions::PermissionState state, bool allowUnrestricted);

  /// @brief Method Demand, addr 0x3c98a30, size 0x2c, virtual true, abstract: false, final true
  inline void Demand();

  /// @brief Method Equals, addr 0x3c98b28, size 0x124, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3c98c4c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsSubsetOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsSubsetOf(::System::Security::IPermission* target);

  static inline ::System::Security::CodeAccessPermission* New_ctor();

  /// @brief Method System.Security.IPermission.Demand, addr 0x3c98d28, size 0x4, virtual true, abstract: false, final true
  inline void System_Security_IPermission_Demand();

  /// @brief Method ToString, addr 0x3c98c54, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToXml, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Security::SecurityElement* ToXml();

  /// @brief Method .ctor, addr 0x3c98a28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Security::IPermission"
  constexpr ::System::Security::IPermission* i___System__Security__IPermission() noexcept;

  /// @brief Convert to "::System::Security::ISecurityEncodable"
  constexpr ::System::Security::ISecurityEncodable* i___System__Security__ISecurityEncodable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeAccessPermission();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeAccessPermission", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeAccessPermission(CodeAccessPermission&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeAccessPermission", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeAccessPermission(CodeAccessPermission const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2885 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::CodeAccessPermission, 0x10>, "Size mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::CodeAccessPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::CodeAccessPermission*, "System.Security", "CodeAccessPermission");
