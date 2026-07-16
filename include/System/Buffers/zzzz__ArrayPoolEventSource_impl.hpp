#pragma once
// IWYU pragma private; include "System/Buffers/ArrayPoolEventSource.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Buffers/zzzz__ArrayPoolEventSource_def.hpp"
#include "System/Buffers/zzzz__ArrayPoolEventSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason::ArrayPoolEventSource_BufferAllocatedReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason::ArrayPoolEventSource_BufferAllocatedReason() {}
constexpr ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason System::Buffers::ArrayPoolEventSource_BufferAllocatedReason::Pooled{ static_cast<int32_t>(0x0) };
constexpr ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason System::Buffers::ArrayPoolEventSource_BufferAllocatedReason::OverMaximumSize{ static_cast<int32_t>(0x1) };
constexpr ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason System::Buffers::ArrayPoolEventSource_BufferAllocatedReason::PoolExhausted{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)()>(&::System::Buffers::ArrayPoolEventSource::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bf1964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferRented
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Buffers::ArrayPoolEventSource::BufferRented)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bf19b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(),
                                                             { "BufferRented", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(
    int32_t, int32_t, int32_t, int32_t, ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason)>(&::System::Buffers::ArrayPoolEventSource::BufferAllocated)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bf1a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(), { "BufferAllocated",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferReturned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t)>(&::System::Buffers::ArrayPoolEventSource::BufferReturned)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bf1b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(),
                                                             { "BufferReturned", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferTrimmed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t)>(&::System::Buffers::ArrayPoolEventSource::BufferTrimmed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bf1b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(),
                                                             { "BufferTrimmed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferTrimPoll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t)>(&::System::Buffers::ArrayPoolEventSource::BufferTrimPoll)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bf1b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(), { "BufferTrimPoll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Buffers::ArrayPoolEventSource::setStaticF_Log(::System::Buffers::ArrayPoolEventSource* value) {
  ::cordl_internals::setStaticField<::System::Buffers::ArrayPoolEventSource*, "Log", ::System::Buffers::ArrayPoolEventSource*>(std::forward<::System::Buffers::ArrayPoolEventSource*>(value));
}
inline ::System::Buffers::ArrayPoolEventSource* System::Buffers::ArrayPoolEventSource::getStaticF_Log() {
  return ::cordl_internals::getStaticField<::System::Buffers::ArrayPoolEventSource*, "Log", ::System::Buffers::ArrayPoolEventSource*>();
}
inline void System::Buffers::ArrayPoolEventSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Buffers::ArrayPoolEventSource::BufferRented(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(),
                                                           { "BufferRented", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferId, bufferSize, poolId, bucketId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferAllocated(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId,
                                                                   ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason reason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(),
                                                                                         { "BufferAllocated",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferId, bufferSize, poolId, bucketId, reason);
}
inline void System::Buffers::ArrayPoolEventSource::BufferReturned(int32_t bufferId, int32_t bufferSize, int32_t poolId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(), { "BufferReturned", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferId, bufferSize, poolId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferTrimmed(int32_t bufferId, int32_t bufferSize, int32_t poolId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(), { "BufferTrimmed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferId, bufferSize, poolId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferTrimPoll(int32_t milliseconds, int32_t pressure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::ArrayPoolEventSource*>(), { "BufferTrimPoll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, milliseconds, pressure);
}
inline ::System::Buffers::ArrayPoolEventSource* System::Buffers::ArrayPoolEventSource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Buffers::ArrayPoolEventSource*>());
}
// Ctor Parameters []
constexpr ::System::Buffers::ArrayPoolEventSource::ArrayPoolEventSource() {}
