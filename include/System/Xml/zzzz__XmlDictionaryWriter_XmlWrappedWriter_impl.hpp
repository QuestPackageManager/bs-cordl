#pragma once
// IWYU pragma private; include "System\Xml\XmlDictionaryWriter_XmlWrappedWriter.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_XmlWrappedWriter_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::System::Xml::XmlWriter*)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6124764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(&::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(&::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61278b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::LookupPrefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61278d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::System::Xml::XmlReader*, bool)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x61278f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612791c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612793c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteCData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612795c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(char16_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612797c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612799c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteComment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61279bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61279dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61279f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteEndDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteEndDocument)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6127a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6127a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6127a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::System::Xml::XmlReader*, bool)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteNode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6127aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteQualifiedName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6127b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6127b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(bool)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6127bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.get_WriteState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::WriteState (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(char16_t, char16_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(bool)>(&::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6127c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::System::DateTime)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(double_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(int32_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(int64_t)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6127d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::*)()>(
    &::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 31 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWriter*& GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlWriter* const& GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_set_writer(::System::Xml::XmlWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writer = value;
}
constexpr int32_t& GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr int32_t& GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr int32_t const& GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::__cordl_internal_set_prefix(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefix = value;
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::_ctor(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::LookupPrefix(::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceUri);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteAttributes(::System::Xml::XmlReader* reader, bool defattr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, defattr);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteCData(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteComment(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteEndAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteEndDocument() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteEndElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteFullEndElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteNode(::System::Xml::XmlReader* reader, bool defattr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, defattr);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteQualifiedName(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, namespaceUri);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteRaw(::StringW data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteStartDocument() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteStartDocument(bool standalone) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline ::System::Xml::WriteState GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::get_WriteState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WriteState>(this, ___internal_method);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteString(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteWhitespace(::StringW whitespace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, whitespace);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue(double_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteValue(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::WriteXmlnsAttribute(::StringW prefix, ::StringW namespaceUri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, namespaceUri);
}
inline ::StringW GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::get_XmlLang() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::get_XmlSpace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter* GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::New_ctor(::System::Xml::XmlWriter* writer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter*>(writer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlDictionaryWriter_XmlWrappedWriter::XmlDictionaryWriter_XmlWrappedWriter() {}
