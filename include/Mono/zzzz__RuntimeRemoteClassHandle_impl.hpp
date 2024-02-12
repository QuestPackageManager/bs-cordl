#pragma once
#include "Mono/zzzz__RuntimeRemoteClassHandle_def.hpp"
#include "Mono/zzzz__RuntimeClassHandle_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeRemoteClassHandle.get_ProxyClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::RuntimeClassHandle (::Mono::RuntimeRemoteClassHandle::*)()>(
    &::Mono::RuntimeRemoteClassHandle::get_ProxyClass)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24324bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeRemoteClassHandle>::get(), "get_ProxyClass",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Mono::RuntimeClassHandle Mono::RuntimeRemoteClassHandle::get_ProxyClass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeRemoteClassHandle>::get(), "get_ProxyClass",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::RuntimeClassHandle, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Mono::RuntimeRemoteClassHandle::RuntimeRemoteClassHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass> value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeRemoteClassHandle::RuntimeRemoteClassHandle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
