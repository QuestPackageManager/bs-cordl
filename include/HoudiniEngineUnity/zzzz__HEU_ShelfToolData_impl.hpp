#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::__HEU_ShelfToolData__ToolType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::__HEU_ShelfToolData__ToolType() {}
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::GENERATOR{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::OPERATOR_SINGLE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::OPERATOR_MULTI{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType HoudiniEngineUnity::__HEU_ShelfToolData__ToolType::BATCH{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ShelfToolData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ShelfToolData::*)()>(&::HoudiniEngineUnity::HEU_ShelfToolData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21d069c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ShelfToolData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____name;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____name;
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType& HoudiniEngineUnity::HEU_ShelfToolData::__get__toolType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____toolType;
}
constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const& HoudiniEngineUnity::HEU_ShelfToolData::__get__toolType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____toolType;
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__toolType(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____toolType = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__toolTip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____toolTip;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__toolTip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____toolTip;
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__toolTip(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toolTip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__iconPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____iconPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__iconPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____iconPath;
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__iconPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____iconPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__assetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____assetPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__assetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____assetPath;
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__assetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__helpURL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____helpURL;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__helpURL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____helpURL;
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__helpURL(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helpURL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_ShelfToolData::__get__targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targets;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_ShelfToolData::__get__targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targets;
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__targets(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ShelfToolData::__get__jsonPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____jsonPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ShelfToolData::__get__jsonPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____jsonPath;
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__jsonPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____jsonPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_ShelfToolData* HoudiniEngineUnity::HEU_ShelfToolData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_ShelfToolData*>());
}
inline void HoudiniEngineUnity::HEU_ShelfToolData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ShelfToolData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_ShelfToolData::HEU_ShelfToolData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
