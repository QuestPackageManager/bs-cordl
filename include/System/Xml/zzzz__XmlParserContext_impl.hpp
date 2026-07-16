#pragma once
// IWYU pragma private; include "System/Xml/XmlParserContext.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlParserContext_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlParserContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlParserContext::*)(::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::StringW,
                                                                                                 ::System::Xml::XmlSpace)>(&::System::Xml::XmlParserContext::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6289748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { ".ctor",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(),
                                                                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlParserContext::*)(::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::StringW, ::StringW, ::StringW,
                                                                                                 ::StringW, ::StringW, ::StringW, ::System::Xml::XmlSpace)>(&::System::Xml::XmlParserContext::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6289794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlParserContext::*)(::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::StringW, ::StringW, ::StringW,
                                                                                                 ::StringW, ::StringW, ::StringW, ::System::Xml::XmlSpace, ::System::Text::Encoding*)>(
    &::System::Xml::XmlParserContext::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x62897c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlSpace>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_NameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_NamespaceManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNamespaceManager* (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_NamespaceManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_NamespaceManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_DocTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_DocTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_DocTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_PublicId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_PublicId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_PublicId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_SystemId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_SystemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_SystemId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_BaseURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_BaseURI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_InternalSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_InternalSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_InternalSubset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_XmlLang", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_XmlSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6289980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlParserContext.get_HasDtdInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlParserContext::*)()>(&::System::Xml::XmlParserContext::get_HasDtdInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6289988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_HasDtdInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlParserContext::__cordl_internal_get__nt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nt;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XmlParserContext::__cordl_internal_get__nt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nt;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__nt(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nt = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::XmlParserContext::__cordl_internal_get__nsMgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nsMgr;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::XmlParserContext::__cordl_internal_get__nsMgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nsMgr;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__nsMgr(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nsMgr = value;
}
constexpr ::StringW& System::Xml::XmlParserContext::__cordl_internal_get__docTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____docTypeName;
}
constexpr ::StringW const& System::Xml::XmlParserContext::__cordl_internal_get__docTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____docTypeName;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__docTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____docTypeName = value;
}
constexpr ::StringW& System::Xml::XmlParserContext::__cordl_internal_get__pubId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pubId;
}
constexpr ::StringW const& System::Xml::XmlParserContext::__cordl_internal_get__pubId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pubId;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__pubId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pubId = value;
}
constexpr ::StringW& System::Xml::XmlParserContext::__cordl_internal_get__sysId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sysId;
}
constexpr ::StringW const& System::Xml::XmlParserContext::__cordl_internal_get__sysId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sysId;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__sysId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sysId = value;
}
constexpr ::StringW& System::Xml::XmlParserContext::__cordl_internal_get__internalSubset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalSubset;
}
constexpr ::StringW const& System::Xml::XmlParserContext::__cordl_internal_get__internalSubset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalSubset;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__internalSubset(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____internalSubset = value;
}
constexpr ::StringW& System::Xml::XmlParserContext::__cordl_internal_get__xmlLang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlLang;
}
constexpr ::StringW const& System::Xml::XmlParserContext::__cordl_internal_get__xmlLang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlLang;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__xmlLang(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlLang = value;
}
constexpr ::System::Xml::XmlSpace& System::Xml::XmlParserContext::__cordl_internal_get__xmlSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlSpace;
}
constexpr ::System::Xml::XmlSpace const& System::Xml::XmlParserContext::__cordl_internal_get__xmlSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlSpace;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__xmlSpace(::System::Xml::XmlSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlSpace = value;
}
constexpr ::StringW& System::Xml::XmlParserContext::__cordl_internal_get__baseURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseURI;
}
constexpr ::StringW const& System::Xml::XmlParserContext::__cordl_internal_get__baseURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseURI;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__baseURI(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseURI = value;
}
constexpr ::System::Text::Encoding*& System::Xml::XmlParserContext::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Xml::XmlParserContext::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Xml::XmlParserContext::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
inline void System::Xml::XmlParserContext::_ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(),
                                                                                                ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nt, nsMgr, xmlLang, xmlSpace);
}
inline void System::Xml::XmlParserContext::_ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId,
                                                 ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nt, nsMgr, docTypeName, pubId, sysId, internalSubset, baseURI, xmlLang, xmlSpace);
}
inline void System::Xml::XmlParserContext::_ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId,
                                                 ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace, ::System::Text::Encoding* enc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlSpace>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nt, nsMgr, docTypeName, pubId, sysId, internalSubset, baseURI, xmlLang, xmlSpace, enc);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlParserContext::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_NameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlParserContext::get_NamespaceManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_NamespaceManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamespaceManager*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlParserContext::get_DocTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_DocTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlParserContext::get_PublicId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_PublicId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlParserContext::get_SystemId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_SystemId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlParserContext::get_BaseURI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_BaseURI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlParserContext::get_InternalSubset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_InternalSubset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlParserContext::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_XmlLang", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlParserContext::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_XmlSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Xml::XmlParserContext::get_Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline bool System::Xml::XmlParserContext::get_HasDtdInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlParserContext*>(), { "get_HasDtdInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlParserContext* System::Xml::XmlParserContext::New_ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW xmlLang,
                                                                                ::System::Xml::XmlSpace xmlSpace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlParserContext*>(nt, nsMgr, xmlLang, xmlSpace));
}
inline ::System::Xml::XmlParserContext* System::Xml::XmlParserContext::New_ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW docTypeName, ::StringW pubId,
                                                                                ::StringW sysId, ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlParserContext*>(nt, nsMgr, docTypeName, pubId, sysId, internalSubset, baseURI, xmlLang, xmlSpace));
}
inline ::System::Xml::XmlParserContext* System::Xml::XmlParserContext::New_ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW docTypeName, ::StringW pubId,
                                                                                ::StringW sysId, ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace,
                                                                                ::System::Text::Encoding* enc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlParserContext*>(nt, nsMgr, docTypeName, pubId, sysId, internalSubset, baseURI, xmlLang, xmlSpace, enc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlParserContext::XmlParserContext() {}
