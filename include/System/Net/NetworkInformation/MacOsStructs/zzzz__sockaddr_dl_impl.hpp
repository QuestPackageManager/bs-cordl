#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsStructs/sockaddr_dl.hpp"
#include "System/Net/NetworkInformation/MacOsStructs/zzzz__sockaddr_dl_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::*)(::System::IntPtr)>(
    &::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::Read)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x63510b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl>(), { "Read", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::Read(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl>(), { "Read", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
// Ctor Parameters [CppParam { name: "sdl_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sdl_index", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_type", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_nlen", ty:
// "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_alen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_slen", ty: "uint8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "sdl_data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::sockaddr_dl(uint8_t sdl_len, uint8_t sdl_family, uint16_t sdl_index, uint8_t sdl_type, uint8_t sdl_nlen, uint8_t sdl_alen,
                                                                                    uint8_t sdl_slen, ::ArrayW<uint8_t> sdl_data) noexcept {
  this->sdl_len = sdl_len;
  this->sdl_family = sdl_family;
  this->sdl_index = sdl_index;
  this->sdl_type = sdl_type;
  this->sdl_nlen = sdl_nlen;
  this->sdl_alen = sdl_alen;
  this->sdl_slen = sdl_slen;
  this->sdl_data = sdl_data;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl::sockaddr_dl() {}
