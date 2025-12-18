#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/sockaddr_dl.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__sockaddr_dl_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::AixStructs::sockaddr_dl.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::AixStructs::sockaddr_dl::*)(::System::IntPtr)>(
    &::System::Net::NetworkInformation::AixStructs::sockaddr_dl::Read)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x619f69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixStructs::sockaddr_dl>::get(), "Read",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::AixStructs::sockaddr_dl::Read(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixStructs::sockaddr_dl>::get(), "Read",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
// Ctor Parameters [CppParam { name: "sdl_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sdl_index", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_type", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_nlen", ty:
// "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_alen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sdl_slen", ty: "uint8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "sdl_data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr_dl::sockaddr_dl(uint8_t sdl_len, uint8_t sdl_family, uint16_t sdl_index, uint8_t sdl_type, uint8_t sdl_nlen, uint8_t sdl_alen,
                                                                                  uint8_t sdl_slen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sdl_data) noexcept {
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
constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr_dl::sockaddr_dl() {}
