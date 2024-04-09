#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformUserModel)
namespace GlobalNamespace {
class IPlatformInit;
}
namespace GlobalNamespace {
class IPlatformUserModel;
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
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserAuthToken_d__15;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserFriendsUserIds_d__14;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfoInternalAsync_d__13;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfo_d__12;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserNamesForUserIds_d__16;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c;
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
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
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
class __OculusPlatformUserModel____c;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserAuthToken_d__15;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserFriendsUserIds_d__14;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfoInternalAsync_d__13;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfo_d__12;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserNamesForUserIds_d__16;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformUserModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__15);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__16);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d);
// Type: ::<GetUserInfo>d__12
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusPlatformUserModel::<GetUserInfo>d__12
struct CORDL_TYPE __OculusPlatformUserModel___GetUserInfo_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf71960, size 0x1ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf71b4c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserInfo_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserInfo_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder,
                                                          ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::System::Threading::CancellationToken ctx,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12, ctx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserInfoInternalAsync>d__13
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusPlatformUserModel::<GetUserInfoInternalAsync>d__13
struct CORDL_TYPE __OculusPlatformUserModel___GetUserInfoInternalAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf71ba4, size 0x408, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf71fac, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserInfoInternalAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "",
  // def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserInfoInternalAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder, ::GlobalNamespace::OculusPlatformUserModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__2) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13, __u__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserFriendsUserIds>d__14
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusPlatformUserModel::<GetUserFriendsUserIds>d__14
struct CORDL_TYPE __OculusPlatformUserModel___GetUserFriendsUserIds_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf72004, size 0x384, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf72388, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserFriendsUserIds_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "cached", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserFriendsUserIds_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
      ::GlobalNamespace::OculusPlatformUserModel* __4__this, bool cached,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*> __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14, cached) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserAuthToken>d__15
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusPlatformUserModel::<GetUserAuthToken>d__15
struct CORDL_TYPE __OculusPlatformUserModel___GetUserAuthToken_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf723e0, size 0x258, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf72638, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserAuthToken_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserAuthToken_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__15, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__15, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusPlatformUserModel::<>c*
class CORDL_TYPE __OculusPlatformUserModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OculusPlatformUserModel____c* __9;

  /// @brief Field <>9__16_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_1, put = setStaticF___9__16_1))::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>* __9__16_1;

  /// @brief Field <>9__16_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_2, put = setStaticF___9__16_2))::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>* __9__16_2;

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c* New_ctor();

  /// @brief Method <GetUserNamesForUserIds>b__16_1, addr 0xf726fc, size 0x18, virtual false, abstract: false, final false
  inline bool _GetUserNamesForUserIds_b__16_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* response);

  /// @brief Method <GetUserNamesForUserIds>b__16_2, addr 0xf72714, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW _GetUserNamesForUserIds_b__16_2(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* response);

  /// @brief Method .ctor, addr 0xf726f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c* getStaticF___9();

  static inline ::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>* getStaticF___9__16_1();

  static inline ::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>* getStaticF___9__16_2();

  static inline void setStaticF___9(::GlobalNamespace::__OculusPlatformUserModel____c* value);

  static inline void setStaticF___9__16_1(::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>* value);

  static inline void setStaticF___9__16_2(::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c(__OculusPlatformUserModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c(__OculusPlatformUserModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserNamesForUserIds>d__16
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusPlatformUserModel::<GetUserNamesForUserIds>d__16
struct CORDL_TYPE __OculusPlatformUserModel___GetUserNamesForUserIds_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf72760, size 0x47c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf72bdc, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserNamesForUserIds_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "userIds", ty:
  // "::System::Collections::Generic::IReadOnlyList_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*,::Array<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*>>",
  // modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserNamesForUserIds_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
      ::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<
          ::ArrayW<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::Array<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*>>
          __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__16, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__16, userIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__16, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusPlatformUserModel::<RequestXPlatformAccessToken>d__17
struct CORDL_TYPE __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf72c34, size 0x38c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf73020, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17(int32_t __1__state,
                                                                          ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder,
                                                                          ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__2) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<<GetUserNamesForUserIds>g__Fetch|16_0>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusPlatformUserModel::<<GetUserNamesForUserIds>g__Fetch|16_0>d
struct CORDL_TYPE __OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf73078, size 0x1d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf7324c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "", def_value: None }, CppParam { name: "userId",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __t__builder, ::StringW userId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __t__builder;

  /// @brief Field userId, offset: 0x20, size: 0x8, def value: None
  ::StringW userId;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d, userId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusPlatformUserModel
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusPlatformUserModel*
class CORDL_TYPE OculusPlatformUserModel : public ::System::Object {
public:
  // Declarations
  using _GetUserAuthToken_d__15 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__15;

  using _GetUserFriendsUserIds_d__14 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14;

  using _GetUserInfoInternalAsync_d__13 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13;

  using _GetUserInfo_d__12 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12;

  using _GetUserNamesForUserIds_d__16 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__16;

  using _RequestXPlatformAccessToken_d__17 = ::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17;

  using __GetUserNamesForUserIds_g__Fetch_16_0_d = ::GlobalNamespace::__OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d;

  using __c = ::GlobalNamespace::__OculusPlatformUserModel____c;

  __declspec(property(get = get_CanXPlatformAccessTokenBeCached)) bool CanXPlatformAccessTokenBeCached;

  /// @brief Field _friendsUserIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__friendsUserIds, put = __cordl_internal_set__friendsUserIds))::ArrayW<::StringW, ::Array<::StringW>*> _friendsUserIds;

  /// @brief Field _lastXPlatformTokenStatusChange, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lastXPlatformTokenStatusChange, put = __cordl_internal_set__lastXPlatformTokenStatusChange)) float_t _lastXPlatformTokenStatusChange;

  /// @brief Field _platformInit, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit))::GlobalNamespace::IPlatformInit* _platformInit;

  /// @brief Field _userInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__userInfo, put = __cordl_internal_set__userInfo))::GlobalNamespace::UserInfo* _userInfo;

  /// @brief Field _userInfoTask, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userInfoTask, put = __cordl_internal_set__userInfoTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* _userInfoTask;

  /// @brief Field platformUserInfoDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_platformUserInfoDidChangeEvent,
                      put = __cordl_internal_set_platformUserInfoDidChangeEvent))::System::Action_1<::GlobalNamespace::UserInfo*>* platformUserInfoDidChangeEvent;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
  constexpr operator ::GlobalNamespace::IPlatformUserModel*() noexcept;

  /// @brief Method GetUserAuthToken, addr 0xf7159c, size 0xe4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();

  /// @brief Method GetUserFriendsUserIds, addr 0xf714a0, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);

  /// @brief Method GetUserInfo, addr 0xf712b0, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo(::System::Threading::CancellationToken ctx);

  /// @brief Method GetUserInfoInternalAsync, addr 0xf713ac, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfoInternalAsync(::System::Threading::CancellationToken ctx);

  /// @brief Method GetUserNamesForUserIds, addr 0xf71680, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);

  static inline ::GlobalNamespace::OculusPlatformUserModel* New_ctor(::GlobalNamespace::IPlatformInit* platformInit);

  /// @brief Method RequestXPlatformAccessToken, addr 0xf71770, size 0x100, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <GetUserNamesForUserIds>g__Fetch|16_0, addr 0xf71870, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>* _GetUserNamesForUserIds_g__Fetch_16_0(::StringW userId);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__friendsUserIds() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__friendsUserIds();

  constexpr float_t const& __cordl_internal_get__lastXPlatformTokenStatusChange() const;

  constexpr float_t& __cordl_internal_get__lastXPlatformTokenStatusChange();

  constexpr ::GlobalNamespace::IPlatformInit*& __cordl_internal_get__platformInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformInit*> const& __cordl_internal_get__platformInit() const;

  constexpr ::GlobalNamespace::UserInfo*& __cordl_internal_get__userInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UserInfo*> const& __cordl_internal_get__userInfo() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*& __cordl_internal_get__userInfoTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*> const& __cordl_internal_get__userInfoTask() const;

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>*& __cordl_internal_get_platformUserInfoDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::UserInfo*>*> const& __cordl_internal_get_platformUserInfoDidChangeEvent() const;

  constexpr void __cordl_internal_set__friendsUserIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__lastXPlatformTokenStatusChange(float_t value);

  constexpr void __cordl_internal_set__platformInit(::GlobalNamespace::IPlatformInit* value);

  constexpr void __cordl_internal_set__userInfo(::GlobalNamespace::UserInfo* value);

  constexpr void __cordl_internal_set__userInfoTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* value);

  constexpr void __cordl_internal_set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method .ctor, addr 0xf71280, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IPlatformInit* platformInit);

  /// @brief Method add_platformUserInfoDidChangeEvent, addr 0xf71120, size 0xb0, virtual true, abstract: false, final true
  inline void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method get_CanXPlatformAccessTokenBeCached, addr 0xf712a8, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanXPlatformAccessTokenBeCached();

  /// @brief Convert to "::GlobalNamespace::IPlatformUserModel"
  constexpr ::GlobalNamespace::IPlatformUserModel* i___GlobalNamespace__IPlatformUserModel() noexcept;

  /// @brief Method remove_platformUserInfoDidChangeEvent, addr 0xf711d0, size 0xb0, virtual true, abstract: false, final true
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

  /// @brief Field _platformInit, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformInit* ____platformInit;

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

  /// @brief Field kPlatformEnvironment value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::PlatformEnvironment const kPlatformEnvironment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____platformInit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____userInfoTask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____userInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____friendsUserIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____lastXPlatformTokenStatusChange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ___platformUserInfoDidChangeEvent) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel*, "", "OculusPlatformUserModel");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c*, "", "OculusPlatformUserModel/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__15, "", "OculusPlatformUserModel/<GetUserAuthToken>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__14, "", "OculusPlatformUserModel/<GetUserFriendsUserIds>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoInternalAsync_d__13, "", "OculusPlatformUserModel/<GetUserInfoInternalAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12, "", "OculusPlatformUserModel/<GetUserInfo>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__16, "", "OculusPlatformUserModel/<GetUserNamesForUserIds>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, "", "OculusPlatformUserModel/<RequestXPlatformAccessToken>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____GetUserNamesForUserIds_g__Fetch_16_0_d, "", "OculusPlatformUserModel/<<GetUserNamesForUserIds>g__Fetch|16_0>d");
