#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::ConfigurationElement::*)()>(
    &::System::Configuration::ConfigurationElement::get_Properties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f51ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::ConfigurationElement*>(), { ::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.IsModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::ConfigurationElement::*)()>(&::System::Configuration::ConfigurationElement::IsModified)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f5202c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::ConfigurationElement*>(), { ::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationElement::*)(::System::Configuration::ConfigurationElement*)>(
    &::System::Configuration::ConfigurationElement::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f52068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::ConfigurationElement*>(), { ::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.ResetModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationElement::*)()>(&::System::Configuration::ConfigurationElement::ResetModified)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f520a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::ConfigurationElement*>(), { ::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 7 }));
    return ___internal_method;
  }
};
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::ConfigurationElement::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline bool System::Configuration::ConfigurationElement::IsModified() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::ConfigurationElement::Reset(::System::Configuration::ConfigurationElement* parentElement) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentElement);
}
inline void System::Configuration::ConfigurationElement::ResetModified() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationElement::ConfigurationElement() {}
