#pragma once
// IWYU pragma private; include "System/Security/CodeAccessPermission.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class ISecurityEncodable;
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
// Type: System.Security::CodeAccessPermission
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// CS Name: ::System.Security::CodeAccessPermission*
class CORDL_TYPE CodeAccessPermission : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Security::IPermission"
  constexpr operator ::System::Security::IPermission*() noexcept;

  /// @brief Convert operator to "::System::Security::ISecurityEncodable"
  constexpr operator ::System::Security::ISecurityEncodable*() noexcept;

  /// @brief Method CheckPermissionState, addr 0x27ebed4, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Security::Permissions::PermissionState CheckPermissionState(::System::Security::Permissions::PermissionState state, bool allowUnrestricted);

  /// @brief Method Demand, addr 0x27ebc88, size 0x2c, virtual true, abstract: false, final true
  inline void Demand();

  /// @brief Method Equals, addr 0x27ebd80, size 0x124, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x27ebea4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsSubsetOf(::System::Security::IPermission* target);

  static inline ::System::Security::CodeAccessPermission* New_ctor();

  /// @brief Method System.Security.IPermission.Demand, addr 0x27ebf84, size 0x4, virtual true, abstract: false, final true
  inline void System_Security_IPermission_Demand();

  /// @brief Method ToString, addr 0x27ebeac, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToXml, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::SecurityElement* ToXml();

  /// @brief Method .ctor, addr 0x27ebc80, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::CodeAccessPermission, 0x10>, "Size mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::CodeAccessPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::CodeAccessPermission*, "System.Security", "CodeAccessPermission");
