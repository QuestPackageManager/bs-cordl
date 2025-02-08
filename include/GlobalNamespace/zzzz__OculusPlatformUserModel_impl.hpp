#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformUserModel.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformUserModel_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "BeatSaber/Init/zzzz__IPlatformInit_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x227890c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2278b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "userId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __t__builder, ::StringW userId,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->userId = userId;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d::OculusPlatformUserModel___GetUserNamesForUserIds_g__Fetch_16_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel___c::*)()>(&::GlobalNamespace::OculusPlatformUserModel___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2278c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel___c._GetUserNamesForUserIds_b__16_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusPlatformUserModel___c::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&::GlobalNamespace::OculusPlatformUserModel___c::_GetUserNamesForUserIds_b__16_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2278c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get(), "<GetUserNamesForUserIds>b__16_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel___c._GetUserNamesForUserIds_b__16_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OculusPlatformUserModel___c::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&::GlobalNamespace::OculusPlatformUserModel___c::_GetUserNamesForUserIds_b__16_2)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2278c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get(), "<GetUserNamesForUserIds>b__16_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformUserModel___c::setStaticF___9(::GlobalNamespace::OculusPlatformUserModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OculusPlatformUserModel___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get>(
      std::forward<::GlobalNamespace::OculusPlatformUserModel___c*>(value));
}
inline ::GlobalNamespace::OculusPlatformUserModel___c* GlobalNamespace::OculusPlatformUserModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OculusPlatformUserModel___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get>();
}
inline void GlobalNamespace::OculusPlatformUserModel___c::setStaticF___9__16_1(::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>*, "<>9__16_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get>(
      std::forward<::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>*>(value));
}
inline ::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>* GlobalNamespace::OculusPlatformUserModel___c::getStaticF___9__16_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, bool>*, "<>9__16_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get>();
}
inline void GlobalNamespace::OculusPlatformUserModel___c::setStaticF___9__16_2(::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>*, "<>9__16_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get>(
      std::forward<::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>*>(value));
}
inline ::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>* GlobalNamespace::OculusPlatformUserModel___c::getStaticF___9__16_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::StringW>*, "<>9__16_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get>();
}
inline void GlobalNamespace::OculusPlatformUserModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OculusPlatformUserModel___c::_GetUserNamesForUserIds_b__16_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get(), "<GetUserNamesForUserIds>b__16_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, response);
}
inline ::StringW GlobalNamespace::OculusPlatformUserModel___c::_GetUserNamesForUserIds_b__16_2(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel___c*>::get(), "<GetUserNamesForUserIds>b__16_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, response);
}
inline ::GlobalNamespace::OculusPlatformUserModel___c* GlobalNamespace::OculusPlatformUserModel___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusPlatformUserModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel___c::OculusPlatformUserModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2278c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2278f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::OculusPlatformUserModel__GetUserAuthToken_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> __t__builder,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserAuthToken_d__15::OculusPlatformUserModel__GetUserAuthToken_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2278f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x227933c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this",
// ty: "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cached", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::OculusPlatformUserModel__GetUserFriendsUserIds_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
    ::GlobalNamespace::OculusPlatformUserModel* __4__this, bool cached,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cached = cached;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserFriendsUserIds_d__14::OculusPlatformUserModel__GetUserFriendsUserIds_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x22793b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22795fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::OculusPlatformUserModel__GetUserInfo_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder, ::GlobalNamespace::OculusPlatformUserModel* __4__this,
    ::System::Threading::CancellationToken ctx, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->ctx = ctx;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserInfo_d__12::OculusPlatformUserModel__GetUserInfo_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2279678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2279ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> __t__builder, ::GlobalNamespace::OculusPlatformUserModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13::OculusPlatformUserModel__GetUserInfoInternalAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x2279b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2279ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "userIds", ty:
