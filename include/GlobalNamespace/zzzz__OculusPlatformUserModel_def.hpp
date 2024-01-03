#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
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
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfoTask_d__13;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfo_d__12;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass14_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass16_1;
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
template <typename TResult> class TaskCompletionSource_1;
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
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformUserModel;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass14_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass16_1;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfoTask_d__13;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfo_d__12;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformUserModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17);
// Type: ::<GetUserInfo>d__12
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 410 }), TypeDefinitionIndex(TypeDefinitionIndex(15996)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3402), inst: 410 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15985)) CS Name: ::OculusPlatformUserModel::<GetUserInfo>d__12
struct CORDL_TYPE __OculusPlatformUserModel___GetUserInfo_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x27fee94, size 0x1ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27ff080, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserInfo_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder,
                                                          ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::System::Threading::CancellationToken ctx,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserInfo_d__12();

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
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15986))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass13_0*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>* tcs;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>* value);

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor, addr 0x27ff0d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetUserInfoTask>b__0, addr 0x27ff0e0, size 0x108, virtual false, abstract: false, final false
  inline void _GetUserInfoTask_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* response);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass13_0(__OculusPlatformUserModel____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass13_0(__OculusPlatformUserModel____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass13_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0, ___tcs) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserInfoTask>d__13
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 410 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3402), inst: 410 }), TypeDefinitionIndex(TypeDefinitionIndex(15996))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15987)) CS Name:
// ::OculusPlatformUserModel::<GetUserInfoTask>d__13
struct CORDL_TYPE __OculusPlatformUserModel___GetUserInfoTask_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x27ff1e8, size 0x4bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27ff6a4, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserInfoTask_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder,
                                                              ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* __8__1,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserInfoTask_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15988))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass14_0*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* tcs;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusPlatformUserModel* __4__this;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value);

  constexpr ::GlobalNamespace::OculusPlatformUserModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformUserModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusPlatformUserModel* value);

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0* New_ctor();

  /// @brief Method .ctor, addr 0x27fe900, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetUserFriendsUserIds>b__0, addr 0x27ff6fc, size 0x43c, virtual false, abstract: false, final false
  inline void _GetUserFriendsUserIds_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>* response);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass14_0(__OculusPlatformUserModel____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass14_0(__OculusPlatformUserModel____c__DisplayClass14_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass14_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* ___tcs;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15989))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass15_0*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>* tcs;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>* value);

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0* New_ctor();

  /// @brief Method .ctor, addr 0x27fea3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetUserAuthToken>b__0, addr 0x27ffb38, size 0xc4, virtual false, abstract: false, final false
  inline void _GetUserAuthToken_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>* response);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass15_0(__OculusPlatformUserModel____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass15_0(__OculusPlatformUserModel____c__DisplayClass15_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass15_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0, ___tcs) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15990))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass16_0*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requests, offset 0x10, size 0x4
  __declspec(property(get = __get_requests, put = __set_requests)) int32_t requests;

  /// @brief Field success, offset 0x14, size 0x1
  __declspec(property(get = __get_success, put = __set_success)) bool success;

  /// @brief Field userNames, offset 0x18, size 0x8
  __declspec(property(get = __get_userNames, put = __set_userNames))::ArrayW<::StringW, ::Array<::StringW>*> userNames;

  /// @brief Field tcs, offset 0x20, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* tcs;

  constexpr int32_t& __get_requests();

  constexpr int32_t const& __get_requests() const;

  constexpr void __set_requests(int32_t value);

  constexpr bool& __get_success();

  constexpr bool const& __get_success() const;

  constexpr void __set_success(bool value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_userNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_userNames() const;

  constexpr void __set_userNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value);

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0* New_ctor();

  /// @brief Method .ctor, addr 0x27feca0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetUserNamesForUserIds>g__Fetch|0, addr 0x27feca8, size 0xf4, virtual false, abstract: false, final false
  inline void _GetUserNamesForUserIds_g__Fetch_0(int32_t index, uint64_t platformId);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass16_0(__OculusPlatformUserModel____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass16_0(__OculusPlatformUserModel____c__DisplayClass16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass16_0();

public:
  /// @brief Field requests, offset: 0x10, size: 0x4, def value: None
  int32_t ___requests;

  /// @brief Field success, offset: 0x14, size: 0x1, def value: None
  bool ___success;

  /// @brief Field userNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___userNames;

  /// @brief Field tcs, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0, ___requests) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0, ___success) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0, ___userNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0, ___tcs) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15991))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass16_1*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass16_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0* CS$__8__locals1;

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  constexpr ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0* value);

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1* New_ctor();

  /// @brief Method .ctor, addr 0x27ffbfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetUserNamesForUserIds>b__1, addr 0x27ffc04, size 0x128, virtual false, abstract: false, final false
  inline void _GetUserNamesForUserIds_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass16_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass16_1(__OculusPlatformUserModel____c__DisplayClass16_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass16_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass16_1(__OculusPlatformUserModel____c__DisplayClass16_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass16_1();

public:
  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3402), inst: 902 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(12925)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3394), inst: 902 }), TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15992)) CS Name:
// ::OculusPlatformUserModel::<RequestXPlatformAccessToken>d__17
struct CORDL_TYPE __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x27ffd2c, size 0x354, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x28000e8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17(int32_t __1__state,
                                                                          ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder,
                                                                          ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___RequestXPlatformAccessToken_d__17();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__2;

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
// Type: ::OculusPlatformUserModel
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15993))
// CS Name: ::OculusPlatformUserModel*
class CORDL_TYPE OculusPlatformUserModel : public ::System::Object {
public:
  // Declarations
  using _RequestXPlatformAccessToken_d__17 = ::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17;

