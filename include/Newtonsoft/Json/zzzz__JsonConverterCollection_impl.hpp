#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonConverterCollection.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterCollection_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonConverterCollection::*)()>(&::Newtonsoft::Json::JsonConverterCollection::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cd6eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonConverterCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonConverterCollection* Newtonsoft::Json::JsonConverterCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonConverterCollection*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConverterCollection::JsonConverterCollection() {}
