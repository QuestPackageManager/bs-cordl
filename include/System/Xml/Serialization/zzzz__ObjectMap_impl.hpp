#pragma once
// IWYU pragma private; include "System\Xml\Serialization\ObjectMap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__ObjectMap_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::ObjectMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::ObjectMap::*)()>(&::System::Xml::Serialization::ObjectMap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f64d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ObjectMap*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::ObjectMap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ObjectMap*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::ObjectMap* System::Xml::Serialization::ObjectMap::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::ObjectMap*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::ObjectMap::ObjectMap() {}
