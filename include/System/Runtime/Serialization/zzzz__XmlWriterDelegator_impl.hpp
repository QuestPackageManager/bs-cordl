#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlWriterDelegator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlWriter*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6178fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.get_Writer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlWriter* (::System::Runtime::Serialization::XmlWriterDelegator::*)()>(
    &::System::Runtime::Serialization::XmlWriterDelegator::get_Writer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6179068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "get_Writer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)()>(&::System::Runtime::Serialization::XmlWriterDelegator::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6179070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::LookupPrefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6179090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)()>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61790b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteEndAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)()>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteEndElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61790d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6179104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                             { "WriteRaw", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6179124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteRaw", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6179144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteXmlnsAttribute", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6179188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteXmlnsAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x61793c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                             { "WriteXmlnsAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6179498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                             { "WriteStartAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61794b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteStartAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61794fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                         { "WriteAttributeString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::StringW)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6179580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteAttributeString",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                                               ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeStringValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6179560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteAttributeStringValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW, ::System::Xml::XmlDictionaryString*,
                                                                                                                      ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61795d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                             { "WriteAttributeString",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeStringValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6179618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteAttributeStringValue", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeInt)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6179660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteAttributeInt",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                                               ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeIntValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeIntValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61796b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteAttributeIntValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, bool)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeBool)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61796d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteAttributeBool",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                                               ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeBoolValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(bool)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeBoolValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6179728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteAttributeBoolValue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeQualifiedName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x617974c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                             { "WriteAttributeQualifiedName",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeQualifiedNameValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeQualifiedNameValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61797dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteAttributeQualifiedNameValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeQualifiedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61797fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                { "WriteAttributeQualifiedName",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAttributeQualifiedNameValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeQualifiedNameValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x617987c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteAttributeQualifiedNameValue", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteStartElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61798cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteStartElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x61798e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteStartElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x617991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                { "WriteStartElement", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteStartElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x617992c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                         { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteStartElementPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteStartElementPrimitive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x617998c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                         { "WriteStartElementPrimitive", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteEndElementPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)()>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteEndElementPrimitive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61799e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteEndElementPrimitive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.get_WriteState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::WriteState (::System::Runtime::Serialization::XmlWriterDelegator::*)()>(
    &::System::Runtime::Serialization::XmlWriterDelegator::get_WriteState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6179a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "get_WriteState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlWriterDelegator::*)()>(&::System::Runtime::Serialization::XmlWriterDelegator::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6179a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "get_XmlLang", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Runtime::Serialization::XmlWriterDelegator::*)()>(
    &::System::Runtime::Serialization::XmlWriterDelegator::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6179a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "get_XmlSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteNamespaceDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteNamespaceDecl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6179a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteNamespaceDecl", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.CreateInvalidPrimitiveTypeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::CreateInvalidPrimitiveTypeException)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6179a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "CreateInvalidPrimitiveTypeException", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAnyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Object*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAnyType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6179b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteAnyType", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteAnyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Object*, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteAnyType)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x6179ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteAnyType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Runtime::Serialization::IDataNode*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteExtensionData)> {
  constexpr static std::size_t size = 0xbb4;
  constexpr static std::size_t addrs = 0x617a3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteExtensionData", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x617a28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(bool)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteBoolean)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x617af98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(bool, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteBoolean)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x617afbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteBoolean", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::DateTime)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteDateTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x617b00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::System::DateTime, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteDateTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x617b02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteDateTime", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Decimal)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteDecimal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x617b07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::System::Decimal, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x617b09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteDecimal", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(double_t)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x617b0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    double_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteDouble)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x617b114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteDouble", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(int32_t)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x617b15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    int32_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteInt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x617b17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(int64_t)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteLong)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x617b1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    int64_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteLong)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x617b1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteLong", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(float_t)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x617b23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    float_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteFloat)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x617b25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteFloat", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::ArrayW<uint8_t>)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteBase64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x617b2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(int16_t)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteShort)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x617b2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    int16_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteShort)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x617b2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteShort", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUnsignedByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(uint8_t)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x617b34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUnsignedByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    uint8_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedByte)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x617b370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteUnsignedByte", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteSignedByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(int8_t)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteSignedByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x617b3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteSignedByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    int8_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteSignedByte)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x617b3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteSignedByte", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUnsignedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(uint32_t)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedInt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x617b43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUnsignedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    uint32_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedInt)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x617b460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteUnsignedInt", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUnsignedLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(uint64_t)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedLong)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x617b4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUnsignedLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    uint64_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedLong)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x617b554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                         { "WriteUnsignedLong", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUnsignedShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(uint16_t)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedShort)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x617b5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUnsignedShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    uint16_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedShort)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x617b5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                         { "WriteUnsignedShort", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(char16_t)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x617b620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    char16_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteChar)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x617b644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteChar", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::TimeSpan)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteTimeSpan)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x617a2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::System::TimeSpan, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteTimeSpan)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x617b698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Guid)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteGuid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x617a35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteGuid", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::System::Guid, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteGuid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x617b6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteGuid", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Uri*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteUri)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x617a3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteQName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x617b730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteQualifiedName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x617b7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                           { "WriteQualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlWriterDelegator::WriteQualifiedName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x617b808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                { "WriteQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteBooleanArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::ArrayW<bool>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteBooleanArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x617b858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteBooleanArray", {}, { ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDateTimeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::ArrayW<::System::DateTime>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteDateTimeArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x617b920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteDateTimeArray",
                              {},
                              { ::i2c::type_of<::ArrayW<::System::DateTime>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDecimalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::ArrayW<::System::Decimal>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteDecimalArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x617b9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                            { "WriteDecimalArray",
                              {},
                              { ::i2c::type_of<::ArrayW<::System::Decimal>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteInt32Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::ArrayW<int32_t>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteInt32Array)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x617bab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteInt32Array", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteInt64Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::ArrayW<int64_t>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteInt64Array)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x617bb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteInt64Array", {}, { ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteSingleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::ArrayW<float_t>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteSingleArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x617bc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteSingleArray", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlWriterDelegator.WriteDoubleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlWriterDelegator::*)(
    ::ArrayW<double_t>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlWriterDelegator::WriteDoubleArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x617bd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
            { "WriteDoubleArray", {}, { ::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWriter*& System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlWriter* const& System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_set_writer(::System::Xml::XmlWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writer = value;
}
constexpr ::System::Xml::XmlDictionaryWriter*& System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_get_dictionaryWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionaryWriter;
}
constexpr ::System::Xml::XmlDictionaryWriter* const& System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_get_dictionaryWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionaryWriter;
}
constexpr void System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_set_dictionaryWriter(::System::Xml::XmlDictionaryWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dictionaryWriter = value;
}
constexpr int32_t& System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr int32_t& System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_get_prefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr int32_t const& System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_get_prefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr void System::Runtime::Serialization::XmlWriterDelegator::__cordl_internal_set_prefixes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefixes = value;
}
inline void System::Runtime::Serialization::XmlWriterDelegator::_ctor(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Xml::XmlWriter* System::Runtime::Serialization::XmlWriterDelegator::get_Writer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "get_Writer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWriter*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlWriterDelegator::LookupPrefix(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteEndAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteEndAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                           { "WriteRaw", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteRaw(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteRaw", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteXmlnsAttribute(::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteXmlnsAttribute", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteXmlnsAttribute(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteXmlnsAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                           { "WriteXmlnsAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                           { "WriteStartAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                       { "WriteStartAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeString(::StringW prefix, ::StringW localName, ::StringW ns, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                              { "WriteAttributeString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeString(::StringW prefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs,
                                                                                     ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteAttributeString",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                                             ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, attrName, attrNs, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeStringValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteAttributeStringValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeString(::StringW prefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs,
                                                                                     ::System::Xml::XmlDictionaryString* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                           { "WriteAttributeString",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                               ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, attrName, attrNs, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeStringValue(::System::Xml::XmlDictionaryString* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteAttributeStringValue", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeInt(::StringW prefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs,
                                                                                  int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteAttributeInt",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                                             ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, attrName, attrNs, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeIntValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteAttributeIntValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeBool(::StringW prefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs,
                                                                                   bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteAttributeBool",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, attrName, attrNs, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeBoolValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteAttributeBoolValue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeQualifiedName(::StringW attrPrefix, ::System::Xml::XmlDictionaryString* attrName,
                                                                                            ::System::Xml::XmlDictionaryString* attrNs, ::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                           { "WriteAttributeQualifiedName",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                               ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrPrefix, attrName, attrNs, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeQualifiedNameValue(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteAttributeQualifiedNameValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeQualifiedName(::StringW attrPrefix, ::System::Xml::XmlDictionaryString* attrName,
                                                                                            ::System::Xml::XmlDictionaryString* attrNs, ::System::Xml::XmlDictionaryString* name,
                                                                                            ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                              { "WriteAttributeQualifiedName",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrPrefix, attrName, attrNs, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAttributeQualifiedNameValue(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                       { "WriteAttributeQualifiedNameValue", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteStartElement(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteStartElement(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                              { "WriteStartElement", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, namespaceUri);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceUri);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteStartElementPrimitive(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                              { "WriteStartElementPrimitive", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, namespaceUri);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteEndElementPrimitive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteEndElementPrimitive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::WriteState System::Runtime::Serialization::XmlWriterDelegator::get_WriteState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "get_WriteState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WriteState>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlWriterDelegator::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "get_XmlLang", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Runtime::Serialization::XmlWriterDelegator::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "get_XmlSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteNamespaceDecl(::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteNamespaceDecl", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ns);
}
inline ::System::Exception* System::Runtime::Serialization::XmlWriterDelegator::CreateInvalidPrimitiveTypeException(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "CreateInvalidPrimitiveTypeException", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAnyType(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteAnyType", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteAnyType(::System::Object* value, ::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteAnyType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, valueType);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteExtensionData(::System::Runtime::Serialization::IDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteExtensionData", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataNode);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteBoolean(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteBoolean(bool value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteBoolean", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDateTime(::System::DateTime value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDateTime(::System::DateTime value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
          { "WriteDateTime", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDecimal(::System::Decimal value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDecimal(::System::Decimal value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                       { "WriteDecimal", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDouble(double_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDouble(double_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteDouble", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteInt(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteInt(int32_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteLong(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteLong(int64_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteLong", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteFloat(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteFloat(float_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteFloat", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteBase64(::ArrayW<uint8_t> bytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteShort(int16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteShort(int16_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteShort", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedByte(uint8_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedByte(uint8_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteUnsignedByte", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteSignedByte(int8_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteSignedByte(int8_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteSignedByte", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedInt(uint32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedInt(uint32_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteUnsignedInt", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedLong(uint64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedLong(uint64_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteUnsignedLong", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedShort(uint16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUnsignedShort(uint16_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteUnsignedShort", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteChar(char16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteChar(char16_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteChar", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteTimeSpan(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteTimeSpan(::System::TimeSpan value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
          { "WriteTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteGuid(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteGuid", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteGuid(::System::Guid value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteGuid", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, name, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteUri(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), { "WriteUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteQName(::System::Xml::XmlQualifiedName* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteQualifiedName(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                         { "WriteQualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteQualifiedName(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                              { "WriteQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteBooleanArray(::ArrayW<bool> value, ::System::Xml::XmlDictionaryString* itemName,
                                                                                  ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
          { "WriteBooleanArray", {}, { ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, itemName, itemNamespace);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDateTimeArray(::ArrayW<::System::DateTime> value, ::System::Xml::XmlDictionaryString* itemName,
                                                                                   ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteDateTimeArray",
                            {},
                            { ::i2c::type_of<::ArrayW<::System::DateTime>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, itemName, itemNamespace);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDecimalArray(::ArrayW<::System::Decimal> value, ::System::Xml::XmlDictionaryString* itemName,
                                                                                  ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                          { "WriteDecimalArray",
                            {},
                            { ::i2c::type_of<::ArrayW<::System::Decimal>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, itemName, itemNamespace);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteInt32Array(::ArrayW<int32_t> value, ::System::Xml::XmlDictionaryString* itemName,
                                                                                ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
          { "WriteInt32Array", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, itemName, itemNamespace);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteInt64Array(::ArrayW<int64_t> value, ::System::Xml::XmlDictionaryString* itemName,
                                                                                ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
          { "WriteInt64Array", {}, { ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, itemName, itemNamespace);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteSingleArray(::ArrayW<float_t> value, ::System::Xml::XmlDictionaryString* itemName,
                                                                                 ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
          { "WriteSingleArray", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, itemName, itemNamespace);
}
inline void System::Runtime::Serialization::XmlWriterDelegator::WriteDoubleArray(::ArrayW<double_t> value, ::System::Xml::XmlDictionaryString* itemName,
                                                                                 ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
          { "WriteDoubleArray", {}, { ::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, itemName, itemNamespace);
}
inline ::System::Runtime::Serialization::XmlWriterDelegator* System::Runtime::Serialization::XmlWriterDelegator::New_ctor(::System::Xml::XmlWriter* writer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlWriterDelegator*>(writer));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlWriterDelegator::XmlWriterDelegator() {}
