#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/KebabCaseNamingStrategy.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__KebabCaseNamingStrategy_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::*)(bool, bool)>(
    &::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d574f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::*)(bool, bool, bool)>(
    &::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d57500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::*)()>(&::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d57510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy.ResolvePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::ResolvePropertyName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d57514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(), 7 }));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processDictionaryKeys, overrideSpecifiedNames);
}
inline void Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processDictionaryKeys, overrideSpecifiedNames, processExtensionDataNames);
}
inline void Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::ResolvePropertyName(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(processDictionaryKeys, overrideSpecifiedNames));
}
inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames,
                                                                                                                                      bool processExtensionDataNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>(processDictionaryKeys, overrideSpecifiedNames, processExtensionDataNames));
}
inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy::KebabCaseNamingStrategy() {}
