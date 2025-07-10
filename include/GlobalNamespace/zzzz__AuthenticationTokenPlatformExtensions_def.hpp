#pragma once
// IWYU pragma private; include "GlobalNamespace/AuthenticationTokenPlatformExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationTokenPlatformExtensions)
namespace GlobalNamespace {
struct AuthenticationToken_Platform;
}
namespace GlobalNamespace {
struct UserInfo_Platform;
}
// Forward declare root types
namespace GlobalNamespace {
class AuthenticationTokenPlatformExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AuthenticationTokenPlatformExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AuthenticationTokenPlatformExtensions
class CORDL_TYPE AuthenticationTokenPlatformExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToAuthenticationTokenPlatform, addr 0x407e754, size 0x28, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::AuthenticationToken_Platform ToAuthenticationTokenPlatform(::GlobalNamespace::UserInfo_Platform platform);

  /// @brief Method ToUserInfoPlatform, addr 0x407e77c, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::UserInfo_Platform ToUserInfoPlatform(::GlobalNamespace::AuthenticationToken_Platform platform);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18747 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AuthenticationTokenPlatformExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AuthenticationTokenPlatformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationTokenPlatformExtensions*, "", "AuthenticationTokenPlatformExtensions");