  using __c__DisplayClass16_1 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0;

  using __c__DisplayClass15_0 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0;

  using __c__DisplayClass14_0 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0;

  using _GetUserInfoTask_d__13 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0;

  using _GetUserInfo_d__12 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12;

  /// @brief Field _userInfoTask, offset 0x10, size 0x8
  __declspec(property(get = __get__userInfoTask, put = __set__userInfoTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* _userInfoTask;

  /// @brief Field _friendsUserIds, offset 0x18, size 0x8
  __declspec(property(get = __get__friendsUserIds, put = __set__friendsUserIds))::ArrayW<::StringW, ::Array<::StringW>*> _friendsUserIds;

  /// @brief Field _userInfo, offset 0x20, size 0x8
  __declspec(property(get = __get__userInfo, put = __set__userInfo))::GlobalNamespace::UserInfo* _userInfo;

  /// @brief Field _platformInit, offset 0x28, size 0x8
  __declspec(property(get = __get__platformInit, put = __set__platformInit))::GlobalNamespace::IPlatformInit* _platformInit;

  /// @brief Field _lastXPlatformTokenStatusChange, offset 0x30, size 0x4
  __declspec(property(get = __get__lastXPlatformTokenStatusChange, put = __set__lastXPlatformTokenStatusChange)) float_t _lastXPlatformTokenStatusChange;

  /// @brief Field platformUserInfoDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_platformUserInfoDidChangeEvent, put = __set_platformUserInfoDidChangeEvent))::System::Action_1<::GlobalNamespace::UserInfo*>* platformUserInfoDidChangeEvent;

  __declspec(property(get = get_CanXPlatformAccessTokenBeCached)) bool CanXPlatformAccessTokenBeCached;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
  constexpr operator ::GlobalNamespace::IPlatformUserModel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPlatformUserModel"
  constexpr ::GlobalNamespace::IPlatformUserModel* i___GlobalNamespace__IPlatformUserModel() noexcept;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*& __get__userInfoTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*> const& __get__userInfoTask() const;

  constexpr void __set__userInfoTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__friendsUserIds();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__friendsUserIds() const;

  constexpr void __set__friendsUserIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::GlobalNamespace::UserInfo*& __get__userInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UserInfo*> const& __get__userInfo() const;

  constexpr void __set__userInfo(::GlobalNamespace::UserInfo* value);

  constexpr ::GlobalNamespace::IPlatformInit*& __get__platformInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformInit*> const& __get__platformInit() const;

  constexpr void __set__platformInit(::GlobalNamespace::IPlatformInit* value);

  constexpr float_t& __get__lastXPlatformTokenStatusChange();

  constexpr float_t const& __get__lastXPlatformTokenStatusChange() const;

  constexpr void __set__lastXPlatformTokenStatusChange(float_t value);

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>*& __get_platformUserInfoDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::UserInfo*>*> const& __get_platformUserInfoDidChangeEvent() const;

  constexpr void __set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  static inline ::GlobalNamespace::OculusPlatformUserModel* New_ctor(::GlobalNamespace::IPlatformInit* platformInit);

  /// @brief Method .ctor, addr 0x27fe3e0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IPlatformInit* platformInit);

  /// @brief Method add_platformUserInfoDidChangeEvent, addr 0x27fe408, size 0xb0, virtual true, abstract: false, final true
  inline void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method remove_platformUserInfoDidChangeEvent, addr 0x27fe4b8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method get_CanXPlatformAccessTokenBeCached, addr 0x27fe568, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanXPlatformAccessTokenBeCached();

  /// @brief Method GetUserInfo, addr 0x27fe570, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo(::System::Threading::CancellationToken ctx);

  /// @brief Method GetUserInfoTask, addr 0x27fe66c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfoTask(::System::Threading::CancellationToken ctx);

  /// @brief Method GetUserFriendsUserIds, addr 0x27fe75c, size 0x1a4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);

  /// @brief Method GetUserAuthToken, addr 0x27fe908, size 0x134, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();

  /// @brief Method GetUserNamesForUserIds, addr 0x27fea44, size 0x25c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);

  /// @brief Method RequestXPlatformAccessToken, addr 0x27fed9c, size 0xf8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformUserModel(OculusPlatformUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformUserModel(OculusPlatformUserModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformUserModel();

public:
  /// @brief Field _userInfoTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* ____userInfoTask;

  /// @brief Field _friendsUserIds, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____friendsUserIds;

  /// @brief Field _userInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::UserInfo* ____userInfo;

  /// @brief Field _platformInit, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformInit* ____platformInit;

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

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____userInfoTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____friendsUserIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____userInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____platformInit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____lastXPlatformTokenStatusChange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ___platformUserInfoDidChangeEvent) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel*, "", "OculusPlatformUserModel");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*, "", "OculusPlatformUserModel/<>c__DisplayClass13_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0*, "", "OculusPlatformUserModel/<>c__DisplayClass14_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0*, "", "OculusPlatformUserModel/<>c__DisplayClass15_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*, "", "OculusPlatformUserModel/<>c__DisplayClass16_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1*, "", "OculusPlatformUserModel/<>c__DisplayClass16_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13, "", "OculusPlatformUserModel/<GetUserInfoTask>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12, "", "OculusPlatformUserModel/<GetUserInfo>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17, "", "OculusPlatformUserModel/<RequestXPlatformAccessToken>d__17");
