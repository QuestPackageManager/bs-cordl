#pragma once
// IWYU pragma private; include "Meta\XR\Util\FeatureAttribute.hpp"
#include "Meta/XR/Util/zzzz__Feature_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Meta/XR/Util/zzzz__FeatureAttribute_def.hpp"
#include "Meta/XR/Util/zzzz__Feature_def.hpp"
//  Writing Method size for method: ::Meta::XR::Util::FeatureAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Util::FeatureAttribute::*)(::Meta::XR::Util::Feature)>(&::Meta::XR::Util::FeatureAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e50d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Util::FeatureAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::Meta::XR::Util::Feature>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Util::FeatureAttribute.get_Feature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::Util::Feature (::Meta::XR::Util::FeatureAttribute::*)()>(&::Meta::XR::Util::FeatureAttribute::get_Feature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e50d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Util::FeatureAttribute*>(), { "get_Feature", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::Util::Feature& Meta::XR::Util::FeatureAttribute::__cordl_internal_get__Feature_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Feature_k__BackingField;
}
constexpr ::Meta::XR::Util::Feature const& Meta::XR::Util::FeatureAttribute::__cordl_internal_get__Feature_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Feature_k__BackingField;
}
constexpr void Meta::XR::Util::FeatureAttribute::__cordl_internal_set__Feature_k__BackingField(::Meta::XR::Util::Feature value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Feature_k__BackingField = value;
}
inline void Meta::XR::Util::FeatureAttribute::_ctor(::Meta::XR::Util::Feature feature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Util::FeatureAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::Meta::XR::Util::Feature>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature);
}
inline ::Meta::XR::Util::Feature Meta::XR::Util::FeatureAttribute::get_Feature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Util::FeatureAttribute*>(), { "get_Feature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::Util::Feature>(this, ___internal_method);
}
inline ::Meta::XR::Util::FeatureAttribute* Meta::XR::Util::FeatureAttribute::New_ctor(::Meta::XR::Util::Feature feature) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::Util::FeatureAttribute*>(feature));
}
// Ctor Parameters []
constexpr ::Meta::XR::Util::FeatureAttribute::FeatureAttribute() {}
