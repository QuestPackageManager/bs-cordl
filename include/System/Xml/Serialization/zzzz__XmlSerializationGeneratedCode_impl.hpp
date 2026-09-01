#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializationGeneratedCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationGeneratedCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationGeneratedCode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationGeneratedCode::*)()>(&::System::Xml::Serialization::XmlSerializationGeneratedCode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62fd290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationGeneratedCode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlSerializationGeneratedCode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationGeneratedCode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationGeneratedCode* System::Xml::Serialization::XmlSerializationGeneratedCode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationGeneratedCode*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationGeneratedCode::XmlSerializationGeneratedCode() {}
