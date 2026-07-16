#pragma once
// IWYU pragma private; include "HMUI/TimeSlider.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::TimeSlider_TimeType::TimeSlider_TimeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::TimeSlider_TimeType::TimeSlider_TimeType() {}
constexpr ::HMUI::TimeSlider_TimeType HMUI::TimeSlider_TimeType::Default{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::TimeSlider_TimeType HMUI::TimeSlider_TimeType::Milliseconds{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::TimeSlider_TimeType HMUI::TimeSlider_TimeType::Normalized{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::TimeSlider.SetBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TimeSlider::*)(bool, float_t, float_t)>(&::HMUI::TimeSlider::SetBounds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58820d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TimeSlider*>(), { "SetBounds", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TimeSlider.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::TimeSlider::*)(float_t)>(&::HMUI::TimeSlider::TextForValue)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x58820e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TimeSlider*>(), { ::i2c::class_of<::HMUI::TimeSlider*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TimeSlider.FormatTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan)>(&::HMUI::TimeSlider::FormatTimeSpan)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5882340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TimeSlider*>(), { "FormatTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TimeSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TimeSlider::*)()>(&::HMUI::TimeSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x588259c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TimeSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::HMUI::TimeSlider_TimeType& HMUI::TimeSlider::__cordl_internal_get__timeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeType;
}
constexpr ::HMUI::TimeSlider_TimeType const& HMUI::TimeSlider::__cordl_internal_get__timeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeType;
}
constexpr void HMUI::TimeSlider::__cordl_internal_set__timeType(::HMUI::TimeSlider_TimeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeType = value;
}
constexpr bool& HMUI::TimeSlider::__cordl_internal_get__valuesValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valuesValid;
}
constexpr bool const& HMUI::TimeSlider::__cordl_internal_get__valuesValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valuesValid;
}
constexpr void HMUI::TimeSlider::__cordl_internal_set__valuesValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valuesValid = value;
}
constexpr float_t& HMUI::TimeSlider::__cordl_internal_get__lowerValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowerValue;
}
constexpr float_t const& HMUI::TimeSlider::__cordl_internal_get__lowerValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowerValue;
}
constexpr void HMUI::TimeSlider::__cordl_internal_set__lowerValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lowerValue = value;
}
constexpr float_t& HMUI::TimeSlider::__cordl_internal_get__upperValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upperValue;
}
constexpr float_t const& HMUI::TimeSlider::__cordl_internal_get__upperValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upperValue;
}
constexpr void HMUI::TimeSlider::__cordl_internal_set__upperValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upperValue = value;
}
inline void HMUI::TimeSlider::SetBounds(bool valuesValid, float_t lowerValue, float_t upperValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TimeSlider*>(), { "SetBounds", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valuesValid, lowerValue, upperValue);
}
inline ::StringW HMUI::TimeSlider::TextForValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TimeSlider*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::StringW HMUI::TimeSlider::FormatTimeSpan(::System::TimeSpan ts) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TimeSlider*>(), { "FormatTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ts);
}
inline void HMUI::TimeSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TimeSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::TimeSlider* HMUI::TimeSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::TimeSlider*>());
}
// Ctor Parameters []
constexpr ::HMUI::TimeSlider::TimeSlider() {}
