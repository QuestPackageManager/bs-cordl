#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayerPreset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCachePreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCachePreset::*)()>(&::HoudiniEngineUnity::HEU_VolumeCachePreset::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x214e870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__objName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__objName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objName;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__objName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__geoName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__geoName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoName;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__geoName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____geoName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__uiExpanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__uiExpanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__uiExpanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiExpanded = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__volumeLayersPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeLayersPresets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*> const&
HoudiniEngineUnity::HEU_VolumeCachePreset::__get__volumeLayersPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeLayersPresets;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__volumeLayersPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeLayersPresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__terrainDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainDataPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__terrainDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainDataPath;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__terrainDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainDataPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__tile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tile;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeCachePreset::__get__tile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tile;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCachePreset::__set__tile(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tile = value;
}
inline ::HoudiniEngineUnity::HEU_VolumeCachePreset* HoudiniEngineUnity::HEU_VolumeCachePreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VolumeCachePreset*>());
}
inline void HoudiniEngineUnity::HEU_VolumeCachePreset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_VolumeCachePreset::HEU_VolumeCachePreset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
