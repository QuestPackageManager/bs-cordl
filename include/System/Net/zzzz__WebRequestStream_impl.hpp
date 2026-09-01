#pragma once
// IWYU pragma private; include "System\Net\WebRequestStream.hpp"
#include "System/Net/zzzz__WebConnectionStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Net::WebRequestStream__FinishWriting_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__FinishWriting_d__31::*)()>(&::System::Net::WebRequestStream__FinishWriting_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x634b0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__FinishWriting_d__31>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream__FinishWriting_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__FinishWriting_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebRequestStream__FinishWriting_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634b404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__FinishWriting_d__31>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebRequestStream__FinishWriting_d__31::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__FinishWriting_d__31>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebRequestStream__FinishWriting_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__FinishWriting_d__31>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebRequestStream__FinishWriting_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebRequestStream__FinishWriting_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebRequestStream__FinishWriting_d__31::WebRequestStream__FinishWriting_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream__FinishWriting_d__31::WebRequestStream__FinishWriting_d__31() {}
//  Writing Method size for method: ::System::Net::WebRequestStream__WriteAsyncInner_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__WriteAsyncInner_d__33::*)()>(&::System::Net::WebRequestStream__WriteAsyncInner_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x634b470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteAsyncInner_d__33>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream__WriteAsyncInner_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__WriteAsyncInner_d__33::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebRequestStream__WriteAsyncInner_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634b9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteAsyncInner_d__33>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebRequestStream__WriteAsyncInner_d__33::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteAsyncInner_d__33>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebRequestStream__WriteAsyncInner_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteAsyncInner_d__33>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebRequestStream__WriteAsyncInner_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebRequestStream__WriteAsyncInner_d__33::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "completion", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebRequestStream__WriteAsyncInner_d__33::WebRequestStream__WriteAsyncInner_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                          ::System::Net::WebRequestStream* __4__this, ::ArrayW<uint8_t> buffer, int32_t offset,
                                                                                                          int32_t size, ::System::Threading::CancellationToken cancellationToken,
                                                                                                          ::System::Net::WebCompletionSource* completion,
                                                                                                          ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->offset = offset;
  this->size = size;
  this->cancellationToken = cancellationToken;
  this->completion = completion;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream__WriteAsyncInner_d__33::WebRequestStream__WriteAsyncInner_d__33() {}
//  Writing Method size for method: ::System::Net::WebRequestStream__ProcessWrite_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__ProcessWrite_d__34::*)()>(&::System::Net::WebRequestStream__ProcessWrite_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x634ba2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__ProcessWrite_d__34>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream__ProcessWrite_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__ProcessWrite_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebRequestStream__ProcessWrite_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634bfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__ProcessWrite_d__34>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebRequestStream__ProcessWrite_d__34::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__ProcessWrite_d__34>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebRequestStream__ProcessWrite_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__ProcessWrite_d__34>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebRequestStream__ProcessWrite_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebRequestStream__ProcessWrite_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebRequestStream__ProcessWrite_d__34::WebRequestStream__ProcessWrite_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    int32_t size, ::ArrayW<uint8_t> buffer, int32_t offset, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->size = size;
  this->buffer = buffer;
  this->offset = offset;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream__ProcessWrite_d__34::WebRequestStream__ProcessWrite_d__34() {}
