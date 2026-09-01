#pragma once
// IWYU pragma private; include "ENet\Library.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ENet/zzzz__Library_def.hpp"
#include "ENet/zzzz__Callbacks_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::ENet::Library.get_Time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::ENet::Library::get_Time)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5895a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "get_Time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Library.InitOpenSSL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ENet::Library::InitOpenSSL)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5895ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "InitOpenSSL", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Library.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::ENet::Library::Initialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5895bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Library.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ENet::Callbacks*)>(&::ENet::Library::Initialize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5895d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "Initialize", {}, { ::i2c::type_of<::ENet::Callbacks*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Library.Deinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ENet::Library::Deinitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5895efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "Deinitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Library.CRC64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr, int32_t)>(&::ENet::Library::CRC64)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5895f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "CRC64", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline uint32_t ENet::Library::get_Time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "get_Time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void ENet::Library::InitOpenSSL() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "InitOpenSSL", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool ENet::Library::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool ENet::Library::Initialize(::ENet::Callbacks* callbacks) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "Initialize", {}, { ::i2c::type_of<::ENet::Callbacks*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callbacks);
}
inline void ENet::Library::Deinitialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "Deinitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline uint64_t ENet::Library::CRC64(::System::IntPtr buffers, int32_t bufferCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Library*>(), { "CRC64", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, buffers, bufferCount);
}
// Ctor Parameters []
constexpr ::ENet::Library::Library() {}
