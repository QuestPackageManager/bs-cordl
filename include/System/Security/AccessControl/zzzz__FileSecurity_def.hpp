#pragma once
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
// Type: System.Security.AccessControl::FileSecurity
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3030))
// CS Name: ::System.Security.AccessControl::FileSecurity*
class CORDL_TYPE FileSecurity : public ::System::Security::AccessControl::FileSystemSecurity {
public:
  // Declarations
  static inline ::System::Security::AccessControl::FileSecurity* New_ctor(::StringW fileName, ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method .ctor addr 0x232baa0 size 0x18 virtual false final false
  inline void _ctor(::StringW fileName, ::System::Security::AccessControl::AccessControlSections includeSections);

  // Ctor Parameters [CppParam { name: "", ty: "FileSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSecurity(FileSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSecurity(FileSecurity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSecurity();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::FileSecurity, 0x30>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::FileSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSecurity*, "System.Security.AccessControl", "FileSecurity");
