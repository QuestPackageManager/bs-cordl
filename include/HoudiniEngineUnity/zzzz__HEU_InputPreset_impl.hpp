#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputAssetPreset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputPreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputPreset::*)()>(&::HoudiniEngineUnity::HEU_InputPreset::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x214e6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputPreset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& HoudiniEngineUnity::HEU_InputPreset::__get__inputObjectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjectType;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& HoudiniEngineUnity::HEU_InputPreset::__get__inputObjectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjectType;
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputObjectType = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>*& HoudiniEngineUnity::HEU_InputPreset::__get__inputObjectPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjectPresets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>*> const&
HoudiniEngineUnity::HEU_InputPreset::__get__inputObjectPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjectPresets;
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputObjectPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputObjectPresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputPreset::__get__inputAssetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputAssetName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputPreset::__get__inputAssetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputAssetName;
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputAssetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputAssetName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputPreset::__get__inputIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputPreset::__get__inputIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputIndex;
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputIndex = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputPreset::__get__inputName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputPreset::__get__inputName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputName;
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_InputPreset::__get__keepWorldTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keepWorldTransform;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputPreset::__get__keepWorldTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keepWorldTransform;
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__keepWorldTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keepWorldTransform = value;
}
constexpr bool& HoudiniEngineUnity::HEU_InputPreset::__get__packGeometryBeforeMerging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packGeometryBeforeMerging;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputPreset::__get__packGeometryBeforeMerging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packGeometryBeforeMerging;
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__packGeometryBeforeMerging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packGeometryBeforeMerging = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*& HoudiniEngineUnity::HEU_InputPreset::__get__inputAssetPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputAssetPresets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*> const&
HoudiniEngineUnity::HEU_InputPreset::__get__inputAssetPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputAssetPresets;
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputAssetPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputAssetPresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_InputPreset* HoudiniEngineUnity::HEU_InputPreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputPreset*>());
}
inline void HoudiniEngineUnity::HEU_InputPreset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputPreset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputPreset::HEU_InputPreset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
