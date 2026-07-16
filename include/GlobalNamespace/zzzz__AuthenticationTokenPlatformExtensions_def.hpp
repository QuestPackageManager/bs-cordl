#pragma once
// IWYU pragma private; include "GlobalNamespace/AuthenticationTokenPlatformExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationTokenPlatformExtensions)
namespace GlobalNamespace {
struct AuthenticationToken_PlatformType;
}
namespace GlobalNamespace {
struct UserInfo_Platform;
}
// Forward declare root types
namespace GlobalNamespace {
class AuthenticationTokenPlatformExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AuthenticationTokenPlatformExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AuthenticationTokenPlatformExtensions*, "", "AuthenticationTokenPlatformExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AuthenticationTokenPlatformExtensions
class CORDL_TYPE AuthenticationTokenPlatformExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToAuthenticationTokenPlatform, addr 0x5f3e3e4, size 0x20, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::AuthenticationToken_PlatformType ToAuthenticationTokenPlatform(::GlobalNamespace::UserInfo_Platform platform);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationTokenPlatformExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationTokenPlatformExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationTokenPlatformExtensions(AuthenticationTokenPlatformExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationTokenPlatformExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationTokenPlatformExtensions(AuthenticationTokenPlatformExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23545 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AuthenticationTokenPlatformExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
