#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "TMPro/zzzz__VertexGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::TMPro::VertexGradient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::VertexGradient::*)(::UnityEngine::Color)>(&::TMPro::VertexGradient::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bfd8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::VertexGradient>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::VertexGradient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::TMPro::VertexGradient::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::TMPro::VertexGradient::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2bfd8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::VertexGradient>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::VertexGradient::_ctor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::VertexGradient>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void TMPro::VertexGradient::_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::VertexGradient>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color0, color1, color2, color3);
}
// Ctor Parameters [CppParam { name: "topLeft", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRight", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "bottomLeft", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRight", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }]
constexpr ::TMPro::VertexGradient::VertexGradient(::UnityEngine::Color topLeft, ::UnityEngine::Color topRight, ::UnityEngine::Color bottomLeft, ::UnityEngine::Color bottomRight) noexcept {
  this->topLeft = topLeft;
  this->topRight = topRight;
  this->bottomLeft = bottomLeft;
  this->bottomRight = bottomRight;
}
// Ctor Parameters []
constexpr ::TMPro::VertexGradient::VertexGradient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
