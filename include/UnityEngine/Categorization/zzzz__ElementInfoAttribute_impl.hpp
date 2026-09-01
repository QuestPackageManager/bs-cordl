#pragma once
// IWYU pragma private; include "UnityEngine\Categorization\ElementInfoAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Categorization/zzzz__ElementInfoAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Categorization::ElementInfoAttribute.set_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Categorization::ElementInfoAttribute::*)(int32_t)>(&::UnityEngine::Categorization::ElementInfoAttribute::set_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afedac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Categorization::ElementInfoAttribute*>(), { "set_Order", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Categorization::ElementInfoAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Categorization::ElementInfoAttribute::*)()>(&::UnityEngine::Categorization::ElementInfoAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6afedb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Categorization::ElementInfoAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Categorization::ElementInfoAttribute::__cordl_internal_get__Order_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Order_k__BackingField;
}
constexpr int32_t const& UnityEngine::Categorization::ElementInfoAttribute::__cordl_internal_get__Order_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Order_k__BackingField;
}
constexpr void UnityEngine::Categorization::ElementInfoAttribute::__cordl_internal_set__Order_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Order_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Categorization::ElementInfoAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Categorization::ElementInfoAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::Categorization::ElementInfoAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
inline void UnityEngine::Categorization::ElementInfoAttribute::set_Order(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Categorization::ElementInfoAttribute*>(), { "set_Order", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Categorization::ElementInfoAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Categorization::ElementInfoAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Categorization::ElementInfoAttribute* UnityEngine::Categorization::ElementInfoAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Categorization::ElementInfoAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Categorization::ElementInfoAttribute::ElementInfoAttribute() {}
