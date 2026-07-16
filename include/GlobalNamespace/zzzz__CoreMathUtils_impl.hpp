#pragma once
// IWYU pragma private; include "GlobalNamespace/CoreMathUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CoreMathUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoreMathUtils.CalculateHalfJumpDurationInBeats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::CoreMathUtils::CalculateHalfJumpDurationInBeats)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36f6144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::CoreMathUtils*>(),
            { "CalculateHalfJumpDurationInBeats", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreMathUtils._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoreMathUtils::*)()>(&::GlobalNamespace::CoreMathUtils::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36f6188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreMathUtils*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::CoreMathUtils::CalculateHalfJumpDurationInBeats(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed,
                                                                                float_t oneBeatDuration, float_t noteJumpStartBeatOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::CoreMathUtils*>(),
          { "CalculateHalfJumpDurationInBeats", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, startHalfJumpDurationInBeats, maxHalfJumpDistance, noteJumpMovementSpeed, oneBeatDuration, noteJumpStartBeatOffset);
}
inline void GlobalNamespace::CoreMathUtils::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoreMathUtils*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CoreMathUtils* GlobalNamespace::CoreMathUtils::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CoreMathUtils*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreMathUtils::CoreMathUtils() {}
