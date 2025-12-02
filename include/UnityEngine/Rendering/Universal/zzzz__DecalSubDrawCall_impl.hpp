#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalSubDrawCall.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalSubDrawCall.get_count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalSubDrawCall::*)()>(
    &::UnityEngine::Rendering::Universal::DecalSubDrawCall::get_count)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6639ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalSubDrawCall>::get(),
                                                                               "get_count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::Universal::DecalSubDrawCall::get_count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalSubDrawCall>::get(),
                                                                             "get_count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalSubDrawCall::DecalSubDrawCall(int32_t start, int32_t end) noexcept {
  this->start = start;
  this->end = end;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalSubDrawCall::DecalSubDrawCall() {}
