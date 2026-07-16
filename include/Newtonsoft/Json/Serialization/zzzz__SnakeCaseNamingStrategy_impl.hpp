#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/SnakeCaseNamingStrategy.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__SnakeCaseNamingStrategy_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::*)(bool, bool)>(
    &::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d583f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::*)(bool, bool, bool)>(
    &::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d58404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::*)()>(&::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d58414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy.ResolvePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::ResolvePropertyName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d58418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(), 7 }));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processDictionaryKeys, overrideSpecifiedNames);
}
inline void Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processDictionaryKeys, overrideSpecifiedNames, processExtensionDataNames);
}
inline void Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::ResolvePropertyName(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy* Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(processDictionaryKeys, overrideSpecifiedNames));
}
inline ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy* Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames,
                                                                                                                                      bool processExtensionDataNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>(processDictionaryKeys, overrideSpecifiedNames, processExtensionDataNames));
}
inline ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy* Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy::SnakeCaseNamingStrategy() {}
