#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AttributeData.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType::HEU_AttributeData_AttributeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType::HEU_AttributeData_AttributeType() {}
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType HoudiniEngineUnity::HEU_AttributeData_AttributeType::UNDEFINED{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType HoudiniEngineUnity::HEU_AttributeData_AttributeType::BOOL{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType HoudiniEngineUnity::HEU_AttributeData_AttributeType::INT{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType HoudiniEngineUnity::HEU_AttributeData_AttributeType::FLOAT{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType HoudiniEngineUnity::HEU_AttributeData_AttributeType::STRING{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType HoudiniEngineUnity::HEU_AttributeData_AttributeType::MAX{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState::HEU_AttributeData_AttributeState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState::HEU_AttributeData_AttributeState() {}
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState HoudiniEngineUnity::HEU_AttributeData_AttributeState::INVALID{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState HoudiniEngineUnity::HEU_AttributeData_AttributeState::SYNCED{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState HoudiniEngineUnity::HEU_AttributeData_AttributeState::LOCAL_DIRTY{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributeData.IsColorAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributeData::*)()>(&::HoudiniEngineUnity::HEU_AttributeData::IsColorAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3a35ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                                                               "IsColorAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributeData.CopyValuesTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributeData::*)(::HoudiniEngineUnity::HEU_AttributeData*)>(
    &::HoudiniEngineUnity::HEU_AttributeData::CopyValuesTo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3a35f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(), "CopyValuesTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributeData.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributeData::*)(::HoudiniEngineUnity::HEU_AttributeData*)>(
    &::HoudiniEngineUnity::HEU_AttributeData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x3a36034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributeData::*)()>(&::HoudiniEngineUnity::HEU_AttributeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3635c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__attributeInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__attributeInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeInfo;
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_set__attributeInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributeInfo = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__attributeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeType;
}
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType const& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__attributeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeType;
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_set__attributeType(::HoudiniEngineUnity::HEU_AttributeData_AttributeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributeType = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__intValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__intValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intValues;
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_set__intValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__floatValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValues;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__floatValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValues;
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_set__floatValues(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__stringValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringValues;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__stringValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringValues;
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_set__stringValues(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__attributeState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeState;
}
constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState const& HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_get__attributeState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeState;
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__cordl_internal_set__attributeState(::HoudiniEngineUnity::HEU_AttributeData_AttributeState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributeState = value;
}
inline bool HoudiniEngineUnity::HEU_AttributeData::IsColorAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                                                             "IsColorAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributeData::CopyValuesTo(::HoudiniEngineUnity::HEU_AttributeData* destAttrData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(), "CopyValuesTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destAttrData);
}
inline bool HoudiniEngineUnity::HEU_AttributeData::IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributeData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void HoudiniEngineUnity::HEU_AttributeData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributeData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AttributeData* HoudiniEngineUnity::HEU_AttributeData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_AttributeData*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>"
constexpr HoudiniEngineUnity::HEU_AttributeData::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*
HoudiniEngineUnity::HEU_AttributeData::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_AttributeData__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AttributeData::HEU_AttributeData() {}
