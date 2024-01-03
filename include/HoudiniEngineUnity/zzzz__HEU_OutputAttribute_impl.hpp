#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_OutputAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_OutputAttribute::*)()>(&::HoudiniEngineUnity::HEU_OutputAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21839d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_OutputAttribute::__get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_OutputAttribute::__get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner& HoudiniEngineUnity::HEU_OutputAttribute::__get__class() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____class;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner const& HoudiniEngineUnity::HEU_OutputAttribute::__get__class() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____class;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__class(::HoudiniEngineUnity::HAPI_AttributeOwner value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____class = value;
}
constexpr ::HoudiniEngineUnity::HAPI_StorageType& HoudiniEngineUnity::HEU_OutputAttribute::__get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::HoudiniEngineUnity::HAPI_StorageType const& HoudiniEngineUnity::HEU_OutputAttribute::__get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__type(::HoudiniEngineUnity::HAPI_StorageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_OutputAttribute::__get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_OutputAttribute::__get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_OutputAttribute::__get__tupleSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tupleSize;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_OutputAttribute::__get__tupleSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tupleSize;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__tupleSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tupleSize = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_OutputAttribute::__get__intValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__get__intValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intValues;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__intValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_OutputAttribute::__get__floatValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValues;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__get__floatValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValues;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__floatValues(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_OutputAttribute::__get__stringValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringValues;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__get__stringValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringValues;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__stringValues(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_OutputAttribute* HoudiniEngineUnity::HEU_OutputAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_OutputAttribute*>());
}
inline void HoudiniEngineUnity::HEU_OutputAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_OutputAttribute::HEU_OutputAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
