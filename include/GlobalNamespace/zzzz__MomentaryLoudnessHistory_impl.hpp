#pragma once
// IWYU pragma private; include "GlobalNamespace\MomentaryLoudnessHistory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MomentaryLoudnessHistory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MomentaryLoudnessHistory::*)(int32_t)>(&::GlobalNamespace::MomentaryLoudnessHistory::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3266894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessHistory*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessHistory.GetAverageLoudness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MomentaryLoudnessHistory::*)()>(&::GlobalNamespace::MomentaryLoudnessHistory::GetAverageLoudness)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3266754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessHistory*>(), { "GetAverageLoudness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessHistory.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MomentaryLoudnessHistory::*)(float_t)>(&::GlobalNamespace::MomentaryLoudnessHistory::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32666d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessHistory*>(), { "Add", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__rmsValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rmsValues;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__rmsValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rmsValues;
}
constexpr void GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_set__rmsValues(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rmsValues = value;
}
constexpr int32_t& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__nextRmsIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextRmsIndex;
}
constexpr int32_t const& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__nextRmsIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextRmsIndex;
}
constexpr void GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_set__nextRmsIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextRmsIndex = value;
}
constexpr bool& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__historyFull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyFull;
}
constexpr bool const& GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_get__historyFull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyFull;
}
constexpr void GlobalNamespace::MomentaryLoudnessHistory::__cordl_internal_set__historyFull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____historyFull = value;
}
inline void GlobalNamespace::MomentaryLoudnessHistory::_ctor(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessHistory*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline float_t GlobalNamespace::MomentaryLoudnessHistory::GetAverageLoudness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessHistory*>(), { "GetAverageLoudness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MomentaryLoudnessHistory::Add(float_t momentaryLoudness) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessHistory*>(), { "Add", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, momentaryLoudness);
}
inline ::GlobalNamespace::MomentaryLoudnessHistory* GlobalNamespace::MomentaryLoudnessHistory::New_ctor(int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MomentaryLoudnessHistory*>(length));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MomentaryLoudnessHistory::MomentaryLoudnessHistory() {}
