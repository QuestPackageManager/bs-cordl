#pragma once
// IWYU pragma private; include "GlobalNamespace/IAuthenticationTokenProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAuthenticationTokenProvider)
namespace BGNet::Core {
class IPlatformAccessTokenFetcher;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAuthenticationTokenProvider);
// Type: ::IAuthenticationTokenProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IAuthenticationTokenProvider*
class CORDL_TYPE IAuthenticationTokenProvider {
public:
  // Declarations
  __declspec(property(get = get_hashedUserId)) ::StringW hashedUserId;

  __declspec(property(get = get_platform)) ::GlobalNamespace::__AuthenticationToken__Platform platform;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::BGNet::Core::IPlatformAccessTokenFetcher"
  constexpr operator ::BGNet::Core::IPlatformAccessTokenFetcher*() noexcept;

  /// @brief Method GetAuthenticationToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetAuthenticationToken();

  /// @brief Method GetTokenPlatform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__AuthenticationToken__Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment);

  /// @brief Method get_hashedUserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_hashedUserId();

  /// @brief Method get_platform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__AuthenticationToken__Platform get_platform();

  /// @brief Method get_userName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_userName();

  /// @brief Convert to "::BGNet::Core::IPlatformAccessTokenFetcher"
  constexpr ::BGNet::Core::IPlatformAccessTokenFetcher* i___BGNet__Core__IPlatformAccessTokenFetcher() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAuthenticationTokenProvider(IAuthenticationTokenProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAuthenticationTokenProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAuthenticationTokenProvider(IAuthenticationTokenProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14741 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAuthenticationTokenProvider*, "", "IAuthenticationTokenProvider");
