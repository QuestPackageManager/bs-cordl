#pragma once
// IWYU pragma private; include "Mono\Xml\SecurityParser.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_impl.hpp"
#include "Mono/Xml/zzzz__SecurityParser_def.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::Mono::Xml::SecurityParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)()>(&::Mono::Xml::SecurityParser::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5aae244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.LoadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW)>(&::Mono::Xml::SecurityParser::LoadXml)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5aae3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "LoadXml", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.ToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::Mono::Xml::SecurityParser::*)()>(&::Mono::Xml::SecurityParser::ToXml)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aae610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "ToXml", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnStartParsing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)(::Mono::Xml::SmallXmlParser*)>(&::Mono::Xml::SecurityParser::OnStartParsing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aae618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnStartParsing", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW, ::StringW)>(&::Mono::Xml::SecurityParser::OnProcessingInstruction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aae61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnProcessingInstruction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnIgnorableWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW)>(&::Mono::Xml::SecurityParser::OnIgnorableWhitespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aae620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnIgnorableWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*)>(&::Mono::Xml::SecurityParser::OnStartElement)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5aae624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW)>(&::Mono::Xml::SecurityParser::OnEndElement)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5aae8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnEndElement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW)>(&::Mono::Xml::SecurityParser::OnChars)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5aae930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnChars", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnEndParsing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SecurityParser::*)(::Mono::Xml::SmallXmlParser*)>(&::Mono::Xml::SecurityParser::OnEndParsing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aae9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnEndParsing", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Security::SecurityElement*& Mono::Xml::SecurityParser::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr ::System::Security::SecurityElement* const& Mono::Xml::SecurityParser::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr void Mono::Xml::SecurityParser::__cordl_internal_set_root(::System::Security::SecurityElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___root = value;
}
constexpr ::System::Security::SecurityElement*& Mono::Xml::SecurityParser::__cordl_internal_get_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr ::System::Security::SecurityElement* const& Mono::Xml::SecurityParser::__cordl_internal_get_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr void Mono::Xml::SecurityParser::__cordl_internal_set_current(::System::Security::SecurityElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___current = value;
}
constexpr ::System::Collections::Stack*& Mono::Xml::SecurityParser::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::System::Collections::Stack* const& Mono::Xml::SecurityParser::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void Mono::Xml::SecurityParser::__cordl_internal_set_stack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stack = value;
}
inline void Mono::Xml::SecurityParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Xml::SecurityParser::LoadXml(::StringW xml) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "LoadXml", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xml);
}
inline ::System::Security::SecurityElement* Mono::Xml::SecurityParser::ToXml() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "ToXml", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method);
}
inline void Mono::Xml::SecurityParser::OnStartParsing(::Mono::Xml::SmallXmlParser* parser) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnStartParsing", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parser);
}
inline void Mono::Xml::SecurityParser::OnProcessingInstruction(::StringW name, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnProcessingInstruction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void Mono::Xml::SecurityParser::OnIgnorableWhitespace(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnIgnorableWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Mono::Xml::SecurityParser::OnStartElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attrs);
}
inline void Mono::Xml::SecurityParser::OnEndElement(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnEndElement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Mono::Xml::SecurityParser::OnChars(::StringW ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnChars", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void Mono::Xml::SecurityParser::OnEndParsing(::Mono::Xml::SmallXmlParser* parser) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SecurityParser*>(), { "OnEndParsing", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parser);
}
inline ::Mono::Xml::SecurityParser* Mono::Xml::SecurityParser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Xml::SecurityParser*>());
}
/// @brief Convert operator to "::Mono::Xml::SmallXmlParser_IContentHandler"
constexpr Mono::Xml::SecurityParser::operator ::Mono::Xml::SmallXmlParser_IContentHandler*() noexcept {
  return static_cast<::Mono::Xml::SmallXmlParser_IContentHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mono::Xml::SmallXmlParser_IContentHandler"
constexpr ::Mono::Xml::SmallXmlParser_IContentHandler* Mono::Xml::SecurityParser::i___Mono__Xml__SmallXmlParser_IContentHandler() noexcept {
  return static_cast<::Mono::Xml::SmallXmlParser_IContentHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Xml::SecurityParser::SecurityParser() {}
