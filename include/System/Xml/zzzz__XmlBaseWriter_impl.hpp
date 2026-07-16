#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseWriter.hpp"
#include "System/Xml/zzzz__WriteState_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_impl.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlBaseWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__BinHexEncoding_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlBaseWriter_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNodeWriter_def.hpp"
#include "System/Xml/zzzz__XmlSigningNodeWriter_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlStreamNodeWriter_def.hpp"
#include "System/Xml/zzzz__XmlUTF8NodeWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_Element.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter_Element::*)()>(&::System::Xml::XmlBaseWriter_Element::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_Element.set_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_Element::*)(::StringW)>(&::System::Xml::XmlBaseWriter_Element::set_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_Element.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter_Element::*)()>(&::System::Xml::XmlBaseWriter_Element::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "get_LocalName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_Element.set_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_Element::*)(::StringW)>(&::System::Xml::XmlBaseWriter_Element::set_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "set_LocalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_Element.get_PrefixId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseWriter_Element::*)()>(&::System::Xml::XmlBaseWriter_Element::get_PrefixId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "get_PrefixId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_Element.set_PrefixId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_Element::*)(int32_t)>(&::System::Xml::XmlBaseWriter_Element::set_PrefixId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "set_PrefixId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_Element.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_Element::*)()>(&::System::Xml::XmlBaseWriter_Element::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x610f264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_Element._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_Element::*)()>(&::System::Xml::XmlBaseWriter_Element::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x610f270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::XmlBaseWriter_Element::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::XmlBaseWriter_Element::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::XmlBaseWriter_Element::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefix = value;
}
constexpr ::StringW& System::Xml::XmlBaseWriter_Element::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::StringW const& System::Xml::XmlBaseWriter_Element::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Xml::XmlBaseWriter_Element::__cordl_internal_set_localName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localName = value;
}
constexpr int32_t& System::Xml::XmlBaseWriter_Element::__cordl_internal_get_prefixId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixId;
}
constexpr int32_t const& System::Xml::XmlBaseWriter_Element::__cordl_internal_get_prefixId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixId;
}
constexpr void System::Xml::XmlBaseWriter_Element::__cordl_internal_set_prefixId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefixId = value;
}
inline ::StringW System::Xml::XmlBaseWriter_Element::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_Element::set_Prefix(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::XmlBaseWriter_Element::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "get_LocalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_Element::set_LocalName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "set_LocalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::XmlBaseWriter_Element::get_PrefixId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "get_PrefixId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_Element::set_PrefixId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "set_PrefixId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter_Element::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_Element::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_Element*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseWriter_Element* System::Xml::XmlBaseWriter_Element::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseWriter_Element*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseWriter_Element::XmlBaseWriter_Element() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlBaseWriter_DocumentState::XmlBaseWriter_DocumentState(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseWriter_DocumentState::XmlBaseWriter_DocumentState() {}
constexpr ::System::Xml::XmlBaseWriter_DocumentState System::Xml::XmlBaseWriter_DocumentState::None{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Xml::XmlBaseWriter_DocumentState System::Xml::XmlBaseWriter_DocumentState::Document{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Xml::XmlBaseWriter_DocumentState System::Xml::XmlBaseWriter_DocumentState::Epilog{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Xml::XmlBaseWriter_DocumentState System::Xml::XmlBaseWriter_DocumentState::End{ static_cast<uint8_t>(0x3u) };
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::*)()>(&::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x610f83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "get_Depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute.set_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::*)(int32_t)>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::set_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "set_Depth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::get_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "get_XmlLang", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute.set_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::*)(::StringW)>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::set_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "set_XmlLang", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::get_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "get_XmlSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute.set_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::*)(::System::Xml::XmlSpace)>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::set_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "set_XmlSpace", {}, { ::i2c::type_of<::System::Xml::XmlSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::*)()>(&::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlSpace& System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_get_space() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr ::System::Xml::XmlSpace const& System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_get_space() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr void System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_set_space(::System::Xml::XmlSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___space = value;
}
constexpr ::StringW& System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_get_lang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lang;
}
constexpr ::StringW const& System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_get_lang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lang;
}
constexpr void System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_set_lang(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lang = value;
}
constexpr int32_t& System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "get_Depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::set_Depth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "set_Depth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "get_XmlLang", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::set_XmlLang(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "set_XmlLang", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlSpace System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "get_XmlSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::set_XmlSpace(::System::Xml::XmlSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "set_XmlSpace", {}, { ::i2c::type_of<::System::Xml::XmlSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute* System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute::NamespaceManager_XmlBaseWriter_XmlAttribute() {}
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)()>(&::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x610f31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)()>(&::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x610f668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)()>(&::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_Depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.set_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)(int32_t)>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::set_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "set_Depth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.get_PrefixChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_PrefixChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61105fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_PrefixChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6110604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.set_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)(::StringW)>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::set_Prefix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x610f320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.get_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)()>(&::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x611060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_Uri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.set_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)(::StringW)>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6110614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "set_Uri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.get_UriDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_UriDictionaryString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x611061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_UriDictionaryString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace.set_UriDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::set_UriDictionaryString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6110624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(),
                                                                                           { "set_UriDictionaryString", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefix = value;
}
constexpr ::StringW& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_xNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xNs;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_xNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xNs;
}
constexpr void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_set_xNs(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xNs = value;
}
constexpr int32_t& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr char16_t& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_prefixChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixChar;
}
constexpr char16_t const& System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_get_prefixChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixChar;
}
constexpr void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::__cordl_internal_set_prefixChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefixChar = value;
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_Depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::set_Depth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "set_Depth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline char16_t System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_PrefixChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_PrefixChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::StringW System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::set_Prefix(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "set_Prefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_Uri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::set_Uri(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "set_Uri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::NamespaceManager_XmlBaseWriter_Namespace::get_UriDictionaryString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(), { "get_UriDictionaryString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseWriter_Namespace::set_UriDictionaryString(::System::Xml::XmlDictionaryString* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>(),
                                                                                         { "set_UriDictionaryString", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* System::Xml::NamespaceManager_XmlBaseWriter_Namespace::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>());
}
// Ctor Parameters []
constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace::NamespaceManager_XmlBaseWriter_Namespace() {}
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)()>(&::System::Xml::XmlBaseWriter_NamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x610f274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter_NamespaceManager::*)()>(&::System::Xml::XmlBaseWriter_NamespaceManager::get_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "get_XmlLang", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlBaseWriter_NamespaceManager::*)()>(&::System::Xml::XmlBaseWriter_NamespaceManager::get_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "get_XmlSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)()>(&::System::Xml::XmlBaseWriter_NamespaceManager::Clear)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x610f360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)()>(&::System::Xml::XmlBaseWriter_NamespaceManager::Close)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x610f418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.DeclareNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::System::Xml::XmlNodeWriter*)>(
    &::System::Xml::XmlBaseWriter_NamespaceManager::DeclareNamespaces)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x610f468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "DeclareNamespaces", {}, { ::i2c::type_of<::System::Xml::XmlNodeWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.EnterScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)()>(&::System::Xml::XmlBaseWriter_NamespaceManager::EnterScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x610f558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "EnterScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.ExitScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)()>(&::System::Xml::XmlBaseWriter_NamespaceManager::ExitScope)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x610f568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "ExitScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.AddLangAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::StringW)>(&::System::Xml::XmlBaseWriter_NamespaceManager::AddLangAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x610f680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "AddLangAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.AddSpaceAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::System::Xml::XmlSpace)>(
    &::System::Xml::XmlBaseWriter_NamespaceManager::AddSpaceAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x610f818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "AddSpaceAttribute", {}, { ::i2c::type_of<::System::Xml::XmlSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)()>(&::System::Xml::XmlBaseWriter_NamespaceManager::AddAttribute)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x610f6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "AddAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.AddNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter_NamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x610f840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(),
                                                             { "AddNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.AddNamespaceIfNotDeclared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::StringW, ::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter_NamespaceManager::AddNamespaceIfNotDeclared)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x610f9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(),
                                         { "AddNamespaceIfNotDeclared", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.AddNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::StringW, ::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter_NamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x610fa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(),
                                                { "AddNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::StringW)>(&::System::Xml::XmlBaseWriter_NamespaceManager::LookupPrefix)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6110108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.LookupAttributePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::StringW)>(
    &::System::Xml::XmlBaseWriter_NamespaceManager::LookupAttributePrefix)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x61103c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "LookupAttributePrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter_NamespaceManager::*)(::StringW)>(&::System::Xml::XmlBaseWriter_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x610ff20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*> const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_namespaces(::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaces = value;
}
constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_lastNameSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastNameSpace;
}
constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_lastNameSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastNameSpace;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_lastNameSpace(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastNameSpace = value;
}
constexpr int32_t& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_nsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsCount;
}
constexpr int32_t const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_nsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsCount;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_nsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsCount = value;
}
constexpr int32_t& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*> const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_attributes(::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
constexpr int32_t& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr ::System::Xml::XmlSpace& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_space() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr ::System::Xml::XmlSpace const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_space() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_space(::System::Xml::XmlSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___space = value;
}
constexpr ::StringW& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_lang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lang;
}
constexpr ::StringW const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_lang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lang;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_lang(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lang = value;
}
constexpr int32_t& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_namespaceBoundary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceBoundary;
}
constexpr int32_t const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_namespaceBoundary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceBoundary;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_namespaceBoundary(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaceBoundary = value;
}
constexpr int32_t& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_nsTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsTop;
}
constexpr int32_t const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_nsTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsTop;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_nsTop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsTop = value;
}
constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_defaultNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultNamespace;
}
constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* const& System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_get_defaultNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultNamespace;
}
constexpr void System::Xml::XmlBaseWriter_NamespaceManager::__cordl_internal_set_defaultNamespace(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultNamespace = value;
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseWriter_NamespaceManager::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "get_XmlLang", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlBaseWriter_NamespaceManager::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "get_XmlSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::DeclareNamespaces(::System::Xml::XmlNodeWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "DeclareNamespaces", {}, { ::i2c::type_of<::System::Xml::XmlNodeWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::EnterScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "EnterScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::ExitScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "ExitScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::AddLangAttribute(::StringW lang) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "AddLangAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lang);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::AddSpaceAttribute(::System::Xml::XmlSpace space) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "AddSpaceAttribute", {}, { ::i2c::type_of<::System::Xml::XmlSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::AddAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "AddAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseWriter_NamespaceManager::AddNamespace(::StringW uri, ::System::Xml::XmlDictionaryString* uriDictionaryString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(),
                                                           { "AddNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uri, uriDictionaryString);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::AddNamespaceIfNotDeclared(::StringW prefix, ::StringW uri, ::System::Xml::XmlDictionaryString* uriDictionaryString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(),
                                       { "AddNamespaceIfNotDeclared", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, uri, uriDictionaryString);
}
inline void System::Xml::XmlBaseWriter_NamespaceManager::AddNamespace(::StringW prefix, ::StringW uri, ::System::Xml::XmlDictionaryString* uriDictionaryString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(),
                                              { "AddNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, uri, uriDictionaryString);
}
inline ::StringW System::Xml::XmlBaseWriter_NamespaceManager::LookupPrefix(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline ::StringW System::Xml::XmlBaseWriter_NamespaceManager::LookupAttributePrefix(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "LookupAttributePrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline ::StringW System::Xml::XmlBaseWriter_NamespaceManager::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter_NamespaceManager*>(), { "LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::System::Xml::XmlBaseWriter_NamespaceManager* System::Xml::XmlBaseWriter_NamespaceManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseWriter_NamespaceManager*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseWriter_NamespaceManager::XmlBaseWriter_NamespaceManager() {}
//  Writing Method size for method: ::System::Xml::XmlBaseWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x610a504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.SetOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::System::Xml::XmlStreamNodeWriter*)>(&::System::Xml::XmlBaseWriter::SetOutput)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x610a568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "SetOutput", {}, { ::i2c::type_of<::System::Xml::XmlStreamNodeWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::Flush)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x610a5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::Close)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x610a648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.get_IsClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::get_IsClosed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x610a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "get_IsClosed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.ThrowClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::ThrowClosed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x610a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "ThrowClosed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.get_BinHexEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::BinHexEncoding* (*)()>(&::System::Xml::XmlBaseWriter::get_BinHexEncoding)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x610a78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "get_BinHexEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::get_XmlLang)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610a860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::get_XmlSpace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610a878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.get_WriteState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::WriteState (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610a890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x610a898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x610acd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.StartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::by_ref<::StringW>, ::StringW, ::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter::StartAttribute)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x610aea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
            { "StartAttribute", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlBaseWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x610b5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x610b614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x610b698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::WriteComment)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x610baac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x610bd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::WriteCData)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x610bea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlBaseWriter::WriteDocType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x610c0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.StartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::by_ref<::StringW>, ::StringW, ::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter::StartElement)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x610c17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
            { "StartElement", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlBaseWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x610c644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610c68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x610c6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.EnterScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseWriter_Element* (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::EnterScope)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x610c4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "EnterScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.ExitScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::ExitScope)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x610c8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "ExitScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.FlushElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::FlushElement)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x610c94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "FlushElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.StartComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::StartComment)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x610bcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartComment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.EndComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::EndComment)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x610bd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "EndComment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.StartContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::StartContent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x610c048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.StartContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(char16_t)>(&::System::Xml::XmlBaseWriter::StartContent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x610c974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartContent", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.StartContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::StartContent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x610ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartContent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.StartContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseWriter::StartContent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610cb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartContent", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.VerifyWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(char16_t)>(&::System::Xml::XmlBaseWriter::VerifyWhitespace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x610c9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "VerifyWhitespace", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.VerifyWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::VerifyWhitespace)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x610ca98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "VerifyWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.VerifyWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseWriter::VerifyWhitespace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x610cbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
                                                             { "VerifyWhitespace", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.IsWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseWriter::*)(char16_t)>(&::System::Xml::XmlBaseWriter::IsWhitespace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x610cc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "IsWhitespace", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.EndContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::EndContent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x610c0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "EndContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.AutoComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::System::Xml::WriteState)>(&::System::Xml::XmlBaseWriter::AutoComplete)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x610a758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "AutoComplete", {}, { ::i2c::type_of<::System::Xml::WriteState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.EndStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::EndStartElement)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x610ccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "EndStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::LookupPrefix)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x610cce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.GetQualifiedNamePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter::GetQualifiedNamePrefix)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x610cd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
                                                             { "GetQualifiedNamePrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseWriter::WriteQualifiedName)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x610ce5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseWriter::WriteQualifiedName)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x610cfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x610d204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(bool)>(&::System::Xml::XmlBaseWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x610d358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x610d378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.FinishDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::FinishDocument)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x610a700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "FinishDocument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteEndDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::WriteEndDocument)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x610d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x610d51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x610d5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::WriteString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x610d6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseWriter::WriteString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x610d780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseWriter::WriteChars)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x610d858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::WriteRaw)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x610da88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x610db3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(char16_t)>(&::System::Xml::XmlBaseWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x610dd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(char16_t, char16_t)>(&::System::Xml::XmlBaseWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x610de8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x610dfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(int32_t)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610dfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(int64_t)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610e0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(bool)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610e1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::System::Decimal)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x610e284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(float_t)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610e370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(double_t)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610e450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::System::DateTime)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::System::Guid)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x610e610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::System::TimeSpan)>(&::System::Xml::XmlBaseWriter::WriteValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610e708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x610e7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x610ec08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.FlushBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::FlushBase64)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x610ba98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "FlushBase64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.FlushTrailBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)()>(&::System::Xml::XmlBaseWriter::FlushTrailBytes)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x610ecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "FlushTrailBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.EnsureBufferBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseWriter::EnsureBufferBounds)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x610ea94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
                                                             { "EnsureBufferBounds", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.GeneratePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseWriter::GeneratePrefix)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x610aa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "GeneratePrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseWriter.WriteAttributeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseWriter::*)(::StringW)>(&::System::Xml::XmlBaseWriter::WriteAttributeText)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x610d1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "WriteAttributeText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNodeWriter*& System::Xml::XmlBaseWriter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlNodeWriter* const& System::Xml::XmlBaseWriter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_writer(::System::Xml::XmlNodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writer = value;
}
constexpr ::System::Xml::XmlBaseWriter_NamespaceManager*& System::Xml::XmlBaseWriter::__cordl_internal_get_nsMgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr ::System::Xml::XmlBaseWriter_NamespaceManager* const& System::Xml::XmlBaseWriter::__cordl_internal_get_nsMgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_nsMgr(::System::Xml::XmlBaseWriter_NamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsMgr = value;
}
constexpr ::ArrayW<::System::Xml::XmlBaseWriter_Element*>& System::Xml::XmlBaseWriter::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::ArrayW<::System::Xml::XmlBaseWriter_Element*> const& System::Xml::XmlBaseWriter::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_elements(::ArrayW<::System::Xml::XmlBaseWriter_Element*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elements = value;
}
constexpr int32_t& System::Xml::XmlBaseWriter::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::XmlBaseWriter::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::StringW& System::Xml::XmlBaseWriter::__cordl_internal_get_attributeLocalName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeLocalName;
}
constexpr ::StringW const& System::Xml::XmlBaseWriter::__cordl_internal_get_attributeLocalName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeLocalName;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_attributeLocalName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeLocalName = value;
}
constexpr ::StringW& System::Xml::XmlBaseWriter::__cordl_internal_get_attributeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeValue;
}
constexpr ::StringW const& System::Xml::XmlBaseWriter::__cordl_internal_get_attributeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeValue;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_attributeValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeValue = value;
}
constexpr bool& System::Xml::XmlBaseWriter::__cordl_internal_get_isXmlAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isXmlAttribute;
}
constexpr bool const& System::Xml::XmlBaseWriter::__cordl_internal_get_isXmlAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isXmlAttribute;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_isXmlAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isXmlAttribute = value;
}
constexpr bool& System::Xml::XmlBaseWriter::__cordl_internal_get_isXmlnsAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isXmlnsAttribute;
}
constexpr bool const& System::Xml::XmlBaseWriter::__cordl_internal_get_isXmlnsAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isXmlnsAttribute;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_isXmlnsAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isXmlnsAttribute = value;
}
constexpr ::System::Xml::WriteState& System::Xml::XmlBaseWriter::__cordl_internal_get_writeState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeState;
}
constexpr ::System::Xml::WriteState const& System::Xml::XmlBaseWriter::__cordl_internal_get_writeState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeState;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_writeState(::System::Xml::WriteState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeState = value;
}
constexpr ::System::Xml::XmlBaseWriter_DocumentState& System::Xml::XmlBaseWriter::__cordl_internal_get_documentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentState;
}
constexpr ::System::Xml::XmlBaseWriter_DocumentState const& System::Xml::XmlBaseWriter::__cordl_internal_get_documentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documentState;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_documentState(::System::Xml::XmlBaseWriter_DocumentState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___documentState = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlBaseWriter::__cordl_internal_get_trailBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailBytes;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlBaseWriter::__cordl_internal_get_trailBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailBytes;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_trailBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailBytes = value;
}
constexpr int32_t& System::Xml::XmlBaseWriter::__cordl_internal_get_trailByteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailByteCount;
}
constexpr int32_t const& System::Xml::XmlBaseWriter::__cordl_internal_get_trailByteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailByteCount;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_trailByteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailByteCount = value;
}
constexpr ::System::Xml::XmlStreamNodeWriter*& System::Xml::XmlBaseWriter::__cordl_internal_get_nodeWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeWriter;
}
constexpr ::System::Xml::XmlStreamNodeWriter* const& System::Xml::XmlBaseWriter::__cordl_internal_get_nodeWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeWriter;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_nodeWriter(::System::Xml::XmlStreamNodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodeWriter = value;
}
constexpr ::System::Xml::XmlSigningNodeWriter*& System::Xml::XmlBaseWriter::__cordl_internal_get_signingWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingWriter;
}
constexpr ::System::Xml::XmlSigningNodeWriter* const& System::Xml::XmlBaseWriter::__cordl_internal_get_signingWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingWriter;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_signingWriter(::System::Xml::XmlSigningNodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signingWriter = value;
}
constexpr ::System::Xml::XmlUTF8NodeWriter*& System::Xml::XmlBaseWriter::__cordl_internal_get_textFragmentWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textFragmentWriter;
}
constexpr ::System::Xml::XmlUTF8NodeWriter* const& System::Xml::XmlBaseWriter::__cordl_internal_get_textFragmentWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textFragmentWriter;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_textFragmentWriter(::System::Xml::XmlUTF8NodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textFragmentWriter = value;
}
constexpr ::System::Xml::XmlNodeWriter*& System::Xml::XmlBaseWriter::__cordl_internal_get_oldWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldWriter;
}
constexpr ::System::Xml::XmlNodeWriter* const& System::Xml::XmlBaseWriter::__cordl_internal_get_oldWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldWriter;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_oldWriter(::System::Xml::XmlNodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oldWriter = value;
}
constexpr ::System::IO::Stream*& System::Xml::XmlBaseWriter::__cordl_internal_get_oldStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldStream;
}
constexpr ::System::IO::Stream* const& System::Xml::XmlBaseWriter::__cordl_internal_get_oldStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldStream;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_oldStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oldStream = value;
}
constexpr bool& System::Xml::XmlBaseWriter::__cordl_internal_get_inList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inList;
}
constexpr bool const& System::Xml::XmlBaseWriter::__cordl_internal_get_inList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inList;
}
constexpr void System::Xml::XmlBaseWriter::__cordl_internal_set_inList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inList = value;
}
inline void System::Xml::XmlBaseWriter::setStaticF_binhexEncoding(::System::Text::BinHexEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::BinHexEncoding*, "binhexEncoding", ::System::Xml::XmlBaseWriter*>(std::forward<::System::Text::BinHexEncoding*>(value));
}
inline ::System::Text::BinHexEncoding* System::Xml::XmlBaseWriter::getStaticF_binhexEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::BinHexEncoding*, "binhexEncoding", ::System::Xml::XmlBaseWriter*>();
}
inline void System::Xml::XmlBaseWriter::setStaticF_prefixes(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "prefixes", ::System::Xml::XmlBaseWriter*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::XmlBaseWriter::getStaticF_prefixes() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "prefixes", ::System::Xml::XmlBaseWriter*>();
}
inline void System::Xml::XmlBaseWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::SetOutput(::System::Xml::XmlStreamNodeWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "SetOutput", {}, { ::i2c::type_of<::System::Xml::XmlStreamNodeWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::XmlBaseWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseWriter::get_IsClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "get_IsClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::ThrowClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "ThrowClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::BinHexEncoding* System::Xml::XmlBaseWriter::get_BinHexEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "get_BinHexEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::BinHexEncoding*>(nullptr, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseWriter::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlBaseWriter::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::System::Xml::WriteState System::Xml::XmlBaseWriter::get_WriteState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WriteState>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::WriteXmlnsAttribute(::StringW prefix, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlBaseWriter::WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlBaseWriter::StartAttribute(::by_ref<::StringW> prefix, ::StringW localName, ::StringW ns, ::System::Xml::XmlDictionaryString* xNs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
          { "StartAttribute", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns, xNs);
}
inline void System::Xml::XmlBaseWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void System::Xml::XmlBaseWriter::WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void System::Xml::XmlBaseWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlBaseWriter::WriteFullEndElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::XmlBaseWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlBaseWriter::StartElement(::by_ref<::StringW> prefix, ::StringW localName, ::StringW ns, ::System::Xml::XmlDictionaryString* xNs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
          { "StartElement", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns, xNs);
}
inline void System::Xml::XmlBaseWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void System::Xml::XmlBaseWriter::WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void System::Xml::XmlBaseWriter::WriteEndElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseWriter_Element* System::Xml::XmlBaseWriter::EnterScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "EnterScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseWriter_Element*>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::ExitScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "ExitScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::FlushElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "FlushElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::StartComment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartComment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::EndComment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "EndComment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::StartContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::StartContent(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartContent", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlBaseWriter::StartContent(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartContent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Xml::XmlBaseWriter::StartContent(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "StartContent", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlBaseWriter::VerifyWhitespace(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "VerifyWhitespace", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlBaseWriter::VerifyWhitespace(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "VerifyWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Xml::XmlBaseWriter::VerifyWhitespace(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
                                                           { "VerifyWhitespace", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline bool System::Xml::XmlBaseWriter::IsWhitespace(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "IsWhitespace", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch);
}
inline void System::Xml::XmlBaseWriter::EndContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "EndContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::AutoComplete(::System::Xml::WriteState writeState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "AutoComplete", {}, { ::i2c::type_of<::System::Xml::WriteState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writeState);
}
inline void System::Xml::XmlBaseWriter::EndStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "EndStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseWriter::LookupPrefix(::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline ::StringW System::Xml::XmlBaseWriter::GetQualifiedNamePrefix(::StringW namespaceUri, ::System::Xml::XmlDictionaryString* xNs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "GetQualifiedNamePrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceUri, xNs);
}
inline void System::Xml::XmlBaseWriter::WriteQualifiedName(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, namespaceUri);
}
inline void System::Xml::XmlBaseWriter::WriteQualifiedName(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, namespaceUri);
}
inline void System::Xml::XmlBaseWriter::WriteStartDocument() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::WriteStartDocument(bool standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlBaseWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void System::Xml::XmlBaseWriter::FinishDocument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "FinishDocument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::WriteEndDocument() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::XmlBaseWriter::WriteWhitespace(::StringW whitespace) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, whitespace);
}
inline void System::Xml::XmlBaseWriter::WriteString(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteString(::System::Xml::XmlDictionaryString* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteChars(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlBaseWriter::WriteRaw(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteRaw(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlBaseWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlBaseWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlBaseWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseWriter::WriteBase64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::Xml::XmlBaseWriter::WriteBinHex(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::Xml::XmlBaseWriter::FlushBase64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "FlushBase64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::FlushTrailBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "FlushTrailBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseWriter::EnsureBufferBounds(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(),
                                                           { "EnsureBufferBounds", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::StringW System::Xml::XmlBaseWriter::GeneratePrefix(::StringW ns, ::System::Xml::XmlDictionaryString* xNs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "GeneratePrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns, xNs);
}
inline void System::Xml::XmlBaseWriter::WriteAttributeText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseWriter*>(), { "WriteAttributeText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseWriter* System::Xml::XmlBaseWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseWriter*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseWriter::XmlBaseWriter() {}
