#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SecurityManager)
// Forward declare root types
namespace System::Security {
class SecurityManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::SecurityManager);
// Type: System.Security::SecurityManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// CS Name: ::System.Security::SecurityManager*
class CORDL_TYPE SecurityManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureElevatedPermissions, addr 0x26d1774, size 0x4, virtual false, abstract: false, final false
  static inline void EnsureElevatedPermissions();

  /// @brief Method get_SecurityEnabled, addr 0x26ce230, size 0x8, virtual false, abstract: false, final false
  static inline bool get_SecurityEnabled();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityManager(SecurityManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityManager(SecurityManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::SecurityManager, 0x10>, "Size mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::SecurityManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityManager*, "System.Security", "SecurityManager");
