#pragma once
// IWYU pragma private; include "BeatSaber\InspectorName\InspectorLabelAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BeatSaber/InspectorName/zzzz__InspectorLabelAttribute_def.hpp"
//  Writing Method size for method: ::BeatSaber::InspectorName::InspectorLabelAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::InspectorName::InspectorLabelAttribute::*)(::StringW)>(&::BeatSaber::InspectorName::InspectorLabelAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33280c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::InspectorName::InspectorLabelAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::InspectorName::InspectorLabelAttribute::__cordl_internal_get_CustomLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomLabel;
}
constexpr ::StringW const& BeatSaber::InspectorName::InspectorLabelAttribute::__cordl_internal_get_CustomLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomLabel;
}
constexpr void BeatSaber::InspectorName::InspectorLabelAttribute::__cordl_internal_set_CustomLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CustomLabel = value;
}
inline void BeatSaber::InspectorName::InspectorLabelAttribute::_ctor(::StringW customLabel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::InspectorName::InspectorLabelAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customLabel);
}
inline ::BeatSaber::InspectorName::InspectorLabelAttribute* BeatSaber::InspectorName::InspectorLabelAttribute::New_ctor(::StringW customLabel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::InspectorName::InspectorLabelAttribute*>(customLabel));
}
// Ctor Parameters []
constexpr ::BeatSaber::InspectorName::InspectorLabelAttribute::InspectorLabelAttribute() {}
