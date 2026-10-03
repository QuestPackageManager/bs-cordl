#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleRule.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.get_styleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::StyleSheet> (::UnityEngine::UIElements::StyleRule::*)()>(
    &::UnityEngine::UIElements::StyleRule::get_styleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7115594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "get_styleSheet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.set_styleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleRule::*)(::UnityEngine::UIElements::StyleSheet*)>(&::UnityEngine::UIElements::StyleRule::set_styleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x711559c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "set_styleSheet", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleRule::*)(::UnityEngine::UIElements::StyleSheet*)>(&::UnityEngine::UIElements::StyleRule::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x71155a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.get_complexSelectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> (::UnityEngine::UIElements::StyleRule::*)()>(
    &::UnityEngine::UIElements::StyleRule::get_complexSelectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71156c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "get_complexSelectors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.get_properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleProperty*> (::UnityEngine::UIElements::StyleRule::*)()>(
    &::UnityEngine::UIElements::StyleRule::get_properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71156d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "get_properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.TryAddSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleRule::*)(::StringW, ::by_ref<::UnityEngine::UIElements::StyleComplexSelector*>, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::StyleRule::TryAddSelector)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x71156d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(),
            { "TryAddSelector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleComplexSelector*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.AddSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleComplexSelector* (::UnityEngine::UIElements::StyleRule::*)(::StringW)>(
    &::UnityEngine::UIElements::StyleRule::AddSelector)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7115828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "AddSelector", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleRule.AddProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleProperty* (::UnityEngine::UIElements::StyleRule::*)(::StringW)>(
    &::UnityEngine::UIElements::StyleRule::AddProperty)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7115894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "AddProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>& UnityEngine::UIElements::StyleRule::__cordl_internal_get_m_ComplexSelectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComplexSelectors;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> const& UnityEngine::UIElements::StyleRule::__cordl_internal_get_m_ComplexSelectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComplexSelectors;
}
constexpr void UnityEngine::UIElements::StyleRule::__cordl_internal_set_m_ComplexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ComplexSelectors = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*>& UnityEngine::UIElements::StyleRule::__cordl_internal_get_m_Properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*> const& UnityEngine::UIElements::StyleRule::__cordl_internal_get_m_Properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr void UnityEngine::UIElements::StyleRule::__cordl_internal_set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Properties = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleRule::__cordl_internal_get_line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr int32_t const& UnityEngine::UIElements::StyleRule::__cordl_internal_get_line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr void UnityEngine::UIElements::StyleRule::__cordl_internal_set_line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___line = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::StyleRule::__cordl_internal_get__styleSheet_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____styleSheet_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::StyleRule::__cordl_internal_get__styleSheet_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____styleSheet_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleRule::__cordl_internal_set__styleSheet_k__BackingField(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____styleSheet_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleRule::__cordl_internal_get_customPropertiesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPropertiesCount;
}
constexpr int32_t const& UnityEngine::UIElements::StyleRule::__cordl_internal_get_customPropertiesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPropertiesCount;
}
constexpr void UnityEngine::UIElements::StyleRule::__cordl_internal_set_customPropertiesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___customPropertiesCount = value;
}
inline ::UnityW<::UnityEngine::UIElements::StyleSheet> UnityEngine::UIElements::StyleRule::get_styleSheet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "get_styleSheet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::StyleSheet>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleRule::set_styleSheet(::UnityEngine::UIElements::StyleSheet* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "set_styleSheet", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleRule::_ctor(::UnityEngine::UIElements::StyleSheet* styleSheet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, styleSheet);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*> UnityEngine::UIElements::StyleRule::get_complexSelectors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "get_complexSelectors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleProperty*> UnityEngine::UIElements::StyleRule::get_properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "get_properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleProperty*>>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleRule::TryAddSelector(::StringW selectorStr, ::by_ref<::UnityEngine::UIElements::StyleComplexSelector*> selector, ::by_ref<::StringW> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(),
          { "TryAddSelector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleComplexSelector*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, selectorStr, selector, error);
}
inline ::UnityEngine::UIElements::StyleComplexSelector* UnityEngine::UIElements::StyleRule::AddSelector(::StringW selectorStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "AddSelector", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleComplexSelector*>(this, ___internal_method, selectorStr);
}
inline ::UnityEngine::UIElements::StyleProperty* UnityEngine::UIElements::StyleRule::AddProperty(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleRule*>(), { "AddProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleProperty*>(this, ___internal_method, propertyName);
}
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleRule::New_ctor(::UnityEngine::UIElements::StyleSheet* styleSheet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleRule*>(styleSheet));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleRule::StyleRule() {}
