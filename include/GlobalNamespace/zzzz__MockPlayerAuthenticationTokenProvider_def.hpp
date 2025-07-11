#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerAuthenticationTokenProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/zzzz__IPlatformAccessTokenFetcher_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MockPlayerAuthenticationTokenProvider)
namespace GlobalNamespace {
struct AuthenticationToken_Platform;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerAuthenticationTokenProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerAuthenticationTokenProvider);
// Dependencies AuthenticationToken::Platform, BGNet.Core.IPlatformAccessTokenFetcher, IAuthenticationTokenProvider, System.Object, XPlatformAccessTokenData
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerAuthenticationTokenProvider
class CORDL_TYPE MockPlayerAuthenticationTokenProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field <hashedUserId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hashedUserId_k__BackingField, put = __cordl_internal_set__hashedUserId_k__BackingField)) ::StringW _hashedUserId_k__BackingField;

  /// @brief Field _mockTokenData, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__mockTokenData, put = __cordl_internal_set__mockTokenData)) ::GlobalNamespace::XPlatformAccessTokenData _mockTokenData;

  /// @brief Field _password, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password)) ::StringW _password;

  /// @brief Field <platform>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__platform_k__BackingField,
                      put = __cordl_internal_set__platform_k__BackingField)) ::GlobalNamespace::AuthenticationToken_Platform _platform_k__BackingField;

  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  /// @brief Field <userName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__userName_k__BackingField, put = __cordl_internal_set__userName_k__BackingField)) ::StringW _userName_k__BackingField;

  __declspec(property(get = get_hashedUserId)) ::StringW hashedUserId;

  __declspec(property(get = get_platform)) ::GlobalNamespace::AuthenticationToken_Platform platform;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::BGNet::Core::IPlatformAccessTokenFetcher"
  constexpr operator ::BGNet::Core::IPlatformAccessTokenFetcher*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
  constexpr operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept;

  /// @brief Method GetAuthenticationToken, addr 0x3c2a5f0, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetAuthenticationToken();

  /// @brief Method GetTokenPlatform, addr 0x3c2a690, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::AuthenticationToken_Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment);

  /// @brief Method GetXPlatformAccessToken, addr 0x3c2a698, size 0x74, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache);

  static inline ::GlobalNamespace::MockPlayerAuthenticationTokenProvider* New_ctor(::StringW userId, ::StringW userName, ::StringW password, ::GlobalNamespace::XPlatformAccessTokenData mockTokenData);

  constexpr ::StringW const& __cordl_internal_get__hashedUserId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__hashedUserId_k__BackingField();

  constexpr ::GlobalNamespace::XPlatformAccessTokenData const& __cordl_internal_get__mockTokenData() const;

  constexpr ::GlobalNamespace::XPlatformAccessTokenData& __cordl_internal_get__mockTokenData();

  constexpr ::StringW const& __cordl_internal_get__password() const;

  constexpr ::StringW& __cordl_internal_get__password();

  constexpr ::GlobalNamespace::AuthenticationToken_Platform const& __cordl_internal_get__platform_k__BackingField() const;

  constexpr ::GlobalNamespace::AuthenticationToken_Platform& __cordl_internal_get__platform_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userName_k__BackingField();

  constexpr void __cordl_internal_set__hashedUserId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__mockTokenData(::GlobalNamespace::XPlatformAccessTokenData value);

  constexpr void __cordl_internal_set__password(::StringW value);

  constexpr void __cordl_internal_set__platform_k__BackingField(::GlobalNamespace::AuthenticationToken_Platform value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3c2a4cc, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::StringW userId, ::StringW userName, ::StringW password, ::GlobalNamespace::XPlatformAccessTokenData mockTokenData);

  /// @brief Method get_hashedUserId, addr 0x3c2a4b4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_hashedUserId();

  /// @brief Method get_platform, addr 0x3c2a4c4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::AuthenticationToken_Platform get_platform();

  /// @brief Method get_userName, addr 0x3c2a4bc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::BGNet::Core::IPlatformAccessTokenFetcher"
  constexpr ::BGNet::Core::IPlatformAccessTokenFetcher* i___BGNet__Core__IPlatformAccessTokenFetcher() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAuthenticationTokenProvider"
  constexpr ::GlobalNamespace::IAuthenticationTokenProvider* i___GlobalNamespace__IAuthenticationTokenProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerAuthenticationTokenProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerAuthenticationTokenProvider(MockPlayerAuthenticationTokenProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerAuthenticationTokenProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerAuthenticationTokenProvider(MockPlayerAuthenticationTokenProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18112 };

  /// @brief Field _userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _password, offset: 0x18, size: 0x8, def value: None
  ::StringW ____password;

  /// @brief Field <hashedUserId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____hashedUserId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____userName_k__BackingField;

  /// @brief Field <platform>k__BackingField, offset: 0x30, size: 0x1, def value: None
  ::GlobalNamespace::AuthenticationToken_Platform ____platform_k__BackingField;

  /// @brief Field _mockTokenData, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::XPlatformAccessTokenData ____mockTokenData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____password) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____hashedUserId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____userName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____platform_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____mockTokenData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerAuthenticationTokenProvider, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerAuthenticationTokenProvider*, "", "MockPlayerAuthenticationTokenProvider");
