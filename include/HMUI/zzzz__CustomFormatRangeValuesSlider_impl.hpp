#pragma once
// IWYU pragma private; include "HMUI/CustomFormatRangeValuesSlider.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__CustomFormatRangeValuesSlider_def.hpp"
//  Writing Method size for method: ::HMUI::CustomFormatRangeValuesSlider.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::CustomFormatRangeValuesSlider::*)(float_t)>(
    &::HMUI::CustomFormatRangeValuesSlider::TextForValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25051c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CustomFormatRangeValuesSlider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CustomFormatRangeValuesSlider::*)()>(&::HMUI::CustomFormatRangeValuesSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2505238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& HMUI::CustomFormatRangeValuesSlider::__cordl_internal_get__formatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString;
}
constexpr ::StringW const& HMUI::CustomFormatRangeValuesSlider::__cordl_internal_get__formatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString;
}
constexpr void HMUI::CustomFormatRangeValuesSlider::__cordl_internal_set__formatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formatString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW HMUI::CustomFormatRangeValuesSlider::TextForValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::HMUI::CustomFormatRangeValuesSlider* HMUI::CustomFormatRangeValuesSlider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::CustomFormatRangeValuesSlider*>());
}
inline void HMUI::CustomFormatRangeValuesSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::CustomFormatRangeValuesSlider::CustomFormatRangeValuesSlider() {}
