#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebOperation)
namespace System::IO {
class Stream;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
template <typename T> class WebCompletionSource_1;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
struct __WebOperation___GetRequestStream_d__50;
}
namespace System::Net {
struct __WebOperation___Run_d__58;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct __WebOperation___GetRequestStream_d__50;
}
namespace System::Net {
struct __WebOperation___Run_d__58;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebOperation);
MARK_VAL_T(::System::Net::__WebOperation___GetRequestStream_d__50);
MARK_VAL_T(::System::Net::__WebOperation___Run_d__58);
// Type: ::<GetRequestStream>d__50
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3619)),
// TypeDefinitionIndex(TypeDefinitionIndex(9238)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 901 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3402), inst: 899 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(9225)) CS Name: ::WebOperation::<GetRequestStream>d__50
struct CORDL_TYPE __WebOperation___GetRequestStream_d__50 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x29e2b60, size 0x21c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29e2d7c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>",
  // modifiers: "", def_value: None }]
  constexpr __WebOperation___GetRequestStream_d__50(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder,
                                                    ::System::Net::WebOperation* __4__this,
                                                    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebOperation___GetRequestStream_d__50();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebOperation* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebOperation___GetRequestStream_d__50, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___GetRequestStream_d__50, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___GetRequestStream_d__50, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___GetRequestStream_d__50, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___GetRequestStream_d__50, __u__1) == 0x28, "Offset mismatch!");

} // namespace System::Net
// Type: ::<Run>d__58
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3400)),
// TypeDefinitionIndex(TypeDefinitionIndex(9238)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 901 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(9226)) CS
// Name: ::WebOperation::<Run>d__58
struct CORDL_TYPE __WebOperation___Run_d__58 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x29e2dd4, size 0x58c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29e343c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None
  // }, CppParam { name: "_requestStream_5__2", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None }, CppParam { name: "_stream_5__3", ty: "::System::Net::WebResponseStream*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __WebOperation___Run_d__58(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Net::WebOperation* __4__this,
                                       ::System::Net::WebRequestStream* _requestStream_5__2, ::System::Net::WebResponseStream* _stream_5__3,
                                       ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1,
                                       ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebOperation___Run_d__58();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebOperation* __4__this;

  /// @brief Field <requestStream>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebRequestStream* _requestStream_5__2;

  /// @brief Field <stream>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebResponseStream* _stream_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebOperation___Run_d__58, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___Run_d__58, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___Run_d__58, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___Run_d__58, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___Run_d__58, _requestStream_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___Run_d__58, _stream_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___Run_d__58, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebOperation___Run_d__58, __u__2) == 0x50, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::WebOperation
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9227))
// CS Name: ::System.Net::WebOperation*
class CORDL_TYPE WebOperation : public ::System::Object {
public:
  // Declarations
  using _Run_d__58 = ::System::Net::__WebOperation___Run_d__58;

  using _GetRequestStream_d__50 = ::System::Net::__WebOperation___GetRequestStream_d__50;

  /// @brief Field <Request>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField))::System::Net::HttpWebRequest* _Request_k__BackingField;

  /// @brief Field <Connection>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Connection_k__BackingField, put = __cordl_internal_set__Connection_k__BackingField))::System::Net::WebConnection* _Connection_k__BackingField;

  /// @brief Field <ServicePoint>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ServicePoint_k__BackingField, put = __cordl_internal_set__ServicePoint_k__BackingField))::System::Net::ServicePoint* _ServicePoint_k__BackingField;

  /// @brief Field <WriteBuffer>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__WriteBuffer_k__BackingField, put = __cordl_internal_set__WriteBuffer_k__BackingField))::System::Net::BufferOffsetSize* _WriteBuffer_k__BackingField;

  /// @brief Field <IsNtlmChallenge>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__IsNtlmChallenge_k__BackingField, put = __cordl_internal_set__IsNtlmChallenge_k__BackingField)) bool _IsNtlmChallenge_k__BackingField;

  /// @brief Field cts, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cts, put = __cordl_internal_set_cts))::System::Threading::CancellationTokenSource* cts;

  /// @brief Field requestTask, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_requestTask, put = __cordl_internal_set_requestTask))::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* requestTask;

