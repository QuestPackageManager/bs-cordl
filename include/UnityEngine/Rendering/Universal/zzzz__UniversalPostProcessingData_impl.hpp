#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalPostProcessingData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalPostProcessingData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalPostProcessingData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalPostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalPostProcessingData::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6871474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalPostProcessingData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalPostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalPostProcessingData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6871484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_isEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_isEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_isEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEnabled = value;
}
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_gradingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gradingMode;
}
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_gradingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gradingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_gradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gradingMode = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_lutSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutSize;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_lutSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutSize;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_lutSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lutSize = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_useFastSRGBLinearConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFastSRGBLinearConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_useFastSRGBLinearConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFastSRGBLinearConversion;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_useFastSRGBLinearConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useFastSRGBLinearConversion = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_supportScreenSpaceLensFlare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportScreenSpaceLensFlare;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_supportScreenSpaceLensFlare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportScreenSpaceLensFlare;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_supportScreenSpaceLensFlare(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportScreenSpaceLensFlare = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_supportDataDrivenLensFlare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportDataDrivenLensFlare;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_get_supportDataDrivenLensFlare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportDataDrivenLensFlare;
}
constexpr void UnityEngine::Rendering::Universal::UniversalPostProcessingData::__cordl_internal_set_supportDataDrivenLensFlare(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportDataDrivenLensFlare = value;
}
inline void UnityEngine::Rendering::Universal::UniversalPostProcessingData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalPostProcessingData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* UnityEngine::Rendering::Universal::UniversalPostProcessingData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalPostProcessingData::UniversalPostProcessingData() {}
