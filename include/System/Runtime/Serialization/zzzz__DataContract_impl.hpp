#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\DataContract.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__CodeTypeReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContractAttribute_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractAttribute_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractPairKey_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__IGenericNameProvider_def.hpp"
#include "System/Runtime/Serialization/zzzz__IntRef_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_def.hpp"
#include "System/Runtime/Serialization/zzzz__TypeHandleRef_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract::*)(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*)>(
    &::System::Runtime::Serialization::DataContract::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x613f22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetDataContract)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x613ec2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (*)(::System::RuntimeTypeHandle, ::System::Type*, ::System::Runtime::Serialization::SerializationMode)>(
        &::System::Runtime::Serialization::DataContract::GetDataContract)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x613f248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
            { "GetDataContract", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t, ::System::RuntimeTypeHandle, ::System::Runtime::Serialization::SerializationMode)>(
    &::System::Runtime::Serialization::DataContract::GetDataContract)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x613f2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
            { "GetDataContract", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDataContractSkipValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContract::GetDataContractSkipValidation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x613f2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                         { "GetDataContractSkipValidation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetGetOnlyCollectionDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*, ::System::Runtime::Serialization::SerializationMode)>(
        &::System::Runtime::Serialization::DataContract::GetGetOnlyCollectionDataContract)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x613f434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { "GetGetOnlyCollectionDataContract",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::SerializationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetGetOnlyCollectionDataContractSkipValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContract::GetGetOnlyCollectionDataContractSkipValidation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x613f57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                         { "GetGetOnlyCollectionDataContractSkipValidation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDataContractForInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t)>(
    &::System::Runtime::Serialization::DataContract::GetDataContractForInitialization)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x613f6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDataContractForInitialization", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetIdForInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::DataContract::GetIdForInitialization)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x613f7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { "GetIdForInitialization", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::RuntimeTypeHandle)>(&::System::Runtime::Serialization::DataContract::GetId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x613f270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetId", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetBuiltInDataContract)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x613fd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetBuiltInDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::DataContract::GetBuiltInDataContract)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6140070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                           { "GetBuiltInDataContract", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::GetBuiltInDataContract)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61403b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetBuiltInDataContract", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::GetNamespace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x614117c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetClrTypeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::GetClrTypeString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6141538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetClrTypeString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.ThrowInvalidDataContractException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Type*)>(&::System::Runtime::Serialization::DataContract::ThrowInvalidDataContractException)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x613ebd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { "ThrowInvalidDataContractException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_Helper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::get_Helper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6141e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_Helper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_UnderlyingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_UnderlyingType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613f5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_UnderlyingType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_OriginalUnderlyingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::get_OriginalUnderlyingType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6141e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_OriginalUnderlyingType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_IsBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_IsBuiltInDataContract)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6141f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_TypeForInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::get_TypeForInitialization)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6141f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_TypeForInitialization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::DataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6141f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::DataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                             ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::DataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6142048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_IsValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_IsValueType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6142124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_IsValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_IsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_IsReference)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x614213c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_IsReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_StableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::get_StableName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613e4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_StableName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6142154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_IsISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_IsISerializable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6142170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614218c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6142194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_HasRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_HasRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614219c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_TopLevelElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::get_TopLevelElementName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61421a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_TopLevelElementNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::get_TopLevelElementNamespace)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61421c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_CanContainReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_CanContainReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61421dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.get_IsPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::get_IsPrimitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61421e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.WriteRootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*,
                                                                                                                ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::DataContract::WriteRootElement)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x61421ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetValidContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::DataContract::*)(::System::Runtime::Serialization::SerializationMode)>(&::System::Runtime::Serialization::DataContract::GetValidContract)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61422d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetValidContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::DataContract::*)()>(
    &::System::Runtime::Serialization::DataContract::GetValidContract)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61422d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsValidContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)(::System::Runtime::Serialization::SerializationMode)>(
    &::System::Runtime::Serialization::DataContract::IsValidContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61422dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsTypeSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::IsTypeSerializable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61422e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsTypeSerializable", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsTypeSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::DataContract::IsTypeSerializable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6142380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                            { "IsTypeSerializable", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.ValidatePreviousCollectionTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::DataContract::ValidatePreviousCollectionTypes)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x61426d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { "ValidatePreviousCollectionTypes",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.UnwrapRedundantNullableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::UnwrapRedundantNullableType)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6142af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "UnwrapRedundantNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.UnwrapNullableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::UnwrapNullableType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x613deb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "UnwrapNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Runtime::Serialization::DataContract::IsAlpha)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6142d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsAlpha", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Runtime::Serialization::DataContract::IsDigit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6142d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsAsciiLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::IsAsciiLocalName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6142d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsAsciiLocalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.EncodeLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::EncodeLocalName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x613de34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "EncodeLocalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsValidNCName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::IsValidNCName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6142dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsValidNCName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetStableName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x613dfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetStableName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Type*, ::by_ref<bool>)>(&::System::Runtime::Serialization::DataContract::GetStableName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6142ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                           { "GetStableName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*,
                                                                                            ::by_ref<bool>)>(&::System::Runtime::Serialization::DataContract::GetStableName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6142f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { "GetStableName",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>(),
                                                                 ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDCTypeStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Type*, ::System::Runtime::Serialization::DataContractAttribute*)>(
    &::System::Runtime::Serialization::DataContract::GetDCTypeStableName)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6143240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                { "GetDCTypeStableName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContractAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetNonDCTypeStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::DataContract::GetNonDCTypeStableName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61433fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
            { "GetNonDCTypeStableName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.TryGetBuiltInXmlAndArrayTypeStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*,
                                                                ::by_ref<::System::Xml::XmlQualifiedName*>)>(&::System::Runtime::Serialization::DataContract::TryGetBuiltInXmlAndArrayTypeStableName)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6142fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { "TryGetBuiltInXmlAndArrayTypeStableName",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.TryGetDCAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Runtime::Serialization::DataContractAttribute*>)>(
    &::System::Runtime::Serialization::DataContract::TryGetDCAttribute)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6143148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                         { "TryGetDCAttribute", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContractAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetCollectionStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Type*, ::System::Type*, ::by_ref<::System::Runtime::Serialization::CollectionDataContractAttribute*>)>(
        &::System::Runtime::Serialization::DataContract::GetCollectionStableName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x613e77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                           { "GetCollectionStableName",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Runtime::Serialization::CollectionDataContractAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetCollectionStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Xml::XmlQualifiedName* (*)(::System::Type*, ::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*,
                                         ::by_ref<::System::Runtime::Serialization::CollectionDataContractAttribute*>)>(&::System::Runtime::Serialization::DataContract::GetCollectionStableName)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6143fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                           { "GetCollectionStableName",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Runtime::Serialization::CollectionDataContractAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetArrayPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::System::Type*>)>(&::System::Runtime::Serialization::DataContract::GetArrayPrefix)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x614444c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetArrayPrefix", {}, { ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetCollectionNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::GetCollectionNamespace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6144508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetCollectionNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDefaultStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetDefaultStableName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61445e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultStableName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDefaultStableLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetDefaultStableLocalName)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x6143514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultStableLocalName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDefaultDataContractNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetDefaultDataContractNamespace)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6143efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultDataContractNamespace", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDataContractNameForGenericName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<int32_t>* (*)(::StringW, ::System::Text::StringBuilder*)>(
    &::System::Runtime::Serialization::DataContract::GetDataContractNameForGenericName)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6144614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { "GetDataContractNameForGenericName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsBuiltInNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::IsBuiltInNamespace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6144560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsBuiltInNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDefaultStableNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetDefaultStableNamespace)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x61442c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultStableNamespace", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.CreateQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::StringW, ::StringW)>(&::System::Runtime::Serialization::DataContract::CreateQualifiedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x613e50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                           { "CreateQualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDefaultStableNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::GetDefaultStableNamespace)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6144e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultStableNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.CheckExplicitDataContractNamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Type*)>(&::System::Runtime::Serialization::DataContract::CheckExplicitDataContractNamespaceUri)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6143cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                             { "CheckExplicitDataContractNamespaceUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetClrTypeFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetClrTypeFullName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x613dcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetClrTypeFullName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetClrAssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*, ::by_ref<bool>)>(&::System::Runtime::Serialization::DataContract::GetClrAssemblyName)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6145048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                           { "GetClrAssemblyName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetClrTypeFullNameUsingTypeForwardedFromAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetClrTypeFullNameUsingTypeForwardedFromAttribute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6145168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                           { "GetClrTypeFullNameUsingTypeForwardedFromAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetClrTypeFullNameForArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetClrTypeFullNameForArray)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x61451a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetClrTypeFullNameForArray", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetClrTypeFullNameForNonArrayTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::GetClrTypeFullNameForNonArrayTypes)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x61452b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetClrTypeFullNameForNonArrayTypes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetClrNameAndNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::Runtime::Serialization::DataContract::GetClrNameAndNamespace)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6145520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                { "GetClrNameAndNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDefaultStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::Runtime::Serialization::DataContract::GetDefaultStableName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6145608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                { "GetDefaultStableName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetDefaultStableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::CodeTypeReference*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::System::Runtime::Serialization::DataContract::GetDefaultStableName)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x6145680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
            { "GetDefaultStableName", {}, { ::i2c::type_of<::System::Runtime::Serialization::CodeTypeReference*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetGlobalDataContractNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Reflection::ICustomAttributeProvider*)>(
    &::System::Runtime::Serialization::DataContract::GetGlobalDataContractNamespace)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6144bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                { "GetGlobalDataContractNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetNamespacesDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Serialization::DataContract::GetNamespacesDigest)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x61449e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetNamespacesDigest", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.ExpandGenericParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Type*)>(&::System::Runtime::Serialization::DataContract::ExpandGenericParameters)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61434a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                           { "ExpandGenericParameters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.ExpandGenericParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Runtime::Serialization::IGenericNameProvider*)>(
    &::System::Runtime::Serialization::DataContract::ExpandGenericParameters)> {
  constexpr static std::size_t size = 0x958;
  constexpr static std::size_t addrs = 0x6145d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                { "ExpandGenericParameters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::IGenericNameProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsTypeNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::IsTypeNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x613dc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsTypeNullable", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.ThrowTypeNotSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract::ThrowTypeNotSerializable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x614667c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "ThrowTypeNotSerializable", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.ImportKnownTypeAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (*)(::System::Type*)>(
        &::System::Runtime::Serialization::DataContract::ImportKnownTypeAttributes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x613edec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "ImportKnownTypeAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.ImportKnownTypeAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*,
                         ::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>)>(
        &::System::Runtime::Serialization::DataContract::ImportKnownTypeAttributes)> {
  constexpr static std::size_t size = 0xa34;
  constexpr static std::size_t addrs = 0x6146730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                            { "ImportKnownTypeAttributes",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.LoadKnownTypesFromConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*,
                         ::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>)>(
        &::System::Runtime::Serialization::DataContract::LoadKnownTypesFromConfig)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61477f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                            { "LoadKnownTypesFromConfig",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.CheckAndAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*,
                         ::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>)>(
        &::System::Runtime::Serialization::DataContract::CheckAndAdd)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6147260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                            { "CheckAndAdd",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)(::System::Object*)>(&::System::Runtime::Serialization::DataContract::Equals)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6147894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)(
    ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::DataContract::Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6147968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.IsEqualOrChecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract::*)(
    ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::DataContract::IsEqualOrChecked)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6147a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                { "IsEqualOrChecked",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::DataContract::*)()>(&::System::Runtime::Serialization::DataContract::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6147b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::DataContract::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::DataContract::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Runtime::Serialization::DataContract::__cordl_internal_set_name(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::DataContract::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::DataContract::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Runtime::Serialization::DataContract::__cordl_internal_set_ns(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*& System::Runtime::Serialization::DataContract::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* const& System::Runtime::Serialization::DataContract::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Runtime::Serialization::DataContract::__cordl_internal_set_helper(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Runtime::Serialization::DataContract::_ctor(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* helper) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, helper);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetDataContract(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetDataContract(::System::RuntimeTypeHandle typeHandle, ::System::Type* type,
                                                                                                                     ::System::Runtime::Serialization::SerializationMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
          { "GetDataContract", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, typeHandle, type, mode);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle,
                                                                                                                     ::System::Runtime::Serialization::SerializationMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
          { "GetDataContract", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id, typeHandle, mode);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle,
                                                                                                                                   ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                       { "GetDataContractSkipValidation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id, typeHandle, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetGetOnlyCollectionDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle,
                                                                                                                                      ::System::Type* type,
                                                                                                                                      ::System::Runtime::Serialization::SerializationMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                           { "GetGetOnlyCollectionDataContract",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::SerializationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id, typeHandle, type, mode);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetGetOnlyCollectionDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle,
                                                                                                                                                    ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                          { "GetGetOnlyCollectionDataContractSkipValidation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id, typeHandle, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetDataContractForInitialization(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDataContractForInitialization", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id);
}
inline int32_t System::Runtime::Serialization::DataContract::GetIdForInitialization(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                           { "GetIdForInitialization", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, classContract);
}
inline int32_t System::Runtime::Serialization::DataContract::GetId(::System::RuntimeTypeHandle typeHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetId", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, typeHandle);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetBuiltInDataContract(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetBuiltInDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetBuiltInDataContract(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "GetBuiltInDataContract", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, name, ns);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetBuiltInDataContract(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetBuiltInDataContract", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, typeName);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetNamespace(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract::GetClrTypeString(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetClrTypeString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(nullptr, ___internal_method, key);
}
inline void System::Runtime::Serialization::DataContract::ThrowInvalidDataContractException(::StringW message, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                           { "ThrowInvalidDataContractException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, type);
}
inline ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* System::Runtime::Serialization::DataContract::get_Helper() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_Helper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::DataContract::get_UnderlyingType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_UnderlyingType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::DataContract::get_OriginalUnderlyingType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_OriginalUnderlyingType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract::get_IsBuiltInDataContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::DataContract::get_TypeForInitialization() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_TypeForInitialization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                        ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::DataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                    ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context);
}
inline bool System::Runtime::Serialization::DataContract::get_IsValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_IsValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract::get_IsReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_IsReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::DataContract::get_StableName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_StableName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::DataContract::get_KnownDataContracts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract::get_IsISerializable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract::get_Namespace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract::get_HasRoot() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract::get_TopLevelElementName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract::get_TopLevelElementNamespace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract::get_CanContainReferences() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract::get_IsPrimitive() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract::WriteRootElement(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Xml::XmlDictionaryString* name,
                                                                           ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, name, ns);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetValidContract(::System::Runtime::Serialization::SerializationMode mode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, mode);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::GetValidContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract::IsValidContract(::System::Runtime::Serialization::SerializationMode mode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mode);
}
inline bool System::Runtime::Serialization::DataContract::IsTypeSerializable(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsTypeSerializable", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::DataContract::IsTypeSerializable(::System::Type* type,
                                                                             ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                          { "IsTypeSerializable", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, previousCollectionTypes);
}
inline void System::Runtime::Serialization::DataContract::ValidatePreviousCollectionTypes(::System::Type* collectionType, ::System::Type* itemType,
                                                                                          ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "ValidatePreviousCollectionTypes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collectionType, itemType, previousCollectionTypes);
}
inline ::System::Type* System::Runtime::Serialization::DataContract::UnwrapRedundantNullableType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "UnwrapRedundantNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Runtime::Serialization::DataContract::UnwrapNullableType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "UnwrapNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::DataContract::IsAlpha(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsAlpha", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Runtime::Serialization::DataContract::IsDigit(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Runtime::Serialization::DataContract::IsAsciiLocalName(::StringW localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsAsciiLocalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, localName);
}
inline ::StringW System::Runtime::Serialization::DataContract::EncodeLocalName(::StringW localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "EncodeLocalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, localName);
}
inline bool System::Runtime::Serialization::DataContract::IsValidNCName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsValidNCName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::DataContract::GetStableName(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetStableName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::DataContract::GetStableName(::System::Type* type, ::by_ref<bool> hasDataContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "GetStableName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type, hasDataContract);
}
inline ::System::Xml::XmlQualifiedName*
System::Runtime::Serialization::DataContract::GetStableName(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes,
                                                            ::by_ref<bool> hasDataContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                           { "GetStableName",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>(),
                                                               ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type, previousCollectionTypes, hasDataContract);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::DataContract::GetDCTypeStableName(::System::Type* type,
                                                                                                          ::System::Runtime::Serialization::DataContractAttribute* dataContractAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                              { "GetDCTypeStableName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContractAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type, dataContractAttribute);
}
inline ::System::Xml::XmlQualifiedName*
System::Runtime::Serialization::DataContract::GetNonDCTypeStableName(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                       { "GetNonDCTypeStableName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type, previousCollectionTypes);
}
inline bool System::Runtime::Serialization::DataContract::TryGetBuiltInXmlAndArrayTypeStableName(
    ::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes, ::by_ref<::System::Xml::XmlQualifiedName*> stableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                           { "TryGetBuiltInXmlAndArrayTypeStableName",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Xml::XmlQualifiedName*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, previousCollectionTypes, stableName);
}
inline bool System::Runtime::Serialization::DataContract::TryGetDCAttribute(::System::Type* type, ::by_ref<::System::Runtime::Serialization::DataContractAttribute*> dataContractAttribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                       { "TryGetDCAttribute", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContractAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, dataContractAttribute);
}
inline ::System::Xml::XmlQualifiedName*
System::Runtime::Serialization::DataContract::GetCollectionStableName(::System::Type* type, ::System::Type* itemType,
                                                                      ::by_ref<::System::Runtime::Serialization::CollectionDataContractAttribute*> collectionContractAttribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "GetCollectionStableName",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Runtime::Serialization::CollectionDataContractAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type, itemType, collectionContractAttribute);
}
inline ::System::Xml::XmlQualifiedName*
System::Runtime::Serialization::DataContract::GetCollectionStableName(::System::Type* type, ::System::Type* itemType,
                                                                      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes,
                                                                      ::by_ref<::System::Runtime::Serialization::CollectionDataContractAttribute*> collectionContractAttribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "GetCollectionStableName",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>*>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Runtime::Serialization::CollectionDataContractAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type, itemType, previousCollectionTypes, collectionContractAttribute);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetArrayPrefix(::by_ref<::System::Type*> itemType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetArrayPrefix", {}, { ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, itemType);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetCollectionNamespace(::StringW elementNs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetCollectionNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, elementNs);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::DataContract::GetDefaultStableName(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultStableName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetDefaultStableLocalName(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultStableLocalName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetDefaultDataContractNamespace(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultDataContractNamespace", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IList_1<int32_t>* System::Runtime::Serialization::DataContract::GetDataContractNameForGenericName(::StringW typeName, ::System::Text::StringBuilder* localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                           { "GetDataContractNameForGenericName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<int32_t>*>(nullptr, ___internal_method, typeName, localName);
}
inline bool System::Runtime::Serialization::DataContract::IsBuiltInNamespace(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsBuiltInNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ns);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetDefaultStableNamespace(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultStableNamespace", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::DataContract::CreateQualifiedName(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "CreateQualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, localName, ns);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetDefaultStableNamespace(::StringW clrNs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetDefaultStableNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clrNs);
}
inline void System::Runtime::Serialization::DataContract::CheckExplicitDataContractNamespaceUri(::StringW dataContractNs, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                           { "CheckExplicitDataContractNamespaceUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dataContractNs, type);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetClrTypeFullName(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetClrTypeFullName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetClrAssemblyName(::System::Type* type, ::by_ref<bool> hasTypeForwardedFrom) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "GetClrAssemblyName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type, hasTypeForwardedFrom);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetClrTypeFullNameUsingTypeForwardedFromAttribute(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "GetClrTypeFullNameUsingTypeForwardedFromAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetClrTypeFullNameForArray(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetClrTypeFullNameForArray", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetClrTypeFullNameForNonArrayTypes(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetClrTypeFullNameForNonArrayTypes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Serialization::DataContract::GetClrNameAndNamespace(::StringW fullTypeName, ::by_ref<::StringW> localName, ::by_ref<::StringW> ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                              { "GetClrNameAndNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullTypeName, localName, ns);
}
inline void System::Runtime::Serialization::DataContract::GetDefaultStableName(::StringW fullTypeName, ::by_ref<::StringW> localName, ::by_ref<::StringW> ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                              { "GetDefaultStableName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullTypeName, localName, ns);
}
inline void System::Runtime::Serialization::DataContract::GetDefaultStableName(::System::Runtime::Serialization::CodeTypeReference* typeReference, ::by_ref<::StringW> localName,
                                                                               ::by_ref<::StringW> ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
          { "GetDefaultStableName", {}, { ::i2c::type_of<::System::Runtime::Serialization::CodeTypeReference*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, typeReference, localName, ns);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetGlobalDataContractNamespace(::StringW clrNs, ::System::Reflection::ICustomAttributeProvider* customAttribuetProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                              { "GetGlobalDataContractNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clrNs, customAttribuetProvider);
}
inline ::StringW System::Runtime::Serialization::DataContract::GetNamespacesDigest(::StringW namespaces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "GetNamespacesDigest", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, namespaces);
}
inline ::StringW System::Runtime::Serialization::DataContract::ExpandGenericParameters(::StringW format, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                                                                         { "ExpandGenericParameters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, type);
}
inline ::StringW System::Runtime::Serialization::DataContract::ExpandGenericParameters(::StringW format, ::System::Runtime::Serialization::IGenericNameProvider* genericNameProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                              { "ExpandGenericParameters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::IGenericNameProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, genericNameProvider);
}
inline bool System::Runtime::Serialization::DataContract::IsTypeNullable(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "IsTypeNullable", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Serialization::DataContract::ThrowTypeNotSerializable(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "ThrowTypeNotSerializable", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::DataContract::ImportKnownTypeAttributes(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "ImportKnownTypeAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(
      nullptr, ___internal_method, type);
}
inline void System::Runtime::Serialization::DataContract::ImportKnownTypeAttributes(
    ::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
    ::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> knownDataContracts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                          { "ImportKnownTypeAttributes",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, typesChecked, knownDataContracts);
}
inline void System::Runtime::Serialization::DataContract::LoadKnownTypesFromConfig(
    ::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
    ::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> knownDataContracts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                          { "LoadKnownTypesFromConfig",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, typesChecked, knownDataContracts);
}
inline void System::Runtime::Serialization::DataContract::CheckAndAdd(
    ::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
    ::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> nameToDataContractTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                          { "CheckAndAdd",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, typesChecked, nameToDataContractTable);
}
inline bool System::Runtime::Serialization::DataContract::Equals(::System::Object* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool
System::Runtime::Serialization::DataContract::Equals(::System::Object* other,
                                                     ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, checkedContracts);
}
inline bool System::Runtime::Serialization::DataContract::IsEqualOrChecked(
    ::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract*>(),
                                              { "IsEqualOrChecked",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, checkedContracts);
}
inline int32_t System::Runtime::Serialization::DataContract::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract::New_ctor(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* helper) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::DataContract*>(helper));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContract::DataContract() {}
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetDataContractSkipValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractSkipValidation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x613f368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                         { "GetDataContractSkipValidation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetGetOnlyCollectionDataContractSkipValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetGetOnlyCollectionDataContractSkipValidation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x613f604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                         { "GetGetOnlyCollectionDataContractSkipValidation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetDataContractForInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractForInitialization)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x613f71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "GetDataContractForInitialization", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetIdForInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetIdForInitialization)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x613f840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                             { "GetIdForInitialization", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.ContractMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::ContractMatches)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6148740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                            { "ContractMatches", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::RuntimeTypeHandle)>(&::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetId)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x613f9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "GetId", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetNextId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IntRef* (*)()>(&::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetNextId)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6148848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "GetNextId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.CreateDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::CreateDataContract)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x6147d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                { "CreateDataContract", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.AssignDataContractToId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::DataContract*, int32_t)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::AssignDataContractToId)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x61485c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                             { "AssignDataContractToId", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.CreateGetOnlyCollectionDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::CreateGetOnlyCollectionDataContract)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6148304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                            { "CreateGetOnlyCollectionDataContract", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetDataContractAdapterType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractAdapterType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61477f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "GetDataContractAdapterType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetDataContractOriginalType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractOriginalType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6148dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "GetDataContractOriginalType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetDataContractAdapterTypeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeTypeHandle (*)(::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractAdapterTypeHandle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x614879c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "GetDataContractAdapterTypeHandle", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(::System::Type*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetBuiltInDataContract)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x613fda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "GetBuiltInDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetBuiltInDataContract)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x61400d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "GetBuiltInDataContract", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (*)(::StringW)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetBuiltInDataContract)> {
  constexpr static std::size_t size = 0xd74;
  constexpr static std::size_t addrs = 0x6140408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "GetBuiltInDataContract", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.TryCreateBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Runtime::Serialization::DataContract*>)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::TryCreateBuiltInDataContract)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x6148f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                         { "TryCreateBuiltInDataContract", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.TryCreateBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::by_ref<::System::Runtime::Serialization::DataContract*>)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::TryCreateBuiltInDataContract)> {
  constexpr static std::size_t size = 0x14c4;
  constexpr static std::size_t addrs = 0x614978c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
            { "TryCreateBuiltInDataContract", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetNamespace)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x61411d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "GetNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.GetClrTypeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (*)(::StringW)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetClrTypeString)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x6141590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "GetClrTypeString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.ThrowInvalidDataContractException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::ThrowInvalidDataContractException)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6141b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                             { "ThrowInvalidDataContractException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x613e150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_UnderlyingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_UnderlyingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ade0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_UnderlyingType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_OriginalUnderlyingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_OriginalUnderlyingType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6141eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_OriginalUnderlyingType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_IsBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_IsBuiltInDataContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ade8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_TypeForInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_TypeForInitialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614adf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_TypeForInitialization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.SetTypeForInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::SetTypeForInitialization)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x614ad3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "SetTypeForInitialization", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_IsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_IsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614adf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_IsReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.set_IsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(bool)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_IsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "set_IsReference", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_IsValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_IsValueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_IsValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.set_IsValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(bool)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_IsValueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "set_IsValueType", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_StableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_StableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_StableName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.set_StableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_StableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "set_StableName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(&::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_IsISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_IsISerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "set_Name", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.set_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "set_Namespace", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_HasRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_HasRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.set_HasRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(bool)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_HasRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x614ae60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_TopLevelElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_TopLevelElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.get_TopLevelElementNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_TopLevelElementNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614ae6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.SetDataContractName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::SetDataContractName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x614ae74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "SetDataContractName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.SetDataContractName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::SetDataContractName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x614af1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                { "SetDataContractName", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper.ThrowInvalidDataContractException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::*)(::StringW)>(
    &::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::ThrowInvalidDataContractException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x614af4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                           { "ThrowInvalidDataContractException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_underlyingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___underlyingType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_underlyingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___underlyingType;
}
constexpr void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_set_underlyingType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___underlyingType = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_originalUnderlyingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalUnderlyingType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_originalUnderlyingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalUnderlyingType;
}
constexpr void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_set_originalUnderlyingType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalUnderlyingType = value;
}
constexpr bool& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_isReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReference;
}
constexpr bool const& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_isReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReference;
}
constexpr void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_set_isReference(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReference = value;
}
constexpr bool& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_isValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isValueType;
}
constexpr bool const& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_isValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isValueType;
}
constexpr void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_set_isValueType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isValueType = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_stableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stableName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_stableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stableName;
}
constexpr void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_set_stableName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stableName = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_set_name(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_set_ns(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_typeForInitialization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeForInitialization;
}
constexpr ::System::Type* const& System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_get_typeForInitialization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeForInitialization;
}
constexpr void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::__cordl_internal_set_typeForInitialization(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeForInitialization = value;
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_typeToIDCache(
    ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::IntRef*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::IntRef*>*, "typeToIDCache",
                                    ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::IntRef*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::IntRef*>*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_typeToIDCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::IntRef*>*, "typeToIDCache",
                                           ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_dataContractCache(::ArrayW<::System::Runtime::Serialization::DataContract*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Runtime::Serialization::DataContract*>, "dataContractCache", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::ArrayW<::System::Runtime::Serialization::DataContract*>>(value));
}
inline ::ArrayW<::System::Runtime::Serialization::DataContract*> System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_dataContractCache() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Runtime::Serialization::DataContract*>, "dataContractCache",
                                           ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_dataContractID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "dataContractID", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_dataContractID() {
  return ::cordl_internals::getStaticField<int32_t, "dataContractID", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_typeToBuiltInContract(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::DataContract*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::DataContract*>*, "typeToBuiltInContract",
                                    ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::DataContract*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_typeToBuiltInContract() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::DataContract*>*, "typeToBuiltInContract",
                                           ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_nameToBuiltInContract(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*, "nameToBuiltInContract",
                                    ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_nameToBuiltInContract() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*, "nameToBuiltInContract",
                                           ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_typeNameToBuiltInContract(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataContract*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataContract*>*, "typeNameToBuiltInContract",
                                    ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataContract*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_typeNameToBuiltInContract() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataContract*>*, "typeNameToBuiltInContract",
                                           ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_namespaces(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "namespaces", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_namespaces() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "namespaces",
                                           ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_clrTypeStrings(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>*, "clrTypeStrings",
                                    ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_clrTypeStrings() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>*, "clrTypeStrings",
                                           ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_clrTypeStringsDictionary(::System::Xml::XmlDictionary* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlDictionary*, "clrTypeStringsDictionary", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::System::Xml::XmlDictionary*>(value));
}
inline ::System::Xml::XmlDictionary* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_clrTypeStringsDictionary() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlDictionary*, "clrTypeStringsDictionary", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_typeHandleRef(::System::Runtime::Serialization::TypeHandleRef* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::TypeHandleRef*, "typeHandleRef", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(
      std::forward<::System::Runtime::Serialization::TypeHandleRef*>(value));
}
inline ::System::Runtime::Serialization::TypeHandleRef* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_typeHandleRef() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::TypeHandleRef*, "typeHandleRef", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_cacheLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "cacheLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_cacheLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "cacheLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_createDataContractLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "createDataContractLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_createDataContractLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "createDataContractLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_initBuiltInContractsLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "initBuiltInContractsLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_initBuiltInContractsLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "initBuiltInContractsLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_namespacesLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "namespacesLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_namespacesLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "namespacesLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::setStaticF_clrTypeStringsLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "clrTypeStringsLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::getStaticF_clrTypeStringsLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "clrTypeStringsLock", ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>();
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                       { "GetDataContractSkipValidation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id, typeHandle, type);
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetGetOnlyCollectionDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                          { "GetGetOnlyCollectionDataContractSkipValidation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id, typeHandle, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractForInitialization(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "GetDataContractForInitialization", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id);
}
inline int32_t System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetIdForInitialization(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                           { "GetIdForInitialization", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, classContract);
}
inline bool System::Runtime::Serialization::DataContract_DataContractCriticalHelper::ContractMatches(::System::Runtime::Serialization::DataContract* contract,
                                                                                                     ::System::Runtime::Serialization::DataContract* cachedContract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                          { "ContractMatches", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, contract, cachedContract);
}
inline int32_t System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetId(::System::RuntimeTypeHandle typeHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "GetId", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, typeHandle);
}
inline ::System::Runtime::Serialization::IntRef* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetNextId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "GetNextId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IntRef*>(nullptr, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::CreateDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle,
                                                                                                                                                   ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                              { "CreateDataContract", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id, typeHandle, type);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::AssignDataContractToId(::System::Runtime::Serialization::DataContract* dataContract, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                           { "AssignDataContractToId", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dataContract, id);
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::CreateGetOnlyCollectionDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                          { "CreateGetOnlyCollectionDataContract", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, id, typeHandle, type);
}
inline ::System::Type* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractAdapterType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "GetDataContractAdapterType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractOriginalType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "GetDataContractOriginalType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::RuntimeTypeHandle System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetDataContractAdapterTypeHandle(::System::RuntimeTypeHandle typeHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "GetDataContractAdapterTypeHandle", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle>(nullptr, ___internal_method, typeHandle);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetBuiltInDataContract(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "GetBuiltInDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetBuiltInDataContract(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "GetBuiltInDataContract", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, name, ns);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetBuiltInDataContract(::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "GetBuiltInDataContract", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, typeName);
}
inline bool System::Runtime::Serialization::DataContract_DataContractCriticalHelper::TryCreateBuiltInDataContract(::System::Type* type,
                                                                                                                  ::by_ref<::System::Runtime::Serialization::DataContract*> dataContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                       { "TryCreateBuiltInDataContract", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, dataContract);
}
inline bool System::Runtime::Serialization::DataContract_DataContractCriticalHelper::TryCreateBuiltInDataContract(::StringW name, ::StringW ns,
                                                                                                                  ::by_ref<::System::Runtime::Serialization::DataContract*> dataContract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
          { "TryCreateBuiltInDataContract", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, ns, dataContract);
}
inline ::StringW System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetNamespace(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "GetNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::GetClrTypeString(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "GetClrTypeString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(nullptr, ___internal_method, key);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::ThrowInvalidDataContractException(::StringW message, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                           { "ThrowInvalidDataContractException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, type);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Type* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_UnderlyingType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_UnderlyingType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_OriginalUnderlyingType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_OriginalUnderlyingType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_IsBuiltInDataContract() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_TypeForInitialization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_TypeForInitialization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::SetTypeForInitialization(::System::Type* classType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "SetTypeForInitialization", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classType);
}
inline bool System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_IsReference() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_IsReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_IsReference(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "set_IsReference", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_IsValueType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_IsValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_IsValueType(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "set_IsValueType", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_StableName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_StableName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_StableName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "set_StableName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_KnownDataContracts() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline bool System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_IsISerializable() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_Name() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_Name(::System::Xml::XmlDictionaryString* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "set_Name", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_Namespace() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_Namespace(::System::Xml::XmlDictionaryString* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "set_Namespace", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_HasRoot() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::set_HasRoot(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_TopLevelElementName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::get_TopLevelElementNamespace() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::SetDataContractName(::System::Xml::XmlQualifiedName* stableName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "SetDataContractName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stableName);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::SetDataContractName(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                              { "SetDataContractName", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline void System::Runtime::Serialization::DataContract_DataContractCriticalHelper::ThrowInvalidDataContractException(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(),
                                                                                         { "ThrowInvalidDataContractException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* System::Runtime::Serialization::DataContract_DataContractCriticalHelper::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper::DataContract_DataContractCriticalHelper() {}
