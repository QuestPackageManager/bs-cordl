#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferMesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferMesh::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236f930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferMesh*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HEU_GenerateGeoCache*& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__geoCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoCache;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GenerateGeoCache*> const& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__geoCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoCache;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_set__geoCache(::HoudiniEngineUnity::HEU_GenerateGeoCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____geoCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__LODGroupMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LODGroupMeshes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> const&
HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__LODGroupMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LODGroupMeshes;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_set__LODGroupMeshes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LODGroupMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__defaultMaterialKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMaterialKey;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__defaultMaterialKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMaterialKey;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_set__defaultMaterialKey(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultMaterialKey = value;
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__bGenerateUVs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bGenerateUVs;
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__bGenerateUVs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bGenerateUVs;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_set__bGenerateUVs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bGenerateUVs = value;
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__bGenerateTangents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bGenerateTangents;
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__bGenerateTangents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bGenerateTangents;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_set__bGenerateTangents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bGenerateTangents = value;
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__bGenerateNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bGenerateNormals;
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__bGenerateNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bGenerateNormals;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_set__bGenerateNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bGenerateNormals = value;
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__bPartInstanced() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bPartInstanced;
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_get__bPartInstanced() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bPartInstanced;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__cordl_internal_set__bPartInstanced(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bPartInstanced = value;
}
inline ::HoudiniEngineUnity::HEU_LoadBufferMesh* HoudiniEngineUnity::HEU_LoadBufferMesh::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_LoadBufferMesh*>());
}
inline void HoudiniEngineUnity::HEU_LoadBufferMesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferMesh*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_LoadBufferMesh::HEU_LoadBufferMesh() {}
