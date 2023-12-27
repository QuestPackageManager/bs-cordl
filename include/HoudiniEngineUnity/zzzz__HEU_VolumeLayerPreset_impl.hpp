#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayerPreset_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeLayerPreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeLayerPreset::*)()>(&::HoudiniEngineUnity::HEU_VolumeLayerPreset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214e868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____layerName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____layerName;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__set__layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____strength;
}
constexpr float_t const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____strength;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__set__strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____strength = value;
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__uiExpanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uiExpanded;
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__uiExpanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uiExpanded;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__set__uiExpanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____uiExpanded = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__tile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tile;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__get__tile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tile;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__set__tile(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____tile = value;
}
inline ::HoudiniEngineUnity::HEU_VolumeLayerPreset* HoudiniEngineUnity::HEU_VolumeLayerPreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>());
}
inline void HoudiniEngineUnity::HEU_VolumeLayerPreset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_VolumeLayerPreset::HEU_VolumeLayerPreset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
