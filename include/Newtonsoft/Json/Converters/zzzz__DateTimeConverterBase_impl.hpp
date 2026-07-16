#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/DateTimeConverterBase.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DateTimeConverterBase.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::DateTimeConverterBase::*)(::System::Type*)>(
    &::Newtonsoft::Json::Converters::DateTimeConverterBase::CanConvert)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5d9694c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DateTimeConverterBase*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::DateTimeConverterBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::DateTimeConverterBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::DateTimeConverterBase::*)()>(&::Newtonsoft::Json::Converters::DateTimeConverterBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d96a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DateTimeConverterBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Newtonsoft::Json::Converters::DateTimeConverterBase::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::DateTimeConverterBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline void Newtonsoft::Json::Converters::DateTimeConverterBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::DateTimeConverterBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::DateTimeConverterBase* Newtonsoft::Json::Converters::DateTimeConverterBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::DateTimeConverterBase*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::DateTimeConverterBase::DateTimeConverterBase() {}
