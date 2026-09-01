#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MeshWriteData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MeshWriteData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshWriteData::*)()>(&::UnityEngine::UIElements::MeshWriteData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dd4ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshWriteData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& UnityEngine::UIElements::MeshWriteData::__cordl_internal_get_m_Vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& UnityEngine::UIElements::MeshWriteData::__cordl_internal_get_m_Vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr void UnityEngine::UIElements::MeshWriteData::__cordl_internal_set_m_Vertices(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Vertices = value;
}
constexpr ::Unity::Collections::NativeSlice_1<uint16_t>& UnityEngine::UIElements::MeshWriteData::__cordl_internal_get_m_Indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indices;
}
constexpr ::Unity::Collections::NativeSlice_1<uint16_t> const& UnityEngine::UIElements::MeshWriteData::__cordl_internal_get_m_Indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indices;
}
constexpr void UnityEngine::UIElements::MeshWriteData::__cordl_internal_set_m_Indices(::Unity::Collections::NativeSlice_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Indices = value;
}
constexpr int32_t& UnityEngine::UIElements::MeshWriteData::__cordl_internal_get_currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr int32_t const& UnityEngine::UIElements::MeshWriteData::__cordl_internal_get_currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentIndex;
}
constexpr void UnityEngine::UIElements::MeshWriteData::__cordl_internal_set_currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentIndex = value;
}
constexpr int32_t& UnityEngine::UIElements::MeshWriteData::__cordl_internal_get_currentVertex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentVertex;
}
constexpr int32_t const& UnityEngine::UIElements::MeshWriteData::__cordl_internal_get_currentVertex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentVertex;
}
constexpr void UnityEngine::UIElements::MeshWriteData::__cordl_internal_set_currentVertex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentVertex = value;
}
inline void UnityEngine::UIElements::MeshWriteData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshWriteData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MeshWriteData* UnityEngine::UIElements::MeshWriteData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MeshWriteData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshWriteData::MeshWriteData() {}
