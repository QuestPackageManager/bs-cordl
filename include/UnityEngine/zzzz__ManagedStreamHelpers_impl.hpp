#pragma once
// IWYU pragma private; include "UnityEngine/ManagedStreamHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ManagedStreamHelpers_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::ManagedStreamHelpers.ValidateLoadFromStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*)>(&::UnityEngine::ManagedStreamHelpers::ValidateLoadFromStream)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6ae0bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ManagedStreamHelpers*>(), { "ValidateLoadFromStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ManagedStreamHelpers.ManagedStreamRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::IO::Stream*, ::System::IntPtr)>(
    &::UnityEngine::ManagedStreamHelpers::ManagedStreamRead)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6ae0cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ManagedStreamHelpers*>(), { "ManagedStreamRead",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ManagedStreamHelpers.ManagedStreamSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, uint32_t, ::System::IO::Stream*, ::System::IntPtr)>(&::UnityEngine::ManagedStreamHelpers::ManagedStreamSeek)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6ae0d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ManagedStreamHelpers*>(),
                            { "ManagedStreamSeek", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ManagedStreamHelpers.ManagedStreamLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IntPtr)>(&::UnityEngine::ManagedStreamHelpers::ManagedStreamLength)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ae0e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ManagedStreamHelpers*>(), { "ManagedStreamLength", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ManagedStreamHelpers::ValidateLoadFromStream(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ManagedStreamHelpers*>(), { "ValidateLoadFromStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream);
}
inline void UnityEngine::ManagedStreamHelpers::ManagedStreamRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::IO::Stream* stream, ::System::IntPtr returnValueAddress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ManagedStreamHelpers*>(), { "ManagedStreamRead",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, count, stream, returnValueAddress);
}
inline void UnityEngine::ManagedStreamHelpers::ManagedStreamSeek(int64_t offset, uint32_t origin, ::System::IO::Stream* stream, ::System::IntPtr returnValueAddress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ManagedStreamHelpers*>(),
                          { "ManagedStreamSeek", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, offset, origin, stream, returnValueAddress);
}
inline void UnityEngine::ManagedStreamHelpers::ManagedStreamLength(::System::IO::Stream* stream, ::System::IntPtr returnValueAddress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ManagedStreamHelpers*>(), { "ManagedStreamLength", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, returnValueAddress);
}
// Ctor Parameters []
constexpr ::UnityEngine::ManagedStreamHelpers::ManagedStreamHelpers() {}
