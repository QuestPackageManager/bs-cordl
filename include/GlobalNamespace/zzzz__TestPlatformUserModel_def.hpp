#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TestPlatformUserModel)
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace GlobalNamespace {
struct __TestPlatformUserModel___GetUserInfo_d__3;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct __TestPlatformUserModel___GetUserFriendsUserIds_d__4;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct __TestPlatformUserModel___GetUserAuthToken_d__5;
}
namespace GlobalNamespace {
struct __TestPlatformUserModel___GetUserNamesForUserIds_d__6;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class TestPlatformUserModel;
}
namespace GlobalNamespace {
struct __TestPlatformUserModel___GetUserAuthToken_d__5;
}
namespace GlobalNamespace {
struct __TestPlatformUserModel___GetUserFriendsUserIds_d__4;
}
namespace GlobalNamespace {
struct __TestPlatformUserModel___GetUserInfo_d__3;
}
namespace GlobalNamespace {
struct __TestPlatformUserModel___GetUserNamesForUserIds_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestPlatformUserModel);
MARK_VAL_T(::GlobalNamespace::__TestPlatformUserModel___GetUserAuthToken_d__5);
MARK_VAL_T(::GlobalNamespace::__TestPlatformUserModel___GetUserFriendsUserIds_d__4);
MARK_VAL_T(::GlobalNamespace::__TestPlatformUserModel___GetUserInfo_d__3);
MARK_VAL_T(::GlobalNamespace::__TestPlatformUserModel___GetUserNamesForUserIds_d__6);
// Type: ::<GetUserInfo>d__3
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 405 }), TypeDefinitionIndex(TypeDefinitionIndex(4717)),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 405 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4711)) CS Name: ::TestPlatformUserModel::<GetUserInfo>d__3
struct CORDL_TYPE __TestPlatformUserModel___GetUserInfo_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22333d0 size 0x280 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2233650 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }]
  constexpr __TestPlatformUserModel___GetUserInfo_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformUserModel___GetUserInfo_d__3();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformUserModel___GetUserInfo_d__3, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserInfo_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserInfo_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserInfo_d__3, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserFriendsUserIds>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 852 }), TypeDefinitionIndex(TypeDefinitionIndex(3826)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3826), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 852 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4712)) CS Name: ::TestPlatformUserModel::<GetUserFriendsUserIds>d__4
struct CORDL_TYPE __TestPlatformUserModel___GetUserFriendsUserIds_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22336a8 size 0x290 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2233938 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __TestPlatformUserModel___GetUserFriendsUserIds_d__4(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformUserModel___GetUserFriendsUserIds_d__4();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformUserModel___GetUserFriendsUserIds_d__4, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserFriendsUserIds_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserFriendsUserIds_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserFriendsUserIds_d__4, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserAuthToken>d__5
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4696)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 876 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 876 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4713)) CS Name: ::TestPlatformUserModel::<GetUserAuthToken>d__5
struct CORDL_TYPE __TestPlatformUserModel___GetUserAuthToken_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2233990 size 0x268 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2233bf8 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }]
  constexpr __TestPlatformUserModel___GetUserAuthToken_d__5(int32_t __1__state,
                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> __t__builder,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformUserModel___GetUserAuthToken_d__5();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformUserModel___GetUserAuthToken_d__5, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserAuthToken_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserAuthToken_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserAuthToken_d__5, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetUserNamesForUserIds>d__6
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 852 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3826), inst: 393 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 852 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3826))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4714)) CS Name: ::TestPlatformUserModel::<GetUserNamesForUserIds>d__6
struct CORDL_TYPE __TestPlatformUserModel___GetUserNamesForUserIds_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2233c50 size 0x210 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2233e60 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "userIds", ty:
  // "::System::Collections::Generic::IReadOnlyList_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __TestPlatformUserModel___GetUserNamesForUserIds_d__6(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
      ::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestPlatformUserModel___GetUserNamesForUserIds_d__6();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestPlatformUserModel___GetUserNamesForUserIds_d__6, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserNamesForUserIds_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserNamesForUserIds_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserNamesForUserIds_d__6, userIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestPlatformUserModel___GetUserNamesForUserIds_d__6, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TestPlatformUserModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4715))
// CS Name: ::TestPlatformUserModel*
class CORDL_TYPE TestPlatformUserModel : public ::System::Object {
public:
  // Declarations
  using _GetUserNamesForUserIds_d__6 = ::GlobalNamespace::__TestPlatformUserModel___GetUserNamesForUserIds_d__6;

  using _GetUserAuthToken_d__5 = ::GlobalNamespace::__TestPlatformUserModel___GetUserAuthToken_d__5;

  using _GetUserFriendsUserIds_d__4 = ::GlobalNamespace::__TestPlatformUserModel___GetUserFriendsUserIds_d__4;

  using _GetUserInfo_d__3 = ::GlobalNamespace::__TestPlatformUserModel___GetUserInfo_d__3;

  /// @brief Field platformUserInfoDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_platformUserInfoDidChangeEvent, put = __set_platformUserInfoDidChangeEvent))::System::Action_1<::GlobalNamespace::UserInfo*>* platformUserInfoDidChangeEvent;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
  constexpr operator ::GlobalNamespace::IPlatformUserModel*() noexcept;

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>*& __get_platformUserInfoDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::UserInfo*>*> const& __get_platformUserInfoDidChangeEvent() const;

  constexpr void __set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method add_platformUserInfoDidChangeEvent addr 0x2232e18 size 0xb0 virtual true final true
  inline void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method remove_platformUserInfoDidChangeEvent addr 0x2232ec8 size 0xb0 virtual true final true
  inline void remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method GetUserInfo addr 0x2232f78 size 0xe4 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo();

  /// @brief Method GetUserFriendsUserIds addr 0x223305c size 0xe4 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);

  /// @brief Method GetUserAuthToken addr 0x2233140 size 0xe4 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();

  /// @brief Method GetUserNamesForUserIds addr 0x2233224 size 0xf0 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);

  /// @brief Method RequestXPlatformAccessToken addr 0x2233314 size 0xb4 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::TestPlatformUserModel* New_ctor();

  /// @brief Method .ctor addr 0x22333c8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TestPlatformUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestPlatformUserModel(TestPlatformUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestPlatformUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestPlatformUserModel(TestPlatformUserModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestPlatformUserModel();

public:
  /// @brief Field platformUserInfoDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::UserInfo*>* ___platformUserInfoDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestPlatformUserModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TestPlatformUserModel, ___platformUserInfoDidChangeEvent) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformUserModel*, "", "TestPlatformUserModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformUserModel___GetUserAuthToken_d__5, "", "TestPlatformUserModel/<GetUserAuthToken>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformUserModel___GetUserFriendsUserIds_d__4, "", "TestPlatformUserModel/<GetUserFriendsUserIds>d__4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformUserModel___GetUserInfo_d__3, "", "TestPlatformUserModel/<GetUserInfo>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestPlatformUserModel___GetUserNamesForUserIds_d__6, "", "TestPlatformUserModel/<GetUserNamesForUserIds>d__6");
