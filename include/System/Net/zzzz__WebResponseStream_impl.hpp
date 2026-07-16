#pragma once
// IWYU pragma private; include "System/Net/WebResponseStream.hpp"
#include "System/Net/zzzz__HttpStatusCode_impl.hpp"
#include "System/Net/zzzz__ReadState_impl.hpp"
#include "System/Net/zzzz__WebConnectionStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__ReadState_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::WebResponseStream__ReadAsync_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream__ReadAsync_d__40::*)()>(&::System::Net::WebResponseStream__ReadAsync_d__40::MoveNext)> {
  constexpr static std::size_t size = 0xa34;
  constexpr static std::size_t addrs = 0x6349d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAsync_d__40>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream__ReadAsync_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream__ReadAsync_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebResponseStream__ReadAsync_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x634a7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAsync_d__40>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebResponseStream__ReadAsync_d__40::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAsync_d__40>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebResponseStream__ReadAsync_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAsync_d__40>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebResponseStream__ReadAsync_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebResponseStream__ReadAsync_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_nbytes_5__3", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_throwMe_5__4", ty: "::System::Exception*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebResponseStream__ReadAsync_d__40::WebResponseStream__ReadAsync_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t> buffer,
    int32_t offset, int32_t count, ::System::Net::WebResponseStream* __4__this, ::System::Net::WebCompletionSource* _completion_5__2, int32_t _nbytes_5__3, ::System::Exception* _throwMe_5__4,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->buffer = buffer;
  this->offset = offset;
  this->count = count;
  this->__4__this = __4__this;
  this->_completion_5__2 = _completion_5__2;
  this->_nbytes_5__3 = _nbytes_5__3;
  this->_throwMe_5__4 = _throwMe_5__4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebResponseStream__ReadAsync_d__40::WebResponseStream__ReadAsync_d__40() {}
