#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlObjectSerializerWriteContextComplex.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_impl.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContextComplex_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractSerializer_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataContractSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__NetDataContractSerializer_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x616dc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::NetDataContractSerializer*, ::System::Collections::Hashtable*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x616dd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationMode (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6171738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(::System::RuntimeTypeHandle, ::System::Type*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::GetDataContract)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6171740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(int32_t, ::System::RuntimeTypeHandle)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::GetDataContract)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x61718ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.GetDataContractSkipValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::GetDataContractSkipValidation)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6171a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(::System::Runtime::Serialization::XmlWriterDelegator*,
                                                                                                                                          ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6171c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6171cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Runtime::Serialization::SerializationInfo*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6171d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteAnyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteAnyType)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6171e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6171e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6171ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::ArrayW<uint8_t>)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteBase64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6171fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::ArrayW<uint8_t>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteBase64)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6172014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Uri*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteUri)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6172130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Uri*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteUri)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6172184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Xml::XmlQualifiedName*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteQName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61722c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteQName)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6172324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.InternalSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool, bool, int32_t, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::InternalSerialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61724b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.OnHandleReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::OnHandleReference)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6172810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.OnEndHandleReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::OnEndHandleReference)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61729ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.CheckIfTypeSerializableForSharedTypeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::CheckIfTypeSerializableForSharedTypeMode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6172a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                           { "CheckIfTypeSerializableForSharedTypeMode", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.CheckIfTypeSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(::System::Type*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::CheckIfTypeSerializable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6172ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.GetSurrogatedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::GetSurrogatedType)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6172c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.InternalSerializeWithSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool, bool, int32_t, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::InternalSerializeWithSurrogate)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x61724d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                             { "InternalSerializeWithSurrogate",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex.WriteArraySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, int32_t)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteArraySize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6172d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 30 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::IDataContractSurrogate*& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_dataContractSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractSurrogate;
}
constexpr ::System::Runtime::Serialization::IDataContractSurrogate* const& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_dataContractSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractSurrogate;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_set_dataContractSurrogate(::System::Runtime::Serialization::IDataContractSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataContractSurrogate = value;
}
constexpr ::System::Runtime::Serialization::SerializationMode& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::System::Runtime::Serialization::SerializationMode const& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_set_mode(::System::Runtime::Serialization::SerializationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr ::System::Runtime::Serialization::SerializationBinder*& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_binder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binder;
}
constexpr ::System::Runtime::Serialization::SerializationBinder* const& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_binder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binder;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_set_binder(::System::Runtime::Serialization::SerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binder = value;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_surrogateSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateSelector;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_surrogateSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateSelector;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_set_surrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___surrogateSelector = value;
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_streamingContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamingContext;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_streamingContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamingContext;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_set_streamingContext(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streamingContext = value;
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_surrogateDataContracts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateDataContracts;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_get_surrogateDataContracts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateDataContracts;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::__cordl_internal_set_surrogateDataContracts(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___surrogateDataContracts = value;
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                          ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                          ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, rootTypeDataContract, dataContractResolver);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer,
                                                                                          ::System::Collections::Hashtable* surrogateDataContracts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, surrogateDataContracts);
}
inline ::System::Runtime::Serialization::SerializationMode System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::get_Mode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationMode>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::GetDataContract(::System::RuntimeTypeHandle typeHandle,
                                                                                                                                               ::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeHandle, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, id, typeHandle);
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::GetDataContractSkipValidation(int32_t typeId, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeId, typeHandle, type);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                     ::System::Runtime::Serialization::DataContract* dataContract) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, dataContract);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType,
                                                                                                     ::StringW clrTypeName, ::StringW clrAssemblyName) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, dataContractType, clrTypeName, clrAssemblyName);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType,
                                                                                                     ::System::Runtime::Serialization::SerializationInfo* serInfo) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, dataContractType, serInfo);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteAnyType(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value,
                                                                                                ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t> value,
                                                                                                ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value,
                                                                                             ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                               ::System::Xml::XmlQualifiedName* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value,
                                                                                               ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::InternalSerialize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                      bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                                                                                      ::System::RuntimeTypeHandle declaredTypeHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, isDeclaredType, writeXsiType, declaredTypeID, declaredTypeHandle);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::OnHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                      bool canContainCyclicReference) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, obj, canContainCyclicReference);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::OnEndHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                         bool canContainCyclicReference) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, canContainCyclicReference);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::CheckIfTypeSerializableForSharedTypeMode(::System::Type* memberType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                                                         { "CheckIfTypeSerializableForSharedTypeMode", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, memberType);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::CheckIfTypeSerializable(::System::Type* memberType, bool isMemberTypeSerializable) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberType, isMemberTypeSerializable);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::GetSurrogatedType(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::InternalSerializeWithSurrogate(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                                   ::System::Object* obj, bool isDeclaredType, bool writeXsiType,
                                                                                                                   int32_t declaredTypeID, ::System::RuntimeTypeHandle declaredTypeHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(),
                                                           { "InternalSerializeWithSurrogate",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, isDeclaredType, writeXsiType, declaredTypeID, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::WriteArraySize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, size);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*
System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                 ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                 ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(serializer, rootTypeDataContract, dataContractResolver));
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*
System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::New_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer,
                                                                                 ::System::Collections::Hashtable* surrogateDataContracts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*>(serializer, surrogateDataContracts));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex::XmlObjectSerializerWriteContextComplex() {}
