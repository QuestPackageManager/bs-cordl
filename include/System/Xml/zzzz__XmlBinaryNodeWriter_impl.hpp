#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryNodeWriter.hpp"
#include "System/Xml/zzzz__XmlStreamNodeWriter_impl.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeWriter_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeType_def.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeWriter_def.hpp"
#include "System/Xml/zzzz__XmlBinaryWriterSession_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter_AttributeValue.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter_AttributeValue::*)()>(&::System::Xml::XmlBinaryNodeWriter_AttributeValue::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6538c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter_AttributeValue.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter_AttributeValue::*)(::StringW)>(&::System::Xml::XmlBinaryNodeWriter_AttributeValue::WriteText)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x653a300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(), { "WriteText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter_AttributeValue.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter_AttributeValue::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBinaryNodeWriter_AttributeValue::WriteText)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x653a29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(), { "WriteText", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter_AttributeValue.WriteBase64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter_AttributeValue::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryNodeWriter_AttributeValue::WriteBase64Text)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x653a060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(),
            { "WriteBase64Text", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter_AttributeValue.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter_AttributeValue::*)(::System::Xml::XmlBinaryNodeWriter*)>(
    &::System::Xml::XmlBinaryNodeWriter_AttributeValue::WriteTo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x653962c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(), { "WriteTo", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeWriter*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBinaryNodeWriter_AttributeValue::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter_AttributeValue::WriteText(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(), { "WriteText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s);
}
inline void System::Xml::XmlBinaryNodeWriter_AttributeValue::WriteText(::System::Xml::XmlDictionaryString* s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(), { "WriteText", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s);
}
inline void System::Xml::XmlBinaryNodeWriter_AttributeValue::WriteBase64Text(::ArrayW<uint8_t> trailBytes, int32_t trailByteCount, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(),
          { "WriteBase64Text", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, trailBytes, trailByteCount, buffer, offset, count);
}
inline void System::Xml::XmlBinaryNodeWriter_AttributeValue::WriteTo(::System::Xml::XmlBinaryNodeWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter_AttributeValue>(), { "WriteTo", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
// Ctor Parameters [CppParam { name: "captureText", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "captureXText", ty: "::System::Xml::XmlDictionaryString*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "captureStream", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Xml::XmlBinaryNodeWriter_AttributeValue::XmlBinaryNodeWriter_AttributeValue(::StringW captureText, ::System::Xml::XmlDictionaryString* captureXText,
                                                                                                ::System::IO::MemoryStream* captureStream) noexcept {
  this->captureText = captureText;
  this->captureXText = captureXText;
  this->captureStream = captureStream;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBinaryNodeWriter_AttributeValue::XmlBinaryNodeWriter_AttributeValue() {}
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6538be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.SetOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::IO::Stream*, ::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession*,
                                                                                                    bool)>(&::System::Xml::XmlBinaryNodeWriter::SetOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6538c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "SetOutput",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::IXmlDictionary*>(),
                                                                                                            ::i2c::type_of<::System::Xml::XmlBinaryWriterSession*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlBinaryNodeType)>(&::System::Xml::XmlBinaryNodeWriter::WriteNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6538c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteNode", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WroteAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WroteAttributeValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6538c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WroteAttributeValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteTextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlBinaryNodeType)>(&::System::Xml::XmlBinaryNodeWriter::WriteTextNode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6538cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteTextNode", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.GetTextNodeBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlBinaryNodeWriter::*)(int32_t, ::by_ref<int32_t>)>(&::System::Xml::XmlBinaryNodeWriter::GetTextNodeBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6538d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "GetTextNodeBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteTextNodeWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlBinaryNodeType, int32_t)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteTextNodeWithLength)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6538da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                             { "WriteTextNodeWithLength", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteTextNodeWithInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlBinaryNodeType, int64_t)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteTextNodeWithInt64)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6538f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                             { "WriteTextNodeWithInt64", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WriteDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x653905c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6539060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WritePrefixNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlBinaryNodeType, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WritePrefixNode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6539138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WritePrefixNode", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x653915c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEndStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(bool)>(&::System::Xml::XmlBinaryNodeWriter::WriteEndStartElement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65393c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6539430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65393cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6539434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x65394f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65395fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW, ::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x653971c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6539794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.TryGetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlDictionaryString*, ::by_ref<int32_t>)>(
    &::System::Xml::XmlBinaryNodeWriter::TryGetKey)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6539258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                             { "TryGetKey", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlDictionaryString*, int32_t)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteDictionaryString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65393b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                             { "WriteDictionaryString", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6539110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.UnsafeWriteName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(char16_t*, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::UnsafeWriteName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6539a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "UnsafeWriteName", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteMultiByteInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteMultiByteInt32)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6539978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteMultiByteInt32", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteComment)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6539b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteCData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6539b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEmptyText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WriteEmptyText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6539b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteEmptyText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteBoolText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(bool)>(&::System::Xml::XmlBinaryNodeWriter::WriteBoolText)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6539b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteInt32Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteInt32Text)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6539b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteInt64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(int64_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteInt64Text)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6539d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteUInt64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(uint64_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteUInt64Text)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6539d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(int64_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteInt64)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6539dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteInt64", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteBase64Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteBase64Text)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6539ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBinaryNodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x653a210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x653a2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x653a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x653a670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.UnsafeWriteText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(char16_t*, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::UnsafeWriteText)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x653a418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "UnsafeWriteText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW)>(&::System::Xml::XmlBinaryNodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x653a6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBinaryNodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x653a6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x653a6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x653a6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x653a6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteFloatText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(float_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteFloatText)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x653a7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteDoubleText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(double_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteDoubleText)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x653a920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteDecimalText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Decimal)>(&::System::Xml::XmlBinaryNodeWriter::WriteDecimalText)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x653aabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteDateTimeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::DateTime)>(&::System::Xml::XmlBinaryNodeWriter::WriteDateTimeText)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x653ab98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteUniqueIdText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::UniqueId*)>(&::System::Xml::XmlBinaryNodeWriter::WriteUniqueIdText)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x653ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteGuidText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Guid)>(&::System::Xml::XmlBinaryNodeWriter::WriteGuidText)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x653acc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteTimeSpanText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::TimeSpan)>(&::System::Xml::XmlBinaryNodeWriter::WriteTimeSpanText)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x653ad58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteStartListText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WriteStartListText)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x653adc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteListSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WriteListSeparator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x653adf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteEndListText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WriteEndListText)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x653adf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteArrayNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::WriteArrayNode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x653ae20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteArrayNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteArrayInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlBinaryNodeType, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteArrayInfo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x653ae44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteArrayInfo", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.UnsafeWriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::System::Xml::XmlBinaryNodeType, int32_t, uint8_t*, uint8_t*)>(
    &::System::Xml::XmlBinaryNodeWriter::UnsafeWriteArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x653ae78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                            { "UnsafeWriteArray", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.UnsafeWriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(uint8_t*, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::UnsafeWriteArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x653aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "UnsafeWriteArray", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteDateTimeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::ArrayW<::System::DateTime>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteDateTimeArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x653aed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                             { "WriteDateTimeArray", {}, { ::i2c::type_of<::ArrayW<::System::DateTime>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteGuidArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::ArrayW<::System::Guid>, int32_t, int32_t)>(&::System::Xml::XmlBinaryNodeWriter::WriteGuidArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x653afd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                             { "WriteGuidArray", {}, { ::i2c::type_of<::ArrayW<::System::Guid>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteTimeSpanArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteTimeSpanArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x653b08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                             { "WriteTimeSpanArray", {}, { ::i2c::type_of<::ArrayW<::System::TimeSpan>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBinaryNodeWriter::WriteQualifiedName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x653b17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.FlushBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::FlushBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x653b2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryNodeWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryNodeWriter::*)()>(&::System::Xml::XmlBinaryNodeWriter::Close)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x653b2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IXmlDictionary*& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr ::System::Xml::IXmlDictionary* const& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr void System::Xml::XmlBinaryNodeWriter::__cordl_internal_set_dictionary(::System::Xml::IXmlDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dictionary = value;
}
constexpr ::System::Xml::XmlBinaryWriterSession*& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_session() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session;
}
constexpr ::System::Xml::XmlBinaryWriterSession* const& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_session() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session;
}
constexpr void System::Xml::XmlBinaryNodeWriter::__cordl_internal_set_session(::System::Xml::XmlBinaryWriterSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___session = value;
}
constexpr bool& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_inAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inAttribute;
}
constexpr bool const& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_inAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inAttribute;
}
constexpr void System::Xml::XmlBinaryNodeWriter::__cordl_internal_set_inAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inAttribute = value;
}
constexpr bool& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_inList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inList;
}
constexpr bool const& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_inList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inList;
}
constexpr void System::Xml::XmlBinaryNodeWriter::__cordl_internal_set_inList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inList = value;
}
constexpr bool& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_wroteAttributeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wroteAttributeValue;
}
constexpr bool const& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_wroteAttributeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wroteAttributeValue;
}
constexpr void System::Xml::XmlBinaryNodeWriter::__cordl_internal_set_wroteAttributeValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wroteAttributeValue = value;
}
constexpr ::System::Xml::XmlBinaryNodeWriter_AttributeValue& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_attributeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeValue;
}
constexpr ::System::Xml::XmlBinaryNodeWriter_AttributeValue const& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_attributeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeValue;
}
constexpr void System::Xml::XmlBinaryNodeWriter::__cordl_internal_set_attributeValue(::System::Xml::XmlBinaryNodeWriter_AttributeValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeValue = value;
}
constexpr int32_t& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_textNodeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textNodeOffset;
}
constexpr int32_t const& System::Xml::XmlBinaryNodeWriter::__cordl_internal_get_textNodeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textNodeOffset;
}
constexpr void System::Xml::XmlBinaryNodeWriter::__cordl_internal_set_textNodeOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textNodeOffset = value;
}
inline void System::Xml::XmlBinaryNodeWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::SetOutput(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlBinaryWriterSession* session, bool ownsStream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "SetOutput",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::IXmlDictionary*>(),
                                                                                                          ::i2c::type_of<::System::Xml::XmlBinaryWriterSession*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, dictionary, session, ownsStream);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteNode(::System::Xml::XmlBinaryNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteNode", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType);
}
inline void System::Xml::XmlBinaryNodeWriter::WroteAttributeValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WroteAttributeValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteTextNode(::System::Xml::XmlBinaryNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteTextNode", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType);
}
inline ::ArrayW<uint8_t> System::Xml::XmlBinaryNodeWriter::GetTextNodeBuffer(int32_t size, ::by_ref<int32_t> offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "GetTextNodeBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, size, offset);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteTextNodeWithLength(::System::Xml::XmlBinaryNodeType nodeType, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                           { "WriteTextNodeWithLength", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, length);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteTextNodeWithInt64(::System::Xml::XmlBinaryNodeType nodeType, int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                           { "WriteTextNodeWithInt64", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteDeclaration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteStartElement(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlBinaryNodeWriter::WritePrefixNode(::System::Xml::XmlBinaryNodeType nodeType, int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WritePrefixNode", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, ch);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEndStartElement(bool isEmpty) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEmpty);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEndElement(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteStartAttribute(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteXmlnsAttribute(::StringW prefix, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline bool System::Xml::XmlBinaryNodeWriter::TryGetKey(::System::Xml::XmlDictionaryString* s, ::by_ref<int32_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                           { "TryGetKey", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, key);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteDictionaryString(::System::Xml::XmlDictionaryString* s, int32_t key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                           { "WriteDictionaryString", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, key);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteName(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Xml::XmlBinaryNodeWriter::UnsafeWriteName(char16_t* chars, int32_t charCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "UnsafeWriteName", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charCount);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteMultiByteInt32(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteMultiByteInt32", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteComment(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteCData(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEmptyText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteEmptyText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteBoolText(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteInt32Text(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteInt64Text(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteUInt64Text(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteInt64(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteInt64", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteBase64Text(::ArrayW<uint8_t> trailBytes, int32_t trailByteCount, ::ArrayW<uint8_t> base64Buffer, int32_t base64Offset, int32_t base64Count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailBytes, trailByteCount, base64Buffer, base64Offset, base64Count);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteText(::System::Xml::XmlDictionaryString* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteText(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteText(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteText(::ArrayW<uint8_t> chars, int32_t charOffset, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charOffset, charCount);
}
inline void System::Xml::XmlBinaryNodeWriter::UnsafeWriteText(char16_t* chars, int32_t charCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "UnsafeWriteText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charCount);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEscapedText(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEscapedText(::System::Xml::XmlDictionaryString* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEscapedText(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEscapedText(::ArrayW<uint8_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteCharEntity(int32_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteFloatText(float_t f) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteDoubleText(double_t d) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteDecimalText(::System::Decimal d) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteDateTimeText(::System::DateTime dt) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteUniqueIdText(::System::Xml::UniqueId* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteGuidText(::System::Guid guid) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteTimeSpanText(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteStartListText() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteListSeparator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteEndListText() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteArrayNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "WriteArrayNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteArrayInfo(::System::Xml::XmlBinaryNodeType nodeType, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                                                         { "WriteArrayInfo", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, count);
}
inline void System::Xml::XmlBinaryNodeWriter::UnsafeWriteArray(::System::Xml::XmlBinaryNodeType nodeType, int32_t count, uint8_t* array, uint8_t* arrayMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                          { "UnsafeWriteArray", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, count, array, arrayMax);
}
inline void System::Xml::XmlBinaryNodeWriter::UnsafeWriteArray(uint8_t* array, int32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), { "UnsafeWriteArray", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, byteCount);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteDateTimeArray(::ArrayW<::System::DateTime> array, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                           { "WriteDateTimeArray", {}, { ::i2c::type_of<::ArrayW<::System::DateTime>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteGuidArray(::ArrayW<::System::Guid> array, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                           { "WriteGuidArray", {}, { ::i2c::type_of<::ArrayW<::System::Guid>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteTimeSpanArray(::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(),
                                                           { "WriteTimeSpanArray", {}, { ::i2c::type_of<::ArrayW<::System::TimeSpan>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline void System::Xml::XmlBinaryNodeWriter::WriteQualifiedName(::StringW prefix, ::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlBinaryNodeWriter::FlushBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryNodeWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryNodeWriter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBinaryNodeWriter* System::Xml::XmlBinaryNodeWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBinaryNodeWriter*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBinaryNodeWriter::XmlBinaryNodeWriter() {}
