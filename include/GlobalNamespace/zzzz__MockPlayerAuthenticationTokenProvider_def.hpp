#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlayerAuthenticationTokenProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MockPlayerAuthenticationTokenProvider)
namespace BGNet::Core {
class IPlatformAccessTokenFetcher;
}
namespace GlobalNamespace {
struct AuthenticationToken_PlatformType;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
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
MARK_REF_T(::GlobalNamespace::MockPlayerAuthenticationTokenProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlayerAuthenticationTokenProvider*, "", "MockPlayerAuthenticationTokenProvider");
// Dependencies AuthenticationToken::PlatformType, System.Object, XPlatformAccessTokenData
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerAuthenticationTokenProvider
class CORDL_TYPE MockPlayerAuthenticationTokenProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field <hashedUserId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashedUserId_k__BackingField, put = __cordl_internal_set__hashedUserId_k__BackingField)) ::StringW _hashedUserId_k__BackingField;

  /// @brief Field _mockTokenData, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__mockTokenData, put = __cordl_internal_set__mockTokenData)) ::GlobalNamespace::XPlatformAccessTokenData _mockTokenData;

  /// @brief Field <platformType>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__platformType_k__BackingField,
                      put = __cordl_internal_set__platformType_k__BackingField)) ::GlobalNamespace::AuthenticationToken_PlatformType _platformType_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userName_k__BackingField, put = __cordl_internal_set__userName_k__BackingField)) ::StringW _userName_k__BackingField;

  __declspec(property(get = get_hashedUserId)) ::StringW hashedUserId;

  __declspec(property(get = get_platformType)) ::GlobalNamespace::AuthenticationToken_PlatformType platformType;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::BGNet::Core::IPlatformAccessTokenFetcher"
  constexpr operator ::BGNet::Core::IPlatformAccessTokenFetcher*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
  constexpr operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept;

  /// @brief Method GetTokenPlatform, addr 0x5a82c30, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::AuthenticationToken_PlatformType GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment);

  /// @brief Method GetXPlatformAccessToken, addr 0x5a82c38, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache);

  static inline ::GlobalNamespace::MockPlayerAuthenticationTokenProvider* New_ctor(::StringW userId, ::StringW userName, ::GlobalNamespace::XPlatformAccessTokenData mockTokenData);

  constexpr ::StringW const& __cordl_internal_get__hashedUserId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__hashedUserId_k__BackingField();

  constexpr ::GlobalNamespace::XPlatformAccessTokenData const& __cordl_internal_get__mockTokenData() const;

  constexpr ::GlobalNamespace::XPlatformAccessTokenData& __cordl_internal_get__mockTokenData();

  constexpr ::GlobalNamespace::AuthenticationToken_PlatformType const& __cordl_internal_get__platformType_k__BackingField() const;

  constexpr ::GlobalNamespace::AuthenticationToken_PlatformType& __cordl_internal_get__platformType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__userName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userName_k__BackingField();

  constexpr void __cordl_internal_set__hashedUserId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__mockTokenData(::GlobalNamespace::XPlatformAccessTokenData value);

  constexpr void __cordl_internal_set__platformType_k__BackingField(::GlobalNamespace::AuthenticationToken_PlatformType value);

  constexpr void __cordl_internal_set__userName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x5a82b64, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::StringW userId, ::StringW userName, ::GlobalNamespace::XPlatformAccessTokenData mockTokenData);

  /// @brief Method get_hashedUserId, addr 0x5a82b4c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_hashedUserId();

  /// @brief Method get_platformType, addr 0x5a82b5c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::AuthenticationToken_PlatformType get_platformType();

  /// @brief Method get_userName, addr 0x5a82b54, size 0x8, virtual true, abstract: false, final true
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22228 };

  /// @brief Field <hashedUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____hashedUserId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userName_k__BackingField;

  /// @brief Field <platformType>k__BackingField, offset: 0x20, size: 0x1, def value: None
  ::GlobalNamespace::AuthenticationToken_PlatformType ____platformType_k__BackingField;

  /// @brief Field _mockTokenData, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::XPlatformAccessTokenData ____mockTokenData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____hashedUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____userName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____platformType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____mockTokenData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
