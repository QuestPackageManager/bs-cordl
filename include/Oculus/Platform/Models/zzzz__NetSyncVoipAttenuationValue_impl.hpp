#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\NetSyncVoipAttenuationValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValue_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncVoipAttenuationValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::NetSyncVoipAttenuationValue::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::NetSyncVoipAttenuationValue::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5df12f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncVoipAttenuationValue*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Platform::Models::NetSyncVoipAttenuationValue::__cordl_internal_get_Decibels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Decibels;
}
constexpr float_t const& Oculus::Platform::Models::NetSyncVoipAttenuationValue::__cordl_internal_get_Decibels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Decibels;
}
constexpr void Oculus::Platform::Models::NetSyncVoipAttenuationValue::__cordl_internal_set_Decibels(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Decibels = value;
}
constexpr float_t& Oculus::Platform::Models::NetSyncVoipAttenuationValue::__cordl_internal_get_Distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Distance;
}
constexpr float_t const& Oculus::Platform::Models::NetSyncVoipAttenuationValue::__cordl_internal_get_Distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Distance;
}
constexpr void Oculus::Platform::Models::NetSyncVoipAttenuationValue::__cordl_internal_set_Distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Distance = value;
}
inline void Oculus::Platform::Models::NetSyncVoipAttenuationValue::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncVoipAttenuationValue*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValue* Oculus::Platform::Models::NetSyncVoipAttenuationValue::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::NetSyncVoipAttenuationValue*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncVoipAttenuationValue::NetSyncVoipAttenuationValue() {}
