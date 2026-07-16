#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleValueHandle> (::UnityEngine::UIElements::StyleProperty::*)()>(
    &::UnityEngine::UIElements::StyleProperty::get_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9848c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c98494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Line;
}
constexpr int32_t const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Line;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_m_Line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Line = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_m_Values(::ArrayW<::UnityEngine::UIElements::StyleValueHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Values = value;
}
constexpr bool& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_isCustomProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCustomProperty;
}
constexpr bool const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_isCustomProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCustomProperty;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_isCustomProperty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCustomProperty = value;
}
constexpr bool& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_requireVariableResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requireVariableResolve;
}
constexpr bool const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_requireVariableResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requireVariableResolve;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_requireVariableResolve(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requireVariableResolve = value;
}
inline ::StringW UnityEngine::UIElements::StyleProperty::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> UnityEngine::UIElements::StyleProperty::get_values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleProperty* UnityEngine::UIElements::StyleProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleProperty::StyleProperty() {}
