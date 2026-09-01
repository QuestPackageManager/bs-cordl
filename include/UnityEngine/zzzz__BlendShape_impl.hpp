#pragma once
// IWYU pragma private; include "UnityEngine\BlendShape.hpp"
#include "UnityEngine/zzzz__BlendShape_def.hpp"
//  Writing Method size for method: ::UnityEngine::BlendShape.get_firstVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::BlendShape::*)()>(&::UnityEngine::BlendShape::get_firstVertex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ab19a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BlendShape>(), { "get_firstVertex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BlendShape.get_vertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::BlendShape::*)()>(&::UnityEngine::BlendShape::get_vertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ab19b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BlendShape>(), { "get_vertexCount", {}, {} })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::BlendShape::get_firstVertex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BlendShape>(), { "get_firstVertex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::BlendShape::get_vertexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BlendShape>(), { "get_vertexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_FirstVertex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_VertexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_HasNormals", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HasTangents", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::BlendShape::BlendShape(uint32_t m_FirstVertex, uint32_t m_VertexCount, bool m_HasNormals, bool m_HasTangents) noexcept {
  this->m_FirstVertex = m_FirstVertex;
  this->m_VertexCount = m_VertexCount;
  this->m_HasNormals = m_HasNormals;
  this->m_HasTangents = m_HasTangents;
}
// Ctor Parameters []
constexpr ::UnityEngine::BlendShape::BlendShape() {}
