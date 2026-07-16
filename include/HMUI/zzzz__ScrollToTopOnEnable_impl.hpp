#pragma once
// IWYU pragma private; include "HMUI/ScrollToTopOnEnable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScrollToTopOnEnable_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
//  Writing Method size for method: ::HMUI::ScrollToTopOnEnable.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollToTopOnEnable::*)()>(&::HMUI::ScrollToTopOnEnable::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x588999c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollToTopOnEnable*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollToTopOnEnable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollToTopOnEnable::*)()>(&::HMUI::ScrollToTopOnEnable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5889a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollToTopOnEnable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ScrollView>& HMUI::ScrollToTopOnEnable::__cordl_internal_get__scrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
constexpr ::UnityW<::HMUI::ScrollView> const& HMUI::ScrollToTopOnEnable::__cordl_internal_get__scrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
constexpr void HMUI::ScrollToTopOnEnable::__cordl_internal_set__scrollView(::UnityW<::HMUI::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollView = value;
}
inline void HMUI::ScrollToTopOnEnable::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollToTopOnEnable*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollToTopOnEnable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollToTopOnEnable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ScrollToTopOnEnable* HMUI::ScrollToTopOnEnable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScrollToTopOnEnable*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScrollToTopOnEnable::ScrollToTopOnEnable() {}
