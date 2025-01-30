#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformUserModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformUserModel)
namespace BGLib::Polyglot {
struct Language;
}
namespace BeatSaber::Init {
class IPlatformInit;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserAuthToken_d__15;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserFriendsUserIds_d__14;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserInfoInternalAsync_d__13;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserInfo_d__12;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserNamesForUserIds_d__16;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__RequestXPlatformAccessToken_d__17;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d;
}
namespace GlobalNamespace {
class OculusPlatformUserModel___c;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformUserModel;
}
namespace GlobalNamespace {
class OculusPlatformUserModel___c;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserAuthToken_d__15;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserFriendsUserIds_d__14;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserInfoInternalAsync_d__13;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserInfo_d__12;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__GetUserNamesForUserIds_d__16;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel__RequestXPlatformAccessToken_d__17;
}
namespace GlobalNamespace {
struct OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformUserModel);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformUserModel___c);
MARK_VAL_T(::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15);
MARK_VAL_T(::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14);
MARK_VAL_T(::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13);
MARK_VAL_T(::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12);
MARK_VAL_T(::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16);
MARK_VAL_T(::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17);
MARK_VAL_T(::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformUserModel/<<GetUserNamesForUserIds>g__Fetch|16_0>d
struct CORDL_TYPE OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2277060, size 0x22c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x227728c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "", def_value: None }, CppParam { name: "userId",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "", def_value: None }]
  constexpr OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __t__builder, ::StringW userId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18309 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __t__builder;

  /// @brief Field userId, offset: 0x20, size: 0x8, def value: None
  ::StringW userId;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d, userId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformUserModel/<>c
