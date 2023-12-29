#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OculusPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformUserModel)
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserAuthToken_d__12;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfo_d__10;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass13_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel__OculusAccessTokenTaskState;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserNamesForUserIds_d__13;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserFriendsUserIds_d__11;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___RequestXPlatformAccessToken_d__14;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass11_0;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass12_0;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass10_0;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Oculus::Platform::Models {
class User;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OculusPlatformUserModel__OculusAccessTokenTaskState;
}
namespace GlobalNamespace {
class OculusPlatformUserModel;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass11_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass12_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __OculusPlatformUserModel____c__DisplayClass13_1;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserAuthToken_d__12;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserFriendsUserIds_d__11;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserInfo_d__10;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___GetUserNamesForUserIds_d__13;
}
namespace GlobalNamespace {
struct __OculusPlatformUserModel___RequestXPlatformAccessToken_d__14;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformUserModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass11_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass12_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_1);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__12);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__13);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14);
// Type: ::OculusAccessTokenTaskState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4698))
// CS Name: ::OculusPlatformUserModel::OculusAccessTokenTaskState
struct CORDL_TYPE __OculusPlatformUserModel__OculusAccessTokenTaskState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OculusPlatformUserModel__OculusAccessTokenTaskState_Unwrapped
  enum struct ____OculusPlatformUserModel__OculusAccessTokenTaskState_Unwrapped : int32_t {
    __E_NotStarted = static_cast<int32_t>(0x0),
    __E_Requesting = static_cast<int32_t>(0x1),
    __E_Succeeded = static_cast<int32_t>(0x2),
    __E_Failed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OculusPlatformUserModel__OculusAccessTokenTaskState_Unwrapped() const noexcept {
    return static_cast<____OculusPlatformUserModel__OculusAccessTokenTaskState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel__OculusAccessTokenTaskState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel__OculusAccessTokenTaskState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NotStarted value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState const NotStarted;

  /// @brief Field Requesting value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState const Requesting;

  /// @brief Field Succeeded value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState const Succeeded;

  /// @brief Field Failed value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4699))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass10_0*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>* tcs;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusPlatformUserModel* __4__this;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>* value);

  constexpr ::GlobalNamespace::OculusPlatformUserModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformUserModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusPlatformUserModel* value);

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor addr 0x22311a4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUserInfo>b__0 addr 0x22311ac size 0x11c virtual false final false
  inline void _GetUserInfo_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass10_0(__OculusPlatformUserModel____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass10_0(__OculusPlatformUserModel____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass10_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>* ___tcs;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserInfo>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 405
// }), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 405 }), TypeDefinitionIndex(TypeDefinitionIndex(4717))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4700)) CS Name: ::OculusPlatformUserModel::<GetUserInfo>d__10
struct CORDL_TYPE __OculusPlatformUserModel___GetUserInfo_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2231304 size 0x494 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2231798 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserInfo_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder,
                                                          ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0* __8__1,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserInfo_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4701))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass11_0*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass11_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass11_0* New_ctor();

  /// @brief Method .ctor addr 0x22317f0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUserFriendsUserIds>b__0 addr 0x22317f8 size 0x43c virtual false final false
  inline void _GetUserFriendsUserIds_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass11_0(__OculusPlatformUserModel____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass11_0(__OculusPlatformUserModel____c__DisplayClass11_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass11_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* ___tcs;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass11_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass11_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass11_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserFriendsUserIds>d__11
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 852 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)),
// TypeDefinitionIndex(TypeDefinitionIndex(3826)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3826), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 852 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4702)) CS Name:
// ::OculusPlatformUserModel::<GetUserFriendsUserIds>d__11
struct CORDL_TYPE __OculusPlatformUserModel___GetUserFriendsUserIds_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2231c34 size 0x338 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2231f6c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "cached", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserFriendsUserIds_d__11(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
      ::GlobalNamespace::OculusPlatformUserModel* __4__this, bool cached,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserFriendsUserIds_d__11();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field cached, offset: 0x28, size: 0x1, def value: None
  bool cached;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11, cached) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4703))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass12_0*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>* tcs;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>* value);

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass12_0* New_ctor();

  /// @brief Method .ctor addr 0x2231fc4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUserAuthToken>b__0 addr 0x2231fcc size 0xc4 virtual false final false
  inline void _GetUserAuthToken_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass12_0(__OculusPlatformUserModel____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass12_0(__OculusPlatformUserModel____c__DisplayClass12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass12_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass12_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass12_0, ___tcs) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserAuthToken>d__12
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(4696)), TypeDefinitionIndex(TypeDefinitionIndex(3397)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 876 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 876 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4704)) CS Name: ::OculusPlatformUserModel::<GetUserAuthToken>d__12
struct CORDL_TYPE __OculusPlatformUserModel___GetUserAuthToken_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2232090 size 0x308 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2232398 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserAuthToken_d__12(int32_t __1__state,
                                                               ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> __t__builder,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserAuthToken_d__12();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__12, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__12, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4705))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass13_0*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass13_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor addr 0x22323f0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUserNamesForUserIds>g__Fetch|0 addr 0x22323f8 size 0xf4 virtual false final false
  inline void _GetUserNamesForUserIds_g__Fetch_0(int32_t index, uint64_t platformId);

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0, ___requests) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0, ___success) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0, ___userNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0, ___tcs) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass13_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4706))
// CS Name: ::OculusPlatformUserModel::<>c__DisplayClass13_1*
class CORDL_TYPE __OculusPlatformUserModel____c__DisplayClass13_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* CS$__8__locals1;

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  constexpr ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* value);

  static inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_1* New_ctor();

  /// @brief Method .ctor addr 0x22324ec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUserNamesForUserIds>b__1 addr 0x22324f4 size 0x128 virtual false final false
  inline void _GetUserNamesForUserIds_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass13_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformUserModel____c__DisplayClass13_1(__OculusPlatformUserModel____c__DisplayClass13_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformUserModel____c__DisplayClass13_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformUserModel____c__DisplayClass13_1(__OculusPlatformUserModel____c__DisplayClass13_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel____c__DisplayClass13_1();

public:
  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_1, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserNamesForUserIds>d__13
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3826)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3826), inst: 393 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3397), inst: 852 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 852 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4707)) CS Name: ::OculusPlatformUserModel::<GetUserNamesForUserIds>d__13
struct CORDL_TYPE __OculusPlatformUserModel___GetUserNamesForUserIds_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x223261c size 0x468 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2232a84 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "userIds", ty:
  // "::System::Collections::Generic::IReadOnlyList_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __OculusPlatformUserModel___GetUserNamesForUserIds_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
      ::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___GetUserNamesForUserIds_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder;

  /// @brief Field userIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__13, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__13, userIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__13, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__14
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 882 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(12846))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4708))
// CS Name: ::OculusPlatformUserModel::<RequestXPlatformAccessToken>d__14
struct CORDL_TYPE __OculusPlatformUserModel___RequestXPlatformAccessToken_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2232adc size 0x2e4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2232dc0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "_attemptCount_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __OculusPlatformUserModel___RequestXPlatformAccessToken_d__14(int32_t __1__state,
                                                                          ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder,
                                                                          ::GlobalNamespace::OculusPlatformUserModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                          int32_t _attemptCount_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformUserModel___RequestXPlatformAccessToken_d__14();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformUserModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <attemptCount>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t _attemptCount_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14, _attemptCount_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusPlatformUserModel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4698)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12845))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4709))