//  Writing Method size for method: ::System::Net::WebResponseStream___c__DisplayClass41_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream___c__DisplayClass41_0::*)()>(&::System::Net::WebResponseStream___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6348990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream___c__DisplayClass41_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream___c__DisplayClass41_0._ProcessRead_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::WebResponseStream___c__DisplayClass41_0::*)(::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream___c__DisplayClass41_0::_ProcessRead_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x634a848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream___c__DisplayClass41_0*>(),
                                                                                           { "<ProcessRead>b__0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream___c__DisplayClass41_0._ProcessRead_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream___c__DisplayClass41_0::*)()>(
    &::System::Net::WebResponseStream___c__DisplayClass41_0::_ProcessRead_b__1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x634a884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream___c__DisplayClass41_0*>(), { "<ProcessRead>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream___c__DisplayClass41_0._ProcessRead_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponseStream___c__DisplayClass41_0::*)()>(
    &::System::Net::WebResponseStream___c__DisplayClass41_0::_ProcessRead_b__2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x634a8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream___c__DisplayClass41_0*>(), { "<ProcessRead>b__2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebResponseStream*& System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::System::Net::WebResponseStream* const& System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_set___4__this(::System::Net::WebResponseStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr int32_t& System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void System::Net::WebResponseStream___c__DisplayClass41_0::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
inline void System::Net::WebResponseStream___c__DisplayClass41_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream___c__DisplayClass41_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::WebResponseStream___c__DisplayClass41_0::_ProcessRead_b__0(::System::Threading::CancellationToken ct) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream___c__DisplayClass41_0*>(),
                                                                                         { "<ProcessRead>b__0", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, ct);
}
inline void System::Net::WebResponseStream___c__DisplayClass41_0::_ProcessRead_b__1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream___c__DisplayClass41_0*>(), { "<ProcessRead>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::WebResponseStream___c__DisplayClass41_0::_ProcessRead_b__2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream___c__DisplayClass41_0*>(), { "<ProcessRead>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::WebResponseStream___c__DisplayClass41_0* System::Net::WebResponseStream___c__DisplayClass41_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebResponseStream___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebResponseStream___c__DisplayClass41_0::WebResponseStream___c__DisplayClass41_0() {}
//  Writing Method size for method: ::System::Net::WebResponseStream__ReadAllAsyncInner_d__47.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream__ReadAllAsyncInner_d__47::*)()>(&::System::Net::WebResponseStream__ReadAllAsyncInner_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x634a8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAllAsyncInner_d__47>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream__ReadAllAsyncInner_d__47.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream__ReadAllAsyncInner_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebResponseStream__ReadAllAsyncInner_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x634af10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAllAsyncInner_d__47>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebResponseStream__ReadAllAsyncInner_d__47::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAllAsyncInner_d__47>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebResponseStream__ReadAllAsyncInner_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAllAsyncInner_d__47>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebResponseStream__ReadAllAsyncInner_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebResponseStream__ReadAllAsyncInner_d__47::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_maximumSize_5__2", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ms_5__3", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebResponseStream__ReadAllAsyncInner_d__47::WebResponseStream__ReadAllAsyncInner_d__47(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::System::Net::WebResponseStream* __4__this, int64_t _maximumSize_5__2, ::System::IO::MemoryStream* _ms_5__3, ::ArrayW<uint8_t> _buffer_5__4,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->_maximumSize_5__2 = _maximumSize_5__2;
  this->_ms_5__3 = _ms_5__3;
  this->_buffer_5__4 = _buffer_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebResponseStream__ReadAllAsyncInner_d__47::WebResponseStream__ReadAllAsyncInner_d__47() {}
//  Writing Method size for method: ::System::Net::WebResponseStream__ReadAllAsync_d__48.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream__ReadAllAsync_d__48::*)()>(&::System::Net::WebResponseStream__ReadAllAsync_d__48::MoveNext)> {
  constexpr static std::size_t size = 0xb8c;
  constexpr static std::size_t addrs = 0x634af90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAllAsync_d__48>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream__ReadAllAsync_d__48.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream__ReadAllAsync_d__48::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebResponseStream__ReadAllAsync_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634bb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAllAsync_d__48>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebResponseStream__ReadAllAsync_d__48::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAllAsync_d__48>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebResponseStream__ReadAllAsync_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__ReadAllAsync_d__48>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebResponseStream__ReadAllAsync_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebResponseStream__ReadAllAsync_d__48::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "resending", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutCts_5__3",
// ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTask_5__4", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebResponseStream__ReadAllAsync_d__48::WebResponseStream__ReadAllAsync_d__48(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebResponseStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    bool resending, ::System::Net::WebCompletionSource* _completion_5__2, ::System::Threading::CancellationTokenSource* _timeoutCts_5__3, ::System::Threading::Tasks::Task* _timeoutTask_5__4,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t>> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->resending = resending;
  this->_completion_5__2 = _completion_5__2;
  this->_timeoutCts_5__3 = _timeoutCts_5__3;
  this->_timeoutTask_5__4 = _timeoutTask_5__4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebResponseStream__ReadAllAsync_d__48::WebResponseStream__ReadAllAsync_d__48() {}
//  Writing Method size for method: ::System::Net::WebResponseStream__InitReadAsync_d__52.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream__InitReadAsync_d__52::*)()>(&::System::Net::WebResponseStream__InitReadAsync_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x634bb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__InitReadAsync_d__52>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream__InitReadAsync_d__52.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream__InitReadAsync_d__52::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebResponseStream__InitReadAsync_d__52::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x634c35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__InitReadAsync_d__52>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebResponseStream__InitReadAsync_d__52::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__InitReadAsync_d__52>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebResponseStream__InitReadAsync_d__52::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream__InitReadAsync_d__52>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebResponseStream__InitReadAsync_d__52::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebResponseStream__InitReadAsync_d__52::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty:
// "::System::Net::BufferOffsetSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_state_5__3", ty: "::System::Net::ReadState", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_position_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebResponseStream__InitReadAsync_d__52::WebResponseStream__InitReadAsync_d__52(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebResponseStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Net::BufferOffsetSize* _buffer_5__2, ::System::Net::ReadState _state_5__3, int32_t _position_5__4,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_buffer_5__2 = _buffer_5__2;
  this->_state_5__3 = _state_5__3;
  this->_position_5__4 = _position_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebResponseStream__InitReadAsync_d__52::WebResponseStream__InitReadAsync_d__52() {}
//  Writing Method size for method: ::System::Net::WebResponseStream.get_RequestStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequestStream* (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_RequestStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6348490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_RequestStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_Headers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6348498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_Headers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_Headers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Net::WebHeaderCollection*)>(&::System::Net::WebResponseStream::set_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_Headers", {}, { ::i2c::type_of<::System::Net::WebHeaderCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_StatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpStatusCode (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_StatusCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_StatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Net::HttpStatusCode)>(&::System::Net::WebResponseStream::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_StatusCode", {}, { ::i2c::type_of<::System::Net::HttpStatusCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_StatusDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_StatusDescription", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_StatusDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(::StringW)>(&::System::Net::WebResponseStream::set_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_StatusDescription", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Version*)>(&::System::Net::WebResponseStream::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_Version", {}, { ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_KeepAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_KeepAlive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_KeepAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(bool)>(&::System::Net::WebResponseStream::set_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_KeepAlive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Net::WebRequestStream*)>(&::System::Net::WebResponseStream::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6343828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::WebRequestStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { ::i2c::class_of<::System::Net::WebResponseStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { ::i2c::class_of<::System::Net::WebResponseStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_ChunkedRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_ChunkedRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63484f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_ChunkedRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_ChunkedRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(bool)>(&::System::Net::WebResponseStream::set_ChunkedRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6348500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_ChunkedRead", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::ReadAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6348508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { ::i2c::class_of<::System::Net::WebResponseStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.ProcessRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::ProcessRead)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x634861c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::WebResponseStream*>(),
            { "ProcessRead", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.TryReadFromBufferedContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int32_t>)>(
    &::System::Net::WebResponseStream::TryReadFromBufferedContent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6348994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { ::i2c::class_of<::System::Net::WebResponseStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_ExpectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_ExpectContent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6348a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_ExpectContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Net::BufferOffsetSize*)>(&::System::Net::WebResponseStream::Initialize)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x6348af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "Initialize", {}, { ::i2c::type_of<::System::Net::BufferOffsetSize*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.ReadAllAsyncInner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebResponseStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebResponseStream::ReadAllAsyncInner)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x634907c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "ReadAllAsyncInner", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.ReadAllAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebResponseStream::*)(bool, ::System::Threading::CancellationToken)>(
    &::System::Net::WebResponseStream::ReadAllAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6349170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "ReadAllAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::WriteAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6349244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { ::i2c::class_of<::System::Net::WebResponseStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.Close_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponseStream::*)(::by_ref<bool>)>(&::System::Net::WebResponseStream::Close_internal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63492f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { ::i2c::class_of<::System::Net::WebResponseStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.GetReadException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebException* (::System::Net::WebResponseStream::*)(::System::Net::WebExceptionStatus, ::System::Exception*, ::StringW)>(
    &::System::Net::WebResponseStream::GetReadException)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x634937c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(),
                                         { "GetReadException", {}, { ::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.InitReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebResponseStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebResponseStream::InitReadAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x634389c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "InitReadAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.GetResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponseStream::*)(::System::Net::BufferOffsetSize*, ::by_ref<int32_t>, ::by_ref<::System::Net::ReadState>)>(
    &::System::Net::WebResponseStream::GetResponse)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x6349694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(),
                            { "GetResponse", {}, { ::i2c::type_of<::System::Net::BufferOffsetSize*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Net::ReadState>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebReadStream*& System::Net::WebResponseStream::__cordl_internal_get_innerStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___innerStream;
}
constexpr ::System::Net::WebReadStream* const& System::Net::WebResponseStream::__cordl_internal_get_innerStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___innerStream;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set_innerStream(::System::Net::WebReadStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___innerStream = value;
}
constexpr bool& System::Net::WebResponseStream::__cordl_internal_get_nextReadCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextReadCalled;
}
constexpr bool const& System::Net::WebResponseStream::__cordl_internal_get_nextReadCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextReadCalled;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set_nextReadCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextReadCalled = value;
}
constexpr bool& System::Net::WebResponseStream::__cordl_internal_get_bufferedEntireContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferedEntireContent;
}
constexpr bool const& System::Net::WebResponseStream::__cordl_internal_get_bufferedEntireContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferedEntireContent;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set_bufferedEntireContent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferedEntireContent = value;
}
constexpr ::System::Net::WebCompletionSource*& System::Net::WebResponseStream::__cordl_internal_get_pendingRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingRead;
}
constexpr ::System::Net::WebCompletionSource* const& System::Net::WebResponseStream::__cordl_internal_get_pendingRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingRead;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set_pendingRead(::System::Net::WebCompletionSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pendingRead = value;
}
constexpr ::System::Object*& System::Net::WebResponseStream::__cordl_internal_get_locker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locker;
}
constexpr ::System::Object* const& System::Net::WebResponseStream::__cordl_internal_get_locker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locker;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set_locker(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locker = value;
}
constexpr int32_t& System::Net::WebResponseStream::__cordl_internal_get_nestedRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nestedRead;
}
constexpr int32_t const& System::Net::WebResponseStream::__cordl_internal_get_nestedRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nestedRead;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set_nestedRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nestedRead = value;
}
constexpr bool& System::Net::WebResponseStream::__cordl_internal_get_read_eof() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___read_eof;
}
constexpr bool const& System::Net::WebResponseStream::__cordl_internal_get_read_eof() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___read_eof;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set_read_eof(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___read_eof = value;
}
constexpr ::System::Net::WebRequestStream*& System::Net::WebResponseStream::__cordl_internal_get__RequestStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestStream_k__BackingField;
}
constexpr ::System::Net::WebRequestStream* const& System::Net::WebResponseStream::__cordl_internal_get__RequestStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestStream_k__BackingField;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set__RequestStream_k__BackingField(::System::Net::WebRequestStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RequestStream_k__BackingField = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::WebResponseStream::__cordl_internal_get__Headers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::WebResponseStream::__cordl_internal_get__Headers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Headers_k__BackingField = value;
}
constexpr ::System::Net::HttpStatusCode& System::Net::WebResponseStream::__cordl_internal_get__StatusCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusCode_k__BackingField;
}
constexpr ::System::Net::HttpStatusCode const& System::Net::WebResponseStream::__cordl_internal_get__StatusCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusCode_k__BackingField;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set__StatusCode_k__BackingField(::System::Net::HttpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StatusCode_k__BackingField = value;
}
constexpr ::StringW& System::Net::WebResponseStream::__cordl_internal_get__StatusDescription_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusDescription_k__BackingField;
}
constexpr ::StringW const& System::Net::WebResponseStream::__cordl_internal_get__StatusDescription_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusDescription_k__BackingField;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set__StatusDescription_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StatusDescription_k__BackingField = value;
}
constexpr ::System::Version*& System::Net::WebResponseStream::__cordl_internal_get__Version_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr ::System::Version* const& System::Net::WebResponseStream::__cordl_internal_get__Version_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set__Version_k__BackingField(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Version_k__BackingField = value;
}
constexpr bool& System::Net::WebResponseStream::__cordl_internal_get__KeepAlive_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeepAlive_k__BackingField;
}
constexpr bool const& System::Net::WebResponseStream::__cordl_internal_get__KeepAlive_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeepAlive_k__BackingField;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set__KeepAlive_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____KeepAlive_k__BackingField = value;
}
constexpr bool& System::Net::WebResponseStream::__cordl_internal_get__ChunkedRead_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ChunkedRead_k__BackingField;
}
constexpr bool const& System::Net::WebResponseStream::__cordl_internal_get__ChunkedRead_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ChunkedRead_k__BackingField;
}
constexpr void System::Net::WebResponseStream::__cordl_internal_set__ChunkedRead_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ChunkedRead_k__BackingField = value;
}
inline ::System::Net::WebRequestStream* System::Net::WebResponseStream::get_RequestStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_RequestStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequestStream*>(this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebResponseStream::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_Headers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline void System::Net::WebResponseStream::set_Headers(::System::Net::WebHeaderCollection* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_Headers", {}, { ::i2c::type_of<::System::Net::WebHeaderCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::HttpStatusCode System::Net::WebResponseStream::get_StatusCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_StatusCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpStatusCode>(this, ___internal_method);
}
inline void System::Net::WebResponseStream::set_StatusCode(::System::Net::HttpStatusCode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_StatusCode", {}, { ::i2c::type_of<::System::Net::HttpStatusCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::WebResponseStream::get_StatusDescription() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_StatusDescription", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::WebResponseStream::set_StatusDescription(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_StatusDescription", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Version* System::Net::WebResponseStream::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Net::WebResponseStream::set_Version(::System::Version* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_Version", {}, { ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebResponseStream::get_KeepAlive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_KeepAlive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebResponseStream::set_KeepAlive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_KeepAlive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebResponseStream::_ctor(::System::Net::WebRequestStream* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::WebRequestStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline bool System::Net::WebResponseStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebResponseStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebResponseStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebResponseStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebResponseStream::get_ChunkedRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_ChunkedRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebResponseStream::set_ChunkedRead(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "set_ChunkedRead", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::WebResponseStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebResponseStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::WebResponseStream::ProcessRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                                ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::WebResponseStream*>(),
          { "ProcessRead", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline bool System::Net::WebResponseStream::TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::by_ref<int32_t> result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebResponseStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset, count, result);
}
inline bool System::Net::WebResponseStream::get_ExpectContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "get_ExpectContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebResponseStream::Initialize(::System::Net::BufferOffsetSize* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "Initialize", {}, { ::i2c::type_of<::System::Net::BufferOffsetSize*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebResponseStream::ReadAllAsyncInner(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "ReadAllAsyncInner", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebResponseStream::ReadAllAsync(bool resending, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "ReadAllAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, resending, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebResponseStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebResponseStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline void System::Net::WebResponseStream::Close_internal(::by_ref<bool> disposed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebResponseStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposed);
}
inline ::System::Net::WebException* System::Net::WebResponseStream::GetReadException(::System::Net::WebExceptionStatus status, ::System::Exception* error, ::StringW where) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(),
                                       { "GetReadException", {}, { ::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*>(this, ___internal_method, status, error, where);
}
inline ::System::Threading::Tasks::Task* System::Net::WebResponseStream::InitReadAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(), { "InitReadAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline bool System::Net::WebResponseStream::GetResponse(::System::Net::BufferOffsetSize* buffer, ::by_ref<int32_t> pos, ::by_ref<::System::Net::ReadState> state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebResponseStream*>(),
                          { "GetResponse", {}, { ::i2c::type_of<::System::Net::BufferOffsetSize*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Net::ReadState>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, pos, state);
}
inline ::System::Net::WebResponseStream* System::Net::WebResponseStream::New_ctor(::System::Net::WebRequestStream* request) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebResponseStream*>(request));
}
// Ctor Parameters []
constexpr ::System::Net::WebResponseStream::WebResponseStream() {}
