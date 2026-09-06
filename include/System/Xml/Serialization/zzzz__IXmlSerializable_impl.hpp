#pragma once
// IWYU pragma private; include "System/Xml/Serialization/IXmlSerializable.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::IXmlSerializable.GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Serialization::IXmlSerializable::*)()>(
    &::System::Xml::Serialization::IXmlSerializable::GetSchema)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), { ::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::IXmlSerializable.ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::IXmlSerializable::*)(::System::Xml::XmlReader*)>(&::System::Xml::Serialization::IXmlSerializable::ReadXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), { ::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::IXmlSerializable.WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::IXmlSerializable::*)(::System::Xml::XmlWriter*)>(
    &::System::Xml::Serialization::IXmlSerializable::WriteXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), { ::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlSchema* System::Xml::Serialization::IXmlSerializable::GetSchema() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method);
}
inline void System::Xml::Serialization::IXmlSerializable::ReadXml(::System::Xml::XmlReader* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Xml::Serialization::IXmlSerializable::WriteXml(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::IXmlSerializable*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
