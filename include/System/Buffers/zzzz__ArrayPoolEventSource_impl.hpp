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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)()>(&::System::Buffers::ArrayPoolEventSource::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3dc9bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferRented
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::System::Buffers::ArrayPoolEventSource::BufferRented)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3dc9c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferRented", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferAllocated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(
    int32_t, int32_t, int32_t, int32_t, ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason)>(&::System::Buffers::ArrayPoolEventSource::BufferAllocated)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3dc9d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferAllocated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferReturned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t)>(
    &::System::Buffers::ArrayPoolEventSource::BufferReturned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3dc9e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferReturned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferTrimmed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t)>(
    &::System::Buffers::ArrayPoolEventSource::BufferTrimmed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3dc9e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferTrimmed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferTrimPoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t)>(
    &::System::Buffers::ArrayPoolEventSource::BufferTrimPoll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3dc9ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferTrimPoll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Buffers::ArrayPoolEventSource::setStaticF_Log(::System::Buffers::ArrayPoolEventSource* value) {
  ::cordl_internals::setStaticField<::System::Buffers::ArrayPoolEventSource*, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get>(
      std::forward<::System::Buffers::ArrayPoolEventSource*>(value));
}
inline ::System::Buffers::ArrayPoolEventSource* System::Buffers::ArrayPoolEventSource::getStaticF_Log() {
  return ::cordl_internals::getStaticField<::System::Buffers::ArrayPoolEventSource*, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get>();
}
inline void System::Buffers::ArrayPoolEventSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Buffers::ArrayPoolEventSource::BufferRented(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferRented", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferSize, poolId, bucketId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferAllocated(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId,
                                                                   ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferAllocated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferSize, poolId, bucketId, reason);
}
inline void System::Buffers::ArrayPoolEventSource::BufferReturned(int32_t bufferId, int32_t bufferSize, int32_t poolId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferReturned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferSize, poolId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferTrimmed(int32_t bufferId, int32_t bufferSize, int32_t poolId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferTrimmed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferSize, poolId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferTrimPoll(int32_t milliseconds, int32_t pressure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferTrimPoll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, milliseconds, pressure);
}
inline ::System::Buffers::ArrayPoolEventSource* System::Buffers::ArrayPoolEventSource::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Buffers::ArrayPoolEventSource*>());
}
// Ctor Parameters []
constexpr ::System::Buffers::ArrayPoolEventSource::ArrayPoolEventSource() {}
