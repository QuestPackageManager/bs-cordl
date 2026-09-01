#pragma once
// IWYU pragma private; include "System\Security\IPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPermission)
namespace System::Security {
class ISecurityEncodable;
}
// Forward declare root types
namespace System::Security {
class IPermission;
}
// Write type traits
MARK_REF_T(::System::Security::IPermission*);
DEFINE_IL2CPP_CLASS(::System::Security::IPermission*, "System.Security", "IPermission");
// Dependencies
namespace System::Security {
// Is value type: false
// CS Name: System.Security.IPermission
class CORDL_TYPE IPermission {
public:
  // Declarations
  /// @brief Convert operator to "::System::Security::ISecurityEncodable"
  constexpr operator ::System::Security::ISecurityEncodable*() noexcept;

  /// @brief Method Demand, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Demand();

  /// @brief Method IsSubsetOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsSubsetOf(::System::Security::IPermission* target);

  /// @brief Convert to "::System::Security::ISecurityEncodable"
  constexpr ::System::Security::ISecurityEncodable* i___System__Security__ISecurityEncodable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPermission", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPermission(IPermission const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security
