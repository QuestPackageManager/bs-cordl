#pragma once
// IWYU pragma private; include "System/IO/Stream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Stream)
namespace GlobalNamespace {
class Stream_NullStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
struct Stream_ReadWriteParameters;
}
namespace System::IO {
class Stream_ReadWriteTask;
}
namespace System::IO {
class Stream_SynchronousAsyncResult;
}
namespace System::IO {
struct Stream__CopyToAsyncInternal_d__28;
}
namespace System::IO {
struct Stream__FinishWriteAsync_d__57;
}
namespace System::IO {
struct Stream___ReadAsync_g__FinishReadAsync_44_0_d;
}
namespace System::IO {
class Stream___c;
}
namespace System::IO {
class SynchronousAsyncResult_Stream___c;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename TResult> class Func_5;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::IO {
class Stream;
}
namespace System::IO {
class Stream_ReadWriteTask;
}
namespace System::IO {
class Stream_SynchronousAsyncResult;
}
namespace System::IO {
class Stream___c;
}
namespace System::IO {
class SynchronousAsyncResult_Stream___c;
}
namespace System::IO {
struct Stream_ReadWriteParameters;
}
namespace System::IO {
struct Stream__CopyToAsyncInternal_d__28;
}
namespace System::IO {
struct Stream__FinishWriteAsync_d__57;
}
namespace System::IO {
struct Stream___ReadAsync_g__FinishReadAsync_44_0_d;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Stream);
MARK_REF_PTR_T(::System::IO::Stream_ReadWriteTask);
MARK_REF_PTR_T(::System::IO::Stream_SynchronousAsyncResult);
MARK_REF_PTR_T(::System::IO::Stream___c);
MARK_REF_PTR_T(::System::IO::SynchronousAsyncResult_Stream___c);
MARK_VAL_T(::System::IO::Stream_ReadWriteParameters);
MARK_VAL_T(::System::IO::Stream__CopyToAsyncInternal_d__28);
MARK_VAL_T(::System::IO::Stream__FinishWriteAsync_d__57);
MARK_VAL_T(::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d);
// Dependencies
namespace System::IO {
// Is value type: true
// CS Name: System.IO.Stream/ReadWriteParameters
struct CORDL_TYPE Stream_ReadWriteParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stream_ReadWriteParameters();

  // Ctor Parameters [CppParam { name: "Buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Stream_ReadWriteParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer, int32_t Offset, int32_t Count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Buffer, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Offset, offset: 0x8, size: 0x4, def value: None
  int32_t Offset;