// CS Name: ::OculusPlatformUserModel*
class CORDL_TYPE OculusPlatformUserModel : public ::System::Object {
public:
  // Declarations
  using _RequestXPlatformAccessToken_d__14 = ::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14;

  using _GetUserNamesForUserIds_d__13 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__13;

  using __c__DisplayClass13_1 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_1;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0;

  using _GetUserAuthToken_d__12 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__12;

  using __c__DisplayClass12_0 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass12_0;

  using _GetUserFriendsUserIds_d__11 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11;

  using __c__DisplayClass11_0 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass11_0;

  using _GetUserInfo_d__10 = ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10;

  using __c__DisplayClass10_0 = ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0;

  using OculusAccessTokenTaskState = ::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState;

  /// @brief Field _cachedXPlatformAccessToken, offset 0x10, size 0x8
  __declspec(property(get = __get__cachedXPlatformAccessToken, put = __set__cachedXPlatformAccessToken))::GlobalNamespace::XPlatformAccessTokenData* _cachedXPlatformAccessToken;

  /// @brief Field _friendsUserIds, offset 0x18, size 0x8
  __declspec(property(get = __get__friendsUserIds, put = __set__friendsUserIds))::ArrayW<::StringW, ::Array<::StringW>*> _friendsUserIds;

  /// @brief Field _userInfo, offset 0x20, size 0x8
  __declspec(property(get = __get__userInfo, put = __set__userInfo))::GlobalNamespace::UserInfo* _userInfo;

  /// @brief Field _xPlatformTokenTaskState, offset 0x28, size 0x4
  __declspec(property(get = __get__xPlatformTokenTaskState, put = __set__xPlatformTokenTaskState))::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState _xPlatformTokenTaskState;

  /// @brief Field platformUserInfoDidChangeEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_platformUserInfoDidChangeEvent, put = __set_platformUserInfoDidChangeEvent))::System::Action_1<::GlobalNamespace::UserInfo*>* platformUserInfoDidChangeEvent;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
  constexpr operator ::GlobalNamespace::IPlatformUserModel*() noexcept;

  constexpr ::GlobalNamespace::XPlatformAccessTokenData*& __get__cachedXPlatformAccessToken();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> const& __get__cachedXPlatformAccessToken() const;

  constexpr void __set__cachedXPlatformAccessToken(::GlobalNamespace::XPlatformAccessTokenData* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__friendsUserIds();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__friendsUserIds() const;

  constexpr void __set__friendsUserIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::GlobalNamespace::UserInfo*& __get__userInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UserInfo*> const& __get__userInfo() const;

  constexpr void __set__userInfo(::GlobalNamespace::UserInfo* value);

  constexpr ::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState& __get__xPlatformTokenTaskState();

  constexpr ::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState const& __get__xPlatformTokenTaskState() const;

  constexpr void __set__xPlatformTokenTaskState(::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState value);

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>*& __get_platformUserInfoDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::UserInfo*>*> const& __get_platformUserInfoDidChangeEvent() const;

  constexpr void __set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method add_platformUserInfoDidChangeEvent addr 0x22308fc size 0xb0 virtual true final true
  inline void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method remove_platformUserInfoDidChangeEvent addr 0x22309ac size 0xb0 virtual true final true
  inline void remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method GetUserInfo addr 0x2230a5c size 0xf0 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo();

  /// @brief Method GetUserFriendsUserIds addr 0x2230b4c size 0xfc virtual true final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);

  /// @brief Method GetUserAuthToken addr 0x2230c48 size 0xe4 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();

  /// @brief Method GetUserNamesForUserIds addr 0x2230d2c size 0xf0 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);

  /// @brief Method RequestXPlatformAccessToken addr 0x2230e1c size 0xf8 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RequestAccessToken addr 0x2230f14 size 0x10c virtual false final false
  inline void RequestAccessToken();

  /// @brief Method OnCompleteLoadingOculusAccessToken addr 0x2231020 size 0x17c virtual false final false
  inline void OnCompleteLoadingOculusAccessToken(::Oculus::Platform::Message_1<::StringW>* message);

  static inline ::GlobalNamespace::OculusPlatformUserModel* New_ctor();

  /// @brief Method .ctor addr 0x223119c size 0x8 virtual false final false
  inline void _ctor();

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
  /// @brief Field _cachedXPlatformAccessToken, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::XPlatformAccessTokenData* ____cachedXPlatformAccessToken;

  /// @brief Field _friendsUserIds, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____friendsUserIds;

  /// @brief Field _userInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::UserInfo* ____userInfo;

  /// @brief Field _xPlatformTokenTaskState, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState ____xPlatformTokenTaskState;

  /// @brief Field platformUserInfoDidChangeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::UserInfo*>* ___platformUserInfoDidChangeEvent;

  /// @brief Field kMillisecondsDelayToCheckCallbackResponse offset 0xffffffff size 0x4
  static constexpr int32_t kMillisecondsDelayToCheckCallbackResponse{ static_cast<int32_t>(0x1f4) };

  /// @brief Field kMaxTokenRetry offset 0xffffffff size 0x4
  static constexpr int32_t kMaxTokenRetry{ static_cast<int32_t>(0x3) };

  /// @brief Field kPlatformEnvironment value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::PlatformEnvironment const kPlatformEnvironment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformUserModel, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____cachedXPlatformAccessToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____friendsUserIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____userInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ____xPlatformTokenTaskState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformUserModel, ___platformUserInfoDidChangeEvent) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel__OculusAccessTokenTaskState, "", "OculusPlatformUserModel/OculusAccessTokenTaskState");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel*, "", "OculusPlatformUserModel");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass10_0*, "", "OculusPlatformUserModel/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass11_0*, "", "OculusPlatformUserModel/<>c__DisplayClass11_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass12_0*, "", "OculusPlatformUserModel/<>c__DisplayClass12_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*, "", "OculusPlatformUserModel/<>c__DisplayClass13_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_1*, "", "OculusPlatformUserModel/<>c__DisplayClass13_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserAuthToken_d__12, "", "OculusPlatformUserModel/<GetUserAuthToken>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserFriendsUserIds_d__11, "", "OculusPlatformUserModel/<GetUserFriendsUserIds>d__11");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__10, "", "OculusPlatformUserModel/<GetUserInfo>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___GetUserNamesForUserIds_d__13, "", "OculusPlatformUserModel/<GetUserNamesForUserIds>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__14, "", "OculusPlatformUserModel/<RequestXPlatformAccessToken>d__14");
