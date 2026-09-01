#pragma once
// IWYU pragma private; include "System\Xml\Linq\ElementWriter.hpp"
#include "System/Xml/Linq/zzzz__NamespaceResolver_impl.hpp"
#include "System/Xml/Linq/zzzz__ElementWriter_def.hpp"
#include "System/Xml/Linq/zzzz__XElement_def.hpp"
#include "System/Xml/Linq/zzzz__XNamespace_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::ElementWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::ElementWriter::*)(::System::Xml::XmlWriter*)>(&::System::Xml::Linq::ElementWriter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61a8d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::ElementWriter.WriteElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::ElementWriter::*)(::System::Xml::Linq::XElement*)>(&::System::Xml::Linq::ElementWriter::WriteElement)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x61a8d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "WriteElement", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::ElementWriter.GetPrefixOfNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::ElementWriter::*)(::System::Xml::Linq::XNamespace*, bool)>(
    &::System::Xml::Linq::ElementWriter::GetPrefixOfNamespace)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61aa1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "GetPrefixOfNamespace", {}, { ::i2c::type_of<::System::Xml::Linq::XNamespace*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::ElementWriter.PushAncestors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::ElementWriter::*)(::System::Xml::Linq::XElement*)>(&::System::Xml::Linq::ElementWriter::PushAncestors)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x61a9ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "PushAncestors", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::ElementWriter.PushElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::ElementWriter::*)(::System::Xml::Linq::XElement*)>(&::System::Xml::Linq::ElementWriter::PushElement)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x61aa450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "PushElement", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::ElementWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::ElementWriter::*)()>(&::System::Xml::Linq::ElementWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61aa190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "WriteEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::ElementWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::ElementWriter::*)()>(&::System::Xml::Linq::ElementWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61aa1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "WriteFullEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::ElementWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::ElementWriter::*)(::System::Xml::Linq::XElement*)>(&::System::Xml::Linq::ElementWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x61a9ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "WriteStartElement", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Linq::ElementWriter::_ctor(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void System::Xml::Linq::ElementWriter::WriteElement(::System::Xml::Linq::XElement* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "WriteElement", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, e);
}
inline ::StringW System::Xml::Linq::ElementWriter::GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns, bool allowDefaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "GetPrefixOfNamespace", {}, { ::i2c::type_of<::System::Xml::Linq::XNamespace*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, ns, allowDefaultNamespace);
}
inline void System::Xml::Linq::ElementWriter::PushAncestors(::System::Xml::Linq::XElement* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "PushAncestors", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, e);
}
inline void System::Xml::Linq::ElementWriter::PushElement(::System::Xml::Linq::XElement* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "PushElement", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, e);
}
inline void System::Xml::Linq::ElementWriter::WriteEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "WriteEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Xml::Linq::ElementWriter::WriteFullEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "WriteFullEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Xml::Linq::ElementWriter::WriteStartElement(::System::Xml::Linq::XElement* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::ElementWriter>(), { "WriteStartElement", {}, { ::i2c::type_of<::System::Xml::Linq::XElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, e);
}
// Ctor Parameters [CppParam { name: "_writer", ty: "::System::Xml::XmlWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_resolver", ty: "::System::Xml::Linq::NamespaceResolver",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Linq::ElementWriter::ElementWriter(::System::Xml::XmlWriter* _writer, ::System::Xml::Linq::NamespaceResolver _resolver) noexcept {
  this->_writer = _writer;
  this->_resolver = _resolver;
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::ElementWriter::ElementWriter() {}
