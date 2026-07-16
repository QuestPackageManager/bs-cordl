#pragma once
// IWYU pragma private; include "GlobalNamespace/MovementHistoryRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MovementHistoryRecorder_def.hpp"
#include "GlobalNamespace/zzzz__AveragingValueRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.get_averagingValueRecorer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AveragingValueRecorder* (::GlobalNamespace::MovementHistoryRecorder::*)()>(
    &::GlobalNamespace::MovementHistoryRecorder::get_averagingValueRecorer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e8848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MovementHistoryRecorder*>(), { "get_averagingValueRecorer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::MovementHistoryRecorder::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59e8850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MovementHistoryRecorder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.AddMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t)>(&::GlobalNamespace::MovementHistoryRecorder::AddMovement)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59e88dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MovementHistoryRecorder*>(), { "AddMovement", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementHistoryRecorder.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementHistoryRecorder::*)(float_t)>(&::GlobalNamespace::MovementHistoryRecorder::ManualUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59e8904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MovementHistoryRecorder*>(), { "ManualUpdate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AveragingValueRecorder*& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__averagingValueRecorer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averagingValueRecorer;
}
constexpr ::GlobalNamespace::AveragingValueRecorder* const& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__averagingValueRecorer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averagingValueRecorer;
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__cordl_internal_set__averagingValueRecorer(::GlobalNamespace::AveragingValueRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____averagingValueRecorer = value;
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__increaseSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____increaseSpeed;
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__increaseSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____increaseSpeed;
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__cordl_internal_set__increaseSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____increaseSpeed = value;
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__decreaseSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decreaseSpeed;
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__decreaseSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decreaseSpeed;
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__cordl_internal_set__decreaseSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decreaseSpeed = value;
}
constexpr float_t& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__accum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accum;
}
constexpr float_t const& GlobalNamespace::MovementHistoryRecorder::__cordl_internal_get__accum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accum;
}
constexpr void GlobalNamespace::MovementHistoryRecorder::__cordl_internal_set__accum(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accum = value;
}
inline ::GlobalNamespace::AveragingValueRecorder* GlobalNamespace::MovementHistoryRecorder::get_averagingValueRecorer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MovementHistoryRecorder*>(), { "get_averagingValueRecorer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AveragingValueRecorder*>(this, ___internal_method);
}
inline void GlobalNamespace::MovementHistoryRecorder::_ctor(float_t averageWindowDuration, float_t historyValuesPerSecond, float_t increaseSpeed, float_t decreaseSpeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MovementHistoryRecorder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, averageWindowDuration, historyValuesPerSecond, increaseSpeed, decreaseSpeed);
}
inline void GlobalNamespace::MovementHistoryRecorder::AddMovement(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MovementHistoryRecorder*>(), { "AddMovement", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void GlobalNamespace::MovementHistoryRecorder::ManualUpdate(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MovementHistoryRecorder*>(), { "ManualUpdate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline ::GlobalNamespace::MovementHistoryRecorder* GlobalNamespace::MovementHistoryRecorder::New_ctor(float_t averageWindowDuration, float_t historyValuesPerSecond, float_t increaseSpeed,
                                                                                                      float_t decreaseSpeed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MovementHistoryRecorder*>(averageWindowDuration, historyValuesPerSecond, increaseSpeed, decreaseSpeed));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MovementHistoryRecorder::MovementHistoryRecorder() {}
