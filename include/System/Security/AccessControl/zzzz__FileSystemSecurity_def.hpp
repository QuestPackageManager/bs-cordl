#pragma once
// IWYU pragma private; include "System/Security/AccessControl/FileSystemSecurity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemSecurity)
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::AccessControl {
class AccessRule;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::Principal {
class IdentityReference;
}
// Forward declare root types
namespace System::Security::AccessControl {
class FileSystemSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::FileSystemSecurity);
// Dependencies System.Security.AccessControl.NativeObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.FileSystemSecurity
class CORDL_TYPE FileSystemSecurity : public ::System::Security::AccessControl::NativeObjectSecurity {
public:
  // Declarations
  /// @brief Method AccessRuleFactory, addr 0x596f6e4, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Security::AccessControl::AccessRule* AccessRuleFactory(::System::Security::Principal::IdentityReference* identityReference, int32_t accessMask, bool isInherited,
                                                                          ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                          ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                          ::System::Security::AccessControl::AccessControlType type);

  static inline ::System::Security::AccessControl::FileSystemSecurity* New_ctor(bool isContainer, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method .ctor, addr 0x596f4d8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemSecurity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemSecurity(FileSystemSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemSecurity(FileSystemSecurity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3050 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::FileSystemSecurity, 0x30>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::FileSystemSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSystemSecurity*, "System.Security.AccessControl", "FileSystemSecurity");
