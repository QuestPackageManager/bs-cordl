#pragma once
// IWYU pragma private; include "GlobalNamespace/AveragingValueRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AveragingValueRecorder_def.hpp"
#include "GlobalNamespace/zzzz__AveragingValueRecorder_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder_AverageValueData.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AveragingValueRecorder_AverageValueData::*)()>(
    &::GlobalNamespace::AveragingValueRecorder_AverageValueData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a22d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder_AverageValueData.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AveragingValueRecorder_AverageValueData::*)(float_t)>(
    &::GlobalNamespace::AveragingValueRecorder_AverageValueData::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a22d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder_AverageValueData.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AveragingValueRecorder_AverageValueData::*)()>(
    &::GlobalNamespace::AveragingValueRecorder_AverageValueData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a22d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder_AverageValueData.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AveragingValueRecorder_AverageValueData::*)(float_t)>(
    &::GlobalNamespace::AveragingValueRecorder_AverageValueData::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a22d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder_AverageValueData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AveragingValueRecorder_AverageValueData::*)(float_t, float_t)>(
    &::GlobalNamespace::AveragingValueRecorder_AverageValueData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a22d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::AveragingValueRecorder_AverageValueData::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::AveragingValueRecorder_AverageValueData::set_value(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::AveragingValueRecorder_AverageValueData::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::AveragingValueRecorder_AverageValueData::set_time(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::AveragingValueRecorder_AverageValueData::_ctor(float_t value, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder_AverageValueData>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, time);
}
// Ctor Parameters [CppParam { name: "_value_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_time_k__BackingField", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::AveragingValueRecorder_AverageValueData::AveragingValueRecorder_AverageValueData(float_t _value_k__BackingField, float_t _time_k__BackingField) noexcept {
  this->_value_k__BackingField = _value_k__BackingField;
  this->_time_k__BackingField = _time_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AveragingValueRecorder_AverageValueData::AveragingValueRecorder_AverageValueData() {}
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AveragingValueRecorder::*)(float_t, float_t, float_t)>(&::GlobalNamespace::AveragingValueRecorder::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5a22984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AveragingValueRecorder::*)(float_t, float_t)>(&::GlobalNamespace::AveragingValueRecorder::Update)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5a22aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(), { "Update", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder.GetAverageValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AveragingValueRecorder::*)()>(&::GlobalNamespace::AveragingValueRecorder::GetAverageValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a22d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(), { "GetAverageValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder.GetLastValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AveragingValueRecorder::*)()>(&::GlobalNamespace::AveragingValueRecorder::GetLastValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a22d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(), { "GetLastValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AveragingValueRecorder.GetHistoryValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Queue_1<float_t>* (::GlobalNamespace::AveragingValueRecorder::*)()>(
    &::GlobalNamespace::AveragingValueRecorder::GetHistoryValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a22d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(), { "GetHistoryValues", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__averageWindowDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageWindowDuration;
}
constexpr float_t const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__averageWindowDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageWindowDuration;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__averageWindowDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____averageWindowDuration = value;
}
constexpr float_t& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__historyValuesPerSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyValuesPerSecond;
}
constexpr float_t const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__historyValuesPerSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyValuesPerSecond;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__historyValuesPerSecond(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____historyValuesPerSecond = value;
}
constexpr int32_t& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__historyValuesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyValuesCount;
}
constexpr int32_t const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__historyValuesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyValuesCount;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__historyValuesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____historyValuesCount = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::AveragingValueRecorder_AverageValueData>*& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__averageWindowValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageWindowValues;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::AveragingValueRecorder_AverageValueData>* const&
GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__averageWindowValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageWindowValues;
}
constexpr void
GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__averageWindowValues(::System::Collections::Generic::Queue_1<::GlobalNamespace::AveragingValueRecorder_AverageValueData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____averageWindowValues = value;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>*& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__historyValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyValues;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>* const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__historyValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyValues;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__historyValues(::System::Collections::Generic::Queue_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____historyValues = value;
}
constexpr float_t& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr float_t const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
constexpr float_t& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__historyTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyTime;
}
constexpr float_t const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__historyTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyTime;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__historyTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____historyTime = value;
}
constexpr float_t& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__averageValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageValue;
}
constexpr float_t const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__averageValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageValue;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__averageValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____averageValue = value;
}
constexpr float_t& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__averageWindowValuesDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageWindowValuesDuration;
}
constexpr float_t const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__averageWindowValuesDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageWindowValuesDuration;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__averageWindowValuesDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____averageWindowValuesDuration = value;
}
constexpr float_t& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__lastValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastValue;
}
constexpr float_t const& GlobalNamespace::AveragingValueRecorder::__cordl_internal_get__lastValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastValue;
}
constexpr void GlobalNamespace::AveragingValueRecorder::__cordl_internal_set__lastValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastValue = value;
}
inline void GlobalNamespace::AveragingValueRecorder::_ctor(float_t averageWindowDuration, float_t historyWindowDuration, float_t historyValuesPerSecond) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, averageWindowDuration, historyWindowDuration, historyValuesPerSecond);
}
inline void GlobalNamespace::AveragingValueRecorder::Update(float_t value, float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(), { "Update", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, deltaTime);
}
inline float_t GlobalNamespace::AveragingValueRecorder::GetAverageValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(), { "GetAverageValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AveragingValueRecorder::GetLastValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(), { "GetLastValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::Queue_1<float_t>* GlobalNamespace::AveragingValueRecorder::GetHistoryValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AveragingValueRecorder*>(), { "GetHistoryValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<float_t>*>(this, ___internal_method);
}
inline ::GlobalNamespace::AveragingValueRecorder* GlobalNamespace::AveragingValueRecorder::New_ctor(float_t averageWindowDuration, float_t historyWindowDuration, float_t historyValuesPerSecond) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AveragingValueRecorder*>(averageWindowDuration, historyWindowDuration, historyValuesPerSecond));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AveragingValueRecorder::AveragingValueRecorder() {}
