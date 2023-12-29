#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformAuthenticationTokenProvider)
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformAuthenticationTokenProvider);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19);
// Type: ::<GetAuthenticationToken>d__16
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 860
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 876 }), TypeDefinitionIndex(TypeDefinitionIndex(4696)), TypeDefinitionIndex(TypeDefinitionIndex(12610))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4594)) CS Name: ::PlatformAuthenticationTokenProvider::<GetAuthenticationToken>d__16
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22248c4 size 0x3ac virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2224c70 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }]
  constexpr __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(int32_t __1__state,
                                                                                 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __t__builder,
                                                                                 ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this,
                                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetXPlatformAccessToken>d__18
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 882 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 882 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12846))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4595)) CS Name: ::PlatformAuthenticationTokenProvider::<GetXPlatformAccessToken>d__18
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2224cc8 size 0x248 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2224f24 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }]
  constexpr __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder,
      ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__19
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 882
// }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 882 }), TypeDefinitionIndex(TypeDefinitionIndex(12846))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4596)) CS Name: ::PlatformAuthenticationTokenProvider::<RequestXPlatformAccessToken>d__19
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2224f7c size 0x324 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22252a0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }]
  constexpr __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder,
      ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformAuthenticationTokenProvider
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12609)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4597))
// CS Name: ::PlatformAuthenticationTokenProvider*
class CORDL_TYPE PlatformAuthenticationTokenProvider : public ::System::Object {
public:
  // Declarations
  using _RequestXPlatformAccessToken_d__19 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;

  using _GetXPlatformAccessToken_d__18 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;

  using _GetAuthenticationToken_d__16 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;

  /// @brief Field _platformUserModel, offset 0x10, size 0x8
  __declspec(property(get = __get__platformUserModel, put = __set__platformUserModel))::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x20, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _hashedUserId, offset 0x28, size 0x8
  __declspec(property(get = __get__hashedUserId, put = __set__hashedUserId))::StringW _hashedUserId;

  /// @brief Field _platform, offset 0x30, size 0x1
  __declspec(property(get = __get__platform, put = __set__platform))::GlobalNamespace::__AuthenticationToken__Platform _platform;

  /// @brief Field _cachedXPlatformAccessToken, offset 0x38, size 0x8
  __declspec(property(get = __get__cachedXPlatformAccessToken, put = __set__cachedXPlatformAccessToken))::GlobalNamespace::XPlatformAccessTokenData* _cachedXPlatformAccessToken;

  /// @brief Field _xPlatformAccessTokenTask, offset 0x40, size 0x8
  __declspec(property(get = __get__xPlatformAccessTokenTask,
                      put = __set__xPlatformAccessTokenTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* _xPlatformAccessTokenTask;

  /// @brief Field _xPlatformTokenRetryDelayExpiration, offset 0x48, size 0x4
  __declspec(property(get = __get__xPlatformTokenRetryDelayExpiration, put = __set__xPlatformTokenRetryDelayExpiration)) float_t _xPlatformTokenRetryDelayExpiration;

  __declspec(property(get = get_hashedUserId))::StringW hashedUserId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_platform))::GlobalNamespace::__AuthenticationToken__Platform platform;

  /// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
  constexpr operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept;

  constexpr ::GlobalNamespace::IPlatformUserModel*& __get__platformUserModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& __get__platformUserModel() const;

  constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr ::StringW& __get__hashedUserId();

  constexpr ::StringW const& __get__hashedUserId() const;

  constexpr void __set__hashedUserId(::StringW value);

  constexpr ::GlobalNamespace::__AuthenticationToken__Platform& __get__platform();

  constexpr ::GlobalNamespace::__AuthenticationToken__Platform const& __get__platform() const;

  constexpr void __set__platform(::GlobalNamespace::__AuthenticationToken__Platform value);

  constexpr ::GlobalNamespace::XPlatformAccessTokenData*& __get__cachedXPlatformAccessToken();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> const& __get__cachedXPlatformAccessToken() const;

  constexpr void __set__cachedXPlatformAccessToken(::GlobalNamespace::XPlatformAccessTokenData* value);

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*& __get__xPlatformAccessTokenTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*> const& __get__xPlatformAccessTokenTask() const;

  constexpr void __set__xPlatformAccessTokenTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* value);

  constexpr float_t& __get__xPlatformTokenRetryDelayExpiration();

  constexpr float_t const& __get__xPlatformTokenRetryDelayExpiration() const;

  constexpr void __set__xPlatformTokenRetryDelayExpiration(float_t value);

  /// @brief Method get_hashedUserId addr 0x22244b0 size 0x8 virtual true final true
  inline ::StringW get_hashedUserId();

  /// @brief Method get_userName addr 0x22244b8 size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_platform addr 0x22244c0 size 0x8 virtual true final true
  inline ::GlobalNamespace::__AuthenticationToken__Platform get_platform();

  static inline ::GlobalNamespace::PlatformAuthenticationTokenProvider* New_ctor(::GlobalNamespace::IPlatformUserModel* platformUserModel, ::GlobalNamespace::UserInfo* userInfo);

  /// @brief Method .ctor addr 0x22244c8 size 0xac virtual false final false
  inline void _ctor(::GlobalNamespace::IPlatformUserModel* platformUserModel, ::GlobalNamespace::UserInfo* userInfo);

  /// @brief Method GetAuthenticationToken addr 0x2224574 size 0xf8 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetAuthenticationToken();

  /// @brief Method GetTokenPlatform addr 0x222466c size 0x60 virtual true final true
  inline ::GlobalNamespace::__AuthenticationToken__Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment);

  /// @brief Method GetXPlatformAccessToken addr 0x22246cc size 0xfc virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RequestXPlatformAccessToken addr 0x22247c8 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformAuthenticationTokenProvider();

public:
  /// @brief Field _platformUserModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformUserModel* ____platformUserModel;

  /// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _hashedUserId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____hashedUserId;

  /// @brief Field _platform, offset: 0x30, size: 0x1, def value: None
  ::GlobalNamespace::__AuthenticationToken__Platform ____platform;

  /// @brief Field _cachedXPlatformAccessToken, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::XPlatformAccessTokenData* ____cachedXPlatformAccessToken;

  /// @brief Field _xPlatformAccessTokenTask, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* ____xPlatformAccessTokenTask;

  /// @brief Field _xPlatformTokenRetryDelayExpiration, offset: 0x48, size: 0x4, def value: None
  float_t ____xPlatformTokenRetryDelayExpiration;

  /// @brief Field kXPlatformTokenRetryDelayLengthSeconds offset 0xffffffff size 0x4
  static constexpr int32_t kXPlatformTokenRetryDelayLengthSeconds{ static_cast<int32_t>(0x1e) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____platformUserModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____hashedUserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____platform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____cachedXPlatformAccessToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____xPlatformAccessTokenTask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformAuthenticationTokenProvider, ____xPlatformTokenRetryDelayExpiration) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformAuthenticationTokenProvider*, "", "PlatformAuthenticationTokenProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, "", "PlatformAuthenticationTokenProvider/<GetAuthenticationToken>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, "", "PlatformAuthenticationTokenProvider/<GetXPlatformAccessToken>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, "", "PlatformAuthenticationTokenProvider/<RequestXPlatformAccessToken>d__19");
