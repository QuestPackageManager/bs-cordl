#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\TestAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__TestAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::TestAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::TestAnalytic::*)()>(&::UnityEditor::Analytics::TestAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e25f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::TestAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::TestAnalytic.CreateTestAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::TestAnalytic* (*)()>(&::UnityEditor::Analytics::TestAnalytic::CreateTestAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e25f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::TestAnalytic*>(), { "CreateTestAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEditor::Analytics::TestAnalytic::__cordl_internal_get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr int32_t const& UnityEditor::Analytics::TestAnalytic::__cordl_internal_get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void UnityEditor::Analytics::TestAnalytic::__cordl_internal_set_param(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___param = value;
}
inline void UnityEditor::Analytics::TestAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::TestAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::TestAnalytic* UnityEditor::Analytics::TestAnalytic::CreateTestAnalytic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::TestAnalytic*>(), { "CreateTestAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::TestAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::TestAnalytic* UnityEditor::Analytics::TestAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::TestAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::TestAnalytic::TestAnalytic() {}
