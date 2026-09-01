#pragma once
// IWYU pragma private; include "System\Net\WebOperation.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::System::Net::WebOperation__GetRequestStream_d__50.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation__GetRequestStream_d__50::*)()>(&::System::Net::WebOperation__GetRequestStream_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6348694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation__GetRequestStream_d__50>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation__GetRequestStream_d__50.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation__GetRequestStream_d__50::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebOperation__GetRequestStream_d__50::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6348950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation__GetRequestStream_d__50>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebOperation__GetRequestStream_d__50::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation__GetRequestStream_d__50>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebOperation__GetRequestStream_d__50::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation__GetRequestStream_d__50>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebOperation__GetRequestStream_d__50::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebOperation__GetRequestStream_d__50::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebOperation__GetRequestStream_d__50::WebOperation__GetRequestStream_d__50(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder, ::System::Net::WebOperation* __4__this,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebOperation__GetRequestStream_d__50::WebOperation__GetRequestStream_d__50() {}
//  Writing Method size for method: ::System::Net::WebOperation__Run_d__58.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation__Run_d__58::*)()>(&::System::Net::WebOperation__Run_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x63489d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation__Run_d__58>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation__Run_d__58.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation__Run_d__58::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebOperation__Run_d__58::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6349178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation__Run_d__58>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebOperation__Run_d__58::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation__Run_d__58>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebOperation__Run_d__58::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation__Run_d__58>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebOperation__Run_d__58::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebOperation__Run_d__58::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_requestStream_5__2", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stream_5__3", ty:
// "::System::Net::WebResponseStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebOperation__Run_d__58::WebOperation__Run_d__58(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                          ::System::Net::WebOperation* __4__this, ::System::Net::WebRequestStream* _requestStream_5__2,
                                                                          ::System::Net::WebResponseStream* _stream_5__3,
                                                                          ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1,
                                                                          ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_requestStream_5__2 = _requestStream_5__2;
  this->_stream_5__3 = _stream_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebOperation__Run_d__58::WebOperation__Run_d__58() {}
