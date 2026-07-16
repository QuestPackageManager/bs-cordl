#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatToTimeAndRotationConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeAndRotationConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeAndRotationConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatToTimeAndRotationConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*, ::GlobalNamespace::RotationTimeProcessor*)>(&::GlobalNamespace::BeatToTimeAndRotationConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37111d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatToTimeAndRotationConverter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>(), ::i2c::type_of<::GlobalNamespace::RotationTimeProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatToTimeAndRotationConverter.BeatToRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatToTimeAndRotationConverter::*)(float_t)>(&::GlobalNamespace::BeatToTimeAndRotationConverter::BeatToRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37111d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatToTimeAndRotationConverter*>(), { "BeatToRotation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RotationTimeProcessor*& GlobalNamespace::BeatToTimeAndRotationConverter::__cordl_internal_get__rotationTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationTimeProcessor;
}
constexpr ::GlobalNamespace::RotationTimeProcessor* const& GlobalNamespace::BeatToTimeAndRotationConverter::__cordl_internal_get__rotationTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationTimeProcessor;
}
constexpr void GlobalNamespace::BeatToTimeAndRotationConverter::__cordl_internal_set__rotationTimeProcessor(::GlobalNamespace::RotationTimeProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationTimeProcessor = value;
}
inline void GlobalNamespace::BeatToTimeAndRotationConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatToTimeAndRotationConverter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>(), ::i2c::type_of<::GlobalNamespace::RotationTimeProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline int32_t GlobalNamespace::BeatToTimeAndRotationConverter::BeatToRotation(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatToTimeAndRotationConverter*>(), { "BeatToRotation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, beat);
}
inline ::GlobalNamespace::BeatToTimeAndRotationConverter* GlobalNamespace::BeatToTimeAndRotationConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                                    ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatToTimeAndRotationConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatToTimeAndRotationConverter::BeatToTimeAndRotationConverter() {}
