#pragma once
// IWYU pragma private; include "System/IO/DriveInfoInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DriveInfoInternal)
// Forward declare root types
namespace System::IO {
class DriveInfoInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::DriveInfoInternal);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.DriveInfoInternal
class CORDL_TYPE DriveInfoInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLogicalDrives, addr 0x5a0c3d8, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetLogicalDrives();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DriveInfoInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DriveInfoInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DriveInfoInternal(DriveInfoInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DriveInfoInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DriveInfoInternal(DriveInfoInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3923 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::DriveInfoInternal, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::DriveInfoInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DriveInfoInternal*, "System.IO", "DriveInfoInternal");