//  Writing Method size for method: ::System::Net::WebOperation.get_Request
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpWebRequest* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63475ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Request", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Connection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebConnection* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63475b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Connection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.set_Connection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebConnection*)>(&::System::Net::WebOperation::set_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63475bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "set_Connection", {}, { ::i2c::type_of<::System::Net::WebConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_ServicePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63475c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_ServicePoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.set_ServicePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::ServicePoint*)>(&::System::Net::WebOperation::set_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63475cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "set_ServicePoint", {}, { ::i2c::type_of<::System::Net::ServicePoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_WriteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::BufferOffsetSize* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_WriteBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63475d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_WriteBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_IsNtlmChallenge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_IsNtlmChallenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63475dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_IsNtlmChallenge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::HttpWebRequest*, ::System::Net::BufferOffsetSize*, bool,
                                                                                             ::System::Threading::CancellationToken)>(&::System::Net::WebOperation::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x63475e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { ".ctor",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>(),
                                                                                              ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Aborted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Aborted)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6344e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Aborted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Closed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Closed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x634777c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Closed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Abort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Abort)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x63477a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "Abort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Close)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x63479a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::SetCanceled)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x63478d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "SetCanceled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Exception*)>(&::System::Net::WebOperation::SetError)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6347c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "SetError", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, bool> (::System::Net::WebOperation::*)(
    ::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>)>(&::System::Net::WebOperation::SetDisposed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6347800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "SetDisposed", {}, { ::i2c::type_of<::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CheckDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebOperation::CheckDisposed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6347d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "CheckDisposed", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6347e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "ThrowIfDisposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(&::System::Net::WebOperation::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6347e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "ThrowIfDisposed", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfClosedOrDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::ThrowIfClosedOrDisposed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6345124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "ThrowIfClosedOrDisposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfClosedOrDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(&::System::Net::WebOperation::ThrowIfClosedOrDisposed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6344864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "ThrowIfClosedOrDisposed", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CheckThrowDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (
    ::System::Net::WebOperation::*)(bool, ::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>)>(&::System::Net::WebOperation::CheckThrowDisposed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6347dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(),
                                                { "CheckThrowDisposed", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.RegisterRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::ServicePoint*, ::System::Net::WebConnection*)>(
    &::System::Net::WebOperation::RegisterRequest)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6347f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(),
                                                             { "RegisterRequest", {}, { ::i2c::type_of<::System::Net::ServicePoint*>(), ::i2c::type_of<::System::Net::WebConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetPriorityRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebOperation*)>(&::System::Net::WebOperation::SetPriorityRequest)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x63481f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "SetPriorityRequest", {}, { ::i2c::type_of<::System::Net::WebOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetRequestStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::GetRequestStream)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x63483a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "GetRequestStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetRequestStreamInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* (::System::Net::WebOperation::*)()>(
    &::System::Net::WebOperation::GetRequestStreamInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6348484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "GetRequestStreamInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_WriteStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequestStream* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_WriteStream)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63484d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_WriteStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetResponseStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream*>* (::System::Net::WebOperation::*)()>(
    &::System::Net::WebOperation::GetResponseStream)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x63484f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "GetResponseStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Finished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* (::System::Net::WebOperation::*)()>(
    &::System::Net::WebOperation::get_Finished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6348544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Finished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x634854c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "Run", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CompleteRequestWritten
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebRequestStream*, ::System::Exception*)>(
    &::System::Net::WebOperation::CompleteRequestWritten)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63485f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(),
                                                             { "CompleteRequestWritten", {}, { ::i2c::type_of<::System::Net::WebRequestStream*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(bool, ::System::Exception*)>(&::System::Net::WebOperation::Finish)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6347a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "Finish", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation._RegisterRequest_b__48_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::_RegisterRequest_b__48_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6348674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "<RegisterRequest>b__48_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpWebRequest*& System::Net::WebOperation::__cordl_internal_get__Request_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr ::System::Net::HttpWebRequest* const& System::Net::WebOperation::__cordl_internal_get__Request_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__Request_k__BackingField(::System::Net::HttpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Request_k__BackingField = value;
}
constexpr ::System::Net::WebConnection*& System::Net::WebOperation::__cordl_internal_get__Connection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Connection_k__BackingField;
}
constexpr ::System::Net::WebConnection* const& System::Net::WebOperation::__cordl_internal_get__Connection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Connection_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__Connection_k__BackingField(::System::Net::WebConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Connection_k__BackingField = value;
}
constexpr ::System::Net::ServicePoint*& System::Net::WebOperation::__cordl_internal_get__ServicePoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServicePoint_k__BackingField;
}
constexpr ::System::Net::ServicePoint* const& System::Net::WebOperation::__cordl_internal_get__ServicePoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServicePoint_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ServicePoint_k__BackingField = value;
}
constexpr ::System::Net::BufferOffsetSize*& System::Net::WebOperation::__cordl_internal_get__WriteBuffer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WriteBuffer_k__BackingField;
}
constexpr ::System::Net::BufferOffsetSize* const& System::Net::WebOperation::__cordl_internal_get__WriteBuffer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WriteBuffer_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__WriteBuffer_k__BackingField(::System::Net::BufferOffsetSize* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WriteBuffer_k__BackingField = value;
}
constexpr bool& System::Net::WebOperation::__cordl_internal_get__IsNtlmChallenge_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsNtlmChallenge_k__BackingField;
}
constexpr bool const& System::Net::WebOperation::__cordl_internal_get__IsNtlmChallenge_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsNtlmChallenge_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__IsNtlmChallenge_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsNtlmChallenge_k__BackingField = value;
}
constexpr ::System::Threading::CancellationTokenSource*& System::Net::WebOperation::__cordl_internal_get_cts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cts;
}
constexpr ::System::Threading::CancellationTokenSource* const& System::Net::WebOperation::__cordl_internal_get_cts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cts;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_cts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cts = value;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*& System::Net::WebOperation::__cordl_internal_get_requestTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestTask;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* const& System::Net::WebOperation::__cordl_internal_get_requestTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestTask;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_requestTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestTask = value;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*& System::Net::WebOperation::__cordl_internal_get_requestWrittenTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestWrittenTask;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* const& System::Net::WebOperation::__cordl_internal_get_requestWrittenTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestWrittenTask;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_requestWrittenTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestWrittenTask = value;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>*& System::Net::WebOperation::__cordl_internal_get_responseTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseTask;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>* const& System::Net::WebOperation::__cordl_internal_get_responseTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseTask;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_responseTask(::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responseTask = value;
}
constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>*& System::Net::WebOperation::__cordl_internal_get_finishedTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedTask;
}
constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* const& System::Net::WebOperation::__cordl_internal_get_finishedTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedTask;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_finishedTask(::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedTask = value;
}
constexpr ::System::Net::WebRequestStream*& System::Net::WebOperation::__cordl_internal_get_writeStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeStream;
}
constexpr ::System::Net::WebRequestStream* const& System::Net::WebOperation::__cordl_internal_get_writeStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeStream;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_writeStream(::System::Net::WebRequestStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeStream = value;
}
constexpr ::System::Net::WebResponseStream*& System::Net::WebOperation::__cordl_internal_get_responseStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseStream;
}
constexpr ::System::Net::WebResponseStream* const& System::Net::WebOperation::__cordl_internal_get_responseStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseStream;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_responseStream(::System::Net::WebResponseStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responseStream = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Net::WebOperation::__cordl_internal_get_disposedInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedInfo;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::Net::WebOperation::__cordl_internal_get_disposedInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedInfo;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_disposedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposedInfo = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Net::WebOperation::__cordl_internal_get_closedInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closedInfo;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::Net::WebOperation::__cordl_internal_get_closedInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closedInfo;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_closedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closedInfo = value;
}
constexpr ::System::Net::WebOperation*& System::Net::WebOperation::__cordl_internal_get_priorityRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityRequest;
}
constexpr ::System::Net::WebOperation* const& System::Net::WebOperation::__cordl_internal_get_priorityRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityRequest;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_priorityRequest(::System::Net::WebOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorityRequest = value;
}
constexpr int32_t& System::Net::WebOperation::__cordl_internal_get_requestSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestSent;
}
constexpr int32_t const& System::Net::WebOperation::__cordl_internal_get_requestSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestSent;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_requestSent(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestSent = value;
}
constexpr int32_t& System::Net::WebOperation::__cordl_internal_get_finished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finished;
}
constexpr int32_t const& System::Net::WebOperation::__cordl_internal_get_finished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finished;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_finished(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finished = value;
}
inline ::System::Net::HttpWebRequest* System::Net::WebOperation::get_Request() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Request", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*>(this, ___internal_method);
}
inline ::System::Net::WebConnection* System::Net::WebOperation::get_Connection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Connection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebConnection*>(this, ___internal_method);
}
inline void System::Net::WebOperation::set_Connection(::System::Net::WebConnection* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "set_Connection", {}, { ::i2c::type_of<::System::Net::WebConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ServicePoint* System::Net::WebOperation::get_ServicePoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_ServicePoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(this, ___internal_method);
}
inline void System::Net::WebOperation::set_ServicePoint(::System::Net::ServicePoint* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "set_ServicePoint", {}, { ::i2c::type_of<::System::Net::ServicePoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::BufferOffsetSize* System::Net::WebOperation::get_WriteBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_WriteBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::BufferOffsetSize*>(this, ___internal_method);
}
inline bool System::Net::WebOperation::get_IsNtlmChallenge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_IsNtlmChallenge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebOperation::_ctor(::System::Net::HttpWebRequest* request, ::System::Net::BufferOffsetSize* writeBuffer, bool isNtlmChallenge,
                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { ".ctor",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>(),
                                                                                                   ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, writeBuffer, isNtlmChallenge, cancellationToken);
}
inline bool System::Net::WebOperation::get_Aborted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Aborted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebOperation::get_Closed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Closed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebOperation::Abort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "Abort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::SetCanceled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "SetCanceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::SetError(::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "SetError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, bool>
System::Net::WebOperation::SetDisposed(::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> field) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "SetDisposed", {}, { ::i2c::type_of<::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, bool>>(this, ___internal_method, field);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::WebOperation::CheckDisposed(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "CheckDisposed", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method, cancellationToken);
}
inline void System::Net::WebOperation::ThrowIfDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "ThrowIfDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::ThrowIfDisposed(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "ThrowIfDisposed", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
inline void System::Net::WebOperation::ThrowIfClosedOrDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "ThrowIfClosedOrDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::ThrowIfClosedOrDisposed(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "ThrowIfClosedOrDisposed", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::WebOperation::CheckThrowDisposed(bool throwIt,
                                                                                                                  ::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> field) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(),
                                              { "CheckThrowDisposed", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method, throwIt, field);
}
inline void System::Net::WebOperation::RegisterRequest(::System::Net::ServicePoint* servicePoint, ::System::Net::WebConnection* connection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(),
                                                           { "RegisterRequest", {}, { ::i2c::type_of<::System::Net::ServicePoint*>(), ::i2c::type_of<::System::Net::WebConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, servicePoint, connection);
}
inline void System::Net::WebOperation::SetPriorityRequest(::System::Net::WebOperation* operation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "SetPriorityRequest", {}, { ::i2c::type_of<::System::Net::WebOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebOperation::GetRequestStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "GetRequestStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* System::Net::WebOperation::GetRequestStreamInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "GetRequestStreamInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>*>(this, ___internal_method);
}
inline ::System::Net::WebRequestStream* System::Net::WebOperation::get_WriteStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_WriteStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequestStream*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream*>* System::Net::WebOperation::GetResponseStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "GetResponseStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream*>*>(this, ___internal_method);
}
inline ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* System::Net::WebOperation::get_Finished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "get_Finished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>*>(this, ___internal_method);
}
inline void System::Net::WebOperation::Run() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "Run", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::CompleteRequestWritten(::System::Net::WebRequestStream* stream, ::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(),
                                                           { "CompleteRequestWritten", {}, { ::i2c::type_of<::System::Net::WebRequestStream*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, error);
}
inline void System::Net::WebOperation::Finish(bool ok, ::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "Finish", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ok, error);
}
inline void System::Net::WebOperation::_RegisterRequest_b__48_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebOperation*>(), { "<RegisterRequest>b__48_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebOperation* System::Net::WebOperation::New_ctor(::System::Net::HttpWebRequest* request, ::System::Net::BufferOffsetSize* writeBuffer, bool isNtlmChallenge,
                                                                        ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebOperation*>(request, writeBuffer, isNtlmChallenge, cancellationToken));
}
// Ctor Parameters []
constexpr ::System::Net::WebOperation::WebOperation() {}
