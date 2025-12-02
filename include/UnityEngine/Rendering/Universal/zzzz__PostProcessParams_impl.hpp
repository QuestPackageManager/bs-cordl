#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessParams.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessParams_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessParams.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::PostProcessParams (*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessParams::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668b174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessParams>::get(),
                                                                               "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::PostProcessParams UnityEngine::Rendering::Universal::PostProcessParams::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PostProcessParams>::get(),
                                                                             "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PostProcessParams, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "blitMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestColorFormat", ty:
// "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessParams::PostProcessParams(::UnityW<::UnityEngine::Material> blitMaterial,
                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat requestColorFormat) noexcept {
  this->blitMaterial = blitMaterial;
  this->requestColorFormat = requestColorFormat;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessParams::PostProcessParams() {}
