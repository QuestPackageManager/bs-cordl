#pragma once
// IWYU pragma private; include "System\Threading\Tasks\TaskToApm.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskToApm_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskToApm_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::*)(::System::Threading::Tasks::Task*, ::System::Object*, bool)>(
    &::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbb544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult.System_IAsyncResult_get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::*)()>(
    &::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(), { "System.IAsyncResult.get_AsyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult.System_IAsyncResult_get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::*)()>(
    &::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbb740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(), { "System.IAsyncResult.get_CompletedSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult.System_IAsyncResult_get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::*)()>(
    &::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_IsCompleted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cbb748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(), { "System.IAsyncResult.get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult.System_IAsyncResult_get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::*)()>(
    &::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cbb75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(), { "System.IAsyncResult.get_AsyncWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_get_Task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Task;
}
constexpr ::System::Threading::Tasks::Task* const& System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_get_Task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Task;
}
constexpr void System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_set_Task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Task = value;
}
constexpr ::System::Object*& System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::System::Object* const& System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_set__state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr bool& System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_get__completedSynchronously() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____completedSynchronously;
}
constexpr bool const& System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_get__completedSynchronously() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____completedSynchronously;
}
constexpr void System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::__cordl_internal_set__completedSynchronously(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____completedSynchronously = value;
}
inline void System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::_ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, bool completedSynchronously) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task, state, completedSynchronously);
}
inline ::System::Object* System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(), { "System.IAsyncResult.get_AsyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(), { "System.IAsyncResult.get_CompletedSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_IsCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(), { "System.IAsyncResult.get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncWaitHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(), { "System.IAsyncResult.get_AsyncWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult* System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::New_ctor(::System::Threading::Tasks::Task* task,
                                                                                                                                          ::System::Object* state, bool completedSynchronously) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*>(task, state, completedSynchronously));
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::TaskToApm_TaskWrapperAsyncResult() {}
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::*)()>(&::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cbb72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0._InvokeCallbackWhenTaskCompletes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::*)()>(
    &::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::_InvokeCallbackWhenTaskCompletes_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cbb804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0*>(), { "<InvokeCallbackWhenTaskCompletes>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::AsyncCallback*& System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::System::AsyncCallback* const& System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::__cordl_internal_set_callback(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
constexpr ::System::IAsyncResult*& System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::__cordl_internal_get_asyncResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncResult;
}
constexpr ::System::IAsyncResult* const& System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::__cordl_internal_get_asyncResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncResult;
}
constexpr void System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::__cordl_internal_set_asyncResult(::System::IAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncResult = value;
}
inline void System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::_InvokeCallbackWhenTaskCompletes_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0*>(), { "<InvokeCallbackWhenTaskCompletes>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0* System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0::TaskToApm___c__DisplayClass3_0() {}
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Threading::Tasks::TaskToApm::Begin)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cbb400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm*>(),
                                         { "Begin", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm.End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Threading::Tasks::TaskToApm::End)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cbb650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm*>(), { "End", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskToApm.InvokeCallbackWhenTaskCompletes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::IAsyncResult*)>(
    &::System::Threading::Tasks::TaskToApm::InvokeCallbackWhenTaskCompletes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cbb550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm*>(),
                                                { "InvokeCallbackWhenTaskCompletes",
                                                  {},
                                                  { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
inline ::System::IAsyncResult* System::Threading::Tasks::TaskToApm::Begin(::System::Threading::Tasks::Task* task, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm*>(),
                                       { "Begin", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(nullptr, ___internal_method, task, callback, state);
}
inline void System::Threading::Tasks::TaskToApm::End(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm*>(), { "End", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncResult);
}
template <typename TResult> inline TResult System::Threading::Tasks::TaskToApm::End(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskToApm*>(), { "End", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<TResult>(nullptr, ___internal_method, asyncResult);
}
inline void System::Threading::Tasks::TaskToApm::InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task* antecedent, ::System::AsyncCallback* callback, ::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::Tasks::TaskToApm*>(),
          { "InvokeCallbackWhenTaskCompletes", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, antecedent, callback, asyncResult);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskToApm::TaskToApm() {}
