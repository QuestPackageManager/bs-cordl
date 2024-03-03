#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_OutputAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_OutputAttribute::*)()>(&::HoudiniEngineUnity::HEU_OutputAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e5924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__class() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____class;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner const& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__class() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____class;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_set__class(::HoudiniEngineUnity::HAPI_AttributeOwner value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____class = value;
}
constexpr ::HoudiniEngineUnity::HAPI_StorageType& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::HoudiniEngineUnity::HAPI_StorageType const& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_set__type(::HoudiniEngineUnity::HAPI_StorageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__tupleSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tupleSize;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__tupleSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tupleSize;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_set__tupleSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tupleSize = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__intValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__intValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intValues;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_set__intValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__floatValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValues;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__floatValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValues;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_set__floatValues(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__stringValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringValues;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_get__stringValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringValues;
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__cordl_internal_set__stringValues(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_OutputAttribute* HoudiniEngineUnity::HEU_OutputAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_OutputAttribute*>());
}
inline void HoudiniEngineUnity::HEU_OutputAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_OutputAttribute::HEU_OutputAttribute() {}
