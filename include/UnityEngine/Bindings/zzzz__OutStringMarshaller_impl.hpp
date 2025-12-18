#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/OutStringMarshaller.hpp"
#include "UnityEngine/Bindings/zzzz__OutStringMarshaller_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::OutStringMarshaller.GetStringAndDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Bindings::ManagedSpanWrapper)>(
    &::UnityEngine::Bindings::OutStringMarshaller::GetStringAndDispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x693402c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::OutStringMarshaller>::get(), "GetStringAndDispose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bindings::ManagedSpanWrapper>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Bindings::OutStringMarshaller::GetStringAndDispose(::UnityEngine::Bindings::ManagedSpanWrapper managedSpan) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::OutStringMarshaller>::get(), "GetStringAndDispose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bindings::ManagedSpanWrapper>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, managedSpan);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::OutStringMarshaller::OutStringMarshaller() {}
