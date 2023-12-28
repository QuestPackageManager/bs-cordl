#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerInstance_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerInstance_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__IMockBeatmapDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
template <typename T> constexpr ::GlobalNamespace::MockPlayerInstance*& GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlayerInstance*> const& GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::__set___4__this(::GlobalNamespace::MockPlayerInstance* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::IConnectionInitParams_1<T>*& GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::__get_connectionInitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionInitParams;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionInitParams_1<T>*> const&
GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::__get_connectionInitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionInitParams;
}
template <typename T> constexpr void GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::__set_connectionInitParams(::GlobalNamespace::IConnectionInitParams_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionInitParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>* GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>*>());
}
template <typename T> inline void GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::_ConnectToServer_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>*>::get(),
                                               "<ConnectToServer>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__MockPlayerInstance____c__DisplayClass17_0_1<T>::__MockPlayerInstance____c__DisplayClass17_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::*)()>(
    &::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x23eb820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23eba38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "runner", ty:
// "::GlobalNamespace::IStandaloneThreadRunner*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::__MockPlayerInstance___RunAsync_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                          ::System::Threading::CancellationToken token,
                                                                                                          ::GlobalNamespace::MockPlayerInstance* __4__this,
                                                                                                          ::GlobalNamespace::IStandaloneThreadRunner* runner,
                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->token = token;
  this->__4__this = __4__this;
  this->runner = runner;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MockPlayerInstance___RunAsync_d__18::__MockPlayerInstance___RunAsync_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::__MockPlayerInstance___Stop_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlayerInstance___Stop_d__21::*)()>(
    &::GlobalNamespace::__MockPlayerInstance___Stop_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x23eba44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___Stop_d__21>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MockPlayerInstance___Stop_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlayerInstance___Stop_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MockPlayerInstance___Stop_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ebbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___Stop_d__21>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MockPlayerInstance___Stop_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MockPlayerInstance___Stop_d__21::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___Stop_d__21>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MockPlayerInstance___Stop_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___Stop_d__21>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MockPlayerInstance___Stop_d__21::__MockPlayerInstance___Stop_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                  ::GlobalNamespace::MockPlayerInstance* __4__this,
                                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MockPlayerInstance___Stop_d__21::__MockPlayerInstance___Stop_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::*)()>(
    &::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x23ebbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ebdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::__MockPlayerInstance___DisposeAsync_d__22(int32_t __1__state,
                                                                                                                  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                                  ::GlobalNamespace::MockPlayerInstance* __4__this,
                                                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MockPlayerInstance___DisposeAsync_d__22::__MockPlayerInstance___DisposeAsync_d__22() {}
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23eb074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "get_id",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23eb07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "get_userId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23eb084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "get_userName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(
    ::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IMockBeatmapDataProvider*, ::GlobalNamespace::IConnectionManager*)>(
    &::GlobalNamespace::MockPlayerInstance::_ctor)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x23eb08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMockBeatmapDataProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::Tick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23eb414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "Tick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.RunAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::IStandaloneThreadRunner*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlayerInstance::RunAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23eb42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "RunAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneThreadRunner*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.Dispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::System::Action*)>(
    &::GlobalNamespace::MockPlayerInstance::Dispatch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23eb508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "Dispatch", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.DispatchAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::MockPlayerInstance::*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::GlobalNamespace::MockPlayerInstance::DispatchAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23eb524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "DispatchAsync", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::Stop)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23eb540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "Stop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.DisposeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MockPlayerInstance::*)()>(
    &::GlobalNamespace::MockPlayerInstance::DisposeAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23eb5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "DisposeAsync",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::Dispose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23eb69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.__ctor_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MockPlayerInstance::__ctor_b__15_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23eb750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "<.ctor>b__15_0", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.__ctor_b__15_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::MockPlayerInstance::__ctor_b__15_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23eb754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "<.ctor>b__15_1", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance._DisposeAsync_b__22_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MockPlayerInstance::*)()>(
    &::GlobalNamespace::MockPlayerInstance::_DisposeAsync_b__22_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23eb758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(),
                                                                               "<DisposeAsync>b__22_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IStandaloneMonobehavior"
constexpr GlobalNamespace::MockPlayerInstance::operator ::GlobalNamespace::IStandaloneMonobehavior*() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneMonobehavior*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockPlayerInstance::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::MockPlayerInstance::__get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerInstance::__get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MockPlayerInstance::__get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerInstance::__get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MockPlayerInstance::__get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerInstance::__get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::ITimeProvider*& GlobalNamespace::MockPlayerInstance::__get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& GlobalNamespace::MockPlayerInstance::__get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__timeProvider(::BGNet::Core::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::MockPlayerInstance::__get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& GlobalNamespace::MockPlayerInstance::__get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskUtility)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::MockPlayerInstance::__get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::MockPlayerInstance::__get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerSessionManager*& GlobalNamespace::MockPlayerInstance::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSessionManager*> const& GlobalNamespace::MockPlayerInstance::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__multiplayerSessionManager(::GlobalNamespace::MultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ConnectedPlayerManager*& GlobalNamespace::MockPlayerInstance::__get__connectedPlayerManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& GlobalNamespace::MockPlayerInstance::__get__connectedPlayerManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayerManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine*& GlobalNamespace::MockPlayerInstance::__get__fsm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fsm;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlayerFiniteStateMachine*> const& GlobalNamespace::MockPlayerInstance::__get__fsm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fsm;
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fsm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::MockPlayerInstance::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "get_id",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayerInstance::get_userId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "get_userId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayerInstance::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "get_userName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlayerInstance* GlobalNamespace::MockPlayerInstance::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                                            ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider,
                                                                                            ::GlobalNamespace::IConnectionManager* connectionManager) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockPlayerInstance*>(timeProvider, taskUtility, beatmapDataProvider, connectionManager));
}
inline void GlobalNamespace::MockPlayerInstance::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                       ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider, ::GlobalNamespace::IConnectionManager* connectionManager) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMockBeatmapDataProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeProvider, taskUtility, beatmapDataProvider, connectionManager);
}
inline void GlobalNamespace::MockPlayerInstance::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "Tick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MockPlayerInstance::ConnectToServer(::GlobalNamespace::IConnectionInitParams_1<T>* connectionInitParams) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "ConnectToServer",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionInitParams_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionInitParams);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MockPlayerInstance::RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "RunAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneThreadRunner*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, runner, token);
}
inline void GlobalNamespace::MockPlayerInstance::Dispatch(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "Dispatch", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MockPlayerInstance::DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "DispatchAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action);
}
inline void GlobalNamespace::MockPlayerInstance::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "Stop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MockPlayerInstance::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "DisposeAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance::__ctor_b__15_0(::GlobalNamespace::ConnectionFailedReason r) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "<.ctor>b__15_0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r);
}
inline void GlobalNamespace::MockPlayerInstance::__ctor_b__15_1(::GlobalNamespace::DisconnectedReason r) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(), "<.ctor>b__15_1", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MockPlayerInstance::_DisposeAsync_b__22_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerInstance*>::get(),
                                                                             "<DisposeAsync>b__22_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerInstance::MockPlayerInstance() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
