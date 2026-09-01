#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatToTimeConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatToTimeConverter::*)(::GlobalNamespace::IBeatToTimeConverter*)>(&::GlobalNamespace::BeatToTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37159c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatToTimeConverter*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeConverter.BeatToTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatToTimeConverter::*)(float_t)>(&::GlobalNamespace::BeatToTimeConverter::BeatToTime)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x37159c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatToTimeConverter*>(), { "BeatToTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatToTimeConverter*& GlobalNamespace::BeatToTimeConverter::__cordl_internal_get__bpmTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr ::GlobalNamespace::IBeatToTimeConverter* const& GlobalNamespace::BeatToTimeConverter::__cordl_internal_get__bpmTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr void GlobalNamespace::BeatToTimeConverter::__cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::IBeatToTimeConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bpmTimeProcessor = value;
}
inline void GlobalNamespace::BeatToTimeConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatToTimeConverter*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bpmTimeProcessor);
}
inline float_t GlobalNamespace::BeatToTimeConverter::BeatToTime(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatToTimeConverter*>(), { "BeatToTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, beat);
}
inline ::GlobalNamespace::BeatToTimeConverter* GlobalNamespace::BeatToTimeConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatToTimeConverter*>(bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatToTimeConverter::BeatToTimeConverter() {}
