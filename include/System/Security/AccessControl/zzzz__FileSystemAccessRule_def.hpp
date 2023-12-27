#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__AccessRule_def.hpp"
CORDL_MODULE_EXPORT(FileSystemAccessRule)
namespace System::Security::AccessControl {
struct FileSystemRights;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class FileSystemAccessRule;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::FileSystemAccessRule);
// Type: System.Security.AccessControl::FileSystemAccessRule
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3015))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3032))
// CS Name: ::System.Security.AccessControl::FileSystemAccessRule*
class CORDL_TYPE FileSystemAccessRule : public ::System::Security::AccessControl::AccessRule {
public:
  // Declarations
  __declspec(property(get = get_FileSystemRights))::System::Security::AccessControl::FileSystemRights FileSystemRights;

  static inline ::System::Security::AccessControl::FileSystemAccessRule* New_ctor(::System::Security::Principal::IdentityReference* identity,
                                                                                  ::System::Security::AccessControl::FileSystemRights fileSystemRights, bool isInherited,
                                                                                  ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                  ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                  ::System::Security::AccessControl::AccessControlType type);

  /// @brief Method .ctor addr 0x24835ac size 0x8 virtual false final false
  inline void _ctor(::System::Security::Principal::IdentityReference* identity, ::System::Security::AccessControl::FileSystemRights fileSystemRights, bool isInherited,
                    ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags,
                    ::System::Security::AccessControl::AccessControlType type);

  /// @brief Method get_FileSystemRights addr 0x24835b4 size 0x8 virtual false final false
  inline ::System::Security::AccessControl::FileSystemRights get_FileSystemRights();

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemAccessRule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemAccessRule(FileSystemAccessRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemAccessRule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemAccessRule(FileSystemAccessRule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemAccessRule();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::FileSystemAccessRule, 0x30>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::FileSystemAccessRule);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSystemAccessRule*, "System.Security.AccessControl", "FileSystemAccessRule");
