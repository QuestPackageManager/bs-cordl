#pragma once
#include "Mono/Xml/zzzz__SmallXmlParser_impl.hpp"
#include "Mono/Xml/zzzz__SecurityParser_def.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
//  Writing Method size for method: ::Mono::Xml::SecurityParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)()>(&::Mono::Xml::SecurityParser::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2412fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.LoadXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW)>(&::Mono::Xml::SecurityParser::LoadXml)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2413128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "LoadXml", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.ToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (::Mono::Xml::SecurityParser::*)()>(&::Mono::Xml::SecurityParser::ToXml)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241337c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "ToXml",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnStartParsing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)(::Mono::Xml::SmallXmlParser*)>(&::Mono::Xml::SecurityParser::OnStartParsing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2413384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnStartParsing", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW, ::StringW)>(&::Mono::Xml::SecurityParser::OnProcessingInstruction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2413388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnProcessingInstruction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnIgnorableWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW)>(&::Mono::Xml::SecurityParser::OnIgnorableWhitespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x241338c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnIgnorableWhitespace", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW, ::Mono::Xml::__SmallXmlParser__IAttrList*)>(
    &::Mono::Xml::SecurityParser::OnStartElement)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2413390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnStartElement", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::__SmallXmlParser__IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW)>(&::Mono::Xml::SecurityParser::OnEndElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x241360c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnEndElement", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)(::StringW)>(&::Mono::Xml::SecurityParser::OnChars)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2413694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnChars", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SecurityParser.OnEndParsing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SecurityParser::*)(::Mono::Xml::SmallXmlParser*)>(&::Mono::Xml::SecurityParser::OnEndParsing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2413714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnEndParsing", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Mono::Xml::__SmallXmlParser__IContentHandler"
constexpr Mono::Xml::SecurityParser::operator ::Mono::Xml::__SmallXmlParser__IContentHandler*() noexcept {
  return static_cast<::Mono::Xml::__SmallXmlParser__IContentHandler*>(static_cast<void*>(this));
}
constexpr ::System::Security::SecurityElement*& Mono::Xml::SecurityParser::__get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::SecurityElement*> const& Mono::Xml::SecurityParser::__get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr void Mono::Xml::SecurityParser::__set_root(::System::Security::SecurityElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::SecurityElement*& Mono::Xml::SecurityParser::__get_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::SecurityElement*> const& Mono::Xml::SecurityParser::__get_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr void Mono::Xml::SecurityParser::__set_current(::System::Security::SecurityElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Stack*& Mono::Xml::SecurityParser::__get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& Mono::Xml::SecurityParser::__get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void Mono::Xml::SecurityParser::__set_stack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Xml::SecurityParser* Mono::Xml::SecurityParser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Xml::SecurityParser*>());
}
inline void Mono::Xml::SecurityParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SecurityParser::LoadXml(::StringW xml) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "LoadXml", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xml);
}
inline ::System::Security::SecurityElement* Mono::Xml::SecurityParser::ToXml() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "ToXml",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*, false>(this, ___internal_method);
}
inline void Mono::Xml::SecurityParser::OnStartParsing(::Mono::Xml::SmallXmlParser* parser) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnStartParsing", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline void Mono::Xml::SecurityParser::OnProcessingInstruction(::StringW name, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnProcessingInstruction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, text);
}
inline void Mono::Xml::SecurityParser::OnIgnorableWhitespace(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnIgnorableWhitespace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void Mono::Xml::SecurityParser::OnStartElement(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnStartElement", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::__SmallXmlParser__IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, attrs);
}
inline void Mono::Xml::SecurityParser::OnEndElement(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnEndElement", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Mono::Xml::SecurityParser::OnChars(::StringW ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnChars", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void Mono::Xml::SecurityParser::OnEndParsing(::Mono::Xml::SmallXmlParser* parser) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SecurityParser*>::get(), "OnEndParsing", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
// Ctor Parameters []
constexpr ::Mono::Xml::SecurityParser::SecurityParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
