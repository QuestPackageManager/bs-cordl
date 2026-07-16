#pragma once
// IWYU pragma private; include "System/IO/Stream.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_NullStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "Buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Stream_ReadWriteParameters::Stream_ReadWriteParameters(::ArrayW<uint8_t> Buffer, int32_t Offset, int32_t Count) noexcept {
  this->Buffer = Buffer;
  this->Offset = Offset;
  this->Count = Count;
}
// Ctor Parameters []
constexpr ::System::IO::Stream_ReadWriteParameters::Stream_ReadWriteParameters() {}
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask.ClearBeginState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream_ReadWriteTask::*)()>(&::System::IO::Stream_ReadWriteTask::ClearBeginState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c11594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(), { "ClearBeginState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream_ReadWriteTask::*)(bool, bool, ::System::Func_2<::System::Object*, int32_t>*, ::System::Object*, ::System::IO::Stream*,
                                                                                                    ::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*)>(
    &::System::IO::Stream_ReadWriteTask::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c0f218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::System::Object*, int32_t>*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask.InvokeAsyncCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::IO::Stream_ReadWriteTask::InvokeAsyncCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c1159c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(), { "InvokeAsyncCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask.System_Threading_Tasks_ITaskCompletionAction_Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream_ReadWriteTask::*)(::System::Threading::Tasks::Task*)>(
    &::System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c1161c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(),
                                                             { "System.Threading.Tasks.ITaskCompletionAction.Invoke", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask.System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream_ReadWriteTask::*)()>(
    &::System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c11748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(), { "System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::IO::Stream_ReadWriteTask::__cordl_internal_get__isRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRead;
}
constexpr bool const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__isRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRead;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__isRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRead = value;
}
constexpr bool& System::IO::Stream_ReadWriteTask::__cordl_internal_get__apm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apm;
}
constexpr bool const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__apm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apm;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__apm(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____apm = value;
}
constexpr ::System::IO::Stream*& System::IO::Stream_ReadWriteTask::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::System::IO::Stream* const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stream = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::Stream_ReadWriteTask::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr int32_t& System::IO::Stream_ReadWriteTask::__cordl_internal_get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr int32_t const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
constexpr int32_t& System::IO::Stream_ReadWriteTask::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr ::System::AsyncCallback*& System::IO::Stream_ReadWriteTask::__cordl_internal_get__callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr ::System::AsyncCallback* const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__callback(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callback = value;
}
constexpr ::System::Threading::ExecutionContext*& System::IO::Stream_ReadWriteTask::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::System::Threading::ExecutionContext* const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__context(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
inline void System::IO::Stream_ReadWriteTask::setStaticF_s_invokeAsyncCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_invokeAsyncCallback", ::System::IO::Stream_ReadWriteTask*>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::IO::Stream_ReadWriteTask::getStaticF_s_invokeAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_invokeAsyncCallback", ::System::IO::Stream_ReadWriteTask*>();
}
inline void System::IO::Stream_ReadWriteTask::ClearBeginState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(), { "ClearBeginState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Stream_ReadWriteTask::_ctor(bool isRead, bool apm, ::System::Func_2<::System::Object*, int32_t>* function, ::System::Object* state, ::System::IO::Stream* stream,
                                                    ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(), { ".ctor",
                                                                                    {},
                                                                                    { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::System::Object*, int32_t>*>(),
                                                                                      ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isRead, apm, function, state, stream, buffer, offset, count, callback);
}
inline void System::IO::Stream_ReadWriteTask::InvokeAsyncCallback(::System::Object* completedTask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(), { "InvokeAsyncCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, completedTask);
}
inline void System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(),
                                                           { "System.Threading.Tasks.ITaskCompletionAction.Invoke", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completingTask);
}
inline bool System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_ReadWriteTask*>(), { "System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IO::Stream_ReadWriteTask* System::IO::Stream_ReadWriteTask::New_ctor(bool isRead, bool apm, ::System::Func_2<::System::Object*, int32_t>* function, ::System::Object* state,
                                                                                      ::System::IO::Stream* stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                      ::System::AsyncCallback* callback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Stream_ReadWriteTask*>(isRead, apm, function, state, stream, buffer, offset, count, callback));
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr System::IO::Stream_ReadWriteTask::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr ::System::Threading::Tasks::ITaskCompletionAction* System::IO::Stream_ReadWriteTask::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::Stream_ReadWriteTask::Stream_ReadWriteTask() {}
//  Writing Method size for method: ::System::IO::SynchronousAsyncResult_Stream___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::SynchronousAsyncResult_Stream___c::*)()>(&::System::IO::SynchronousAsyncResult_Stream___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c120e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::SynchronousAsyncResult_Stream___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::SynchronousAsyncResult_Stream___c._get_AsyncWaitHandle_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ManualResetEvent* (::System::IO::SynchronousAsyncResult_Stream___c::*)()>(
    &::System::IO::SynchronousAsyncResult_Stream___c::_get_AsyncWaitHandle_b__12_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c120e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::SynchronousAsyncResult_Stream___c*>(), { "<get_AsyncWaitHandle>b__12_0", {}, {} })));
    return ___internal_method;
  }
};
inline void System::IO::SynchronousAsyncResult_Stream___c::setStaticF___9(::System::IO::SynchronousAsyncResult_Stream___c* value) {
  ::cordl_internals::setStaticField<::System::IO::SynchronousAsyncResult_Stream___c*, "<>9", ::System::IO::SynchronousAsyncResult_Stream___c*>(
      std::forward<::System::IO::SynchronousAsyncResult_Stream___c*>(value));
}
inline ::System::IO::SynchronousAsyncResult_Stream___c* System::IO::SynchronousAsyncResult_Stream___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::IO::SynchronousAsyncResult_Stream___c*, "<>9", ::System::IO::SynchronousAsyncResult_Stream___c*>();
}
inline void System::IO::SynchronousAsyncResult_Stream___c::setStaticF___9__12_0(::System::Func_1<::System::Threading::ManualResetEvent*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Threading::ManualResetEvent*>*, "<>9__12_0", ::System::IO::SynchronousAsyncResult_Stream___c*>(
      std::forward<::System::Func_1<::System::Threading::ManualResetEvent*>*>(value));
}
inline ::System::Func_1<::System::Threading::ManualResetEvent*>* System::IO::SynchronousAsyncResult_Stream___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::ManualResetEvent*>*, "<>9__12_0", ::System::IO::SynchronousAsyncResult_Stream___c*>();
}
inline void System::IO::SynchronousAsyncResult_Stream___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::SynchronousAsyncResult_Stream___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::ManualResetEvent* System::IO::SynchronousAsyncResult_Stream___c::_get_AsyncWaitHandle_b__12_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::SynchronousAsyncResult_Stream___c*>(), { "<get_AsyncWaitHandle>b__12_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ManualResetEvent*>(this, ___internal_method);
}
inline ::System::IO::SynchronousAsyncResult_Stream___c* System::IO::SynchronousAsyncResult_Stream___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::SynchronousAsyncResult_Stream___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::SynchronousAsyncResult_Stream___c::SynchronousAsyncResult_Stream___c() {}
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream_SynchronousAsyncResult::*)(int32_t, ::System::Object*)>(&::System::IO::Stream_SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c11058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream_SynchronousAsyncResult::*)(::System::Object*)>(&::System::IO::Stream_SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c112f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream_SynchronousAsyncResult::*)(::System::Exception*, ::System::Object*, bool)>(
    &::System::IO::Stream_SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c11064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c11f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::IO::Stream_SynchronousAsyncResult::*)()>(
    &::System::IO::Stream_SynchronousAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c11f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c12064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "get_AsyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1206c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.ThrowIfError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::ThrowIfError)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c12074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "ThrowIfError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IAsyncResult*)>(&::System::IO::Stream_SynchronousAsyncResult::EndRead)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c110a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "EndRead", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::IO::Stream_SynchronousAsyncResult::EndWrite)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c11308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "EndWrite", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__stateObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateObject;
}
constexpr ::System::Object* const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__stateObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateObject;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__stateObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateObject = value;
}
constexpr bool& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__isWrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWrite;
}
constexpr bool const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__isWrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isWrite;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__isWrite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isWrite = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__waitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitHandle;
}
constexpr ::System::Threading::ManualResetEvent* const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__waitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitHandle;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__waitHandle(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitHandle = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__exceptionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionInfo;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__exceptionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionInfo;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__exceptionInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exceptionInfo = value;
}
constexpr bool& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__endXxxCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endXxxCalled;
}
constexpr bool const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__endXxxCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endXxxCalled;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__endXxxCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endXxxCalled = value;
}
constexpr int32_t& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__bytesRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesRead;
}
constexpr int32_t const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__bytesRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesRead;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__bytesRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bytesRead = value;
}
inline void System::IO::Stream_SynchronousAsyncResult::_ctor(int32_t bytesRead, ::System::Object* asyncStateObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesRead, asyncStateObject);
}
inline void System::IO::Stream_SynchronousAsyncResult::_ctor(::System::Object* asyncStateObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncStateObject);
}
inline void System::IO::Stream_SynchronousAsyncResult::_ctor(::System::Exception* ex, ::System::Object* asyncStateObject, bool isWrite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex, asyncStateObject, isWrite);
}
inline bool System::IO::Stream_SynchronousAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::IO::Stream_SynchronousAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline ::System::Object* System::IO::Stream_SynchronousAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "get_AsyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::IO::Stream_SynchronousAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IO::Stream_SynchronousAsyncResult::ThrowIfError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "ThrowIfError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::IO::Stream_SynchronousAsyncResult::EndRead(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "EndRead", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, asyncResult);
}
inline void System::IO::Stream_SynchronousAsyncResult::EndWrite(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream_SynchronousAsyncResult*>(), { "EndWrite", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncResult);
}
inline ::System::IO::Stream_SynchronousAsyncResult* System::IO::Stream_SynchronousAsyncResult::New_ctor(int32_t bytesRead, ::System::Object* asyncStateObject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Stream_SynchronousAsyncResult*>(bytesRead, asyncStateObject));
}
inline ::System::IO::Stream_SynchronousAsyncResult* System::IO::Stream_SynchronousAsyncResult::New_ctor(::System::Object* asyncStateObject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Stream_SynchronousAsyncResult*>(asyncStateObject));
}
inline ::System::IO::Stream_SynchronousAsyncResult* System::IO::Stream_SynchronousAsyncResult::New_ctor(::System::Exception* ex, ::System::Object* asyncStateObject, bool isWrite) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Stream_SynchronousAsyncResult*>(ex, asyncStateObject, isWrite));
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::IO::Stream_SynchronousAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::IO::Stream_SynchronousAsyncResult::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::Stream_SynchronousAsyncResult::Stream_SynchronousAsyncResult() {}
//  Writing Method size for method: ::System::IO::Stream___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream___c::*)()>(&::System::IO::Stream___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c12198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._EnsureAsyncActiveSemaphoreInitialized_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SemaphoreSlim* (::System::IO::Stream___c::*)()>(&::System::IO::Stream___c::_EnsureAsyncActiveSemaphoreInitialized_b__4_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c1219c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<EnsureAsyncActiveSemaphoreInitialized>b__4_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._FlushAsync_b__37_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream___c::*)(::System::Object*)>(&::System::IO::Stream___c::_FlushAsync_b__37_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c121fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<FlushAsync>b__37_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginReadInternal_b__40_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream___c::*)(::System::Object*)>(&::System::IO::Stream___c::_BeginReadInternal_b__40_0)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c12288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginReadInternal>b__40_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginEndReadAsync_b__45_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Stream___c::*)(::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*,
                                                                                                             ::System::Object*)>(&::System::IO::Stream___c::_BeginEndReadAsync_b__45_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c1244c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginEndReadAsync>b__45_0",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream_ReadWriteParameters>(),
                                                                                                  ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginEndReadAsync_b__45_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream___c::*)(::System::IO::Stream*, ::System::IAsyncResult*)>(&::System::IO::Stream___c::_BeginEndReadAsync_b__45_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c1247c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(),
                                                             { "<BeginEndReadAsync>b__45_1", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginWriteInternal_b__48_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream___c::*)(::System::Object*)>(&::System::IO::Stream___c::_BeginWriteInternal_b__48_0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c124a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginWriteInternal>b__48_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._RunReadWriteTaskWhenReady_b__49_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream___c::*)(::System::Threading::Tasks::Task*, ::System::Object*)>(
    &::System::IO::Stream___c::_RunReadWriteTaskWhenReady_b__49_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c1265c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(),
                                                { "<RunReadWriteTaskWhenReady>b__49_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginEndWriteAsync_b__58_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Stream___c::*)(::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*,
                                                                                                             ::System::Object*)>(&::System::IO::Stream___c::_BeginEndWriteAsync_b__58_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c126cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginEndWriteAsync>b__58_0",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream_ReadWriteParameters>(),
                                                                                                  ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginEndWriteAsync_b__58_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::VoidTaskResult (::System::IO::Stream___c::*)(::System::IO::Stream*, ::System::IAsyncResult*)>(
    &::System::IO::Stream___c::_BeginEndWriteAsync_b__58_1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c126fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(),
                                                             { "<BeginEndWriteAsync>b__58_1", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::Stream___c::setStaticF___9(::System::IO::Stream___c* value) {
  ::cordl_internals::setStaticField<::System::IO::Stream___c*, "<>9", ::System::IO::Stream___c*>(std::forward<::System::IO::Stream___c*>(value));
}
inline ::System::IO::Stream___c* System::IO::Stream___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::IO::Stream___c*, "<>9", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__4_0(::System::Func_1<::System::Threading::SemaphoreSlim*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__4_0", ::System::IO::Stream___c*>(
      std::forward<::System::Func_1<::System::Threading::SemaphoreSlim*>*>(value));
}
inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* System::IO::Stream___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__4_0", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__37_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__37_0", ::System::IO::Stream___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::IO::Stream___c::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__37_0", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__40_0(::System::Func_2<::System::Object*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, int32_t>*, "<>9__40_0", ::System::IO::Stream___c*>(std::forward<::System::Func_2<::System::Object*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Object*, int32_t>* System::IO::Stream___c::getStaticF___9__40_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, int32_t>*, "<>9__40_0", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__45_0(
    ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* value) {
  ::cordl_internals::setStaticField<::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*,
                                    "<>9__45_0", ::System::IO::Stream___c*>(
      std::forward<::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*>(value));
}
inline ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*
System::IO::Stream___c::getStaticF___9__45_0() {
  return ::cordl_internals::getStaticField<::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*,
                                           "<>9__45_0", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__45_1(::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, int32_t>*, "<>9__45_1", ::System::IO::Stream___c*>(
      std::forward<::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, int32_t>*>(value));
}
inline ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, int32_t>* System::IO::Stream___c::getStaticF___9__45_1() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, int32_t>*, "<>9__45_1", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__48_0(::System::Func_2<::System::Object*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, int32_t>*, "<>9__48_0", ::System::IO::Stream___c*>(std::forward<::System::Func_2<::System::Object*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Object*, int32_t>* System::IO::Stream___c::getStaticF___9__48_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, int32_t>*, "<>9__48_0", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__49_0(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, "<>9__49_0", ::System::IO::Stream___c*>(
      std::forward<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*>(value));
}
inline ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* System::IO::Stream___c::getStaticF___9__49_0() {
  return ::cordl_internals::getStaticField<::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>*, "<>9__49_0", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__58_0(
    ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* value) {
  ::cordl_internals::setStaticField<::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*,
                                    "<>9__58_0", ::System::IO::Stream___c*>(
      std::forward<::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*>(value));
}
inline ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*
System::IO::Stream___c::getStaticF___9__58_0() {
  return ::cordl_internals::getStaticField<::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>*,
                                           "<>9__58_0", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::setStaticF___9__58_1(::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>*, "<>9__58_1", ::System::IO::Stream___c*>(
      std::forward<::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>*>(value));
}
inline ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>* System::IO::Stream___c::getStaticF___9__58_1() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>*, "<>9__58_1", ::System::IO::Stream___c*>();
}
inline void System::IO::Stream___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::IO::Stream___c::_EnsureAsyncActiveSemaphoreInitialized_b__4_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<EnsureAsyncActiveSemaphoreInitialized>b__4_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*>(this, ___internal_method);
}
inline void System::IO::Stream___c::_FlushAsync_b__37_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<FlushAsync>b__37_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline int32_t System::IO::Stream___c::_BeginReadInternal_b__40_0(::System::Object* _p0_) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginReadInternal>b__40_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _p0_);
}
inline ::System::IAsyncResult* System::IO::Stream___c::_BeginEndReadAsync_b__45_0(::System::IO::Stream* stream, ::System::IO::Stream_ReadWriteParameters args, ::System::AsyncCallback* callback,
                                                                                  ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginEndReadAsync>b__45_0",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream_ReadWriteParameters>(),
                                                                                                ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, stream, args, callback, state);
}
inline int32_t System::IO::Stream___c::_BeginEndReadAsync_b__45_1(::System::IO::Stream* stream, ::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginEndReadAsync>b__45_1", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stream, asyncResult);
}
inline int32_t System::IO::Stream___c::_BeginWriteInternal_b__48_0(::System::Object* _p0_) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginWriteInternal>b__48_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _p0_);
}
inline void System::IO::Stream___c::_RunReadWriteTaskWhenReady_b__49_0(::System::Threading::Tasks::Task* t, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(),
                                              { "<RunReadWriteTaskWhenReady>b__49_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, state);
}
inline ::System::IAsyncResult* System::IO::Stream___c::_BeginEndWriteAsync_b__58_0(::System::IO::Stream* stream, ::System::IO::Stream_ReadWriteParameters args, ::System::AsyncCallback* callback,
                                                                                   ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(), { "<BeginEndWriteAsync>b__58_0",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream_ReadWriteParameters>(),
                                                                                                ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, stream, args, callback, state);
}
inline ::System::Threading::Tasks::VoidTaskResult System::IO::Stream___c::_BeginEndWriteAsync_b__58_1(::System::IO::Stream* stream, ::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___c*>(),
                                                           { "<BeginEndWriteAsync>b__58_1", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::VoidTaskResult>(this, ___internal_method, stream, asyncResult);
}
inline ::System::IO::Stream___c* System::IO::Stream___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Stream___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::Stream___c::Stream___c() {}
//  Writing Method size for method: ::System::IO::Stream__CopyToAsyncInternal_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream__CopyToAsyncInternal_d__28::*)()>(&::System::IO::Stream__CopyToAsyncInternal_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x5c12730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream__CopyToAsyncInternal_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream__CopyToAsyncInternal_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream__CopyToAsyncInternal_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::Stream__CopyToAsyncInternal_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c12d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream__CopyToAsyncInternal_d__28>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::Stream__CopyToAsyncInternal_d__28::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream__CopyToAsyncInternal_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::Stream__CopyToAsyncInternal_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream__CopyToAsyncInternal_d__28>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::Stream__CopyToAsyncInternal_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::Stream__CopyToAsyncInternal_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__4__this", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "destination", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Stream__CopyToAsyncInternal_d__28::Stream__CopyToAsyncInternal_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t bufferSize, ::System::IO::Stream* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::IO::Stream* destination, ::ArrayW<uint8_t> _buffer_5__2,
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->bufferSize = bufferSize;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->destination = destination;
  this->_buffer_5__2 = _buffer_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::IO::Stream__CopyToAsyncInternal_d__28::Stream__CopyToAsyncInternal_d__28() {}
//  Writing Method size for method: ::System::IO::Stream__FinishWriteAsync_d__57.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream__FinishWriteAsync_d__57::*)()>(&::System::IO::Stream__FinishWriteAsync_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5c12d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream__FinishWriteAsync_d__57>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream__FinishWriteAsync_d__57.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream__FinishWriteAsync_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::Stream__FinishWriteAsync_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c13008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream__FinishWriteAsync_d__57>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::Stream__FinishWriteAsync_d__57::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream__FinishWriteAsync_d__57>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::Stream__FinishWriteAsync_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream__FinishWriteAsync_d__57>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::Stream__FinishWriteAsync_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::Stream__FinishWriteAsync_d__57::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeTask", ty: "::System::Threading::Tasks::Task*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Stream__FinishWriteAsync_d__57::Stream__FinishWriteAsync_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                       ::System::Threading::Tasks::Task* writeTask, ::ArrayW<uint8_t> localBuffer,
                                                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->writeTask = writeTask;
  this->localBuffer = localBuffer;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::Stream__FinishWriteAsync_d__57::Stream__FinishWriteAsync_d__57() {}
//  Writing Method size for method: ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::*)()>(&::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5c13074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c13410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "readTask", ty:
// "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "localDestination", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::Stream___ReadAsync_g__FinishReadAsync_44_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::Tasks::Task_1<int32_t>* readTask, ::ArrayW<uint8_t> localBuffer,
    ::System::Memory_1<uint8_t> localDestination, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->readTask = readTask;
  this->localBuffer = localBuffer;
  this->localDestination = localDestination;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::Stream___ReadAsync_g__FinishReadAsync_44_0_d() {}
//  Writing Method size for method: ::System::IO::Stream.EnsureAsyncActiveSemaphoreInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SemaphoreSlim* (::System::IO::Stream::*)()>(&::System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c0e6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "EnsureAsyncActiveSemaphoreInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::get_CanRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::get_CanSeek)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_CanTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0e7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::get_CanWrite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::Stream::*)()>(&::System::IO::Stream::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::Stream::*)()>(&::System::IO::Stream::get_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(int64_t)>(&::System::IO::Stream::set_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream::*)()>(&::System::IO::Stream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c0e7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(int32_t)>(&::System::IO::Stream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c0e80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream::*)()>(&::System::IO::Stream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c0e858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(int32_t)>(&::System::IO::Stream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c0e8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.CopyToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::System::IO::Stream*)>(&::System::IO::Stream::CopyToAsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c0e8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "CopyToAsync", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.CopyToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::Stream::CopyToAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c0e9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "CopyToAsync", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.CopyToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(
    &::System::IO::Stream::CopyToAsync)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c0ea60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.CopyToAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(
    &::System::IO::Stream::CopyToAsyncInternal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c0eaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(),
                            { "CopyToAsyncInternal", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(::System::IO::Stream*)>(&::System::IO::Stream::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c0eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "CopyTo", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::Stream::CopyTo)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c0ebbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.GetCopyBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream::*)()>(&::System::IO::Stream::GetCopyBufferSize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c0e91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "GetCopyBufferSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::Close)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c0ed90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c0ee04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(bool)>(&::System::IO::Stream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c0ee14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::Flush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)()>(&::System::IO::Stream::FlushAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c0c340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "FlushAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::System::Threading::CancellationToken)>(&::System::IO::Stream::FlushAsync)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c0ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::Stream::BeginRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c0effc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginReadInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*, bool, bool)>(
    &::System::IO::Stream::BeginReadInternal)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5c0f01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(),
                                                             { "BeginReadInternal",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream::*)(::System::IAsyncResult*)>(&::System::IO::Stream::EndRead)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c0f5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c0f76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "ReadAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c0f7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::Stream::*)(::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(
    &::System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5c0fac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginEndReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::IO::Stream::BeginEndReadAsync)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c0f8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BeginEndReadAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::Stream::BeginWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c0fe90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginWriteInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*, bool, bool)>(
    &::System::IO::Stream::BeginWriteInternal)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5c0feb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(),
                                                             { "BeginWriteInternal",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.RunReadWriteTaskWhenReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(::System::Threading::Tasks::Task*, ::System::IO::Stream_ReadWriteTask*)>(
    &::System::IO::Stream::RunReadWriteTaskWhenReady)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c0f35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(),
                                                { "RunReadWriteTaskWhenReady", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::IO::Stream_ReadWriteTask*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.RunReadWriteTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(::System::IO::Stream_ReadWriteTask*)>(&::System::IO::Stream::RunReadWriteTask)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c0f4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "RunReadWriteTask", {}, { ::i2c::type_of<::System::IO::Stream_ReadWriteTask*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.FinishTrackingAsyncOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::FinishTrackingAsyncOperation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c100ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "FinishTrackingAsyncOperation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(::System::IAsyncResult*)>(&::System::IO::Stream::EndWrite)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c100cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c10274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "WriteAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c10304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::Stream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(
    &::System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5c105b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.FinishWriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::System::Threading::Tasks::Task*, ::ArrayW<uint8_t>)>(
    &::System::IO::Stream::FinishWriteAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c10878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "FinishWriteAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginEndWriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::Stream::BeginEndWriteAsync)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c103e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BeginEndWriteAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::Stream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::Stream::Seek)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(int64_t)>(&::System::IO::Stream::SetLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::Stream::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream::*)(::System::Span_1<uint8_t>)>(&::System::IO::Stream::Read)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5c10940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Stream::*)()>(&::System::IO::Stream::ReadByte)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c10bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::Stream::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::Stream::Write)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c10c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)(uint8_t)>(&::System::IO::Stream::WriteByte)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c10e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BlockingBeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::Stream::BlockingBeginRead)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c10ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BlockingBeginRead",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BlockingEndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IAsyncResult*)>(&::System::IO::Stream::BlockingEndRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1109c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BlockingEndRead", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BlockingBeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::Stream::BlockingBeginWrite)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c1118c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BlockingBeginWrite",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BlockingEndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::IO::Stream::BlockingEndWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c11304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BlockingEndWrite", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.HasOverriddenBeginEndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::HasOverriddenBeginEndRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0fe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "HasOverriddenBeginEndRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.HasOverriddenBeginEndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::HasOverriddenBeginEndWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c10938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "HasOverriddenBeginEndWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::Stream::*)()>(&::System::IO::Stream::DisposeAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c113f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ::i2c::class_of<::System::IO::Stream*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c08f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream._ReadAsync_g__FinishReadAsync_44_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (*)(::System::Threading::Tasks::Task_1<int32_t>*, ::ArrayW<uint8_t>,
                                                                                                            ::System::Memory_1<uint8_t>)>(&::System::IO::Stream::_ReadAsync_g__FinishReadAsync_44_0)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c0fd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "<ReadAsync>g__FinishReadAsync|44_0",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Threading::Tasks::Task_1<int32_t>*>(),
                                                                                                           ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Memory_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream_ReadWriteTask*& System::IO::Stream::__cordl_internal_get__activeReadWriteTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeReadWriteTask;
}
constexpr ::System::IO::Stream_ReadWriteTask* const& System::IO::Stream::__cordl_internal_get__activeReadWriteTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeReadWriteTask;
}
constexpr void System::IO::Stream::__cordl_internal_set__activeReadWriteTask(::System::IO::Stream_ReadWriteTask* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeReadWriteTask = value;
}
constexpr ::System::Threading::SemaphoreSlim*& System::IO::Stream::__cordl_internal_get__asyncActiveSemaphore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncActiveSemaphore;
}
constexpr ::System::Threading::SemaphoreSlim* const& System::IO::Stream::__cordl_internal_get__asyncActiveSemaphore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncActiveSemaphore;
}
constexpr void System::IO::Stream::__cordl_internal_set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asyncActiveSemaphore = value;
}
inline void System::IO::Stream::setStaticF_Null(::System::IO::Stream* value) {
  ::cordl_internals::setStaticField<::System::IO::Stream*, "Null", ::System::IO::Stream*>(std::forward<::System::IO::Stream*>(value));
}
inline ::System::IO::Stream* System::IO::Stream::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::IO::Stream*, "Null", ::System::IO::Stream*>();
}
inline ::System::Threading::SemaphoreSlim* System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "EnsureAsyncActiveSemaphoreInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*>(this, ___internal_method);
}
inline bool System::IO::Stream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::Stream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::Stream::get_CanTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::Stream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::IO::Stream::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::IO::Stream::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::Stream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::IO::Stream::get_ReadTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::IO::Stream::set_ReadTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::IO::Stream::get_WriteTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::IO::Stream::set_WriteTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::CopyToAsync(::System::IO::Stream* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "CopyToAsync", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "CopyToAsync", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::CopyToAsyncInternal(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(),
                          { "CopyToAsyncInternal", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline void System::IO::Stream::CopyTo(::System::IO::Stream* destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "CopyTo", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void System::IO::Stream::CopyTo(::System::IO::Stream* destination, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, bufferSize);
}
inline int32_t System::IO::Stream::GetCopyBufferSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "GetCopyBufferSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::IO::Stream::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Stream::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Stream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::IO::Stream::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::FlushAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "FlushAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::IAsyncResult* System::IO::Stream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline ::System::IAsyncResult* System::IO::Stream::BeginReadInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state,
                                                                     bool serializeAsynchronously, bool apm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(),
                                                           { "BeginReadInternal",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state, serializeAsynchronously, apm);
}
inline int32_t System::IO::Stream::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Stream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "ReadAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Stream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::Stream::ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Stream::BeginEndReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BeginEndReadAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count);
}
inline ::System::IAsyncResult* System::IO::Stream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline ::System::IAsyncResult* System::IO::Stream::BeginWriteInternal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state,
                                                                      bool serializeAsynchronously, bool apm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(),
                                                           { "BeginWriteInternal",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state, serializeAsynchronously, apm);
}
inline void System::IO::Stream::RunReadWriteTaskWhenReady(::System::Threading::Tasks::Task* asyncWaiter, ::System::IO::Stream_ReadWriteTask* readWriteTask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(),
                                              { "RunReadWriteTaskWhenReady", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::IO::Stream_ReadWriteTask*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncWaiter, readWriteTask);
}
inline void System::IO::Stream::RunReadWriteTask(::System::IO::Stream_ReadWriteTask* readWriteTask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "RunReadWriteTask", {}, { ::i2c::type_of<::System::IO::Stream_ReadWriteTask*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readWriteTask);
}
inline void System::IO::Stream::FinishTrackingAsyncOperation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "FinishTrackingAsyncOperation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Stream::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "WriteAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::IO::Stream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::FinishWriteAsync(::System::Threading::Tasks::Task* writeTask, ::ArrayW<uint8_t> localBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "FinishWriteAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, writeTask, localBuffer);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::BeginEndWriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BeginEndWriteAsync", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count);
}
inline int64_t System::IO::Stream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::IO::Stream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::IO::Stream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::IO::Stream::Read(::System::Span_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline int32_t System::IO::Stream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::IO::Stream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::IO::Stream::Write(::System::ReadOnlySpan_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::IO::Stream::WriteByte(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* System::IO::Stream::BlockingBeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BlockingBeginRead",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                         ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::IO::Stream::BlockingEndRead(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BlockingEndRead", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::IO::Stream::BlockingBeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BlockingBeginWrite",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                         ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::IO::Stream::BlockingEndWrite(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "BlockingEndWrite", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncResult);
}
inline bool System::IO::Stream::HasOverriddenBeginEndRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "HasOverriddenBeginEndRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::Stream::HasOverriddenBeginEndWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "HasOverriddenBeginEndWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask System::IO::Stream::DisposeAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Stream*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline void System::IO::Stream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::Stream::_ReadAsync_g__FinishReadAsync_44_0(::System::Threading::Tasks::Task_1<int32_t>* readTask, ::ArrayW<uint8_t> localBuffer,
                                                                                                               ::System::Memory_1<uint8_t> localDestination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Stream*>(), { "<ReadAsync>g__FinishReadAsync|44_0",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::Threading::Tasks::Task_1<int32_t>*>(),
                                                                                                         ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Memory_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(nullptr, ___internal_method, readTask, localBuffer, localDestination);
}
inline ::System::IO::Stream* System::IO::Stream::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Stream*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::IO::Stream::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::Stream::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr System::IO::Stream::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
constexpr ::System::IAsyncDisposable* System::IO::Stream::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::Stream::Stream() {}