// "::System::Collections::Generic::IReadOnlyList_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*,::Array<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::OculusPlatformUserModel__GetUserNamesForUserIds_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __t__builder,
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<
        ::ArrayW<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*, ::Array<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*>>
        __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->userIds = userIds;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel__GetUserNamesForUserIds_d__16::OculusPlatformUserModel__GetUserNamesForUserIds_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x227a070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x227a4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder, ::GlobalNamespace::OculusPlatformUserModel* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17::OculusPlatformUserModel__RequestXPlatformAccessToken_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.add_platformUserInfoDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel::*)(::System::Action_1<::GlobalNamespace::UserInfo*>*)>(
    &::GlobalNamespace::OculusPlatformUserModel::add_platformUserInfoDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22780c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "add_platformUserInfoDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::UserInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.remove_platformUserInfoDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel::*)(::System::Action_1<::GlobalNamespace::UserInfo*>*)>(
    &::GlobalNamespace::OculusPlatformUserModel::remove_platformUserInfoDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2278174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "remove_platformUserInfoDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::UserInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel::*)(::BeatSaber::Init::IPlatformInit*)>(
    &::GlobalNamespace::OculusPlatformUserModel::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2278224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::IPlatformInit*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.get_CanXPlatformAccessTokenBeCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusPlatformUserModel::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel::get_CanXPlatformAccessTokenBeCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227824c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "get_CanXPlatformAccessTokenBeCached",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* (
    ::GlobalNamespace::OculusPlatformUserModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformUserModel::GetUserInfo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2278254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "GetUserInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserInfoInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* (
    ::GlobalNamespace::OculusPlatformUserModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformUserModel::GetUserInfoInternalAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2278340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "GetUserInfoInternalAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserFriendsUserIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* (
    ::GlobalNamespace::OculusPlatformUserModel::*)(bool)>(&::GlobalNamespace::OculusPlatformUserModel::GetUserFriendsUserIds)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2278428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "GetUserFriendsUserIds",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserAuthToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* (
    ::GlobalNamespace::OculusPlatformUserModel::*)()>(&::GlobalNamespace::OculusPlatformUserModel::GetUserAuthToken)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x227851c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                                                                               "GetUserAuthToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserNamesForUserIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* (
    ::GlobalNamespace::OculusPlatformUserModel::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::OculusPlatformUserModel::GetUserNamesForUserIds)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22785f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "GetUserNamesForUserIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.RequestXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::GlobalNamespace::OculusPlatformUserModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformUserModel::RequestXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22786d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "RequestXPlatformAccessToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUsersSystemLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (::GlobalNamespace::OculusPlatformUserModel::*)()>(
    &::GlobalNamespace::OculusPlatformUserModel::GetUsersSystemLanguage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22787cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                                                                               "GetUsersSystemLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel._GetUserNamesForUserIds_g__Fetch_16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>* (*)(::StringW)>(
        &::GlobalNamespace::OculusPlatformUserModel::_GetUserNamesForUserIds_g__Fetch_16_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2278828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "<GetUserNamesForUserIds>g__Fetch|16_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Init::IPlatformInit*& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__platformInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformInit;
}
constexpr ::BeatSaber::Init::IPlatformInit* const& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__platformInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformInit;
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__cordl_internal_set__platformInit(::BeatSaber::Init::IPlatformInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__userInfoTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userInfoTask;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* const& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__userInfoTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userInfoTask;
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__cordl_internal_set__userInfoTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userInfoTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::UserInfo*& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__userInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userInfo;
}
constexpr ::GlobalNamespace::UserInfo* const& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__userInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userInfo;
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__cordl_internal_set__userInfo(::GlobalNamespace::UserInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__friendsUserIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friendsUserIds;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__friendsUserIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friendsUserIds;
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__cordl_internal_set__friendsUserIds(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____friendsUserIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__lastXPlatformTokenStatusChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastXPlatformTokenStatusChange;
}
constexpr float_t const& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get__lastXPlatformTokenStatusChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastXPlatformTokenStatusChange;
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__cordl_internal_set__lastXPlatformTokenStatusChange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastXPlatformTokenStatusChange = value;
}
constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>*& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get_platformUserInfoDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserInfoDidChangeEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>* const& GlobalNamespace::OculusPlatformUserModel::__cordl_internal_get_platformUserInfoDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platformUserInfoDidChangeEvent;
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__cordl_internal_set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformUserInfoDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OculusPlatformUserModel::add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "add_platformUserInfoDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::UserInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OculusPlatformUserModel::remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "remove_platformUserInfoDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::UserInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OculusPlatformUserModel::_ctor(::BeatSaber::Init::IPlatformInit* platformInit) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::IPlatformInit*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platformInit);
}
inline bool GlobalNamespace::OculusPlatformUserModel::get_CanXPlatformAccessTokenBeCached() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "get_CanXPlatformAccessTokenBeCached",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GlobalNamespace::OculusPlatformUserModel::GetUserInfo(::System::Threading::CancellationToken ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "GetUserInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*, false>(this, ___internal_method, ctx);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GlobalNamespace::OculusPlatformUserModel::GetUserInfoInternalAsync(::System::Threading::CancellationToken ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "GetUserInfoInternalAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*, false>(this, ___internal_method, ctx);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GlobalNamespace::OculusPlatformUserModel::GetUserFriendsUserIds(bool cached) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "GetUserFriendsUserIds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, false>(this, ___internal_method, cached);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GlobalNamespace::OculusPlatformUserModel::GetUserAuthToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                                                                             "GetUserAuthToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*
GlobalNamespace::OculusPlatformUserModel::GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "GetUserNamesForUserIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, false>(this, ___internal_method, userIds);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
GlobalNamespace::OculusPlatformUserModel::RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "RequestXPlatformAccessToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*, false>(this, ___internal_method, cancellationToken);
}
inline ::BGLib::Polyglot::Language GlobalNamespace::OculusPlatformUserModel::GetUsersSystemLanguage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                                                                             "GetUsersSystemLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*
GlobalNamespace::OculusPlatformUserModel::_GetUserNamesForUserIds_g__Fetch_16_0(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(), "<GetUserNamesForUserIds>g__Fetch|16_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>*, false>(nullptr, ___internal_method, userId);
}
inline ::GlobalNamespace::OculusPlatformUserModel* GlobalNamespace::OculusPlatformUserModel::New_ctor(::BeatSaber::Init::IPlatformInit* platformInit) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusPlatformUserModel*>(platformInit));
}
/// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
constexpr GlobalNamespace::OculusPlatformUserModel::operator ::GlobalNamespace::IPlatformUserModel*() noexcept {
  return static_cast<::GlobalNamespace::IPlatformUserModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPlatformUserModel"
constexpr ::GlobalNamespace::IPlatformUserModel* GlobalNamespace::OculusPlatformUserModel::i___GlobalNamespace__IPlatformUserModel() noexcept {
  return static_cast<::GlobalNamespace::IPlatformUserModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformUserModel::OculusPlatformUserModel() {}
constexpr ::GlobalNamespace::PlatformEnvironment GlobalNamespace::OculusPlatformUserModel::kPlatformEnvironment{ static_cast<uint8_t>(0x2u) };
