#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MockPlayerAuthenticationTokenProvider)
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerAuthenticationTokenProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerAuthenticationTokenProvider);
// Type: ::MockPlayerAuthenticationTokenProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15497))
// CS Name: ::MockPlayerAuthenticationTokenProvider*
class CORDL_TYPE MockPlayerAuthenticationTokenProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _password, offset 0x18, size 0x8
  __declspec(property(get = __get__password, put = __set__password))::StringW _password;

  /// @brief Field <hashedUserId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__hashedUserId_k__BackingField, put = __set__hashedUserId_k__BackingField))::StringW _hashedUserId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__userName_k__BackingField, put = __set__userName_k__BackingField))::StringW _userName_k__BackingField;

  /// @brief Field <platform>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__platform_k__BackingField, put = __set__platform_k__BackingField))::GlobalNamespace::__AuthenticationToken__Platform _platform_k__BackingField;

  __declspec(property(get = get_hashedUserId))::StringW hashedUserId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_platform))::GlobalNamespace::__AuthenticationToken__Platform platform;

  /// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
  constexpr operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept;

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__password();

  constexpr ::StringW const& __get__password() const;

  constexpr void __set__password(::StringW value);

  constexpr ::StringW& __get__hashedUserId_k__BackingField();

  constexpr ::StringW const& __get__hashedUserId_k__BackingField() const;

  constexpr void __set__hashedUserId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__userName_k__BackingField();

  constexpr ::StringW const& __get__userName_k__BackingField() const;

  constexpr void __set__userName_k__BackingField(::StringW value);

  constexpr ::GlobalNamespace::__AuthenticationToken__Platform& __get__platform_k__BackingField();

  constexpr ::GlobalNamespace::__AuthenticationToken__Platform const& __get__platform_k__BackingField() const;

  constexpr void __set__platform_k__BackingField(::GlobalNamespace::__AuthenticationToken__Platform value);

  /// @brief Method get_hashedUserId addr 0x228b8a8 size 0x8 virtual true final true
  inline ::StringW get_hashedUserId();

  /// @brief Method get_userName addr 0x228b8b0 size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_platform addr 0x228b8b8 size 0x8 virtual true final true
  inline ::GlobalNamespace::__AuthenticationToken__Platform get_platform();

  static inline ::GlobalNamespace::MockPlayerAuthenticationTokenProvider* New_ctor(::StringW userId, ::StringW userName, ::StringW password);

  /// @brief Method .ctor addr 0x228b8c0 size 0x98 virtual false final false
  inline void _ctor(::StringW userId, ::StringW userName, ::StringW password);

  /// @brief Method GetAuthenticationToken addr 0x228b958 size 0xa0 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetAuthenticationToken();

  /// @brief Method GetTokenPlatform addr 0x228b9f8 size 0x8 virtual true final true
  inline ::GlobalNamespace::__AuthenticationToken__Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment);

  /// @brief Method GetXPlatformAccessToken addr 0x228ba00 size 0xb4 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerAuthenticationTokenProvider(MockPlayerAuthenticationTokenProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerAuthenticationTokenProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerAuthenticationTokenProvider(MockPlayerAuthenticationTokenProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerAuthenticationTokenProvider();

public:
  /// @brief Field _userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _password, offset: 0x18, size: 0x8, def value: None
  ::StringW ____password;

  /// @brief Field <hashedUserId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____hashedUserId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____userName_k__BackingField;

  /// @brief Field <platform>k__BackingField, offset: 0x30, size: 0x1, def value: None
  ::GlobalNamespace::__AuthenticationToken__Platform ____platform_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerAuthenticationTokenProvider, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____password) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____hashedUserId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____userName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAuthenticationTokenProvider, ____platform_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerAuthenticationTokenProvider*, "", "MockPlayerAuthenticationTokenProvider");
