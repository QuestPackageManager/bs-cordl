#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/Cookie.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Cookie.Defaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::GlobalIllumination::Cookie (*)()>(
    &::UnityEngine::Experimental::GlobalIllumination::Cookie::Defaults)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68fae24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Cookie>::get(),
                                                                               "Defaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Experimental::GlobalIllumination::Cookie UnityEngine::Experimental::GlobalIllumination::Cookie::Defaults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::GlobalIllumination::Cookie>::get(),
                                                                             "Defaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::GlobalIllumination::Cookie, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sizes", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::Cookie::Cookie(int32_t instanceID, float_t scale, ::UnityEngine::Vector2 sizes) noexcept {
  this->instanceID = instanceID;
  this->scale = scale;
  this->sizes = sizes;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::Cookie::Cookie() {}