  /// @brief Field requestWrittenTask, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_requestWrittenTask,
                      put = __cordl_internal_set_requestWrittenTask))::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* requestWrittenTask;

  /// @brief Field responseTask, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_responseTask, put = __cordl_internal_set_responseTask))::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>* responseTask;

  /// @brief Field finishedTask, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedTask,
                      put = __cordl_internal_set_finishedTask))::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* finishedTask;

  /// @brief Field writeStream, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_writeStream, put = __cordl_internal_set_writeStream))::System::Net::WebRequestStream* writeStream;

  /// @brief Field responseStream, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_responseStream, put = __cordl_internal_set_responseStream))::System::Net::WebResponseStream* responseStream;

  /// @brief Field disposedInfo, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_disposedInfo, put = __cordl_internal_set_disposedInfo))::System::Runtime::ExceptionServices::ExceptionDispatchInfo* disposedInfo;

  /// @brief Field closedInfo, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_closedInfo, put = __cordl_internal_set_closedInfo))::System::Runtime::ExceptionServices::ExceptionDispatchInfo* closedInfo;

  /// @brief Field priorityRequest, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_priorityRequest, put = __cordl_internal_set_priorityRequest))::System::Net::WebOperation* priorityRequest;

  /// @brief Field requestSent, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_requestSent, put = __cordl_internal_set_requestSent)) int32_t requestSent;

  /// @brief Field finished, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_finished, put = __cordl_internal_set_finished)) int32_t finished;

  __declspec(property(get = get_Request))::System::Net::HttpWebRequest* Request;

  __declspec(property(get = get_Connection, put = set_Connection))::System::Net::WebConnection* Connection;

  __declspec(property(get = get_ServicePoint, put = set_ServicePoint))::System::Net::ServicePoint* ServicePoint;

  __declspec(property(get = get_WriteBuffer))::System::Net::BufferOffsetSize* WriteBuffer;

  __declspec(property(get = get_IsNtlmChallenge)) bool IsNtlmChallenge;

  __declspec(property(get = get_Aborted)) bool Aborted;

  __declspec(property(get = get_Closed)) bool Closed;

  __declspec(property(get = get_WriteStream))::System::Net::WebRequestStream* WriteStream;

  __declspec(property(get = get_Finished))::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* Finished;

  constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr void __cordl_internal_set__Request_k__BackingField(::System::Net::HttpWebRequest* value);

  constexpr ::System::Net::WebConnection*& __cordl_internal_get__Connection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebConnection*> const& __cordl_internal_get__Connection_k__BackingField() const;

  constexpr void __cordl_internal_set__Connection_k__BackingField(::System::Net::WebConnection* value);

  constexpr ::System::Net::ServicePoint*& __cordl_internal_get__ServicePoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePoint*> const& __cordl_internal_get__ServicePoint_k__BackingField() const;

  constexpr void __cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint* value);

  constexpr ::System::Net::BufferOffsetSize*& __cordl_internal_get__WriteBuffer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::BufferOffsetSize*> const& __cordl_internal_get__WriteBuffer_k__BackingField() const;

  constexpr void __cordl_internal_set__WriteBuffer_k__BackingField(::System::Net::BufferOffsetSize* value);

  constexpr bool& __cordl_internal_get__IsNtlmChallenge_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsNtlmChallenge_k__BackingField() const;

  constexpr void __cordl_internal_set__IsNtlmChallenge_k__BackingField(bool value);

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get_cts() const;

  constexpr void __cordl_internal_set_cts(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*& __cordl_internal_get_requestTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*> const& __cordl_internal_get_requestTask() const;

  constexpr void __cordl_internal_set_requestTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* value);

  constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*& __cordl_internal_get_requestWrittenTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*> const& __cordl_internal_get_requestWrittenTask() const;

  constexpr void __cordl_internal_set_requestWrittenTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* value);

  constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>*& __cordl_internal_get_responseTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>*> const& __cordl_internal_get_responseTask() const;

  constexpr void __cordl_internal_set_responseTask(::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>* value);

  constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>*& __cordl_internal_get_finishedTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>*> const& __cordl_internal_get_finishedTask() const;

  constexpr void __cordl_internal_set_finishedTask(::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* value);

  constexpr ::System::Net::WebRequestStream*& __cordl_internal_get_writeStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> const& __cordl_internal_get_writeStream() const;

  constexpr void __cordl_internal_set_writeStream(::System::Net::WebRequestStream* value);

  constexpr ::System::Net::WebResponseStream*& __cordl_internal_get_responseStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponseStream*> const& __cordl_internal_get_responseStream() const;

  constexpr void __cordl_internal_set_responseStream(::System::Net::WebResponseStream* value);

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_disposedInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const& __cordl_internal_get_disposedInfo() const;

  constexpr void __cordl_internal_set_disposedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_closedInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const& __cordl_internal_get_closedInfo() const;

  constexpr void __cordl_internal_set_closedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  constexpr ::System::Net::WebOperation*& __cordl_internal_get_priorityRequest();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebOperation*> const& __cordl_internal_get_priorityRequest() const;

  constexpr void __cordl_internal_set_priorityRequest(::System::Net::WebOperation* value);

  constexpr int32_t& __cordl_internal_get_requestSent();

  constexpr int32_t const& __cordl_internal_get_requestSent() const;

  constexpr void __cordl_internal_set_requestSent(int32_t value);

  constexpr int32_t& __cordl_internal_get_finished();

  constexpr int32_t const& __cordl_internal_get_finished() const;

  constexpr void __cordl_internal_set_finished(int32_t value);

  /// @brief Method get_Request, addr 0x29e1f34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpWebRequest* get_Request();

  /// @brief Method get_Connection, addr 0x29e1f3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebConnection* get_Connection();

  /// @brief Method set_Connection, addr 0x29e1f44, size 0x8, virtual false, abstract: false, final false
  inline void set_Connection(::System::Net::WebConnection* value);

  /// @brief Method get_ServicePoint, addr 0x29e1f4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePoint();

  /// @brief Method set_ServicePoint, addr 0x29e1f54, size 0x8, virtual false, abstract: false, final false
  inline void set_ServicePoint(::System::Net::ServicePoint* value);

  /// @brief Method get_WriteBuffer, addr 0x29e1f5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::BufferOffsetSize* get_WriteBuffer();

  /// @brief Method get_IsNtlmChallenge, addr 0x29e1f64, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNtlmChallenge();

  static inline ::System::Net::WebOperation* New_ctor(::System::Net::HttpWebRequest* request, ::System::Net::BufferOffsetSize* writeBuffer, bool isNtlmChallenge,
                                                      ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x29e1f6c, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpWebRequest* request, ::System::Net::BufferOffsetSize* writeBuffer, bool isNtlmChallenge, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method get_Aborted, addr 0x29db03c, size 0x50, virtual false, abstract: false, final false
  inline bool get_Aborted();

  /// @brief Method get_Closed, addr 0x29e2100, size 0x2c, virtual false, abstract: false, final false
  inline bool get_Closed();

  /// @brief Method Abort, addr 0x29daffc, size 0x40, virtual false, abstract: false, final false
  inline void Abort();

  /// @brief Method Close, addr 0x29e22e8, size 0xac, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method SetCanceled, addr 0x29e221c, size 0xcc, virtual false, abstract: false, final false
  inline void SetCanceled();

  /// @brief Method SetError, addr 0x29e25d8, size 0xa4, virtual false, abstract: false, final false
  inline void SetError(::System::Exception* error);

  /// @brief Method SetDisposed, addr 0x29e212c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, bool> SetDisposed(ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> field);

  /// @brief Method CheckDisposed, addr 0x29e267c, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* CheckDisposed(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ThrowIfDisposed, addr 0x29e2720, size 0x60, virtual false, abstract: false, final false
  inline void ThrowIfDisposed();

  /// @brief Method ThrowIfDisposed, addr 0x29de7b4, size 0x44, virtual false, abstract: false, final false
  inline void ThrowIfDisposed(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ThrowIfClosedOrDisposed, addr 0x29dfc84, size 0x60, virtual false, abstract: false, final false
  inline void ThrowIfClosedOrDisposed();

  /// @brief Method ThrowIfClosedOrDisposed, addr 0x29df4a4, size 0x4c, virtual false, abstract: false, final false
  inline void ThrowIfClosedOrDisposed(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CheckThrowDisposed, addr 0x29e26c8, size 0x58, virtual false, abstract: false, final false
  inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* CheckThrowDisposed(bool throwIt, ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> field);

  /// @brief Method RegisterRequest, addr 0x29dd99c, size 0x254, virtual false, abstract: false, final false
  inline void RegisterRequest(::System::Net::ServicePoint* servicePoint, ::System::Net::WebConnection* connection);

  /// @brief Method SetPriorityRequest, addr 0x29e2780, size 0x18c, virtual false, abstract: false, final false
  inline void SetPriorityRequest(::System::Net::WebOperation* operation);

  /// @brief Method GetRequestStream, addr 0x29e290c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStream();

  /// @brief Method GetRequestStreamInternal, addr 0x29e29fc, size 0x50, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* GetRequestStreamInternal();

  /// @brief Method get_WriteStream, addr 0x29e2a4c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Net::WebRequestStream* get_WriteStream();

  /// @brief Method GetResponseStream, addr 0x29e2a64, size 0x50, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream*>* GetResponseStream();

  /// @brief Method get_Finished, addr 0x29e2ab4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* get_Finished();

  /// @brief Method Run, addr 0x29ddbf0, size 0x94, virtual false, abstract: false, final false
  inline void Run();

  /// @brief Method CompleteRequestWritten, addr 0x29e2abc, size 0x80, virtual false, abstract: false, final false
  inline void CompleteRequestWritten(::System::Net::WebRequestStream* stream, ::System::Exception* error);

  /// @brief Method Finish, addr 0x29e2394, size 0x244, virtual false, abstract: false, final false
  inline void Finish(bool ok, ::System::Exception* error);

  /// @brief Method <RegisterRequest>b__48_0, addr 0x29e2b3c, size 0x24, virtual false, abstract: false, final false
  inline void _RegisterRequest_b__48_0();

  // Ctor Parameters [CppParam { name: "", ty: "WebOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebOperation(WebOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebOperation(WebOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebOperation();

public:
  /// @brief Field <Request>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* ____Request_k__BackingField;

  /// @brief Field <Connection>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Net::WebConnection* ____Connection_k__BackingField;

  /// @brief Field <ServicePoint>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Net::ServicePoint* ____ServicePoint_k__BackingField;

  /// @brief Field <WriteBuffer>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Net::BufferOffsetSize* ____WriteBuffer_k__BackingField;

  /// @brief Field <IsNtlmChallenge>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____IsNtlmChallenge_k__BackingField;

  /// @brief Field cts, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ___cts;

  /// @brief Field requestTask, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* ___requestTask;

  /// @brief Field requestWrittenTask, offset: 0x48, size: 0x8, def value: None
  ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* ___requestWrittenTask;

  /// @brief Field responseTask, offset: 0x50, size: 0x8, def value: None
  ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>* ___responseTask;

  /// @brief Field finishedTask, offset: 0x58, size: 0x8, def value: None
  ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* ___finishedTask;

  /// @brief Field writeStream, offset: 0x60, size: 0x8, def value: None
  ::System::Net::WebRequestStream* ___writeStream;

  /// @brief Field responseStream, offset: 0x68, size: 0x8, def value: None
  ::System::Net::WebResponseStream* ___responseStream;

  /// @brief Field disposedInfo, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* ___disposedInfo;

  /// @brief Field closedInfo, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* ___closedInfo;

  /// @brief Field priorityRequest, offset: 0x80, size: 0x8, def value: None
  ::System::Net::WebOperation* ___priorityRequest;

  /// @brief Field requestSent, offset: 0x88, size: 0x4, def value: None
  int32_t ___requestSent;

  /// @brief Field finished, offset: 0x8c, size: 0x4, def value: None
  int32_t ___finished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebOperation, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ____Request_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ____Connection_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ____ServicePoint_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ____WriteBuffer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ____IsNtlmChallenge_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___cts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___requestTask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___requestWrittenTask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___responseTask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___finishedTask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___writeStream) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___responseStream) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___disposedInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___closedInfo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___priorityRequest) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___requestSent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebOperation, ___finished) == 0x8c, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebOperation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebOperation*, "System.Net", "WebOperation");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebOperation___GetRequestStream_d__50, "System.Net", "WebOperation/<GetRequestStream>d__50");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebOperation___Run_d__58, "System.Net", "WebOperation/<Run>d__58");
