#pragma once
// IWYU pragma private; include "System\Xml\XmlDictionaryReader_XmlWrappedReader.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_XmlWrappedReader_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::System::Xml::XmlReader*, ::System::Xml::XmlNamespaceManager*)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61205a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612389c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61238bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_CanReadValueChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_CanReadValueChunk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61238dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61238fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_Depth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x612392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_EOF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(int32_t)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61239a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61239c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61239e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::IsStartElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6123a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(int32_t)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_Name)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6123b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6123b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_NameTable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_NodeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6123b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_Prefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6123b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadInnerXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadInnerXml)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadEndElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_ReadState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadState (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_ReadState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6123cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadValueChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadValueChunk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_ValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6123dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsLong)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.ReadContentAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6123f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(&::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::HasLineInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6123f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), { "HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_LineNumber)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6124018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), { "get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::*)()>(
    &::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_LinePosition)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x61240d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), { "get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlReader* const& GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::__cordl_internal_get_nsMgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr ::System::Xml::XmlNamespaceManager* const& GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::__cordl_internal_get_nsMgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr void GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::__cordl_internal_set_nsMgr(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsMgr = value;
}
inline void GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* nsMgr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, nsMgr);
}
inline int32_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_AttributeCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_BaseURI() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_CanReadValueChunk() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_Depth() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_EOF() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::GetAttribute(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::GetAttribute(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::GetAttribute(::StringW name, ::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, namespaceUri);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_IsDefault() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_IsEmptyElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::IsStartElement(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, namespaceUri);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_LocalName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::LookupNamespace(::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceUri);
}
inline void GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToAttribute(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToAttribute(::StringW name, ::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, namespaceUri);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToFirstAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::MoveToNextAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_NamespaceURI() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_NameTable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_NodeType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_Prefix() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline char16_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_QuoteChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::Read() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadAttributeValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadInnerXml() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadEndElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::ReadState GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_ReadState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ResolveEntity() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_XmlLang() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_XmlSpace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline int32_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsBase64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsBinHex(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadValueChunk(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, offset, count);
}
inline ::System::Type* GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_ValueType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsBoolean() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsDateTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Decimal GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsDecimal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline double_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsDouble() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsInt() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsLong() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsFloat() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAsString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::ReadContentAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* namespaceResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, namespaceResolver);
}
inline bool GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), { "HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), { "get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(), { "get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader* GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::New_ctor(::System::Xml::XmlReader* reader,
                                                                                                                                ::System::Xml::XmlNamespaceManager* nsMgr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader*>(reader, nsMgr));
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader::XmlDictionaryReader_XmlWrappedReader() {}
