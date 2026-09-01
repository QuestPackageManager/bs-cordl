#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlayerInstance.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerInstance_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMockBeatmapDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunnable_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGeneratorAI_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerInstance_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance_FsmTickRunnable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance_FsmTickRunnable::*)(::GlobalNamespace::MockPlayerInstance*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MockPlayerInstance_FsmTickRunnable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a875e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance_FsmTickRunnable*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MockPlayerInstance*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance_FsmTickRunnable.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayerInstance_FsmTickRunnable::*)()>(&::GlobalNamespace::MockPlayerInstance_FsmTickRunnable::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a875f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance_FsmTickRunnable*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance_FsmTickRunnable.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance_FsmTickRunnable::*)()>(&::GlobalNamespace::MockPlayerInstance_FsmTickRunnable::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a87684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance_FsmTickRunnable*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MockPlayerInstance*& GlobalNamespace::MockPlayerInstance_FsmTickRunnable::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr ::GlobalNamespace::MockPlayerInstance* const& GlobalNamespace::MockPlayerInstance_FsmTickRunnable::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr void GlobalNamespace::MockPlayerInstance_FsmTickRunnable::__cordl_internal_set__instance(::GlobalNamespace::MockPlayerInstance* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instance = value;
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::MockPlayerInstance_FsmTickRunnable::__cordl_internal_get__cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::MockPlayerInstance_FsmTickRunnable::__cordl_internal_get__cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationToken;
}
constexpr void GlobalNamespace::MockPlayerInstance_FsmTickRunnable::__cordl_internal_set__cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationToken = value;
}
inline void GlobalNamespace::MockPlayerInstance_FsmTickRunnable::_ctor(::GlobalNamespace::MockPlayerInstance* instance, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance_FsmTickRunnable*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MockPlayerInstance*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, cancellationToken);
}
inline bool GlobalNamespace::MockPlayerInstance_FsmTickRunnable::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance_FsmTickRunnable*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance_FsmTickRunnable::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance_FsmTickRunnable*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlayerInstance_FsmTickRunnable* GlobalNamespace::MockPlayerInstance_FsmTickRunnable::New_ctor(::GlobalNamespace::MockPlayerInstance* instance,
                                                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerInstance_FsmTickRunnable*>(instance, cancellationToken));
}
/// @brief Convert operator to "::GlobalNamespace::IStandaloneThreadRunnable"
constexpr GlobalNamespace::MockPlayerInstance_FsmTickRunnable::operator ::GlobalNamespace::IStandaloneThreadRunnable*() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneThreadRunnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IStandaloneThreadRunnable"
constexpr ::GlobalNamespace::IStandaloneThreadRunnable* GlobalNamespace::MockPlayerInstance_FsmTickRunnable::i___GlobalNamespace__IStandaloneThreadRunnable() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneThreadRunnable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockPlayerInstance_FsmTickRunnable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MockPlayerInstance_FsmTickRunnable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerInstance_FsmTickRunnable::MockPlayerInstance_FsmTickRunnable() {}
template <typename T> constexpr ::GlobalNamespace::MockPlayerInstance*& GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::GlobalNamespace::MockPlayerInstance* const& GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::__cordl_internal_set___4__this(::GlobalNamespace::MockPlayerInstance* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr ::GlobalNamespace::IConnectionInitParams_1<T>*& GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::__cordl_internal_get_connectionInitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionInitParams;
}
template <typename T>
constexpr ::GlobalNamespace::IConnectionInitParams_1<T>* const& GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::__cordl_internal_get_connectionInitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionInitParams;
}
template <typename T> constexpr void GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::__cordl_internal_set_connectionInitParams(::GlobalNamespace::IConnectionInitParams_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionInitParams = value;
}
template <typename T> inline void GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::_ConnectToServer_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>*>(), { "<ConnectToServer>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>* GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MockPlayerInstance___c__DisplayClass26_0_1<T>::MockPlayerInstance___c__DisplayClass26_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::*)()>(&::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5a87688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a8791c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::MockPlayerInstance__DisposeAsync_d__33(int32_t __1__state,
                                                                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                            ::GlobalNamespace::MockPlayerInstance* __4__this,
                                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerInstance__DisposeAsync_d__33::MockPlayerInstance__DisposeAsync_d__33() {}
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance__RunAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance__RunAsync_d__27::*)()>(&::GlobalNamespace::MockPlayerInstance__RunAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5a87988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__RunAsync_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance__RunAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance__RunAsync_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::MockPlayerInstance__RunAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a87d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__RunAsync_d__27>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockPlayerInstance__RunAsync_d__27::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__RunAsync_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance__RunAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__RunAsync_d__27>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MockPlayerInstance__RunAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MockPlayerInstance__RunAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "", def_value: Some("{}") }, CppParam { name: "runner", ty:
// "::GlobalNamespace::IStandaloneThreadRunner*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::MockPlayerInstance__RunAsync_d__27::MockPlayerInstance__RunAsync_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                    ::System::Threading::CancellationToken token, ::GlobalNamespace::MockPlayerInstance* __4__this,
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
constexpr ::GlobalNamespace::MockPlayerInstance__RunAsync_d__27::MockPlayerInstance__RunAsync_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance__Stop_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance__Stop_d__30::*)()>(&::GlobalNamespace::MockPlayerInstance__Stop_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5a87d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__Stop_d__30>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance__Stop_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance__Stop_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::MockPlayerInstance__Stop_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a87f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__Stop_d__30>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockPlayerInstance__Stop_d__30::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__Stop_d__30>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance__Stop_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance__Stop_d__30>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MockPlayerInstance__Stop_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MockPlayerInstance__Stop_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlayerInstance*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MockPlayerInstance__Stop_d__30::MockPlayerInstance__Stop_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                            ::GlobalNamespace::MockPlayerInstance* __4__this,
                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerInstance__Stop_d__30::MockPlayerInstance__Stop_d__30() {}
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.get_disconnectedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::DisconnectedReason> (::GlobalNamespace::MockPlayerInstance::*)()>(
    &::GlobalNamespace::MockPlayerInstance::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_disconnectedReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.set_disconnectedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::System::Nullable_1<::GlobalNamespace::DisconnectedReason>)>(
    &::GlobalNamespace::MockPlayerInstance::set_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                             { "set_disconnectedReason", {}, { ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::DisconnectedReason>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.get_connectionFailedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason> (::GlobalNamespace::MockPlayerInstance::*)()>(
    &::GlobalNamespace::MockPlayerInstance::get_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_connectionFailedReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.set_connectionFailedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>)>(
    &::GlobalNamespace::MockPlayerInstance::set_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                             { "set_connectionFailedReason", {}, { ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*,
                                                                                                       ::GlobalNamespace::IMockBeatmapDataProvider*, ::GlobalNamespace::IConnectionManager*)>(
    &::GlobalNamespace::MockPlayerInstance::_ctor)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5a86b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BGNet::Core::ITimeProvider*>(), ::i2c::type_of<::BGNet::Core::ITaskUtility*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IMockBeatmapDataProvider*>(), ::i2c::type_of<::GlobalNamespace::IConnectionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::Tick)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a86fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.RunAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::IStandaloneThreadRunner*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlayerInstance::RunAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a86fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                { "RunAsync", {}, { ::i2c::type_of<::GlobalNamespace::IStandaloneThreadRunner*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.WhenReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::System::Action*)>(&::GlobalNamespace::MockPlayerInstance::WhenReady)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a8709c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "WhenReady", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.WhenReadyAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MockPlayerInstance::*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(
    &::GlobalNamespace::MockPlayerInstance::WhenReadyAsync)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a870b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                                                           { "WhenReadyAsync", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::Stop)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a870cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.HandleDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::MockPlayerInstance::HandleDisconnectedEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a87170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "HandleDisconnectedEvent", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.HandleConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MockPlayerInstance::HandleConnectionFailedEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a871cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                                                           { "HandleConnectionFailedEvent", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::DisposeAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a87228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "DisposeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a872d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerInstance._DisposeAsync_b__33_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MockPlayerInstance::*)()>(&::GlobalNamespace::MockPlayerInstance::_DisposeAsync_b__33_0)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5a87390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "<DisposeAsync>b__33_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::StringW& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId = value;
}
constexpr ::StringW& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::DisconnectedReason>& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__disconnectedReason_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason_k__BackingField;
}
constexpr ::System::Nullable_1<::GlobalNamespace::DisconnectedReason> const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__disconnectedReason_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__disconnectedReason_k__BackingField(::System::Nullable_1<::GlobalNamespace::DisconnectedReason> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectedReason_k__BackingField = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__connectionFailedReason_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionFailedReason_k__BackingField;
}
constexpr ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason> const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__connectionFailedReason_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionFailedReason_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__connectionFailedReason_k__BackingField(::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionFailedReason_k__BackingField = value;
}
constexpr ::BGNet::Core::ITimeProvider*& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr ::BGNet::Core::ITimeProvider* const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeProvider = value;
}
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr ::BGNet::Core::ITaskUtility* const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taskUtility = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager>& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager> const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__multiplayerSessionManager(::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager*& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__connectedPlayerManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager* const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__connectedPlayerManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__connectedPlayerManager(::GlobalNamespace::BeatSaberConnectedPlayerManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayerManager = value;
}
constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine*& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__fsm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fsm;
}
constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine* const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__fsm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fsm;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fsm = value;
}
constexpr ::GlobalNamespace::MockPlayerGamePoseGeneratorAI*& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__gameplayPoseGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayPoseGenerator;
}
constexpr ::GlobalNamespace::MockPlayerGamePoseGeneratorAI* const& GlobalNamespace::MockPlayerInstance::__cordl_internal_get__gameplayPoseGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayPoseGenerator;
}
constexpr void GlobalNamespace::MockPlayerInstance::__cordl_internal_set__gameplayPoseGenerator(::GlobalNamespace::MockPlayerGamePoseGeneratorAI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayPoseGenerator = value;
}
inline ::StringW GlobalNamespace::MockPlayerInstance::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayerInstance::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayerInstance::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Nullable_1<::GlobalNamespace::DisconnectedReason> GlobalNamespace::MockPlayerInstance::get_disconnectedReason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_disconnectedReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::DisconnectedReason>>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance::set_disconnectedReason(::System::Nullable_1<::GlobalNamespace::DisconnectedReason> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                           { "set_disconnectedReason", {}, { ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::DisconnectedReason>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason> GlobalNamespace::MockPlayerInstance::get_connectionFailedReason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "get_connectionFailedReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance::set_connectionFailedReason(::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                           { "set_connectionFailedReason", {}, { ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::ConnectionFailedReason>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPlayerInstance::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                       ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider, ::GlobalNamespace::IConnectionManager* connectionManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BGNet::Core::ITimeProvider*>(), ::i2c::type_of<::BGNet::Core::ITaskUtility*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IMockBeatmapDataProvider*>(), ::i2c::type_of<::GlobalNamespace::IConnectionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider, taskUtility, beatmapDataProvider, connectionManager);
}
inline void GlobalNamespace::MockPlayerInstance::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MockPlayerInstance::ConnectToServer(::GlobalNamespace::IConnectionInitParams_1<T>* connectionInitParams) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                           { "ConnectToServer", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::IConnectionInitParams_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionInitParams);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MockPlayerInstance::RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                              { "RunAsync", {}, { ::i2c::type_of<::GlobalNamespace::IStandaloneThreadRunner*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, runner, token);
}
inline void GlobalNamespace::MockPlayerInstance::WhenReady(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "WhenReady", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MockPlayerInstance::WhenReadyAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                                                         { "WhenReadyAsync", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, action);
}
inline void GlobalNamespace::MockPlayerInstance::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance::HandleDisconnectedEvent(::GlobalNamespace::DisconnectedReason reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "HandleDisconnectedEvent", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::MockPlayerInstance::HandleConnectionFailedEvent(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(),
                                                                                         { "HandleConnectionFailedEvent", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MockPlayerInstance::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "DisposeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerInstance::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MockPlayerInstance::_DisposeAsync_b__33_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerInstance*>(), { "<DisposeAsync>b__33_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlayerInstance* GlobalNamespace::MockPlayerInstance::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                                            ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider,
                                                                                            ::GlobalNamespace::IConnectionManager* connectionManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerInstance*>(timeProvider, taskUtility, beatmapDataProvider, connectionManager));
}
/// @brief Convert operator to "::GlobalNamespace::IStandaloneMonobehavior"
constexpr GlobalNamespace::MockPlayerInstance::operator ::GlobalNamespace::IStandaloneMonobehavior*() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneMonobehavior*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IStandaloneMonobehavior"
constexpr ::GlobalNamespace::IStandaloneMonobehavior* GlobalNamespace::MockPlayerInstance::i___GlobalNamespace__IStandaloneMonobehavior() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneMonobehavior*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockPlayerInstance::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MockPlayerInstance::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerInstance::MockPlayerInstance() {}
