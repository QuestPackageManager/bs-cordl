#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter.hpp"
#include "System/Xml/zzzz__Formatting_impl.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/Xml/zzzz__XmlWriter_impl.hpp"
#include "System/Xml/zzzz__XmlTextWriter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__Formatting_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlTextEncoder_def.hpp"
#include "System/Xml/zzzz__XmlTextWriterBase64Encoder_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlTextWriter_NamespaceState::XmlTextWriter_NamespaceState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriter_NamespaceState::XmlTextWriter_NamespaceState() {}
constexpr ::System::Xml::XmlTextWriter_NamespaceState System::Xml::XmlTextWriter_NamespaceState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlTextWriter_NamespaceState System::Xml::XmlTextWriter_NamespaceState::NotDeclaredButInScope{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlTextWriter_NamespaceState System::Xml::XmlTextWriter_NamespaceState::DeclaredButNotWrittenOut{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlTextWriter_NamespaceState System::Xml::XmlTextWriter_NamespaceState::DeclaredAndWrittenOut{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Xml::XmlTextWriter_TagInfo.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter_TagInfo::*)(int32_t)>(&::System::Xml::XmlTextWriter_TagInfo::Init)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4328474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter_TagInfo>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlTextWriter_TagInfo::Init(int32_t nsTop) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter_TagInfo>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nsTop);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "defaultNs", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultNsState", ty: "::System::Xml::XmlTextWriter_NamespaceState", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "prevNsTop", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefixCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "mixed", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlTextWriter_TagInfo::XmlTextWriter_TagInfo(::StringW name, ::StringW prefix, ::StringW defaultNs, ::System::Xml::XmlTextWriter_NamespaceState defaultNsState,
                                                                      ::System::Xml::XmlSpace xmlSpace, ::StringW xmlLang, int32_t prevNsTop, int32_t prefixCount, bool mixed) noexcept {
  this->name = name;
  this->prefix = prefix;
  this->defaultNs = defaultNs;
  this->defaultNsState = defaultNsState;
  this->xmlSpace = xmlSpace;
  this->xmlLang = xmlLang;
  this->prevNsTop = prevNsTop;
  this->prefixCount = prefixCount;
  this->mixed = mixed;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriter_TagInfo::XmlTextWriter_TagInfo() {}
//  Writing Method size for method: ::System::Xml::XmlTextWriter_Namespace.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter_Namespace::*)(::StringW, ::StringW, bool)>(
    &::System::Xml::XmlTextWriter_Namespace::Set)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x432cac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter_Namespace>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlTextWriter_Namespace::Set(::StringW prefix, ::StringW ns, bool declared) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter_Namespace>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns, declared);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "declared", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlTextWriter_Namespace::XmlTextWriter_Namespace(::StringW prefix, ::StringW ns, bool declared, int32_t prevNsIndex) noexcept {
  this->prefix = prefix;
  this->ns = ns;
  this->declared = declared;
  this->prevNsIndex = prevNsIndex;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriter_Namespace::XmlTextWriter_Namespace() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlTextWriter_SpecialAttr::XmlTextWriter_SpecialAttr(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriter_SpecialAttr::XmlTextWriter_SpecialAttr() {}
constexpr ::System::Xml::XmlTextWriter_SpecialAttr System::Xml::XmlTextWriter_SpecialAttr::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlTextWriter_SpecialAttr System::Xml::XmlTextWriter_SpecialAttr::XmlSpace{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlTextWriter_SpecialAttr System::Xml::XmlTextWriter_SpecialAttr::XmlLang{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlTextWriter_SpecialAttr System::Xml::XmlTextWriter_SpecialAttr::XmlNs{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlTextWriter_State::XmlTextWriter_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriter_State::XmlTextWriter_State() {}
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::Start{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::Prolog{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::PostDTD{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::Element{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::Attribute{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::Content{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::AttrOnly{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::Epilog{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::Error{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XmlTextWriter_State System::Xml::XmlTextWriter_State::Closed{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlTextWriter_Token::XmlTextWriter_Token(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriter_Token::XmlTextWriter_Token() {}
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::PI{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::Doctype{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::Comment{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::CData{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::StartElement{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::EndElement{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::LongEndElement{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::StartAttribute{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::EndAttribute{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::Content{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::Base64{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::RawData{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::Whitespace{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::XmlTextWriter_Token System::Xml::XmlTextWriter_Token::Empty{ static_cast<int32_t>(0xd) };
//  Writing Method size for method: ::System::Xml::XmlTextWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4328350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(
    &::System::Xml::XmlTextWriter::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x43284e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::System::Text::Encoding*)>(&::System::Xml::XmlTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x43285ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::System::IO::TextWriter*)>(&::System::Xml::XmlTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x432862c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.get_BaseStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::get_BaseStream)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x43286c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "get_BaseStream",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.set_Namespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(bool)>(&::System::Xml::XmlTextWriter::set_Namespaces)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4328760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "set_Namespaces",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.set_Formatting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::System::Xml::Formatting)>(&::System::Xml::XmlTextWriter::set_Formatting)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43287d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "set_Formatting", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Formatting>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.set_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(char16_t)>(&::System::Xml::XmlTextWriter::set_QuoteChar)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x43287e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "set_QuoteChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4328874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(bool)>(&::System::Xml::XmlTextWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4328c0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteEndDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::WriteEndDocument)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4328c20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlTextWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x4328e2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlTextWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x4329910;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x432a2e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x432a5cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlTextWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x432a5d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x432aea0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteCData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::WriteCData)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x432af40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::WriteComment)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x432b104;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlTextWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x432b304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x432b630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(char16_t)>(&::System::Xml::XmlTextWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x432b6fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x432b7bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::WriteString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x432b928;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(char16_t, char16_t)>(
    &::System::Xml::XmlTextWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x432b9f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextWriter::WriteChars)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x432babc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x432bb94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x432bc6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x432bd2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteBinHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x432be74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.get_WriteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::WriteState (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x432bf44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::Close)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x432bf68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x432c0a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::LookupPrefix)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x432c0c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.StartDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(int32_t)>(&::System::Xml::XmlTextWriter::StartDocument)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x432887c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "StartDocument", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.AutoComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::System::Xml::XmlTextWriter_Token)>(
    &::System::Xml::XmlTextWriter::AutoComplete)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x4329414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "AutoComplete", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextWriter_Token>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.AutoCompleteAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::AutoCompleteAll)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4328dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "AutoCompleteAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.InternalWriteEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(bool)>(&::System::Xml::XmlTextWriter::InternalWriteEndElement)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x432a2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "InternalWriteEndElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteEndStartTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(bool)>(&::System::Xml::XmlTextWriter::WriteEndStartTag)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x432c2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "WriteEndStartTag",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.WriteEndAttributeQuote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::WriteEndAttributeQuote)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x432c290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "WriteEndAttributeQuote",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.Indent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(bool)>(&::System::Xml::XmlTextWriter::Indent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x432c1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "Indent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.PushNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::StringW, bool)>(&::System::Xml::XmlTextWriter::PushNamespace)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x4329f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "PushNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.AddNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::StringW, bool)>(&::System::Xml::XmlTextWriter::AddNamespace)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x432c930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "AddNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.AddToNamespaceHashtable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(int32_t)>(&::System::Xml::XmlTextWriter::AddToNamespaceHashtable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x432cae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "AddToNamespaceHashtable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.PopNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(int32_t, int32_t)>(&::System::Xml::XmlTextWriter::PopNamespaces)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x432c64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "PopNamespaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.GeneratePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::GeneratePrefix)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x432ad8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "GeneratePrefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.InternalWriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlTextWriter::InternalWriteProcessingInstruction)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x432b534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "InternalWriteProcessingInstruction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::LookupNamespace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4329db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.LookupNamespaceInCurrentScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::LookupNamespaceInCurrentScope)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x432ac60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "LookupNamespaceInCurrentScope",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.FindPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextWriter::*)(::StringW)>(&::System::Xml::XmlTextWriter::FindPrefix)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4329e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "FindPrefix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.ValidateName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, bool)>(&::System::Xml::XmlTextWriter::ValidateName)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x432925c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "ValidateName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.HandleSpecialAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::HandleSpecialAttribute)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x432c720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "HandleSpecialAttribute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.VerifyPrefixXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlTextWriter::VerifyPrefixXml)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x432a188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "VerifyPrefixXml", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.PushStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::PushStack)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4329ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "PushStack",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriter.FlushEncoders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextWriter::*)()>(&::System::Xml::XmlTextWriter::FlushEncoders)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x432c628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "FlushEncoders",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::IO::TextWriter*& System::Xml::XmlTextWriter::__cordl_internal_get_textWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textWriter;
}
constexpr ::System::IO::TextWriter* const& System::Xml::XmlTextWriter::__cordl_internal_get_textWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textWriter;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_textWriter(::System::IO::TextWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlTextEncoder*& System::Xml::XmlTextWriter::__cordl_internal_get_xmlEncoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlEncoder;
}
constexpr ::System::Xml::XmlTextEncoder* const& System::Xml::XmlTextWriter::__cordl_internal_get_xmlEncoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlEncoder;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_xmlEncoder(::System::Xml::XmlTextEncoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlEncoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::Xml::XmlTextWriter::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::System::Text::Encoding* const& System::Xml::XmlTextWriter::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Formatting& System::Xml::XmlTextWriter::__cordl_internal_get_formatting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatting;
}
constexpr ::System::Xml::Formatting const& System::Xml::XmlTextWriter::__cordl_internal_get_formatting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatting;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_formatting(::System::Xml::Formatting value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___formatting = value;
}
constexpr bool& System::Xml::XmlTextWriter::__cordl_internal_get_indented() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indented;
}
constexpr bool const& System::Xml::XmlTextWriter::__cordl_internal_get_indented() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indented;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_indented(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indented = value;
}
constexpr int32_t& System::Xml::XmlTextWriter::__cordl_internal_get_indentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentation;
}
constexpr int32_t const& System::Xml::XmlTextWriter::__cordl_internal_get_indentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentation;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_indentation(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentation = value;
}
constexpr char16_t& System::Xml::XmlTextWriter::__cordl_internal_get_indentChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentChar;
}
constexpr char16_t const& System::Xml::XmlTextWriter::__cordl_internal_get_indentChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentChar;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_indentChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentChar = value;
}
constexpr ::ArrayW<::System::Xml::XmlTextWriter_TagInfo, ::Array<::System::Xml::XmlTextWriter_TagInfo>*>& System::Xml::XmlTextWriter::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::ArrayW<::System::Xml::XmlTextWriter_TagInfo, ::Array<::System::Xml::XmlTextWriter_TagInfo>*> const& System::Xml::XmlTextWriter::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_stack(::ArrayW<::System::Xml::XmlTextWriter_TagInfo, ::Array<::System::Xml::XmlTextWriter_TagInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlTextWriter::__cordl_internal_get_top() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr int32_t const& System::Xml::XmlTextWriter::__cordl_internal_get_top() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_top(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___top = value;
}
constexpr ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>& System::Xml::XmlTextWriter::__cordl_internal_get_stateTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateTable;
}
constexpr ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> const& System::Xml::XmlTextWriter::__cordl_internal_get_stateTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateTable;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_stateTable(::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlTextWriter_State& System::Xml::XmlTextWriter::__cordl_internal_get_currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr ::System::Xml::XmlTextWriter_State const& System::Xml::XmlTextWriter::__cordl_internal_get_currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_currentState(::System::Xml::XmlTextWriter_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentState = value;
}
constexpr ::System::Xml::XmlTextWriter_Token& System::Xml::XmlTextWriter::__cordl_internal_get_lastToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastToken;
}
constexpr ::System::Xml::XmlTextWriter_Token const& System::Xml::XmlTextWriter::__cordl_internal_get_lastToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastToken;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_lastToken(::System::Xml::XmlTextWriter_Token value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastToken = value;
}
constexpr ::System::Xml::XmlTextWriterBase64Encoder*& System::Xml::XmlTextWriter::__cordl_internal_get_base64Encoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base64Encoder;
}
constexpr ::System::Xml::XmlTextWriterBase64Encoder* const& System::Xml::XmlTextWriter::__cordl_internal_get_base64Encoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base64Encoder;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_base64Encoder(::System::Xml::XmlTextWriterBase64Encoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___base64Encoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr char16_t& System::Xml::XmlTextWriter::__cordl_internal_get_quoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quoteChar;
}
constexpr char16_t const& System::Xml::XmlTextWriter::__cordl_internal_get_quoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quoteChar;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_quoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quoteChar = value;
}
constexpr char16_t& System::Xml::XmlTextWriter::__cordl_internal_get_curQuoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curQuoteChar;
}
constexpr char16_t const& System::Xml::XmlTextWriter::__cordl_internal_get_curQuoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curQuoteChar;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_curQuoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curQuoteChar = value;
}
constexpr bool& System::Xml::XmlTextWriter::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr bool const& System::Xml::XmlTextWriter::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_namespaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaces = value;
}
constexpr ::System::Xml::XmlTextWriter_SpecialAttr& System::Xml::XmlTextWriter::__cordl_internal_get_specialAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___specialAttr;
}
constexpr ::System::Xml::XmlTextWriter_SpecialAttr const& System::Xml::XmlTextWriter::__cordl_internal_get_specialAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___specialAttr;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_specialAttr(::System::Xml::XmlTextWriter_SpecialAttr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___specialAttr = value;
}
constexpr ::StringW& System::Xml::XmlTextWriter::__cordl_internal_get_prefixForXmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixForXmlNs;
}
constexpr ::StringW const& System::Xml::XmlTextWriter::__cordl_internal_get_prefixForXmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixForXmlNs;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_prefixForXmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefixForXmlNs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextWriter::__cordl_internal_get_flush() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flush;
}
constexpr bool const& System::Xml::XmlTextWriter::__cordl_internal_get_flush() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flush;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_flush(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flush = value;
}
constexpr ::ArrayW<::System::Xml::XmlTextWriter_Namespace, ::Array<::System::Xml::XmlTextWriter_Namespace>*>& System::Xml::XmlTextWriter::__cordl_internal_get_nsStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsStack;
}
constexpr ::ArrayW<::System::Xml::XmlTextWriter_Namespace, ::Array<::System::Xml::XmlTextWriter_Namespace>*> const& System::Xml::XmlTextWriter::__cordl_internal_get_nsStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsStack;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_nsStack(::ArrayW<::System::Xml::XmlTextWriter_Namespace, ::Array<::System::Xml::XmlTextWriter_Namespace>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlTextWriter::__cordl_internal_get_nsTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsTop;
}
constexpr int32_t const& System::Xml::XmlTextWriter::__cordl_internal_get_nsTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsTop;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_nsTop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsTop = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& System::Xml::XmlTextWriter::__cordl_internal_get_nsHashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsHashtable;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& System::Xml::XmlTextWriter::__cordl_internal_get_nsHashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsHashtable;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_nsHashtable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsHashtable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlTextWriter::__cordl_internal_get_useNsHashtable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNsHashtable;
}
constexpr bool const& System::Xml::XmlTextWriter::__cordl_internal_get_useNsHashtable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useNsHashtable;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_useNsHashtable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useNsHashtable = value;
}
constexpr ::System::Xml::XmlCharType& System::Xml::XmlTextWriter::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::XmlTextWriter::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::XmlTextWriter::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
inline void System::Xml::XmlTextWriter::setStaticF_stateName(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "stateName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::XmlTextWriter::getStaticF_stateName() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "stateName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get>();
}
inline void System::Xml::XmlTextWriter::setStaticF_tokenName(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "tokenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::XmlTextWriter::getStaticF_tokenName() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "tokenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get>();
}
inline void System::Xml::XmlTextWriter::setStaticF_stateTableDefault(::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>, "stateTableDefault",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get>(
      std::forward<::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>>(value));
}
inline ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> System::Xml::XmlTextWriter::getStaticF_stateTableDefault() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>, "stateTableDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get>();
}
inline void System::Xml::XmlTextWriter::setStaticF_stateTableDocument(::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>, "stateTableDocument",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get>(
      std::forward<::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>>(value));
}
inline ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> System::Xml::XmlTextWriter::getStaticF_stateTableDocument() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>, "stateTableDocument",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get>();
}
inline void System::Xml::XmlTextWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::_ctor(::System::IO::Stream* w, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, w, encoding);
}
inline void System::Xml::XmlTextWriter::_ctor(::StringW filename, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filename, encoding);
}
inline void System::Xml::XmlTextWriter::_ctor(::System::IO::TextWriter* w) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, w);
}
inline ::System::IO::Stream* System::Xml::XmlTextWriter::get_BaseStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "get_BaseStream",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::set_Namespaces(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "set_Namespaces", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextWriter::set_Formatting(::System::Xml::Formatting value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "set_Formatting", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Formatting>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextWriter::set_QuoteChar(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "set_QuoteChar", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextWriter::WriteStartDocument() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::WriteStartDocument(bool standalone) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlTextWriter::WriteEndDocument() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlTextWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlTextWriter::WriteEndElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::WriteFullEndElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlTextWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlTextWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlTextWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, text);
}
inline void System::Xml::XmlTextWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlTextWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Xml::XmlTextWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ws);
}
inline void System::Xml::XmlTextWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlTextWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlTextWriter::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlTextWriter::WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlTextWriter::WriteRaw(::StringW data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void System::Xml::XmlTextWriter::WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlTextWriter::WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline ::System::Xml::WriteState System::Xml::XmlTextWriter::get_WriteState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WriteState, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextWriter::LookupPrefix(::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ns);
}
inline void System::Xml::XmlTextWriter::StartDocument(int32_t standalone) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "StartDocument", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlTextWriter::AutoComplete(::System::Xml::XmlTextWriter_Token token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "AutoComplete", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextWriter_Token>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void System::Xml::XmlTextWriter::AutoCompleteAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "AutoCompleteAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::InternalWriteEndElement(bool longFormat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "InternalWriteEndElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, longFormat);
}
inline void System::Xml::XmlTextWriter::WriteEndStartTag(bool empty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "WriteEndStartTag",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, empty);
}
inline void System::Xml::XmlTextWriter::WriteEndAttributeQuote() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "WriteEndAttributeQuote",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::Indent(bool beforeEndElement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "Indent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beforeEndElement);
}
inline void System::Xml::XmlTextWriter::PushNamespace(::StringW prefix, ::StringW ns, bool declared) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "PushNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns, declared);
}
inline void System::Xml::XmlTextWriter::AddNamespace(::StringW prefix, ::StringW ns, bool declared) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "AddNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns, declared);
}
inline void System::Xml::XmlTextWriter::AddToNamespaceHashtable(int32_t namespaceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "AddToNamespaceHashtable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, namespaceIndex);
}
inline void System::Xml::XmlTextWriter::PopNamespaces(int32_t indexFrom, int32_t indexTo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "PopNamespaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFrom, indexTo);
}
inline ::StringW System::Xml::XmlTextWriter::GeneratePrefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "GeneratePrefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::InternalWriteProcessingInstruction(::StringW name, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "InternalWriteProcessingInstruction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, text);
}
inline int32_t System::Xml::XmlTextWriter::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, prefix);
}
inline int32_t System::Xml::XmlTextWriter::LookupNamespaceInCurrentScope(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "LookupNamespaceInCurrentScope",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlTextWriter::FindPrefix(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "FindPrefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ns);
}
inline void System::Xml::XmlTextWriter::ValidateName(::StringW name, bool isNCName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "ValidateName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, isNCName);
}
inline void System::Xml::XmlTextWriter::HandleSpecialAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "HandleSpecialAttribute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::VerifyPrefixXml(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "VerifyPrefixXml", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlTextWriter::PushStack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "PushStack",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextWriter::FlushEncoders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextWriter*>::get(), "FlushEncoders",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlTextWriter* System::Xml::XmlTextWriter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextWriter*>());
}
inline ::System::Xml::XmlTextWriter* System::Xml::XmlTextWriter::New_ctor(::System::IO::Stream* w, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextWriter*>(w, encoding));
}
inline ::System::Xml::XmlTextWriter* System::Xml::XmlTextWriter::New_ctor(::StringW filename, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextWriter*>(filename, encoding));
}
inline ::System::Xml::XmlTextWriter* System::Xml::XmlTextWriter::New_ctor(::System::IO::TextWriter* w) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextWriter*>(w));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriter::XmlTextWriter() {}
