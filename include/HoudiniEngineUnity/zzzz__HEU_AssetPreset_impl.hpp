#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetPreset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetPreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetPreset::*)()>(&::HoudiniEngineUnity::HEU_AssetPreset::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3a061b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPreset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr void HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_set__identifier(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__assetOPName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetOPName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__assetOPName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetOPName;
}
constexpr void HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_set__assetOPName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetOPName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__parameterPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterPreset;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__parameterPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterPreset;
}
constexpr void HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_set__parameterPreset(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameterPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__curveNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__curveNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveNames;
}
constexpr void HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_set__curveNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curveNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__curvePresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvePresets;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* const& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get__curvePresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvePresets;
}
constexpr void HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_set__curvePresets(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curvePresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get_inputPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputPresets;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* const& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get_inputPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputPresets;
}
constexpr void HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_set_inputPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputPresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get_volumeCachePresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeCachePresets;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* const& HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_get_volumeCachePresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeCachePresets;
}
constexpr void HoudiniEngineUnity::HEU_AssetPreset::__cordl_internal_set_volumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___volumeCachePresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_AssetPreset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPreset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AssetPreset* HoudiniEngineUnity::HEU_AssetPreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_AssetPreset*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AssetPreset::HEU_AssetPreset() {}
