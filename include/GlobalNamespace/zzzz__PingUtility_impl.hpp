#pragma once
// IWYU pragma private; include "GlobalNamespace/PingUtility.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PingUtility_def.hpp"
#include "GlobalNamespace/zzzz__PingUtility_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Ping_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PingUtility___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PingUtility___c::*)()>(&::GlobalNamespace::PingUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e1a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingUtility___c._PingAsync_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ping* (::GlobalNamespace::PingUtility___c::*)(::System::Net::IPAddress*)>(
    &::GlobalNamespace::PingUtility___c::_PingAsync_b__0_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22e1a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility___c*>::get(), "<PingAsync>b__0_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PingUtility___c::setStaticF___9(::GlobalNamespace::PingUtility___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PingUtility___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility___c*>::get>(
      std::forward<::GlobalNamespace::PingUtility___c*>(value));
}
inline ::GlobalNamespace::PingUtility___c* GlobalNamespace::PingUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PingUtility___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility___c*>::get>();
}
inline void GlobalNamespace::PingUtility___c::setStaticF___9__0_0(::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility___c*>::get>(
      std::forward<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*>(value));
}
inline ::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* GlobalNamespace::PingUtility___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility___c*>::get>();
}
inline void GlobalNamespace::PingUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Ping* GlobalNamespace::PingUtility___c::_PingAsync_b__0_0(::System::Net::IPAddress* ip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility___c*>::get(), "<PingAsync>b__0_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ping*, false>(this, ___internal_method, ip);
}
inline ::GlobalNamespace::PingUtility___c* GlobalNamespace::PingUtility___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PingUtility___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PingUtility___c::PingUtility___c() {}
//  Writing Method size for method: ::GlobalNamespace::PingUtility__PingAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PingUtility__PingAsync_d__0::*)()>(
    &::GlobalNamespace::PingUtility__PingAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x22e1a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility__PingAsync_d__0>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingUtility__PingAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PingUtility__PingAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PingUtility__PingAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22e2028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility__PingAsync_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PingUtility__PingAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility__PingAsync_d__0>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PingUtility__PingAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility__PingAsync_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PingUtility__PingAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PingUtility__PingAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_pings_5__2", ty: "::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ping_5__3", ty: "int64_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_found_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_t_5__5",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PingUtility__PingAsync_d__0::PingUtility__PingAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> __t__builder, ::StringW url, ::ArrayW<::UnityEngine::Ping*, ::Array<::UnityEngine::Ping*>*> _pings_5__2,
    int64_t _ping_5__3, bool _found_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>> __u__1, int32_t _t_5__5,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->url = url;
  this->_pings_5__2 = _pings_5__2;
  this->_ping_5__3 = _ping_5__3;
  this->_found_5__4 = _found_5__4;
  this->__u__1 = __u__1;
  this->_t_5__5 = _t_5__5;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PingUtility__PingAsync_d__0::PingUtility__PingAsync_d__0() {}
//  Writing Method size for method: ::GlobalNamespace::PingUtility.PingAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (*)(::StringW)>(&::GlobalNamespace::PingUtility::PingAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22e18c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility*>::get(), "PingAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<int64_t>* GlobalNamespace::PingUtility::PingAsync(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility*>::get(), "PingAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*, false>(nullptr, ___internal_method, url);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PingUtility::PingUtility() {}
