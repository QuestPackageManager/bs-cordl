#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_VolumeLayerPreset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayerPreset_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeLayerPreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeLayerPreset::*)()>(&::HoudiniEngineUnity::HEU_VolumeLayerPreset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a060e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_get__layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_get__layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerName;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_set__layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_get__strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr float_t const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_get__strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_set__strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strength = value;
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_get__uiExpanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_get__uiExpanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_set__uiExpanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiExpanded = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_get__tile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tile;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_get__tile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tile;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayerPreset::__cordl_internal_set__tile(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tile = value;
}
inline void HoudiniEngineUnity::HEU_VolumeLayerPreset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_VolumeLayerPreset* HoudiniEngineUnity::HEU_VolumeLayerPreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_VolumeLayerPreset::HEU_VolumeLayerPreset() {}
