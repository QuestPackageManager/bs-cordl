#pragma once
// IWYU pragma private; include "System\Runtime\RuntimeImports.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__RuntimeImports_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Runtime::RuntimeImports.RhZeroMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, uint64_t)>(&::System::Runtime::RuntimeImports::RhZeroMemory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b20c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::RuntimeImports*>(), { "RhZeroMemory", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::RuntimeImports.ZeroMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint32_t)>(&::System::Runtime::RuntimeImports::ZeroMemory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b20c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::RuntimeImports*>(), { "ZeroMemory", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::RuntimeImports.Memmove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, uint32_t)>(&::System::Runtime::RuntimeImports::Memmove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::RuntimeImports*>(),
                                                                                           { "Memmove", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::RuntimeImports.Memmove_wbarrier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, uint32_t, ::System::IntPtr)>(&::System::Runtime::RuntimeImports::Memmove_wbarrier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b20ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::RuntimeImports*>(),
                                         { "Memmove_wbarrier", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::RuntimeImports::RhZeroMemory(::by_ref<uint8_t> b, uint64_t byteLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::RuntimeImports*>(), { "RhZeroMemory", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, b, byteLength);
}
inline void System::Runtime::RuntimeImports::ZeroMemory(void* p, uint32_t byteLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::RuntimeImports*>(), { "ZeroMemory", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, byteLength);
}
inline void System::Runtime::RuntimeImports::Memmove(uint8_t* dest, uint8_t* src, uint32_t len) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::RuntimeImports*>(),
                                                                                         { "Memmove", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, len);
}
inline void System::Runtime::RuntimeImports::Memmove_wbarrier(uint8_t* dest, uint8_t* src, uint32_t len, ::System::IntPtr type_handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::RuntimeImports*>(),
                                              { "Memmove_wbarrier", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, len, type_handle);
}
// Ctor Parameters []
constexpr ::System::Runtime::RuntimeImports::RuntimeImports() {}
