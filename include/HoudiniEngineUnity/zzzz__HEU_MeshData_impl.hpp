#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_MeshData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MeshData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MeshData::*)()>(&::HoudiniEngineUnity::HEU_MeshData::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3a7fc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indices;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__indices(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertices;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertices;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>*& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>* const& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__normals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normals;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__normals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normals;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__tangents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tangents;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__tangents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tangents;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__tangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tangents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>&
HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__uvs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uvs;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*> const&
HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__uvs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uvs;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__uvs(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uvs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__triangleNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleNormals;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__triangleNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangleNormals;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__triangleNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____triangleNormals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__pointIndexToMeshIndexMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointIndexToMeshIndexMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__pointIndexToMeshIndexMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointIndexToMeshIndexMap;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__pointIndexToMeshIndexMap(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointIndexToMeshIndexMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshTopology& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__meshTopology() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshTopology;
}
constexpr ::UnityEngine::MeshTopology const& HoudiniEngineUnity::HEU_MeshData::__cordl_internal_get__meshTopology() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshTopology;
}
constexpr void HoudiniEngineUnity::HEU_MeshData::__cordl_internal_set__meshTopology(::UnityEngine::MeshTopology value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshTopology = value;
}
inline void HoudiniEngineUnity::HEU_MeshData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_MeshData* HoudiniEngineUnity::HEU_MeshData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_MeshData*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_MeshData::HEU_MeshData() {}
