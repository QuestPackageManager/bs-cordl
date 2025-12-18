#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/ManagedSpanWrapper.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::ManagedSpanWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::ManagedSpanWrapper::*)(void*, int32_t)>(
    &::UnityEngine::Bindings::ManagedSpanWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69293b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ManagedSpanWrapper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::ManagedSpanWrapper::_ctor(void* begin, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::ManagedSpanWrapper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, begin, length);
}
// Ctor Parameters [CppParam { name: "begin", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::ManagedSpanWrapper::ManagedSpanWrapper(void* begin, int32_t length) noexcept {
  this->begin = begin;
  this->length = length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::ManagedSpanWrapper::ManagedSpanWrapper() {}
