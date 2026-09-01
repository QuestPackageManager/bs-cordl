#pragma once
// IWYU pragma private; include "Meta\XR\Samples\MetaCodeSampleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Meta/XR/Samples/zzzz__MetaCodeSampleAttribute_def.hpp"
//  Writing Method size for method: ::Meta::XR::Samples::MetaCodeSampleAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Samples::MetaCodeSampleAttribute::*)(::StringW)>(&::Meta::XR::Samples::MetaCodeSampleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e508f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::MetaCodeSampleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::MetaCodeSampleAttribute.get_SampleName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::Samples::MetaCodeSampleAttribute::*)()>(&::Meta::XR::Samples::MetaCodeSampleAttribute::get_SampleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e508f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::MetaCodeSampleAttribute*>(), { "get_SampleName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::MetaCodeSampleAttribute.set_SampleName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Samples::MetaCodeSampleAttribute::*)(::StringW)>(&::Meta::XR::Samples::MetaCodeSampleAttribute::set_SampleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e50900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::MetaCodeSampleAttribute*>(), { "set_SampleName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::Samples::MetaCodeSampleAttribute::__cordl_internal_get__SampleName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SampleName_k__BackingField;
}
constexpr ::StringW const& Meta::XR::Samples::MetaCodeSampleAttribute::__cordl_internal_get__SampleName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SampleName_k__BackingField;
}
constexpr void Meta::XR::Samples::MetaCodeSampleAttribute::__cordl_internal_set__SampleName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SampleName_k__BackingField = value;
}
inline void Meta::XR::Samples::MetaCodeSampleAttribute::_ctor(::StringW sampleName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::MetaCodeSampleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleName);
}
inline ::StringW Meta::XR::Samples::MetaCodeSampleAttribute::get_SampleName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::MetaCodeSampleAttribute*>(), { "get_SampleName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::Samples::MetaCodeSampleAttribute::set_SampleName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::MetaCodeSampleAttribute*>(), { "set_SampleName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::Samples::MetaCodeSampleAttribute* Meta::XR::Samples::MetaCodeSampleAttribute::New_ctor(::StringW sampleName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::Samples::MetaCodeSampleAttribute*>(sampleName));
}
// Ctor Parameters []
constexpr ::Meta::XR::Samples::MetaCodeSampleAttribute::MetaCodeSampleAttribute() {}