  /// @brief Field Count, offset: 0xc, size: 0x4, def value: None
  int32_t Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Stream_ReadWriteParameters, Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteParameters, Offset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteParameters, Count) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Stream_ReadWriteParameters, 0x10>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.Threading.Tasks.ITaskCompletionAction, System.Threading.Tasks.Task`1<TResult>
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Stream/ReadWriteTask
class CORDL_TYPE Stream_ReadWriteTask : public ::System::Threading::Tasks::Task_1<int32_t> {
public:
  // Declarations
  __declspec(property(get = System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode)) bool System_Threading_Tasks_ITaskCompletionAction_InvokeMayRunArbitraryCode;

  /// @brief Field _apm, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get__apm, put = __cordl_internal_set__apm)) bool _apm;

  /// @brief Field _buffer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _callback, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__callback, put = __cordl_internal_set__callback)) ::System::AsyncCallback* _callback;

  /// @brief Field _context, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::System::Threading::ExecutionContext* _context;

  /// @brief Field _count, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _isRead, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__isRead, put = __cordl_internal_set__isRead)) bool _isRead;

  /// @brief Field _offset, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset)) int32_t _offset;

  /// @brief Field _stream, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream)) ::System::IO::Stream* _stream;

  /// @brief Field s_invokeAsyncCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invokeAsyncCallback, put = setStaticF_s_invokeAsyncCallback)) ::System::Threading::ContextCallback* s_invokeAsyncCallback;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  /// @brief Method ClearBeginState, addr 0x3d82534, size 0x8, virtual false, abstract: false, final false
  inline void ClearBeginState();

  /// @brief Method InvokeAsyncCallback, addr 0x3d8253c, size 0x7c, virtual false, abstract: false, final false
  static inline void InvokeAsyncCallback(::System::Object* completedTask);

  static inline ::System::IO::Stream_ReadWriteTask* New_ctor(bool isRead, bool apm, ::System::Func_2<::System::Object*, int32_t>* function, ::System::Object* state, ::System::IO::Stream* stream,
                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback);

  /// @brief Method System.Threading.Tasks.ITaskCompletionAction.Invoke, addr 0x3d825b8, size 0x11c, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_ITaskCompletionAction_Invoke(::System::Threading::Tasks::Task* completingTask);

  /// @brief Method System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode, addr 0x3d826d4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode();

  constexpr bool const& __cordl_internal_get__apm() const;

  constexpr bool& __cordl_internal_get__apm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer();

  constexpr ::System::AsyncCallback* const& __cordl_internal_get__callback() const;

  constexpr ::System::AsyncCallback*& __cordl_internal_get__callback();

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get__context() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get__context();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr bool const& __cordl_internal_get__isRead() const;

  constexpr bool& __cordl_internal_get__isRead();

  constexpr int32_t const& __cordl_internal_get__offset() const;

  constexpr int32_t& __cordl_internal_get__offset();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__stream();

  constexpr void __cordl_internal_set__apm(bool value);

  constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__callback(::System::AsyncCallback* value);

  constexpr void __cordl_internal_set__context(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__isRead(bool value);

  constexpr void __cordl_internal_set__offset(int32_t value);

  constexpr void __cordl_internal_set__stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x3d80288, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(bool isRead, bool apm, ::System::Func_2<::System::Object*, int32_t>* function, ::System::Object* state, ::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer,
                    int32_t offset, int32_t count, ::System::AsyncCallback* callback);

  static inline ::System::Threading::ContextCallback* getStaticF_s_invokeAsyncCallback();

  /// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr ::System::Threading::Tasks::ITaskCompletionAction* i___System__Threading__Tasks__ITaskCompletionAction() noexcept;

  static inline void setStaticF_s_invokeAsyncCallback(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stream_ReadWriteTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stream_ReadWriteTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stream_ReadWriteTask(Stream_ReadWriteTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stream_ReadWriteTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stream_ReadWriteTask(Stream_ReadWriteTask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3617 };

  /// @brief Field _isRead, offset: 0x54, size: 0x1, def value: None
  bool ____isRead;

  /// @brief Field _apm, offset: 0x55, size: 0x1, def value: None
  bool ____apm;

  /// @brief Field _stream, offset: 0x58, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _buffer, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _offset, offset: 0x68, size: 0x4, def value: None
  int32_t ____offset;

  /// @brief Field _count, offset: 0x6c, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _callback, offset: 0x70, size: 0x8, def value: None
  ::System::AsyncCallback* ____callback;

  /// @brief Field _context, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ____context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Stream_ReadWriteTask, ____isRead) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteTask, ____apm) == 0x55, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteTask, ____stream) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteTask, ____buffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteTask, ____offset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteTask, ____count) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteTask, ____callback) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_ReadWriteTask, ____context) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Stream_ReadWriteTask, 0x80>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Stream/SynchronousAsyncResult/<>c
class CORDL_TYPE SynchronousAsyncResult_Stream___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::IO::SynchronousAsyncResult_Stream___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_1<::System::Threading::ManualResetEvent*>* __9__12_0;

  static inline ::System::IO::SynchronousAsyncResult_Stream___c* New_ctor();

  /// @brief Method .ctor, addr 0x3d82fc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_AsyncWaitHandle>b__12_0, addr 0x3d82fcc, size 0x58, virtual false, abstract: false, final false
  inline ::System::Threading::ManualResetEvent* _get_AsyncWaitHandle_b__12_0();

  static inline ::System::IO::SynchronousAsyncResult_Stream___c* getStaticF___9();

  static inline ::System::Func_1<::System::Threading::ManualResetEvent*>* getStaticF___9__12_0();

  static inline void setStaticF___9(::System::IO::SynchronousAsyncResult_Stream___c* value);

  static inline void setStaticF___9__12_0(::System::Func_1<::System::Threading::ManualResetEvent*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronousAsyncResult_Stream___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SynchronousAsyncResult_Stream___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SynchronousAsyncResult_Stream___c(SynchronousAsyncResult_Stream___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SynchronousAsyncResult_Stream___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SynchronousAsyncResult_Stream___c(SynchronousAsyncResult_Stream___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::SynchronousAsyncResult_Stream___c, 0x10>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.IAsyncResult, System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Stream/SynchronousAsyncResult
class CORDL_TYPE Stream_SynchronousAsyncResult : public ::System::Object {
public:
  // Declarations
  using __c = ::System::IO::SynchronousAsyncResult_Stream___c;

  __declspec(property(get = get_AsyncState)) ::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle)) ::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Field _bytesRead, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__bytesRead, put = __cordl_internal_set__bytesRead)) int32_t _bytesRead;

  /// @brief Field _endXxxCalled, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__endXxxCalled, put = __cordl_internal_set__endXxxCalled)) bool _endXxxCalled;

  /// @brief Field _exceptionInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__exceptionInfo, put = __cordl_internal_set__exceptionInfo)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _exceptionInfo;

  /// @brief Field _isWrite, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isWrite, put = __cordl_internal_set__isWrite)) bool _isWrite;

  /// @brief Field _stateObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stateObject, put = __cordl_internal_set__stateObject)) ::System::Object* _stateObject;

  /// @brief Field _waitHandle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__waitHandle, put = __cordl_internal_set__waitHandle)) ::System::Threading::ManualResetEvent* _waitHandle;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Method EndRead, addr 0x3d8202c, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x3d822ac, size 0xec, virtual false, abstract: false, final false
  static inline void EndWrite(::System::IAsyncResult* asyncResult);

  static inline ::System::IO::Stream_SynchronousAsyncResult* New_ctor(::System::Object* asyncStateObject);

  static inline ::System::IO::Stream_SynchronousAsyncResult* New_ctor(int32_t bytesRead, ::System::Object* asyncStateObject);

  static inline ::System::IO::Stream_SynchronousAsyncResult* New_ctor(::System::Exception* ex, ::System::Object* asyncStateObject, bool isWrite);

  /// @brief Method ThrowIfError, addr 0x3d82f54, size 0x14, virtual false, abstract: false, final false
  inline void ThrowIfError();

  constexpr int32_t const& __cordl_internal_get__bytesRead() const;

  constexpr int32_t& __cordl_internal_get__bytesRead();

  constexpr bool const& __cordl_internal_get__endXxxCalled() const;

  constexpr bool& __cordl_internal_get__endXxxCalled();

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get__exceptionInfo() const;

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get__exceptionInfo();

  constexpr bool const& __cordl_internal_get__isWrite() const;

  constexpr bool& __cordl_internal_get__isWrite();

  constexpr ::System::Object* const& __cordl_internal_get__stateObject() const;

  constexpr ::System::Object*& __cordl_internal_get__stateObject();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get__waitHandle() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get__waitHandle();

  constexpr void __cordl_internal_set__bytesRead(int32_t value);

  constexpr void __cordl_internal_set__endXxxCalled(bool value);

  constexpr void __cordl_internal_set__exceptionInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  constexpr void __cordl_internal_set__isWrite(bool value);

  constexpr void __cordl_internal_set__stateObject(::System::Object* value);

  constexpr void __cordl_internal_set__waitHandle(::System::Threading::ManualResetEvent* value);

  /// @brief Method .ctor, addr 0x3d82278, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* asyncStateObject);

  /// @brief Method .ctor, addr 0x3d81fac, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t bytesRead, ::System::Object* asyncStateObject);

  /// @brief Method .ctor, addr 0x3d81fdc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* ex, ::System::Object* asyncStateObject, bool isWrite);

  /// @brief Method get_AsyncState, addr 0x3d82f44, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0x3d82e54, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CompletedSynchronously, addr 0x3d82f4c, size 0x8, virtual true, abstract: false, final true
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted, addr 0x3d82e4c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stream_SynchronousAsyncResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stream_SynchronousAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stream_SynchronousAsyncResult(Stream_SynchronousAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stream_SynchronousAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stream_SynchronousAsyncResult(Stream_SynchronousAsyncResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3620 };

  /// @brief Field _stateObject, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____stateObject;

  /// @brief Field _isWrite, offset: 0x18, size: 0x1, def value: None
  bool ____isWrite;

  /// @brief Field _waitHandle, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ____waitHandle;

  /// @brief Field _exceptionInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* ____exceptionInfo;

  /// @brief Field _endXxxCalled, offset: 0x30, size: 0x1, def value: None
  bool ____endXxxCalled;

  /// @brief Field _bytesRead, offset: 0x34, size: 0x4, def value: None
  int32_t ____bytesRead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Stream_SynchronousAsyncResult, ____stateObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_SynchronousAsyncResult, ____isWrite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_SynchronousAsyncResult, ____waitHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_SynchronousAsyncResult, ____exceptionInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_SynchronousAsyncResult, ____endXxxCalled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream_SynchronousAsyncResult, ____bytesRead) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Stream_SynchronousAsyncResult, 0x38>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Stream/<>c
class CORDL_TYPE Stream___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::IO::Stream___c* __9;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0)) ::System::Action_1<::System::Object*>* __9__37_0;

  /// @brief Field <>9__40_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__40_0, put = setStaticF___9__40_0)) ::System::Func_2<::System::Object*, int32_t>* __9__40_0;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__45_0,
      put = setStaticF___9__45_0)) ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* __9__45_0;

  /// @brief Field <>9__45_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__45_1, put = setStaticF___9__45_1)) ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, int32_t>* __9__45_1;

  /// @brief Field <>9__48_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__48_0, put = setStaticF___9__48_0)) ::System::Func_2<::System::Object*, int32_t>* __9__48_0;

  /// @brief Field <>9__49_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__49_0, put = setStaticF___9__49_0)) ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* __9__49_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_1<::System::Threading::SemaphoreSlim*>* __9__4_0;

  /// @brief Field <>9__58_0, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__58_0,
      put = setStaticF___9__58_0)) ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* __9__58_0;

  /// @brief Field <>9__58_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__58_1, put = setStaticF___9__58_1)) ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>* __9__58_1;

  static inline ::System::IO::Stream___c* New_ctor();

  /// @brief Method <BeginEndReadAsync>b__45_0, addr 0x3d832f8, size 0x34, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* _BeginEndReadAsync_b__45_0(::System::IO::Stream* stream, ::System::IO::Stream_ReadWriteParameters args, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method <BeginEndReadAsync>b__45_1, addr 0x3d8332c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t _BeginEndReadAsync_b__45_1(::System::IO::Stream* stream, ::System::IAsyncResult* asyncResult);

  /// @brief Method <BeginEndWriteAsync>b__58_0, addr 0x3d83540, size 0x34, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* _BeginEndWriteAsync_b__58_0(::System::IO::Stream* stream, ::System::IO::Stream_ReadWriteParameters args, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method <BeginEndWriteAsync>b__58_1, addr 0x3d83574, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::VoidTaskResult _BeginEndWriteAsync_b__58_1(::System::IO::Stream* stream, ::System::IAsyncResult* asyncResult);

  /// @brief Method <BeginReadInternal>b__40_0, addr 0x3d8316c, size 0x18c, virtual false, abstract: false, final false
  inline int32_t _BeginReadInternal_b__40_0(::System::Object* _p0_);

  /// @brief Method <BeginWriteInternal>b__48_0, addr 0x3d83358, size 0x17c, virtual false, abstract: false, final false
  inline int32_t _BeginWriteInternal_b__48_0(::System::Object* _p0_);

  /// @brief Method <EnsureAsyncActiveSemaphoreInitialized>b__4_0, addr 0x3d83088, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Threading::SemaphoreSlim* _EnsureAsyncActiveSemaphoreInitialized_b__4_0();

  /// @brief Method <FlushAsync>b__37_0, addr 0x3d830e4, size 0x88, virtual false, abstract: false, final false
  inline void _FlushAsync_b__37_0(::System::Object* state);

  /// @brief Method <RunReadWriteTaskWhenReady>b__49_0, addr 0x3d834d4, size 0x6c, virtual false, abstract: false, final false
  inline void _RunReadWriteTaskWhenReady_b__49_0(::System::Threading::Tasks::Task* t, ::System::Object* state);

  /// @brief Method .ctor, addr 0x3d83080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::Stream___c* getStaticF___9();

  static inline ::System::Action_1<::System::Object*>* getStaticF___9__37_0();

  static inline ::System::Func_2<::System::Object*, int32_t>* getStaticF___9__40_0();

  static inline ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* getStaticF___9__45_0();

  static inline ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, int32_t>* getStaticF___9__45_1();

  static inline ::System::Func_2<::System::Object*, int32_t>* getStaticF___9__48_0();

  static inline ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* getStaticF___9__49_0();

  static inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* getStaticF___9__4_0();

  static inline ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* getStaticF___9__58_0();

  static inline ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>* getStaticF___9__58_1();

  static inline void setStaticF___9(::System::IO::Stream___c* value);

  static inline void setStaticF___9__37_0(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF___9__40_0(::System::Func_2<::System::Object*, int32_t>* value);

  static inline void
  setStaticF___9__45_0(::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* value);

  static inline void setStaticF___9__45_1(::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, int32_t>* value);

  static inline void setStaticF___9__48_0(::System::Func_2<::System::Object*, int32_t>* value);

  static inline void setStaticF___9__49_0(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* value);

  static inline void setStaticF___9__4_0(::System::Func_1<::System::Threading::SemaphoreSlim*>* value);

  static inline void
  setStaticF___9__58_0(::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* value);

  static inline void setStaticF___9__58_1(::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stream___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stream___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stream___c(Stream___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stream___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stream___c(Stream___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Stream___c, 0x10>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::IO {
// Is value type: true
// CS Name: System.IO.Stream/<CopyToAsyncInternal>d__28
struct CORDL_TYPE Stream__CopyToAsyncInternal_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3d835a8, size 0x7b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3d83d5c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Stream__CopyToAsyncInternal_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "destination", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }]
  constexpr Stream__CopyToAsyncInternal_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t bufferSize, ::System::IO::Stream* __4__this,
                                              ::System::Threading::CancellationToken cancellationToken, ::System::IO::Stream* destination, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2,
                                              ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__1,
                                              ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3622 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field bufferSize, offset: 0x20, size: 0x4, def value: None
  int32_t bufferSize;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field destination, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Stream* destination;

  /// @brief Field <buffer>5__2, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, bufferSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, destination) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, _buffer_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__CopyToAsyncInternal_d__28, __u__2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Stream__CopyToAsyncInternal_d__28, 0x68>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::IO {
// Is value type: true
// CS Name: System.IO.Stream/<FinishWriteAsync>d__57
struct CORDL_TYPE Stream__FinishWriteAsync_d__57 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3d83dc4, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3d8403c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Stream__FinishWriteAsync_d__57();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "writeTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
  // None }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr Stream__FinishWriteAsync_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* writeTask,
                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> localBuffer, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3623 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field writeTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* writeTask;

  /// @brief Field localBuffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> localBuffer;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Stream__FinishWriteAsync_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__FinishWriteAsync_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__FinishWriteAsync_d__57, writeTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__FinishWriteAsync_d__57, localBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream__FinishWriteAsync_d__57, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Stream__FinishWriteAsync_d__57, 0x40>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.Memory`1<T>, System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::IO {
// Is value type: true
// CS Name: System.IO.Stream/<<ReadAsync>g__FinishReadAsync|44_0>d
struct CORDL_TYPE Stream___ReadAsync_g__FinishReadAsync_44_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3d840a4, size 0x374, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3d84418, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Stream___ReadAsync_g__FinishReadAsync_44_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "readTask", ty: "::System::Threading::Tasks::Task_1<int32_t>*",
  // modifiers: "", def_value: None }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "localDestination", ty:
  // "::System::Memory_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr Stream___ReadAsync_g__FinishReadAsync_44_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder,
                                                         ::System::Threading::Tasks::Task_1<int32_t>* readTask, ::ArrayW<uint8_t, ::Array<uint8_t>*> localBuffer,
                                                         ::System::Memory_1<uint8_t> localDestination,
                                                         ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3624 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field readTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<int32_t>* readTask;

  /// @brief Field localBuffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> localBuffer;

  /// @brief Field localDestination, offset: 0x38, size: 0x10, def value: None
  ::System::Memory_1<uint8_t> localDestination;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d, readTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d, localBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d, localDestination) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d, 0x58>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.IAsyncDisposable, System.IDisposable, System.MarshalByRefObject
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Stream
class CORDL_TYPE Stream : public ::System::MarshalByRefObject {
public:
  // Declarations
  using NullStream = ::GlobalNamespace::Stream_NullStream;

