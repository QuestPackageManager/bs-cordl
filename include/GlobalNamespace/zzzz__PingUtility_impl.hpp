#pragma once
// IWYU pragma private; include "GlobalNamespace\PingUtility.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Ping_impl.hpp"
#include "GlobalNamespace/zzzz__PingUtility_def.hpp"
#include "GlobalNamespace/zzzz__PingUtility_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Ping_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PingUtility___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PingUtility___c::*)()>(&::GlobalNamespace::PingUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333edfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingUtility___c._PingAsync_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ping* (::GlobalNamespace::PingUtility___c::*)(::System::Net::IPAddress*)>(
    &::GlobalNamespace::PingUtility___c::_PingAsync_b__0_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x333ee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility___c*>(), { "<PingAsync>b__0_0", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PingUtility___c::setStaticF___9(::GlobalNamespace::PingUtility___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PingUtility___c*, "<>9", ::GlobalNamespace::PingUtility___c*>(std::forward<::GlobalNamespace::PingUtility___c*>(value));
}
inline ::GlobalNamespace::PingUtility___c* GlobalNamespace::PingUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PingUtility___c*, "<>9", ::GlobalNamespace::PingUtility___c*>();
}
inline void GlobalNamespace::PingUtility___c::setStaticF___9__0_0(::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*, "<>9__0_0", ::GlobalNamespace::PingUtility___c*>(
      std::forward<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*>(value));
}
inline ::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* GlobalNamespace::PingUtility___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>*, "<>9__0_0", ::GlobalNamespace::PingUtility___c*>();
}
inline void GlobalNamespace::PingUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Ping* GlobalNamespace::PingUtility___c::_PingAsync_b__0_0(::System::Net::IPAddress* ip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility___c*>(), { "<PingAsync>b__0_0", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ping*>(this, ___internal_method, ip);
}
inline ::GlobalNamespace::PingUtility___c* GlobalNamespace::PingUtility___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PingUtility___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PingUtility___c::PingUtility___c() {}
//  Writing Method size for method: ::GlobalNamespace::PingUtility__PingAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PingUtility__PingAsync_d__0::*)()>(&::GlobalNamespace::PingUtility__PingAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x333ee84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility__PingAsync_d__0>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingUtility__PingAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PingUtility__PingAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PingUtility__PingAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x333f484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility__PingAsync_d__0>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PingUtility__PingAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility__PingAsync_d__0>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PingUtility__PingAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility__PingAsync_d__0>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PingUtility__PingAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PingUtility__PingAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_pings_5__2", ty: "::ArrayW<::UnityEngine::Ping*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ping_5__3", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_found_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_t_5__5", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PingUtility__PingAsync_d__0::PingUtility__PingAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> __t__builder,
                                                                                      ::StringW url, ::ArrayW<::UnityEngine::Ping*> _pings_5__2, int64_t _ping_5__3, bool _found_5__4,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> __u__1, int32_t _t_5__5,
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (*)(::StringW)>(&::GlobalNamespace::PingUtility::PingAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x333ecc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility*>(), { "PingAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<int64_t>* GlobalNamespace::PingUtility::PingAsync(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PingUtility*>(), { "PingAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*>(nullptr, ___internal_method, url);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PingUtility::PingUtility() {}
