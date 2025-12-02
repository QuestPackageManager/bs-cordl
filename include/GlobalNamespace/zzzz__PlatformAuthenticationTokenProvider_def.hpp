#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformAuthenticationTokenProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformAuthenticationTokenProvider)
namespace BGNet::Core {
class IPlatformAccessTokenFetcher;
}
namespace GlobalNamespace {
struct AuthenticationToken_PlatformType;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12;
}
namespace GlobalNamespace {
struct PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12;
}
namespace GlobalNamespace {
struct PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformAuthenticationTokenProvider);
MARK_VAL_T(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12);
MARK_VAL_T(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14);
// Dependencies AuthenticationToken, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformAuthenticationTokenProvider/<GetAuthenticationToken>d__12
struct CORDL_TYPE PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d2a7b4, size 0x434, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d2abe8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>",
  // modifiers: "", def_value: None }]
  constexpr PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12(int32_t __1__state,
                                                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __t__builder,
                                                                              ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23068 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, XPlatformAccessTokenData
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformAuthenticationTokenProvider/<GetXPlatformAccessToken>d__14
struct CORDL_TYPE PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d2ac68, size 0x358, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d2afc0, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>",
  // modifiers: "", def_value: None }]
  constexpr PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14(int32_t __1__state,
                                                                               ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder,
                                                                               ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this,
                                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23069 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AuthenticationToken::PlatformType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformAuthenticationTokenProvider
class CORDL_TYPE PlatformAuthenticationTokenProvider : public ::System::Object {
public:
  // Declarations
  using _GetAuthenticationToken_d__12 = ::GlobalNamespace::PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12;

  using _GetXPlatformAccessToken_d__14 = ::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14;

  /// @brief Field _hashedUserId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__hashedUserId, put = __cordl_internal_set__hashedUserId)) ::StringW _hashedUserId;

  /// @brief Field _platform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _platformType, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__platformType, put = __cordl_internal_set__platformType)) ::GlobalNamespace::AuthenticationToken_PlatformType _platformType;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  /// @brief Field _userName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName)) ::StringW _userName;

  __declspec(property(get = get_hashedUserId)) ::StringW hashedUserId;

  __declspec(property(get = get_platformType)) ::GlobalNamespace::AuthenticationToken_PlatformType platformType;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::BGNet::Core::IPlatformAccessTokenFetcher"
  constexpr operator ::BGNet::Core::IPlatformAccessTokenFetcher*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
  constexpr operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept;

  /// @brief Method GetAuthenticationToken, addr 0x5d2a5f4, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetAuthenticationToken();

  /// @brief Method GetTokenPlatform, addr 0x5d2a6d0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::AuthenticationToken_PlatformType GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment);

  /// @brief Method GetXPlatformAccessToken, addr 0x5d2a6d8, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCacheRead);

  static inline ::GlobalNamespace::PlatformAuthenticationTokenProvider* New_ctor(::OculusStudios::Platform::Core::IPlatform* platform, ::GlobalNamespace::UserInfo* userInfo);

  constexpr ::StringW const& __cordl_internal_get__hashedUserId() const;

  constexpr ::StringW& __cordl_internal_get__hashedUserId();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::GlobalNamespace::AuthenticationToken_PlatformType const& __cordl_internal_get__platformType() const;

  constexpr ::GlobalNamespace::AuthenticationToken_PlatformType& __cordl_internal_get__platformType();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr void __cordl_internal_set__hashedUserId(::StringW value);

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__platformType(::GlobalNamespace::AuthenticationToken_PlatformType value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method .ctor, addr 0x5d2a534, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::Platform::Core::IPlatform* platform, ::GlobalNamespace::UserInfo* userInfo);

  /// @brief Method get_hashedUserId, addr 0x5d2a51c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_hashedUserId();

  /// @brief Method get_platformType, addr 0x5d2a52c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::AuthenticationToken_PlatformType get_platformType();

  /// @brief Method get_userName, addr 0x5d2a524, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::BGNet::Core::IPlatformAccessTokenFetcher"
  constexpr ::BGNet::Core::IPlatformAccessTokenFetcher* i___BGNet__Core__IPlatformAccessTokenFetcher() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAuthenticationTokenProvider"
  constexpr ::GlobalNamespace::IAuthenticationTokenProvider* i___GlobalNamespace__IAuthenticationTokenProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformAuthenticationTokenProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23070 };

  /// @brief Field _platform, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  /// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _hashedUserId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____hashedUserId;

  /// @brief Field _platformType, offset: 0x30, size: 0x1, def value: None
  ::GlobalNamespace::AuthenticationToken_PlatformType ____platformType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____platform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____hashedUserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____platformType) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformAuthenticationTokenProvider*, "", "PlatformAuthenticationTokenProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetAuthenticationToken_d__12, "", "PlatformAuthenticationTokenProvider/<GetAuthenticationToken>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__14, "", "PlatformAuthenticationTokenProvider/<GetXPlatformAccessToken>d__14");
