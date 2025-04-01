#pragma once
// IWYU pragma private; include "System/Net/IPAddress_ReadOnlyIPAddress.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/Net/zzzz__IPAddress_ReadOnlyIPAddress_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IPAddress_ReadOnlyIPAddress._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPAddress_ReadOnlyIPAddress::*)(int64_t)>(
    &::GlobalNamespace::IPAddress_ReadOnlyIPAddress::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x44897d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPAddress_ReadOnlyIPAddress*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IPAddress_ReadOnlyIPAddress::_ctor(int64_t newAddress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPAddress_ReadOnlyIPAddress*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAddress);
}
inline ::GlobalNamespace::IPAddress_ReadOnlyIPAddress* GlobalNamespace::IPAddress_ReadOnlyIPAddress::New_ctor(int64_t newAddress) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::IPAddress_ReadOnlyIPAddress*>(newAddress));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IPAddress_ReadOnlyIPAddress::IPAddress_ReadOnlyIPAddress() {}
