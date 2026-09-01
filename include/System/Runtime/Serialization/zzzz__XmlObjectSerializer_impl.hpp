#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlObjectSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationException_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlDictionaryWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteStartObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteObjectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlDictionaryWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteObjectContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlDictionaryWriter*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteEndObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::IO::Stream*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteObject)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6164d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteStartObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6164e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteObjectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteObjectContent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6164ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlWriter*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteEndObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6164f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlDictionaryWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6164fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteObjectHandleExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteObjectHandleExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6165068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                         { "WriteObjectHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteObjectHandleExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                       ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteObjectHandleExceptions)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6165070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                             { "WriteObjectHandleExceptions",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::XmlObjectSerializer::*)()>(&::System::Runtime::Serialization::XmlObjectSerializer::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6165588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.InternalWriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::InternalWriteObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6165590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.InternalWriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                       ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::InternalWriteObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61655f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.InternalWriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::InternalWriteStartObject)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6165600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.InternalWriteObjectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::InternalWriteObjectContent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6165638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.InternalWriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::InternalWriteEndObject)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6165670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteStartObjectHandleExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteStartObjectHandleExceptions)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6158240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                            { "WriteStartObjectHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteObjectContentHandleExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteObjectContentHandleExceptions)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x6158424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                            { "WriteObjectContentHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteEndObjectHandleExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteEndObjectHandleExceptions)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x615922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                             { "WriteEndObjectHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteRootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::DataContract*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::WriteRootElement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x61656a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                { "WriteRootElement",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.CheckIfNeedsContractNsAtRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                                       ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::CheckIfNeedsContractNsAtRoot)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6165788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                             { "CheckIfNeedsContractNsAtRoot",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*)>(&::System::Runtime::Serialization::XmlObjectSerializer::WriteNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x616589c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                           { "WriteNull", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.IsContractDeclared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::IsContractDeclared)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6165930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                            { "IsContractDeclared", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::IO::Stream*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::ReadObject)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6165a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlDictionaryReader*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::ReadObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6165aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlReader*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::ReadObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6165b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Xml::XmlDictionaryReader*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::ReadObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.InternalReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::InternalReadObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6165be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.InternalReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*, bool,
                                                                                                                                    ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::InternalReadObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6165c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.InternalIsStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::InternalIsStartObject)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6165c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.ReadObjectHandleExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::ReadObjectHandleExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61593f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                { "ReadObjectHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.ReadObjectHandleExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*, bool,
                                                                                                                                    ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::ReadObjectHandleExceptions)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6165c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                           { "ReadObjectHandleExceptions",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.IsRootXmlAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializer::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Runtime::Serialization::DataContract*)>(&::System::Runtime::Serialization::XmlObjectSerializer::IsRootXmlAny)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6165f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                { "IsRootXmlAny", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::IsStartElement)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6165fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                           { "IsStartElement", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.IsRootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializer::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::DataContract*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::IsRootElement)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6165ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                { "IsRootElement",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.CheckNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializer::CheckNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6164e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                           { "CheckNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.TryAddLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::TryAddLineInfo)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x61661cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                             { "TryAddLineInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.CreateSerializationExceptionWithReaderDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::CreateSerializationExceptionWithReaderDetails)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x61663b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                            { "CreateSerializationExceptionWithReaderDetails", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.CreateSerializationException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationException* (*)(::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::CreateSerializationException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61577e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), { "CreateSerializationException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.CreateSerializationException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationException* (*)(::StringW, ::System::Exception*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::CreateSerializationException)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x615e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                             { "CreateSerializationException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.GetTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializer::GetTypeInfo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6165398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), { "GetTypeInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.GetTypeInfoError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Type*, ::System::Exception*)>(&::System::Runtime::Serialization::XmlObjectSerializer::GetTypeInfoError)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x61653e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                             { "GetTypeInfoError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.GetSerializeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializer::*)(::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializer::GetSerializeType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6166574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.GetDeserializeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializer::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializer::GetDeserializeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer.get_FormatterConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IFormatterConverter* (*)()>(&::System::Runtime::Serialization::XmlObjectSerializer::get_FormatterConverter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6160ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), { "get_FormatterConverter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializer::*)()>(&::System::Runtime::Serialization::XmlObjectSerializer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6166594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XmlObjectSerializer::setStaticF_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::IFormatterConverter*, "formatterConverter", ::System::Runtime::Serialization::XmlObjectSerializer*>(
      std::forward<::System::Runtime::Serialization::IFormatterConverter*>(value));
}
inline ::System::Runtime::Serialization::IFormatterConverter* System::Runtime::Serialization::XmlObjectSerializer::getStaticF_formatterConverter() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::IFormatterConverter*, "formatterConverter", ::System::Runtime::Serialization::XmlObjectSerializer*>();
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteStartObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteObjectContent(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteEndObject(::System::Xml::XmlDictionaryWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteObject(::System::IO::Stream* stream, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteStartObject(::System::Xml::XmlWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteObjectContent(::System::Xml::XmlWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteEndObject(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                       { "WriteObjectHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph,
                                                                                             ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                           { "WriteObjectHandleExceptions",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph, dataContractResolver);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::XmlObjectSerializer::get_KnownDataContracts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph,
                                                                                     ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph, dataContractResolver);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::InternalWriteStartObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::InternalWriteObjectContent(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::InternalWriteEndObject(::System::Runtime::Serialization::XmlWriterDelegator* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteStartObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                       { "WriteStartObjectHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteObjectContentHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                          { "WriteObjectContentHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteEndObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                           { "WriteEndObjectHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteRootElement(::System::Runtime::Serialization::XmlWriterDelegator* writer,
                                                                                  ::System::Runtime::Serialization::DataContract* contract, ::System::Xml::XmlDictionaryString* name,
                                                                                  ::System::Xml::XmlDictionaryString* ns, bool needsContractNsAtRoot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                              { "WriteRootElement",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, contract, name, ns, needsContractNsAtRoot);
}
inline bool System::Runtime::Serialization::XmlObjectSerializer::CheckIfNeedsContractNsAtRoot(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns,
                                                                                              ::System::Runtime::Serialization::DataContract* contract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                           { "CheckIfNeedsContractNsAtRoot",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, ns, contract);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* writer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                         { "WriteNull", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer);
}
inline bool System::Runtime::Serialization::XmlObjectSerializer::IsContractDeclared(::System::Runtime::Serialization::DataContract* contract,
                                                                                    ::System::Runtime::Serialization::DataContract* declaredContract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                          { "IsContractDeclared", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, contract, declaredContract);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializer::ReadObject(::System::IO::Stream* stream) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stream);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializer::ReadObject(::System::Xml::XmlDictionaryReader* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializer::ReadObject(::System::Xml::XmlReader* reader, bool verifyObjectName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializer::ReadObject(::System::Xml::XmlDictionaryReader* reader, bool verifyObjectName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializer::InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializer::InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName,
                                                                                                 ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName, dataContractResolver);
}
inline bool System::Runtime::Serialization::XmlObjectSerializer::InternalIsStartObject(::System::Runtime::Serialization::XmlReaderDelegator* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializer::ReadObjectHandleExceptions(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                           { "ReadObjectHandleExceptions", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializer::ReadObjectHandleExceptions(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName,
                                                                                                         ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                         { "ReadObjectHandleExceptions",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName, dataContractResolver);
}
inline bool System::Runtime::Serialization::XmlObjectSerializer::IsRootXmlAny(::System::Xml::XmlDictionaryString* rootName, ::System::Runtime::Serialization::DataContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                              { "IsRootXmlAny", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rootName, contract);
}
inline bool System::Runtime::Serialization::XmlObjectSerializer::IsStartElement(::System::Runtime::Serialization::XmlReaderDelegator* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                         { "IsStartElement", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader);
}
inline bool System::Runtime::Serialization::XmlObjectSerializer::IsRootElement(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::System::Runtime::Serialization::DataContract* contract,
                                                                               ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                              { "IsRootElement",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, contract, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::CheckNull(::System::Object* obj, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                                                         { "CheckNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, name);
}
inline ::StringW System::Runtime::Serialization::XmlObjectSerializer::TryAddLineInfo(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::StringW errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                           { "TryAddLineInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, reader, errorMessage);
}
inline ::System::Exception* System::Runtime::Serialization::XmlObjectSerializer::CreateSerializationExceptionWithReaderDetails(::StringW errorMessage,
                                                                                                                               ::System::Runtime::Serialization::XmlReaderDelegator* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                          { "CreateSerializationExceptionWithReaderDetails", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, errorMessage, reader);
}
inline ::System::Runtime::Serialization::SerializationException* System::Runtime::Serialization::XmlObjectSerializer::CreateSerializationException(::StringW errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), { "CreateSerializationException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationException*>(nullptr, ___internal_method, errorMessage);
}
inline ::System::Runtime::Serialization::SerializationException* System::Runtime::Serialization::XmlObjectSerializer::CreateSerializationException(::StringW errorMessage,
                                                                                                                                                   ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                           { "CreateSerializationException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationException*>(nullptr, ___internal_method, errorMessage, innerException);
}
inline ::StringW System::Runtime::Serialization::XmlObjectSerializer::GetTypeInfo(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), { "GetTypeInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::XmlObjectSerializer::GetTypeInfoError(::StringW errorMessage, ::System::Type* type, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(),
                                                           { "GetTypeInfoError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorMessage, type, innerException);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializer::GetSerializeType(::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, graph);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializer::GetDeserializeType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::IFormatterConverter* System::Runtime::Serialization::XmlObjectSerializer::get_FormatterConverter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), { "get_FormatterConverter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IFormatterConverter*>(nullptr, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlObjectSerializer* System::Runtime::Serialization::XmlObjectSerializer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializer*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializer::XmlObjectSerializer() {}
