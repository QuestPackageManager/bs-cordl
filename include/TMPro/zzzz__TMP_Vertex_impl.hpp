#pragma once
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "TMPro/zzzz__TMP_Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Vertex.get_zero
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Vertex (*)()>(&::TMPro::TMP_Vertex::get_zero)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ce8440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Vertex>::get(), "get_zero",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void TMPro::TMP_Vertex::setStaticF_k_Zero(::TMPro::TMP_Vertex value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_Vertex, "k_Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Vertex>::get>(std::forward<::TMPro::TMP_Vertex>(value));
}
inline ::TMPro::TMP_Vertex TMPro::TMP_Vertex::getStaticF_k_Zero() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_Vertex, "k_Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Vertex>::get>();
}
inline ::TMPro::TMP_Vertex TMPro::TMP_Vertex::get_zero() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Vertex>::get(), "get_zero",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Vertex, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_Vertex::TMP_Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector2 uv, ::UnityEngine::Vector2 uv2, ::UnityEngine::Vector2 uv4, ::UnityEngine::Color32 color) noexcept {
  this->position = position;
  this->uv = uv;
  this->uv2 = uv2;
  this->uv4 = uv4;
  this->color = color;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Vertex::TMP_Vertex() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