class CORDL_TYPE OculusPlatformUserModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OculusPlatformUserModel___c* __9;

  /// @brief Field <>9__16_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_1, put = setStaticF___9__16_1)) ::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>* __9__16_1;

  /// @brief Field <>9__16_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_2, put = setStaticF___9__16_2)) ::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>* __9__16_2;

  static inline ::GlobalNamespace::OculusPlatformUserModel___c* New_ctor();

  /// @brief Method <GetUserNamesForUserIds>b__16_1, addr 0x227736c, size 0x18, virtual false, abstract: false, final false
  inline bool _GetUserNamesForUserIds_b__16_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* response);

  /// @brief Method <GetUserNamesForUserIds>b__16_2, addr 0x2277384, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW _GetUserNamesForUserIds_b__16_2(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* response);

  /// @brief Method .ctor, addr 0x2277364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OculusPlatformUserModel___c* getStaticF___9();

  static inline ::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>* getStaticF___9__16_1();

  static inline ::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>* getStaticF___9__16_2();

  static inline void setStaticF___9(::GlobalNamespace::OculusPlatformUserModel___c* value);

  static inline void setStaticF___9__16_1(::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>* value);

  static inline void setStaticF___9__16_2(::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformUserModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformUserModel___c(OculusPlatformUserModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformUserModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformUserModel___c(OculusPlatformUserModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18310 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformUserModel/<GetUserAuthToken>d__15
struct CORDL_TYPE OculusPlatformUserModel__GetUserAuthToken_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22773d0, size 0x298, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2277668, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel__GetUserAuthToken_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>", modifiers: "", def_value: None }]
  constexpr OculusPlatformUserModel__GetUserAuthToken_d__15(int32_t __1__state,
                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> __t__builder,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18311 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15, __u__1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformUserModel/<GetUserFriendsUserIds>d__14
struct CORDL_TYPE OculusPlatformUserModel__GetUserFriendsUserIds_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22776e4, size 0x3ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2277a90, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel__GetUserFriendsUserIds_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "cached", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*>", modifiers: "", def_value: None }]
  constexpr OculusPlatformUserModel__GetUserFriendsUserIds_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
      ::GlobalNamespace::OculusPlatformUserModel* __4__this, bool cached,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18312 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field cached, offset: 0x28, size: 0x1, def value: None
  bool cached;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14, cached) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformUserModel/<GetUserInfo>d__12
struct CORDL_TYPE OculusPlatformUserModel__GetUserInfo_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2277b0c, size 0x244, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2277d50, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel__GetUserInfo_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr OculusPlatformUserModel__GetUserInfo_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder,
                                                       ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::System::Threading::CancellationToken ctx,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18313 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field ctx, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken ctx;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12, ctx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformUserModel/<GetUserInfoInternalAsync>d__13
struct CORDL_TYPE OculusPlatformUserModel__GetUserInfoInternalAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2277dcc, size 0x458, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2278224, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel__GetUserInfoInternalAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "",
  // def_value: None }]
  constexpr OculusPlatformUserModel__GetUserInfoInternalAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder, ::GlobalNamespace::OculusPlatformUserModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18314 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13, __u__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformUserModel/<GetUserNamesForUserIds>d__16
struct CORDL_TYPE OculusPlatformUserModel__GetUserNamesForUserIds_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22782a0, size 0x4a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2278748, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel__GetUserNamesForUserIds_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "userIds", ty:
  // "::System::Collections::Generic::IReadOnlyList_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*,::Array<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*>>",
  // modifiers: "", def_value: None }]
  constexpr OculusPlatformUserModel__GetUserNamesForUserIds_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
      ::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<
          ::ArrayW<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::Array<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*>>
          __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18315 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder;

  /// @brief Field userIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<
      ::ArrayW<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::Array<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*>>
      __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16, userIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken, XPlatformAccessTokenData
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusPlatformUserModel/<RequestXPlatformAccessToken>d__17
struct CORDL_TYPE OculusPlatformUserModel__RequestXPlatformAccessToken_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22787c4, size 0x3f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2278c18, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel__RequestXPlatformAccessToken_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }]
  constexpr OculusPlatformUserModel__RequestXPlatformAccessToken_d__17(int32_t __1__state,
                                                                       ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder,
                                                                       ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18316 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPlatformUserModel, PlatformEnvironment, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformUserModel
class CORDL_TYPE OculusPlatformUserModel : public ::System::Object {
public:
  // Declarations
  using _GetUserAuthToken_d__15 = ::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15;

  using _GetUserFriendsUserIds_d__14 = ::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14;

  using _GetUserInfoInternalAsync_d__13 = ::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13;

  using _GetUserInfo_d__12 = ::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12;

  using _GetUserNamesForUserIds_d__16 = ::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16;

  using _RequestXPlatformAccessToken_d__17 = ::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17;

  using __GetUserNamesForUserIds_g__Fetch_16_0_d = ::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d;

  using __c = ::GlobalNamespace::OculusPlatformUserModel___c;

  __declspec(property(get = get_CanXPlatformAccessTokenBeCached)) bool CanXPlatformAccessTokenBeCached;

  /// @brief Field _friendsUserIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__friendsUserIds, put = __cordl_internal_set__friendsUserIds)) ::ArrayW<::StringW, ::Array<::StringW>*> _friendsUserIds;

  /// @brief Field _lastXPlatformTokenStatusChange, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lastXPlatformTokenStatusChange, put = __cordl_internal_set__lastXPlatformTokenStatusChange)) float_t _lastXPlatformTokenStatusChange;

  /// @brief Field _platformInit, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit)) ::BeatSaber::Init::IPlatformInit* _platformInit;

  /// @brief Field _userInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__userInfo, put = __cordl_internal_set__userInfo)) ::GlobalNamespace::UserInfo* _userInfo;

  /// @brief Field _userInfoTask, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userInfoTask, put = __cordl_internal_set__userInfoTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* _userInfoTask;

  /// @brief Field platformUserInfoDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_platformUserInfoDidChangeEvent,
                      put = __cordl_internal_set_platformUserInfoDidChangeEvent)) ::System::Action_1<::GlobalNamespace::UserInfo*>* platformUserInfoDidChangeEvent;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
  constexpr operator ::GlobalNamespace::IPlatformUserModel*() noexcept;

  /// @brief Method GetUserAuthToken, addr 0x2276c70, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();

  /// @brief Method GetUserFriendsUserIds, addr 0x2276b7c, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);

  /// @brief Method GetUserInfo, addr 0x22769a8, size 0xec, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo(::System::Threading::CancellationToken ctx);

  /// @brief Method GetUserInfoInternalAsync, addr 0x2276a94, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfoInternalAsync(::System::Threading::CancellationToken ctx);

  /// @brief Method GetUserNamesForUserIds, addr 0x2276d44, size 0xe4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);

  /// @brief Method GetUsersSystemLanguage, addr 0x2276f20, size 0x5c, virtual true, abstract: false, final true
  inline ::BGLib::Polyglot::Language GetUsersSystemLanguage();

  static inline ::GlobalNamespace::OculusPlatformUserModel* New_ctor(::BeatSaber::Init::IPlatformInit* platformInit);

  /// @brief Method RequestXPlatformAccessToken, addr 0x2276e28, size 0xf8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <GetUserNamesForUserIds>g__Fetch|16_0, addr 0x2276f7c, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>* _GetUserNamesForUserIds_g__Fetch_16_0(::StringW userId);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__friendsUserIds() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__friendsUserIds();

  constexpr float_t const& __cordl_internal_get__lastXPlatformTokenStatusChange() const;

  constexpr float_t& __cordl_internal_get__lastXPlatformTokenStatusChange();

  constexpr ::BeatSaber::Init::IPlatformInit* const& __cordl_internal_get__platformInit() const;

  constexpr ::BeatSaber::Init::IPlatformInit*& __cordl_internal_get__platformInit();

  constexpr ::GlobalNamespace::UserInfo* const& __cordl_internal_get__userInfo() const;

  constexpr ::GlobalNamespace::UserInfo*& __cordl_internal_get__userInfo();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* const& __cordl_internal_get__userInfoTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*& __cordl_internal_get__userInfoTask();

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>* const& __cordl_internal_get_platformUserInfoDidChangeEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>*& __cordl_internal_get_platformUserInfoDidChangeEvent();

  constexpr void __cordl_internal_set__friendsUserIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__lastXPlatformTokenStatusChange(float_t value);

  constexpr void __cordl_internal_set__platformInit(::BeatSaber::Init::IPlatformInit* value);

  constexpr void __cordl_internal_set__userInfo(::GlobalNamespace::UserInfo* value);

  constexpr void __cordl_internal_set__userInfoTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* value);

  constexpr void __cordl_internal_set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method .ctor, addr 0x2276978, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::IPlatformInit* platformInit);

  /// @brief Method add_platformUserInfoDidChangeEvent, addr 0x2276818, size 0xb0, virtual true, abstract: false, final true
  inline void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method get_CanXPlatformAccessTokenBeCached, addr 0x22769a0, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanXPlatformAccessTokenBeCached();

  /// @brief Convert to "::GlobalNamespace::IPlatformUserModel"
  constexpr ::GlobalNamespace::IPlatformUserModel* i___GlobalNamespace__IPlatformUserModel() noexcept;

  /// @brief Method remove_platformUserInfoDidChangeEvent, addr 0x22768c8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformUserModel(OculusPlatformUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformUserModel(OculusPlatformUserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18317 };

  /// @brief Field kPlatformEnvironment value: U8(2)
  static ::GlobalNamespace::PlatformEnvironment const kPlatformEnvironment;

  /// @brief Field _platformInit, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Init::IPlatformInit* ____platformInit;

  /// @brief Field _userInfoTask, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* ____userInfoTask;

  /// @brief Field _userInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::UserInfo* ____userInfo;

  /// @brief Field _friendsUserIds, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____friendsUserIds;

  /// @brief Field _lastXPlatformTokenStatusChange, offset: 0x30, size: 0x4, def value: None
  float_t ____lastXPlatformTokenStatusChange;

  /// @brief Field platformUserInfoDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::UserInfo*>* ___platformUserInfoDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____platformInit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____userInfoTask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____userInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____friendsUserIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____lastXPlatformTokenStatusChange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ___platformUserInfoDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel*, "", "OculusPlatformUserModel");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformUserModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel___c*, "", "OculusPlatformUserModel/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15, "", "OculusPlatformUserModel/<GetUserAuthToken>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14, "", "OculusPlatformUserModel/<GetUserFriendsUserIds>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13, "", "OculusPlatformUserModel/<GetUserInfoInternalAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12, "", "OculusPlatformUserModel/<GetUserInfo>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16, "", "OculusPlatformUserModel/<GetUserNamesForUserIds>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17, "", "OculusPlatformUserModel/<RequestXPlatformAccessToken>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d, "", "OculusPlatformUserModel/<<GetUserNamesForUserIds>g__Fetch|16_0>d");
