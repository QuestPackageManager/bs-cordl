#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\StallSummaryAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__StallSummaryAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::StallSummaryAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::StallSummaryAnalytic::*)()>(&::UnityEditor::Analytics::StallSummaryAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e25d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::StallSummaryAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::StallSummaryAnalytic.CreateStallSummaryAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::StallSummaryAnalytic* (*)()>(&::UnityEditor::Analytics::StallSummaryAnalytic::CreateStallSummaryAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e25e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::StallSummaryAnalytic*>(), { "CreateStallSummaryAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr double_t& UnityEditor::Analytics::StallSummaryAnalytic::__cordl_internal_get_Duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Duration;
}
constexpr double_t const& UnityEditor::Analytics::StallSummaryAnalytic::__cordl_internal_get_Duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Duration;
}
constexpr void UnityEditor::Analytics::StallSummaryAnalytic::__cordl_internal_set_Duration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Duration = value;
}
inline void UnityEditor::Analytics::StallSummaryAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::StallSummaryAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::StallSummaryAnalytic* UnityEditor::Analytics::StallSummaryAnalytic::CreateStallSummaryAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::StallSummaryAnalytic*>(), { "CreateStallSummaryAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::StallSummaryAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::StallSummaryAnalytic* UnityEditor::Analytics::StallSummaryAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::StallSummaryAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::StallSummaryAnalytic::StallSummaryAnalytic() {}
