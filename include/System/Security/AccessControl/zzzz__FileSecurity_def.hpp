#pragma once
// IWYU pragma private; include "System/Security/AccessControl/FileSecurity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSecurity)
namespace System::Security::AccessControl {
struct AccessControlSections;
}
// Forward declare root types
namespace System::Security::AccessControl {
class FileSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::FileSecurity);
// Dependencies System.Security.AccessControl.FileSystemSecurity
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.FileSecurity
class CORDL_TYPE FileSecurity : public ::System::Security::AccessControl::FileSystemSecurity {
public:
  // Declarations
  static inline ::System::Security::AccessControl::FileSecurity* New_ctor(::StringW fileName, ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method .ctor, addr 0x3cc55e8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName, ::System::Security::AccessControl::AccessControlSections includeSections);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSecurity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSecurity(FileSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSecurity(FileSecurity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3030 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::FileSecurity, 0x30>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::FileSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSecurity*, "System.Security.AccessControl", "FileSecurity");
