#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializerImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerImplementation_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerImplementation.get_Writer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (::System::Xml::Serialization::XmlSerializerImplementation::*)()>(
    &::System::Xml::Serialization::XmlSerializerImplementation::get_Writer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6311fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializerImplementation*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializerImplementation*>(), 4 }));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlSerializationWriter* System::Xml::Serialization::XmlSerializerImplementation::get_Writer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializerImplementation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationWriter*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializerImplementation::XmlSerializerImplementation() {}
