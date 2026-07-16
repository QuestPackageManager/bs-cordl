#pragma once
// IWYU pragma private; include "Microsoft/Win32/Win32Native.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Microsoft/Win32/zzzz__Win32Native_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::Win32Native.GetMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::Microsoft::Win32::Win32Native::GetMessage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ac4eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::Win32Native*>(), { "GetMessage", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::Win32Native.MakeHRFromErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Microsoft::Win32::Win32Native::MakeHRFromErrorCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ac4f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::Win32Native*>(), { "MakeHRFromErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::StringW Microsoft::Win32::Win32Native::GetMessage(int32_t hr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::Win32Native*>(), { "GetMessage", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hr);
}
inline int32_t Microsoft::Win32::Win32Native::MakeHRFromErrorCode(int32_t errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::Win32Native*>(), { "MakeHRFromErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, errorCode);
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::Win32Native::Win32Native() {}
