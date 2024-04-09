#pragma once
#include "UnityEngine/zzzz__GradientAlphaKey_def.hpp"
//  Writing Method size for method: ::UnityEngine::GradientAlphaKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GradientAlphaKey::*)(float_t, float_t)>(&::UnityEngine::GradientAlphaKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3212434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GradientAlphaKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::GradientAlphaKey::_ctor(float_t alpha, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GradientAlphaKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alpha, time);
}
// Ctor Parameters [CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GradientAlphaKey::GradientAlphaKey(float_t alpha, float_t time) noexcept {
  this->alpha = alpha;
  this->time = time;
}
// Ctor Parameters []
constexpr ::UnityEngine::GradientAlphaKey::GradientAlphaKey() {}
