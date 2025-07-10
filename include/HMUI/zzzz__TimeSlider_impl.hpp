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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TimeSlider::*)(bool, float_t, float_t)>(&::HMUI::TimeSlider::SetBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x39f2ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), "SetBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TimeSlider.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::TimeSlider::*)(float_t)>(&::HMUI::TimeSlider::TextForValue)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x39f2aec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TimeSlider.FormatTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::TimeSpan)>(&::HMUI::TimeSlider::FormatTimeSpan)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x39f2d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), "FormatTimeSpan", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TimeSlider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TimeSlider::*)()>(&::HMUI::TimeSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39f2e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), "SetBounds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valuesValid, lowerValue, upperValue);
}
inline ::StringW HMUI::TimeSlider::TextForValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::StringW HMUI::TimeSlider::FormatTimeSpan(::System::TimeSpan ts) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), "FormatTimeSpan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ts);
}
inline void HMUI::TimeSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::TimeSlider* HMUI::TimeSlider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::TimeSlider*>());
}
// Ctor Parameters []
constexpr ::HMUI::TimeSlider::TimeSlider() {}
