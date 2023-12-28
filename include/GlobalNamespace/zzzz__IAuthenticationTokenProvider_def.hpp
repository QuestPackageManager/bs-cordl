#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAuthenticationTokenProvider)
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
// Forward declare root types
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAuthenticationTokenProvider);
// Type: ::IAuthenticationTokenProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12775))
// CS Name: ::IAuthenticationTokenProvider*
class CORDL_TYPE IAuthenticationTokenProvider {
public:
  // Declarations
  __declspec(property(get = get_hashedUserId))::StringW hashedUserId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_platform))::GlobalNamespace::__AuthenticationToken__Platform platform;

  /// @brief Method GetAuthenticationToken addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetAuthenticationToken();

  /// @brief Method GetTokenPlatform addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__AuthenticationToken__Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment);

  /// @brief Method GetXPlatformAccessToken addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache);

  /// @brief Method get_hashedUserId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_hashedUserId();

  /// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_userName();

  /// @brief Method get_platform addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__AuthenticationToken__Platform get_platform();

  // Ctor Parameters [CppParam { name: "", ty: "IAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAuthenticationTokenProvider(IAuthenticationTokenProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAuthenticationTokenProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAuthenticationTokenProvider(IAuthenticationTokenProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAuthenticationTokenProvider*, "", "IAuthenticationTokenProvider");
