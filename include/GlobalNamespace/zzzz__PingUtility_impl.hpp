#pragma once
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PingUtility_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__PingUtility_def.hpp"
#include "UnityEngine/zzzz__Ping_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PingUtility____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PingUtility____c::*)()>(&::GlobalNamespace::__PingUtility____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PingUtility____c._PingAsync_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ping* (::GlobalNamespace::__PingUtility____c::*)(::System::Net::IPAddress*)>(
    &::GlobalNamespace::__PingUtility____c::_PingAsync_b__0_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe51748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility____c*>::get(), "<PingAsync>b__0_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__PingUtility____c::setStaticF___9(::GlobalNamespace::__PingUtility____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PingUtility____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility____c*>::get>(
      std::forward<::GlobalNamespace::__PingUtility____c*>(value));
}
inline ::GlobalNamespace::__PingUtility____c* GlobalNamespace::__PingUtility____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PingUtility____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility____c*>::get>();
}
inline void GlobalNamespace::__PingUtility____c::setStaticF___9__0_0(::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility____c*>::get>(
      std::forward<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*>(value));
}
inline ::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* GlobalNamespace::__PingUtility____c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility____c*>::get>();
}
inline ::GlobalNamespace::__PingUtility____c* GlobalNamespace::__PingUtility____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PingUtility____c*>());
}
inline void GlobalNamespace::__PingUtility____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Ping* GlobalNamespace::__PingUtility____c::_PingAsync_b__0_0(::System::Net::IPAddress* ip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility____c*>::get(), "<PingAsync>b__0_0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ping*, false>(this, ___internal_method, ip);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PingUtility____c::__PingUtility____c() {}
//  Writing Method size for method: ::GlobalNamespace::__PingUtility___PingAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PingUtility___PingAsync_d__0::*)()>(
    &::GlobalNamespace::__PingUtility___PingAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0xe517c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility___PingAsync_d__0>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PingUtility___PingAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PingUtility___PingAsync_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__PingUtility___PingAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe51cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility___PingAsync_d__0>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__PingUtility___PingAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__PingUtility___PingAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility___PingAsync_d__0>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PingUtility___PingAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PingUtility___PingAsync_d__0>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "_pings_5__2", ty: "::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_ping_5__3", ty: "int64_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_found_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_t_5__5",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PingUtility___PingAsync_d__0::__PingUtility___PingAsync_d__0(
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
constexpr ::GlobalNamespace::__PingUtility___PingAsync_d__0::__PingUtility___PingAsync_d__0() {}
//  Writing Method size for method: ::GlobalNamespace::PingUtility.PingAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (*)(::StringW)>(&::GlobalNamespace::PingUtility::PingAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xe515dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility*>::get(), "PingAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<int64_t>* GlobalNamespace::PingUtility::PingAsync(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingUtility*>::get(), "PingAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*, false>(nullptr, ___internal_method, url);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PingUtility::PingUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
