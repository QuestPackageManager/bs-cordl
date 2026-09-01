#pragma once
// IWYU pragma private; include "System\Net\FixedSizeReadStream.hpp"
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/zzzz__FixedSizeReadStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__FixedSizeReadStream_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::*)()>(&::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6430edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x643123c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::FixedSizeReadStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::FixedSizeReadStream__ProcessReadAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::System::Net::FixedSizeReadStream* __4__this, int32_t size, ::ArrayW<uint8_t> buffer, int32_t offset,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->size = size;
  this->buffer = buffer;
  this->offset = offset;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::FixedSizeReadStream__ProcessReadAsync_d__5::FixedSizeReadStream__ProcessReadAsync_d__5() {}
//  Writing Method size for method: ::System::Net::FixedSizeReadStream.get_ContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::FixedSizeReadStream::*)()>(&::System::Net::FixedSizeReadStream::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6430d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream*>(), { "get_ContentLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FixedSizeReadStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FixedSizeReadStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*, int64_t)>(
    &::System::Net::FixedSizeReadStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6430da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FixedSizeReadStream.ProcessReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::FixedSizeReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::FixedSizeReadStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6430dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream*>(), { ::i2c::class_of<::System::Net::FixedSizeReadStream*>(), 42 }));
    return ___internal_method;
  }
};
constexpr int64_t& System::Net::FixedSizeReadStream::__cordl_internal_get__ContentLength_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentLength_k__BackingField;
}
constexpr int64_t const& System::Net::FixedSizeReadStream::__cordl_internal_get__ContentLength_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentLength_k__BackingField;
}
constexpr void System::Net::FixedSizeReadStream::__cordl_internal_set__ContentLength_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ContentLength_k__BackingField = value;
}
constexpr int64_t& System::Net::FixedSizeReadStream::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr int64_t const& System::Net::FixedSizeReadStream::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void System::Net::FixedSizeReadStream::__cordl_internal_set_position(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
inline int64_t System::Net::FixedSizeReadStream::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream*>(), { "get_ContentLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::FixedSizeReadStream::_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FixedSizeReadStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation, innerStream, contentLength);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::FixedSizeReadStream::ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FixedSizeReadStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Net::FixedSizeReadStream* System::Net::FixedSizeReadStream::New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FixedSizeReadStream*>(operation, innerStream, contentLength));
}
// Ctor Parameters []
constexpr ::System::Net::FixedSizeReadStream::FixedSizeReadStream() {}
