#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_LoadBufferVolume.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolume_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailProperties_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolumeLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeScatterTrees_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferVolume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferVolume::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferVolume::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3a61e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolume*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__tileIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__tileIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileIndex;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__tileIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__splatLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____splatLayers;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>* const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__splatLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____splatLayers;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__splatLayers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____splatLayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__heightMapWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMapWidth;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__heightMapWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMapWidth;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__heightMapWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightMapWidth = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__heightMapHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMapHeight;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__heightMapHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMapHeight;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__heightMapHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightMapHeight = value;
}
constexpr ::System::Object*& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__heightMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMap;
}
constexpr ::System::Object* const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__heightMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMap;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__heightMap(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____heightMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__splatMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____splatMaps;
}
constexpr ::System::Object* const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__splatMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____splatMaps;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__splatMaps(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____splatMaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__terrainSizeX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainSizeX;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__terrainSizeX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainSizeX;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__terrainSizeX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terrainSizeX = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__terrainSizeY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainSizeY;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__terrainSizeY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainSizeY;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__terrainSizeY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terrainSizeY = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__heightRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightRange;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__heightRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightRange;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__heightRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightRange = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__terrainDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainDataPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__terrainDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainDataPath;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__terrainDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainDataPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__terrainDataExportPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainDataExportPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__terrainDataExportPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainDataExportPath;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__terrainDataExportPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainDataExportPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees*& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__scatterTrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scatterTrees;
}
constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees* const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__scatterTrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scatterTrees;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__scatterTrees(::HoudiniEngineUnity::HEU_VolumeScatterTrees* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scatterTrees)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__detailPrototypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailPrototypes;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__detailPrototypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailPrototypes;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__detailPrototypes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____detailPrototypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__detailMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailMaps;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__detailMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailMaps;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__detailMaps(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____detailMaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_DetailProperties*& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__detailProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailProperties;
}
constexpr ::HoudiniEngineUnity::HEU_DetailProperties* const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__detailProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailProperties;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__detailProperties(::HoudiniEngineUnity::HEU_DetailProperties* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____detailProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__specifiedTerrainMaterialName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specifiedTerrainMaterialName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_get__specifiedTerrainMaterialName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specifiedTerrainMaterialName;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolume::__cordl_internal_set__specifiedTerrainMaterialName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specifiedTerrainMaterialName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_LoadBufferVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolume*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferVolume* HoudiniEngineUnity::HEU_LoadBufferVolume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_LoadBufferVolume*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_LoadBufferVolume::HEU_LoadBufferVolume() {}
