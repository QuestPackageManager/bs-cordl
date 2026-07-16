#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncHelper.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncHelper_def.hpp"
#include "GlobalNamespace/zzzz__AsyncHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::*)()>(&::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x3309ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x330a204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tasks", ty:
// "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::AsyncHelper__AnyTaskTrueNonAlloc_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<bool>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tasks = tasks;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncHelper__AnyTaskTrueNonAlloc_d__2::AsyncHelper__AnyTaskTrueNonAlloc_d__2() {}
//  Writing Method size for method: ::GlobalNamespace::AsyncHelper.RunSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::GlobalNamespace::AsyncHelper::RunSync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3309d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper*>(), { "RunSync", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncHelper.AnyTaskTrueNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*)>(
    &::GlobalNamespace::AsyncHelper::AnyTaskTrueNonAlloc)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3309dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper*>(),
                                                             { "AnyTaskTrueNonAlloc", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AsyncHelper::RunSync(::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper*>(), { "RunSync", {}, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncTask);
}
template <typename T> inline T GlobalNamespace::AsyncHelper::RunSync(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* asyncTask) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper*>(),
                                                           { "RunSync", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, asyncTask);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::AsyncHelper::AnyTaskTrueNonAlloc(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>* tasks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncHelper*>(),
                                                           { "AnyTaskTrueNonAlloc", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<bool>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, tasks);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncHelper::AsyncHelper() {}
