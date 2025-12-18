#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshWriteData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MeshWriteData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MeshWriteData::*)()>(&::UnityEngine::UIElements::MeshWriteData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c09634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshWriteData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshWriteData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MeshWriteData* UnityEngine::UIElements::MeshWriteData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::MeshWriteData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshWriteData::MeshWriteData() {}
