#pragma once
// IWYU pragma private; include "TMPro\TMP_Vertex.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "TMPro/zzzz__TMP_Vertex_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Vertex.get_zero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Vertex (*)()>(&::TMPro::TMP_Vertex::get_zero)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x694a018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Vertex>(), { "get_zero", {}, {} })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_Vertex::setStaticF_k_Zero(::TMPro::TMP_Vertex value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_Vertex, "k_Zero", ::TMPro::TMP_Vertex>(std::forward<::TMPro::TMP_Vertex>(value));
}
inline ::TMPro::TMP_Vertex TMPro::TMP_Vertex::getStaticF_k_Zero() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_Vertex, "k_Zero", ::TMPro::TMP_Vertex>();
}
inline ::TMPro::TMP_Vertex TMPro::TMP_Vertex::get_zero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Vertex>(), { "get_zero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Vertex>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::TMP_Vertex::TMP_Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector4 uv, ::UnityEngine::Vector2 uv2, ::UnityEngine::Color32 color) noexcept {
  this->position = position;
  this->uv = uv;
  this->uv2 = uv2;
  this->color = color;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Vertex::TMP_Vertex() {}