  using ReadWriteParameters = ::System::IO::Stream_ReadWriteParameters;

  using ReadWriteTask = ::System::IO::Stream_ReadWriteTask;

  using SynchronousAsyncResult = ::System::IO::Stream_SynchronousAsyncResult;

  using _CopyToAsyncInternal_d__28 = ::System::IO::Stream__CopyToAsyncInternal_d__28;

  using _FinishWriteAsync_d__57 = ::System::IO::Stream__FinishWriteAsync_d__57;

  using __ReadAsync_g__FinishReadAsync_44_0_d = ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d;

  using __c = ::System::IO::Stream___c;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::IO::Stream* Null;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field _activeReadWriteTask, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__activeReadWriteTask, put = __cordl_internal_set__activeReadWriteTask)) ::System::IO::Stream_ReadWriteTask* _activeReadWriteTask;

  /// @brief Field _asyncActiveSemaphore, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncActiveSemaphore, put = __cordl_internal_set__asyncActiveSemaphore)) ::System::Threading::SemaphoreSlim* _asyncActiveSemaphore;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginEndReadAsync, addr 0x3d80934, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* BeginEndReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginEndWriteAsync, addr 0x3d813d8, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeginEndWriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginRead, addr 0x3d80074, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginReadInternal, addr 0x3d80094, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginReadInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state,
                                                   bool serializeAsynchronously, bool apm);

  /// @brief Method BeginWrite, addr 0x3d80ea0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginWriteInternal, addr 0x3d80ec0, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginWriteInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state,
                                                    bool serializeAsynchronously, bool apm);

  /// @brief Method BlockingBeginRead, addr 0x3d81e3c, size 0x170, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BlockingBeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BlockingBeginWrite, addr 0x3d82114, size 0x164, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BlockingBeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BlockingEndRead, addr 0x3d82028, size 0x4, virtual false, abstract: false, final false
  static inline int32_t BlockingEndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method BlockingEndWrite, addr 0x3d822a8, size 0x4, virtual false, abstract: false, final false
  static inline void BlockingEndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Close, addr 0x3d7fe30, size 0x70, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CopyTo, addr 0x3d7fc38, size 0x38, virtual false, abstract: false, final false
  inline void CopyTo(::System::IO::Stream* destination);

  /// @brief Method CopyTo, addr 0x3d7fc70, size 0x1c0, virtual true, abstract: false, final false
  inline void CopyTo(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CopyToAsync, addr 0x3d7f98c, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination);

  /// @brief Method CopyToAsync, addr 0x3d7fa80, size 0x84, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize);

  /// @brief Method CopyToAsync, addr 0x3d7fb04, size 0x44, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CopyToAsyncInternal, addr 0x3d7fb48, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsyncInternal(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x3d7fea0, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3d7feb0, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DisposeAsync, addr 0x3d82398, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  /// @brief Method EndRead, addr 0x3d80600, size 0x1c0, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x3d810c8, size 0x1b0, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method EnsureAsyncActiveSemaphoreInitialized, addr 0x3d7f764, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::SemaphoreSlim* EnsureAsyncActiveSemaphoreInitialized();

  /// @brief Method FinishTrackingAsyncOperation, addr 0x3d810a4, size 0x24, virtual false, abstract: false, final false
  inline void FinishTrackingAsyncOperation();

  /// @brief Method FinishWriteAsync, addr 0x3d81820, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FinishWriteAsync(::System::Threading::Tasks::Task* writeTask, ::ArrayW<uint8_t, ::Array<uint8_t>*> localBuffer);

  /// @brief Method Flush, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x3d7c718, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync();

  /// @brief Method FlushAsync, addr 0x3d7feb4, size 0x1c0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetCopyBufferSize, addr 0x3d7f9b8, size 0xc8, virtual false, abstract: false, final false
  inline int32_t GetCopyBufferSize();

  /// @brief Method HasOverriddenBeginEndRead, addr 0x3d80e98, size 0x8, virtual false, abstract: false, final false
  inline bool HasOverriddenBeginEndRead();

  /// @brief Method HasOverriddenBeginEndWrite, addr 0x3d818f0, size 0x8, virtual false, abstract: false, final false
  inline bool HasOverriddenBeginEndWrite();

  static inline ::System::IO::Stream* New_ctor();

  /// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Read, addr 0x3d818f8, size 0x25c, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method ReadAsync, addr 0x3d807c0, size 0x94, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x3d80854, size 0xe0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x3d80ae0, size 0x284, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadByte, addr 0x3d81b54, size 0x94, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method RunReadWriteTask, addr 0x3d8054c, size 0xb4, virtual false, abstract: false, final false
  inline void RunReadWriteTask(::System::IO::Stream_ReadWriteTask* readWriteTask);

  /// @brief Method RunReadWriteTaskWhenReady, addr 0x3d803cc, size 0x180, virtual false, abstract: false, final false
  inline void RunReadWriteTaskWhenReady(::System::Threading::Tasks::Task* asyncWaiter, ::System::IO::Stream_ReadWriteTask* readWriteTask);

  /// @brief Method Seek, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write, addr 0x3d81be8, size 0x1c8, virtual true, abstract: false, final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method WriteAsync, addr 0x3d81278, size 0x94, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteAsync, addr 0x3d8130c, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x3d81584, size 0x29c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteByte, addr 0x3d81db0, size 0x8c, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  /// @brief Method <ReadAsync>g__FinishReadAsync|44_0, addr 0x3d80d64, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::ValueTask_1<int32_t> _ReadAsync_g__FinishReadAsync_44_0(::System::Threading::Tasks::Task_1<int32_t>* readTask,
                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> localBuffer, ::System::Memory_1<uint8_t> localDestination);

  constexpr ::System::IO::Stream_ReadWriteTask* const& __cordl_internal_get__activeReadWriteTask() const;

  constexpr ::System::IO::Stream_ReadWriteTask*& __cordl_internal_get__activeReadWriteTask();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__asyncActiveSemaphore() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__asyncActiveSemaphore();

  constexpr void __cordl_internal_set__activeReadWriteTask(::System::IO::Stream_ReadWriteTask* value);

  constexpr void __cordl_internal_set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim* value);

  /// @brief Method .ctor, addr 0x3d79278, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::Stream* getStaticF_Null();

  /// @brief Method get_CanRead, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanTimeout, addr 0x3d7f854, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_ReadTimeout, addr 0x3d7f85c, size 0x4c, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_WriteTimeout, addr 0x3d7f8f4, size 0x4c, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Convert to "::System::IAsyncDisposable"
  constexpr ::System::IAsyncDisposable* i___System__IAsyncDisposable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_Null(::System::IO::Stream* value);

  /// @brief Method set_Position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x3d7f8a8, size 0x4c, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_WriteTimeout, addr 0x3d7f940, size 0x4c, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stream(Stream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stream(Stream const&) = delete;

  /// @brief Field DefaultCopyBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCopyBufferSize{ static_cast<int32_t>(0x14000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3625 };

  /// @brief Field _activeReadWriteTask, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream_ReadWriteTask* ____activeReadWriteTask;

  /// @brief Field _asyncActiveSemaphore, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____asyncActiveSemaphore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Stream, ____activeReadWriteTask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Stream, ____asyncActiveSemaphore) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Stream, 0x28>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::Stream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream*, "System.IO", "Stream");
NEED_NO_BOX(::System::IO::Stream_ReadWriteTask);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream_ReadWriteTask*, "System.IO", "Stream/ReadWriteTask");
NEED_NO_BOX(::System::IO::Stream_SynchronousAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream_SynchronousAsyncResult*, "System.IO", "Stream/SynchronousAsyncResult");
NEED_NO_BOX(::System::IO::Stream___c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream___c*, "System.IO", "Stream/<>c");
NEED_NO_BOX(::System::IO::SynchronousAsyncResult_Stream___c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SynchronousAsyncResult_Stream___c*, "System.IO", "Stream/SynchronousAsyncResult/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream_ReadWriteParameters, "System.IO", "Stream/ReadWriteParameters");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream__CopyToAsyncInternal_d__28, "System.IO", "Stream/<CopyToAsyncInternal>d__28");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream__FinishWriteAsync_d__57, "System.IO", "Stream/<FinishWriteAsync>d__57");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d, "System.IO", "Stream/<<ReadAsync>g__FinishReadAsync|44_0>d");
