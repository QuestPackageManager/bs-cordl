#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/DefaultNamingStrategy.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultNamingStrategy_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultNamingStrategy.ResolvePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::DefaultNamingStrategy::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::DefaultNamingStrategy::ResolvePropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3d990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultNamingStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultNamingStrategy::*)()>(&::Newtonsoft::Json::Serialization::DefaultNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3d998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Newtonsoft::Json::Serialization::DefaultNamingStrategy::ResolvePropertyName(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Serialization::DefaultNamingStrategy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::DefaultNamingStrategy* Newtonsoft::Json::Serialization::DefaultNamingStrategy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::DefaultNamingStrategy*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DefaultNamingStrategy::DefaultNamingStrategy() {}
