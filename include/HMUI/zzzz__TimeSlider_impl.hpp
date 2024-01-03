#pragma once
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__TimeSlider_impl.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__TimeSlider__TimeType::__TimeSlider__TimeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__TimeSlider__TimeType::__TimeSlider__TimeType() {}
constexpr ::HMUI::__TimeSlider__TimeType HMUI::__TimeSlider__TimeType::Default{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__TimeSlider__TimeType HMUI::__TimeSlider__TimeType::Miliseconds{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HMUI::TimeSlider.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::TimeSlider::*)(float_t)>(&::HMUI::TimeSlider::TextForValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2124180;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TimeSlider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TimeSlider::*)()>(&::HMUI::TimeSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21243d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::__TimeSlider__TimeType& HMUI::TimeSlider::__get__timeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeType;
}
constexpr ::HMUI::__TimeSlider__TimeType const& HMUI::TimeSlider::__get__timeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeType;
}
constexpr void HMUI::TimeSlider::__set__timeType(::HMUI::__TimeSlider__TimeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeType = value;
}
inline ::StringW HMUI::TimeSlider::TextForValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::HMUI::TimeSlider* HMUI::TimeSlider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::TimeSlider*>());
}
inline void HMUI::TimeSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::TimeSlider::TimeSlider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