//  Writing Method size for method: ::System::Net::WebRequestStream__Initialize_d__36.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__Initialize_d__36::*)()>(&::System::Net::WebRequestStream__Initialize_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x634c040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__Initialize_d__36>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream__Initialize_d__36.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__Initialize_d__36::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebRequestStream__Initialize_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634c3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__Initialize_d__36>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebRequestStream__Initialize_d__36::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__Initialize_d__36>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebRequestStream__Initialize_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__Initialize_d__36>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebRequestStream__Initialize_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebRequestStream__Initialize_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebRequestStream__Initialize_d__36::WebRequestStream__Initialize_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                                                ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream__Initialize_d__36::WebRequestStream__Initialize_d__36() {}
//  Writing Method size for method: ::System::Net::WebRequestStream__SetHeadersAsync_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__SetHeadersAsync_d__37::*)()>(&::System::Net::WebRequestStream__SetHeadersAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x634c418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__SetHeadersAsync_d__37>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream__SetHeadersAsync_d__37.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__SetHeadersAsync_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebRequestStream__SetHeadersAsync_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634cb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__SetHeadersAsync_d__37>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebRequestStream__SetHeadersAsync_d__37::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__SetHeadersAsync_d__37>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebRequestStream__SetHeadersAsync_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__SetHeadersAsync_d__37>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebRequestStream__SetHeadersAsync_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebRequestStream__SetHeadersAsync_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "setInternalLength", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::WebRequestStream__SetHeadersAsync_d__37::WebRequestStream__SetHeadersAsync_d__37(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    bool setInternalLength, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->setInternalLength = setInternalLength;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream__SetHeadersAsync_d__37::WebRequestStream__SetHeadersAsync_d__37() {}
//  Writing Method size for method: ::System::Net::WebRequestStream__WriteRequestAsync_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__WriteRequestAsync_d__38::*)()>(&::System::Net::WebRequestStream__WriteRequestAsync_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x634cba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteRequestAsync_d__38>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream__WriteRequestAsync_d__38.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__WriteRequestAsync_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebRequestStream__WriteRequestAsync_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634d0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteRequestAsync_d__38>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebRequestStream__WriteRequestAsync_d__38::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteRequestAsync_d__38>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebRequestStream__WriteRequestAsync_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteRequestAsync_d__38>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebRequestStream__WriteRequestAsync_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebRequestStream__WriteRequestAsync_d__38::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty:
// "::System::Net::BufferOffsetSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebRequestStream__WriteRequestAsync_d__38::WebRequestStream__WriteRequestAsync_d__38(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Net::BufferOffsetSize* _buffer_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_buffer_5__2 = _buffer_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream__WriteRequestAsync_d__38::WebRequestStream__WriteRequestAsync_d__38() {}
//  Writing Method size for method: ::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::*)()>(
    &::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x634d130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634d3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::WebRequestStream__WriteChunkTrailer_inner_d__39(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream__WriteChunkTrailer_inner_d__39::WebRequestStream__WriteChunkTrailer_inner_d__39() {}
//  Writing Method size for method: ::System::Net::WebRequestStream__WriteChunkTrailer_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__WriteChunkTrailer_d__40::*)()>(&::System::Net::WebRequestStream__WriteChunkTrailer_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x810;
  constexpr static std::size_t addrs = 0x634d42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteChunkTrailer_d__40>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream__WriteChunkTrailer_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream__WriteChunkTrailer_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebRequestStream__WriteChunkTrailer_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634dc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteChunkTrailer_d__40>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebRequestStream__WriteChunkTrailer_d__40::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteChunkTrailer_d__40>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebRequestStream__WriteChunkTrailer_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream__WriteChunkTrailer_d__40>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebRequestStream__WriteChunkTrailer_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebRequestStream__WriteChunkTrailer_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTask_5__3", ty:
// "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebRequestStream__WriteChunkTrailer_d__40::WebRequestStream__WriteChunkTrailer_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationTokenSource* _cts_5__2,
    ::System::Threading::Tasks::Task* _timeoutTask_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cts_5__2 = _cts_5__2;
  this->_timeoutTask_5__3 = _timeoutTask_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream__WriteChunkTrailer_d__40::WebRequestStream__WriteChunkTrailer_d__40() {}
//  Writing Method size for method: ::System::Net::WebRequestStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)(::System::Net::WebConnection*, ::System::Net::WebOperation*, ::System::IO::Stream*,
                                                                                                 ::System::Net::WebConnectionTunnel*)>(&::System::Net::WebRequestStream::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6344910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { ".ctor",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Net::WebConnection*>(), ::i2c::type_of<::System::Net::WebOperation*>(),
                                                                                                  ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebConnectionTunnel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_InnerStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_InnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x634a35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "get_InnerStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_KeepAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x634a364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "get_KeepAlive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x634a36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { ::i2c::class_of<::System::Net::WebRequestStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x634a374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { ::i2c::class_of<::System::Net::WebRequestStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_HasWriteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_HasWriteBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x634a37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "get_HasWriteBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_WriteBufferLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_WriteBufferLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x634a3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "get_WriteBufferLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.GetWriteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::BufferOffsetSize* (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::GetWriteBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x634a3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "GetWriteBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.FinishWriting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::FinishWriting)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x634a4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "FinishWriting", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteAsync)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x634a5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { ::i2c::class_of<::System::Net::WebRequestStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteAsyncInner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::WebCompletionSource*,
                                                                                                                              ::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::WriteAsyncInner)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x634a828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(),
                                                             { "WriteAsyncInner",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::WebCompletionSource*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.ProcessWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::ProcessWrite)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x634a914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::WebRequestStream*>(),
            { "ProcessWrite", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.CheckWriteOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)(int64_t, int64_t, int64_t)>(&::System::Net::WebRequestStream::CheckWriteOverflow)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x634a9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "CheckWriteOverflow", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::Initialize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6348f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "Initialize", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.SetHeadersAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(bool, ::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::SetHeadersAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x634aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "SetHeadersAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteRequestAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::WriteRequestAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x634ab6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "WriteRequestAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteChunkTrailer_inner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::WriteChunkTrailer_inner)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x634ac30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "WriteChunkTrailer_inner", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteChunkTrailer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::WriteChunkTrailer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x634acf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "WriteChunkTrailer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.KillBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::KillBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x634aa94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "KillBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::ReadAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x634adac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { ::i2c::class_of<::System::Net::WebRequestStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.TryReadFromBufferedContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int32_t>)>(
    &::System::Net::WebRequestStream::TryReadFromBufferedContent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x634ae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { ::i2c::class_of<::System::Net::WebRequestStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.Close_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)(::by_ref<bool>)>(&::System::Net::WebRequestStream::Close_internal)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x634aea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { ::i2c::class_of<::System::Net::WebRequestStream*>(), 43 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::MemoryStream*& System::Net::WebRequestStream::__cordl_internal_get_writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr ::System::IO::MemoryStream* const& System::Net::WebRequestStream::__cordl_internal_get_writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_writeBuffer(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeBuffer = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get_requestWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestWritten;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get_requestWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestWritten;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_requestWritten(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestWritten = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get_allowBuffering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowBuffering;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get_allowBuffering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowBuffering;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_allowBuffering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowBuffering = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get_sendChunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendChunked;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get_sendChunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendChunked;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_sendChunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendChunked = value;
}
constexpr ::System::Net::WebCompletionSource*& System::Net::WebRequestStream::__cordl_internal_get_pendingWrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingWrite;
}
constexpr ::System::Net::WebCompletionSource* const& System::Net::WebRequestStream::__cordl_internal_get_pendingWrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingWrite;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_pendingWrite(::System::Net::WebCompletionSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pendingWrite = value;
}
constexpr int64_t& System::Net::WebRequestStream::__cordl_internal_get_totalWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalWritten;
}
constexpr int64_t const& System::Net::WebRequestStream::__cordl_internal_get_totalWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalWritten;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_totalWritten(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalWritten = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::WebRequestStream::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::ArrayW<uint8_t> const& System::Net::WebRequestStream::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_headers(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get_headersSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headersSent;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get_headersSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headersSent;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_headersSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headersSent = value;
}
constexpr int32_t& System::Net::WebRequestStream::__cordl_internal_get_completeRequestWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completeRequestWritten;
}
constexpr int32_t const& System::Net::WebRequestStream::__cordl_internal_get_completeRequestWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completeRequestWritten;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_completeRequestWritten(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completeRequestWritten = value;
}
constexpr int32_t& System::Net::WebRequestStream::__cordl_internal_get_chunkTrailerWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkTrailerWritten;
}
constexpr int32_t const& System::Net::WebRequestStream::__cordl_internal_get_chunkTrailerWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkTrailerWritten;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_chunkTrailerWritten(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkTrailerWritten = value;
}
constexpr ::System::IO::Stream*& System::Net::WebRequestStream::__cordl_internal_get__InnerStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream_k__BackingField;
}
constexpr ::System::IO::Stream* const& System::Net::WebRequestStream::__cordl_internal_get__InnerStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream_k__BackingField;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set__InnerStream_k__BackingField(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InnerStream_k__BackingField = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get__KeepAlive_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeepAlive_k__BackingField;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get__KeepAlive_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeepAlive_k__BackingField;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set__KeepAlive_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____KeepAlive_k__BackingField = value;
}
inline void System::Net::WebRequestStream::setStaticF_crlf(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "crlf", ::System::Net::WebRequestStream*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Net::WebRequestStream::getStaticF_crlf() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "crlf", ::System::Net::WebRequestStream*>();
}
inline void System::Net::WebRequestStream::_ctor(::System::Net::WebConnection* connection, ::System::Net::WebOperation* operation, ::System::IO::Stream* stream,
                                                 ::System::Net::WebConnectionTunnel* tunnel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::Net::WebConnection*>(), ::i2c::type_of<::System::Net::WebOperation*>(),
                                                                                                ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebConnectionTunnel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, operation, stream, tunnel);
}
inline ::System::IO::Stream* System::Net::WebRequestStream::get_InnerStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "get_InnerStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_KeepAlive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "get_KeepAlive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebRequestStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebRequestStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_HasWriteBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "get_HasWriteBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::WebRequestStream::get_WriteBufferLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "get_WriteBufferLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Net::BufferOffsetSize* System::Net::WebRequestStream::GetWriteBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "GetWriteBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::BufferOffsetSize*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::FinishWriting(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "FinishWriting", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebRequestStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteAsyncInner(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::WebCompletionSource* completion,
                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(),
                                                           { "WriteAsyncInner",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::WebCompletionSource*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, size, completion, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::ProcessWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::WebRequestStream*>(),
          { "ProcessWrite", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline void System::Net::WebRequestStream::CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "CheckWriteOverflow", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentLength, totalWritten, size);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::Initialize(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "Initialize", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::SetHeadersAsync(bool setInternalLength, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "SetHeadersAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, setInternalLength, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteRequestAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "WriteRequestAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteChunkTrailer_inner(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "WriteChunkTrailer_inner", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteChunkTrailer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "WriteChunkTrailer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void System::Net::WebRequestStream::KillBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestStream*>(), { "KillBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::WebRequestStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebRequestStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline bool System::Net::WebRequestStream::TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::by_ref<int32_t> result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebRequestStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset, count, result);
}
inline void System::Net::WebRequestStream::Close_internal(::by_ref<bool> disposed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebRequestStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposed);
}
inline ::System::Net::WebRequestStream* System::Net::WebRequestStream::New_ctor(::System::Net::WebConnection* connection, ::System::Net::WebOperation* operation, ::System::IO::Stream* stream,
                                                                                ::System::Net::WebConnectionTunnel* tunnel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequestStream*>(connection, operation, stream, tunnel));
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream::WebRequestStream() {}
