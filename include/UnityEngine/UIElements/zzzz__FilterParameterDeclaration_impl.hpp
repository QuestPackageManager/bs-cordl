#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterParameterDeclaration.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameter_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameterDeclaration_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameterDeclaration.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::FilterParameterDeclaration::*)()>(&::UnityEngine::UIElements::FilterParameterDeclaration::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameterDeclaration>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameterDeclaration.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterParameterDeclaration::*)(::StringW)>(&::UnityEngine::UIElements::FilterParameterDeclaration::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameterDeclaration>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameterDeclaration.get_interpolationDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FilterParameter (::UnityEngine::UIElements::FilterParameterDeclaration::*)()>(
    &::UnityEngine::UIElements::FilterParameterDeclaration::get_interpolationDefaultValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7235ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameterDeclaration>(), { "get_interpolationDefaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameterDeclaration.set_interpolationDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterParameterDeclaration::*)(::UnityEngine::UIElements::FilterParameter)>(
    &::UnityEngine::UIElements::FilterParameterDeclaration::set_interpolationDefaultValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7235ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameterDeclaration>(),
                                                                                           { "set_interpolationDefaultValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::FilterParameterDeclaration::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameterDeclaration>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterParameterDeclaration::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameterDeclaration>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::FilterParameter UnityEngine::UIElements::FilterParameterDeclaration::get_interpolationDefaultValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameterDeclaration>(), { "get_interpolationDefaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FilterParameter>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterParameterDeclaration::set_interpolationDefaultValue(::UnityEngine::UIElements::FilterParameter value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameterDeclaration>(),
                                                                                         { "set_interpolationDefaultValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InterpolationDefaultValue", ty:
// "::UnityEngine::UIElements::FilterParameter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "defaultValue", ty: "::UnityEngine::UIElements::FilterParameter", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::FilterParameterDeclaration::FilterParameterDeclaration(::StringW m_Name, ::UnityEngine::UIElements::FilterParameter m_InterpolationDefaultValue,
                                                                                            ::UnityEngine::UIElements::FilterParameter defaultValue) noexcept {
  this->m_Name = m_Name;
  this->m_InterpolationDefaultValue = m_InterpolationDefaultValue;
  this->defaultValue = defaultValue;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FilterParameterDeclaration::FilterParameterDeclaration() {}
