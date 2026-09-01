#pragma once
// IWYU pragma private; include "System\Security\SecurityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SecurityManager)
// Forward declare root types
namespace System::Security {
class SecurityManager;
}
// Write type traits
MARK_REF_T(::System::Security::SecurityManager*);
DEFINE_IL2CPP_CLASS(::System::Security::SecurityManager*, "System.Security", "SecurityManager");
// Dependencies System.Object
namespace System::Security {
// Is value type: false
// CS Name: System.Security.SecurityManager
class CORDL_TYPE SecurityManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureElevatedPermissions, addr 0x5af241c, size 0x4, virtual false, abstract: false, final false
  static inline void EnsureElevatedPermissions();

  /// @brief Method get_SecurityEnabled, addr 0x5aeef6c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::SecurityManager) == 0x10, "Size mismatch!");

} // namespace System::Security
