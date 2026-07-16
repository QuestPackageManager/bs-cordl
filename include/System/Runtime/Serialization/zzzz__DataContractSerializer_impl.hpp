#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractSerializer.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializer_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractSerializer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataContractSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Type*)>(
    &::System::Runtime::Serialization::DataContractSerializer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6145d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(
    ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(&::System::Runtime::Serialization::DataContractSerializer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6145d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(
    ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*, int32_t, bool, bool, ::System::Runtime::Serialization::IDataContractSurrogate*)>(
    &::System::Runtime::Serialization::DataContractSerializer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6145dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(
    ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*, int32_t, bool, bool, ::System::Runtime::Serialization::IDataContractSurrogate*,
    ::System::Runtime::Serialization::DataContractResolver*)>(&::System::Runtime::Serialization::DataContractSerializer::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6145dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(
    ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*, int32_t, bool, bool, ::System::Runtime::Serialization::IDataContractSurrogate*,
    ::System::Runtime::Serialization::DataContractResolver*, bool)>(&::System::Runtime::Serialization::DataContractSerializer::Initialize)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x6145e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                { "Initialize",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::DataContractSerializer::*)()>(&::System::Runtime::Serialization::DataContractSerializer::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6146260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.get_MaxItemsInObjectGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::DataContractSerializer::*)()>(
    &::System::Runtime::Serialization::DataContractSerializer::get_MaxItemsInObjectGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614628c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_MaxItemsInObjectGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.get_DataContractSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IDataContractSurrogate* (::System::Runtime::Serialization::DataContractSerializer::*)()>(
    &::System::Runtime::Serialization::DataContractSerializer::get_DataContractSurrogate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6146294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_DataContractSurrogate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.get_PreserveObjectReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContractSerializer::*)()>(
    &::System::Runtime::Serialization::DataContractSerializer::get_PreserveObjectReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614629c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_PreserveObjectReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.get_IgnoreExtensionDataObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContractSerializer::*)()>(
    &::System::Runtime::Serialization::DataContractSerializer::get_IgnoreExtensionDataObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61462a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_IgnoreExtensionDataObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.get_DataContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContractResolver* (::System::Runtime::Serialization::DataContractSerializer::*)()>(
    &::System::Runtime::Serialization::DataContractSerializer::get_DataContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61462ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_DataContractResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.get_SerializeReadOnlyTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContractSerializer::*)()>(
    &::System::Runtime::Serialization::DataContractSerializer::get_SerializeReadOnlyTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61462b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_SerializeReadOnlyTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.get_RootContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::DataContractSerializer::*)()>(
    &::System::Runtime::Serialization::DataContractSerializer::get_RootContract)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61462bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_RootContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalWriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalWriteObject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x614634c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalWriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                          ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalWriteObject)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6146360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Xml::XmlWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::DataContractSerializer::WriteStartObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x61467b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.WriteObjectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Xml::XmlWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::DataContractSerializer::WriteObjectContent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6146830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.WriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Xml::XmlWriter*)>(
    &::System::Runtime::Serialization::DataContractSerializer::WriteEndObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61468ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Xml::XmlDictionaryWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::DataContractSerializer::WriteStartObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6146920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.WriteObjectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Xml::XmlDictionaryWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::DataContractSerializer::WriteObjectContent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x614699c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.WriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Xml::XmlDictionaryWriter*)>(
    &::System::Runtime::Serialization::DataContractSerializer::WriteEndObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6146a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Xml::XmlReader*, bool)>(
    &::System::Runtime::Serialization::DataContractSerializer::ReadObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6146a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Xml::XmlDictionaryReader*, bool)>(
    &::System::Runtime::Serialization::DataContractSerializer::ReadObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6146b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalWriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalWriteStartObject)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6146b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalWriteObjectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalWriteObjectContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6146bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalWriteObjectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                          ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalWriteObjectContent)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x61463c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                             { "InternalWriteObjectContent",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(::System::Runtime::Serialization::DataContract*, ::System::Type*, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContractSerializer::GetDataContract)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6146c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                            { "GetDataContract", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalWriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlWriterDelegator*)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalWriteEndObject)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6146d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*, bool)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalReadObject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6146d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*, bool,
                                                                                                                                       ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalReadObject)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6146d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.InternalIsStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::DataContractSerializer::InternalIsStartObject)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61470d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.GetSerializeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::DataContractSerializer::*)(::System::Object*)>(
    &::System::Runtime::Serialization::DataContractSerializer::GetSerializeType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6147108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.GetDeserializeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::DataContractSerializer::*)()>(
    &::System::Runtime::Serialization::DataContractSerializer::GetDeserializeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6147120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.SurrogateToDataContractType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Serialization::IDataContractSurrogate*, ::System::Object*, ::System::Type*, ::by_ref<::System::Type*>)>(
    &::System::Runtime::Serialization::DataContractSerializer::SurrogateToDataContractType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6146bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                             { "SurrogateToDataContractType",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSerializer.GetSurrogatedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Runtime::Serialization::IDataContractSurrogate*, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContractSerializer::GetSurrogatedType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6146328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                { "GetSurrogatedType", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_rootType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_rootType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootType;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_rootType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootType = value;
}
constexpr ::System::Runtime::Serialization::DataContract*& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_rootContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootContract;
}
constexpr ::System::Runtime::Serialization::DataContract* const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_rootContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootContract;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_rootContract(::System::Runtime::Serialization::DataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootContract = value;
}
constexpr bool& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_needsContractNsAtRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsContractNsAtRoot;
}
constexpr bool const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_needsContractNsAtRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needsContractNsAtRoot;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_needsContractNsAtRoot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needsContractNsAtRoot = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_rootName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootName;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_rootName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootName;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_rootName(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootName = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_rootNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootNamespace;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_rootNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootNamespace;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_rootNamespace(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootNamespace = value;
}
constexpr int32_t& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_maxItemsInObjectGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxItemsInObjectGraph;
}
constexpr int32_t const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_maxItemsInObjectGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxItemsInObjectGraph;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_maxItemsInObjectGraph(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxItemsInObjectGraph = value;
}
constexpr bool& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_ignoreExtensionDataObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreExtensionDataObject;
}
constexpr bool const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_ignoreExtensionDataObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreExtensionDataObject;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_ignoreExtensionDataObject(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreExtensionDataObject = value;
}
constexpr bool& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_preserveObjectReferences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveObjectReferences;
}
constexpr bool const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_preserveObjectReferences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveObjectReferences;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_preserveObjectReferences(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preserveObjectReferences = value;
}
constexpr ::System::Runtime::Serialization::IDataContractSurrogate*& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_dataContractSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractSurrogate;
}
constexpr ::System::Runtime::Serialization::IDataContractSurrogate* const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_dataContractSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractSurrogate;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_dataContractSurrogate(::System::Runtime::Serialization::IDataContractSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataContractSurrogate = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Type*>*& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_knownTypeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownTypeList;
}
constexpr ::System::Collections::Generic::IList_1<::System::Type*>* const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_knownTypeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownTypeList;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_knownTypeList(::System::Collections::Generic::IList_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knownTypeList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*&
System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_knownDataContracts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownDataContracts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const&
System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_knownDataContracts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownDataContracts;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_knownDataContracts(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knownDataContracts = value;
}
constexpr ::System::Runtime::Serialization::DataContractResolver*& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_dataContractResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractResolver;
}
constexpr ::System::Runtime::Serialization::DataContractResolver* const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_dataContractResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractResolver;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_dataContractResolver(::System::Runtime::Serialization::DataContractResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataContractResolver = value;
}
constexpr bool& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_serializeReadOnlyTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializeReadOnlyTypes;
}
constexpr bool const& System::Runtime::Serialization::DataContractSerializer::__cordl_internal_get_serializeReadOnlyTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializeReadOnlyTypes;
}
constexpr void System::Runtime::Serialization::DataContractSerializer::__cordl_internal_set_serializeReadOnlyTypes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializeReadOnlyTypes = value;
}
inline void System::Runtime::Serialization::DataContractSerializer::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::DataContractSerializer::_ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, knownTypes);
}
inline void System::Runtime::Serialization::DataContractSerializer::_ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes,
                                                                          int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject, bool preserveObjectReferences,
                                                                          ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, knownTypes, maxItemsInObjectGraph, ignoreExtensionDataObject, preserveObjectReferences, dataContractSurrogate);
}
inline void System::Runtime::Serialization::DataContractSerializer::_ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes,
                                                                          int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject, bool preserveObjectReferences,
                                                                          ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate,
                                                                          ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, knownTypes, maxItemsInObjectGraph, ignoreExtensionDataObject, preserveObjectReferences, dataContractSurrogate,
                                                   dataContractResolver);
}
inline void System::Runtime::Serialization::DataContractSerializer::Initialize(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes,
                                                                               int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject, bool preserveObjectReferences,
                                                                               ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate,
                                                                               ::System::Runtime::Serialization::DataContractResolver* dataContractResolver, bool serializeReadOnlyTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                              { "Initialize",
                                                {},
                                                { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, knownTypes, maxItemsInObjectGraph, ignoreExtensionDataObject, preserveObjectReferences, dataContractSurrogate,
                                                   dataContractResolver, serializeReadOnlyTypes);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::DataContractSerializer::get_KnownDataContracts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline int32_t System::Runtime::Serialization::DataContractSerializer::get_MaxItemsInObjectGraph() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_MaxItemsInObjectGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::IDataContractSurrogate* System::Runtime::Serialization::DataContractSerializer::get_DataContractSurrogate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_DataContractSurrogate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataContractSurrogate*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContractSerializer::get_PreserveObjectReferences() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_PreserveObjectReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContractSerializer::get_IgnoreExtensionDataObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_IgnoreExtensionDataObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContractResolver* System::Runtime::Serialization::DataContractSerializer::get_DataContractResolver() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_DataContractResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContractResolver*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContractSerializer::get_SerializeReadOnlyTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_SerializeReadOnlyTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContractSerializer::get_RootContract() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), { "get_RootContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContractSerializer::InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::DataContractSerializer::InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph,
                                                                                        ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph, dataContractResolver);
}
inline void System::Runtime::Serialization::DataContractSerializer::WriteStartObject(::System::Xml::XmlWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::DataContractSerializer::WriteObjectContent(::System::Xml::XmlWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::DataContractSerializer::WriteEndObject(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Runtime::Serialization::DataContractSerializer::WriteStartObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::DataContractSerializer::WriteObjectContent(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::DataContractSerializer::WriteEndObject(::System::Xml::XmlDictionaryWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSerializer::ReadObject(::System::Xml::XmlReader* reader, bool verifyObjectName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSerializer::ReadObject(::System::Xml::XmlDictionaryReader* reader, bool verifyObjectName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName);
}
inline void System::Runtime::Serialization::DataContractSerializer::InternalWriteStartObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::DataContractSerializer::InternalWriteObjectContent(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::DataContractSerializer::InternalWriteObjectContent(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph,
                                                                                               ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                           { "InternalWriteObjectContent",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph, dataContractResolver);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContractSerializer::GetDataContract(::System::Runtime::Serialization::DataContract* declaredTypeContract,
                                                                                                                               ::System::Type* declaredType, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                          { "GetDataContract", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, declaredTypeContract, declaredType, objectType);
}
inline void System::Runtime::Serialization::DataContractSerializer::InternalWriteEndObject(::System::Runtime::Serialization::XmlWriterDelegator* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSerializer::InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, bool verifyObjectName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, verifyObjectName);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSerializer::InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, bool verifyObjectName,
                                                                                                    ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, verifyObjectName, dataContractResolver);
}
inline bool System::Runtime::Serialization::DataContractSerializer::InternalIsStartObject(::System::Runtime::Serialization::XmlReaderDelegator* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader);
}
inline ::System::Type* System::Runtime::Serialization::DataContractSerializer::GetSerializeType(::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, graph);
}
inline ::System::Type* System::Runtime::Serialization::DataContractSerializer::GetDeserializeType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSerializer::SurrogateToDataContractType(::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate,
                                                                                                             ::System::Object* oldObj, ::System::Type* surrogatedDeclaredType,
                                                                                                             ::by_ref<::System::Type*> objType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                                           { "SurrogateToDataContractType",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, dataContractSurrogate, oldObj, surrogatedDeclaredType, objType);
}
inline ::System::Type* System::Runtime::Serialization::DataContractSerializer::GetSurrogatedType(::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate,
                                                                                                 ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSerializer*>(),
                                              { "GetSurrogatedType", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, dataContractSurrogate, type);
}
inline ::System::Runtime::Serialization::DataContractSerializer* System::Runtime::Serialization::DataContractSerializer::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::DataContractSerializer*>(type));
}
inline ::System::Runtime::Serialization::DataContractSerializer*
System::Runtime::Serialization::DataContractSerializer::New_ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::DataContractSerializer*>(type, knownTypes));
}
inline ::System::Runtime::Serialization::DataContractSerializer*
System::Runtime::Serialization::DataContractSerializer::New_ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes, int32_t maxItemsInObjectGraph,
                                                                 bool ignoreExtensionDataObject, bool preserveObjectReferences,
                                                                 ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::DataContractSerializer*>(type, knownTypes, maxItemsInObjectGraph, ignoreExtensionDataObject,
                                                                                                                     preserveObjectReferences, dataContractSurrogate));
}
inline ::System::Runtime::Serialization::DataContractSerializer* System::Runtime::Serialization::DataContractSerializer::New_ctor(
    ::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes, int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject, bool preserveObjectReferences,
    ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate, ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::DataContractSerializer*>(type, knownTypes, maxItemsInObjectGraph, ignoreExtensionDataObject,
                                                                                                                     preserveObjectReferences, dataContractSurrogate, dataContractResolver));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContractSerializer::DataContractSerializer() {}
