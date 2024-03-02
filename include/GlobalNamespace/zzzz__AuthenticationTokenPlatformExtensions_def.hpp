#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationTokenPlatformExtensions)
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct __UserInfo__Platform;
}
// Forward declare root types
namespace GlobalNamespace {
class AuthenticationTokenPlatformExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AuthenticationTokenPlatformExtensions);
// Type: ::AuthenticationTokenPlatformExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AuthenticationTokenPlatformExtensions*
class CORDL_TYPE AuthenticationTokenPlatformExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToAuthenticationTokenPlatform, addr 0x2729c84, size 0x28, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AuthenticationToken__Platform ToAuthenticationTokenPlatform(::GlobalNamespace::__UserInfo__Platform platform);

  /// @brief Method ToUserInfoPlatform, addr 0x2729cac, size 0x2c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__UserInfo__Platform ToUserInfoPlatform(::GlobalNamespace::__AuthenticationToken__Platform platform);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AuthenticationTokenPlatformExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AuthenticationTokenPlatformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationTokenPlatformExtensions*, "", "AuthenticationTokenPlatformExtensions");
