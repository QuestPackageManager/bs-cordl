#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\AsyncSceneContext.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SceneContext_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__ConcurrentAsyncLoaders_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State::AsyncSceneContext_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State::AsyncSceneContext_State() {}
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State BGLib::AppFlow::Initialization::AsyncSceneContext_State::NotInitialized{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State BGLib::AppFlow::Initialization::AsyncSceneContext_State::Initializing{ static_cast<int32_t>(0x1) };
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State BGLib::AppFlow::Initialization::AsyncSceneContext_State::Initialized{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext___c::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3308e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c._LoadInstallersAsync_b__15_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::BGLib::AppFlow::Initialization::AsyncSceneContext___c::*)(::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>)>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext___c::_LoadInstallersAsync_b__15_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3308e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>(),
            { "<LoadInstallersAsync>b__15_2", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncSceneContext___c::setStaticF___9(::BGLib::AppFlow::Initialization::AsyncSceneContext___c* value) {
  ::cordl_internals::setStaticField<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*, "<>9", ::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>(
      std::forward<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>(value));
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* BGLib::AppFlow::Initialization::AsyncSceneContext___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*, "<>9", ::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>();
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext___c::setStaticF___9__15_2(
    ::System::Func_2<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>, ::System::Threading::Tasks::Task*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>, ::System::Threading::Tasks::Task*>*, "<>9__15_2",
      ::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>, ::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>, ::System::Threading::Tasks::Task*>*
BGLib::AppFlow::Initialization::AsyncSceneContext___c::getStaticF___9__15_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>, ::System::Threading::Tasks::Task*>*, "<>9__15_2",
      ::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>();
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncSceneContext___c::_LoadInstallersAsync_b__15_2(
    ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*> loadingRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>(),
          { "<LoadInstallersAsync>b__15_2", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, loadingRequest);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* BGLib::AppFlow::Initialization::AsyncSceneContext___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext___c::AsyncSceneContext___c() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3308e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0._LoadInstallersAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*> (
    ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::*)(::BGLib::AppFlow::Initialization::AsyncLoader*)>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::_LoadInstallersAsync_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3308e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*>(),
                                                                                           { "<LoadInstallersAsync>b__0", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::AsyncLoader*>() } })));
    return ___internal_method;
  }
};
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_get_registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* const& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_get_registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___registry = value;
}
constexpr ::Zenject::DiContainer*& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
constexpr ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>,
                           ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>*&
BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>,
                           ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>* const&
BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::__cordl_internal_set___9__0(
    ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__0 = value;
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>
BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::_LoadInstallersAsync_b__0(::BGLib::AppFlow::Initialization::AsyncLoader* asyncLoader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*>(),
                                                                                         { "<LoadInstallersAsync>b__0", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::AsyncLoader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>(this, ___internal_method, asyncLoader);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0* BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0::AsyncSceneContext___c__DisplayClass15_0() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3308ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1._LoadInstallersAsync_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::*)(
    ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>)>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::_LoadInstallersAsync_b__1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3308ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1*>(),
            { "<LoadInstallersAsync>b__1", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::__cordl_internal_get_syncStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStep;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep const& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::__cordl_internal_get_syncStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStep;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::__cordl_internal_set_syncStep(::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncStep = value;
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::_LoadInstallersAsync_b__1(
    ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*> loadingRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1*>(),
                       { "<LoadInstallersAsync>b__1", {}, { ::i2c::type_of<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, loadingRequest);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1* BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1::AsyncSceneContext___c__DisplayClass15_1() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0xa80;
  constexpr static std::size_t addrs = 0x3308f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x330999c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_loadersStopwatch_5__2", ty:
// "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_queue_5__3", ty:
// "::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_loadingRequests_5__4", ty:
// "::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>,::System::Threading::Tasks::Task*>>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_count_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_loadersEndStepIndex_5__6", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_i_5__7", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::AsyncSceneContext__LoadInstallersAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder,
    ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this, ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0* __8__1,
    ::System::Diagnostics::Stopwatch* _loadersStopwatch_5__2, ::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* _queue_5__3,
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>* _loadingRequests_5__4,
    int32_t _count_5__5, int32_t _loadersEndStepIndex_5__6, int32_t _i_5__7, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->_loadersStopwatch_5__2 = _loadersStopwatch_5__2;
  this->_queue_5__3 = _queue_5__3;
  this->_loadingRequests_5__4 = _loadingRequests_5__4;
  this->_count_5__5 = _count_5__5;
  this->_loadersEndStepIndex_5__6 = _loadersEndStepIndex_5__6;
  this->_i_5__7 = _i_5__7;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15::AsyncSceneContext__LoadInstallersAsync_d__15() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x3309a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3309df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::AsyncSceneContext__RunAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::AsyncSceneContext__RunAsync_d__14() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.get_telemetryLoadersDurationMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::get_telemetryLoadersDurationMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3308ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "get_telemetryLoadersDurationMS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.set_telemetryLoadersDurationMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)(int32_t)>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::set_telemetryLoadersDurationMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3308ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "set_telemetryLoadersDurationMS", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.get_telemetryInstallersDurationMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::get_telemetryInstallersDurationMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3308ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "get_telemetryInstallersDurationMS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.set_telemetryInstallersDurationMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)(int32_t)>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::set_telemetryInstallersDurationMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3308ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "set_telemetryInstallersDurationMS", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::Run)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3308ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.GetOrCreateContainerForLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::GetOrCreateContainerForLoading)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3300a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "GetOrCreateContainerForLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.RunAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::RunAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3300b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "RunAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.LoadInstallersAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* (
    ::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::LoadInstallersAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3308b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "LoadInstallersAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.InstallInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::InstallInstallers)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3308c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3308e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.__n__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::__n__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3308e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "<>n__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__state(::BGLib::AppFlow::Initialization::AsyncSceneContext_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registry = value;
}
constexpr ::Zenject::DiContainer*& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__containerForLoading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerForLoading;
}
constexpr ::Zenject::DiContainer* const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__containerForLoading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerForLoading;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__containerForLoading(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerForLoading = value;
}
constexpr int32_t& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__telemetryLoadersDurationMS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryLoadersDurationMS_k__BackingField;
}
constexpr int32_t const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__telemetryLoadersDurationMS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryLoadersDurationMS_k__BackingField;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__telemetryLoadersDurationMS_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryLoadersDurationMS_k__BackingField = value;
}
constexpr int32_t& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__telemetryInstallersDurationMS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryInstallersDurationMS_k__BackingField;
}
constexpr int32_t const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__telemetryInstallersDurationMS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryInstallersDurationMS_k__BackingField;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__telemetryInstallersDurationMS_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryInstallersDurationMS_k__BackingField = value;
}
inline int32_t BGLib::AppFlow::Initialization::AsyncSceneContext::get_telemetryLoadersDurationMS() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "get_telemetryLoadersDurationMS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::set_telemetryLoadersDurationMS(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "set_telemetryLoadersDurationMS", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t BGLib::AppFlow::Initialization::AsyncSceneContext::get_telemetryInstallersDurationMS() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "get_telemetryInstallersDurationMS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::set_telemetryInstallersDurationMS(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "set_telemetryInstallersDurationMS", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::Run() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::DiContainer* BGLib::AppFlow::Initialization::AsyncSceneContext::GetOrCreateContainerForLoading() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "GetOrCreateContainerForLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncSceneContext::RunAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "RunAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* BGLib::AppFlow::Initialization::AsyncSceneContext::LoadInstallersAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "LoadInstallersAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>*>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::InstallInstallers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::__n__0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContext*>(), { "<>n__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext* BGLib::AppFlow::Initialization::AsyncSceneContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncSceneContext*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext::AsyncSceneContext() {}
