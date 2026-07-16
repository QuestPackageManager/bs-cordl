#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SurrogateDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::*)(
    ::System::Type*, ::System::Runtime::Serialization::ISerializationSurrogate*)>(&::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x615b31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper.get_SerializationSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::get_SerializationSurrogate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615c220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*>(), { "get_SerializationSurrogate", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ISerializationSurrogate*&
System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::__cordl_internal_get_serializationSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate* const&
System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::__cordl_internal_get_serializationSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr void System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::__cordl_internal_set_serializationSurrogate(
    ::System::Runtime::Serialization::ISerializationSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializationSurrogate = value;
}
inline void System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::_ctor(::System::Type* type,
                                                                                                             ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, serializationSurrogate);
}
inline ::System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::get_SerializationSurrogate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*>(), { "get_SerializationSurrogate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*
System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::New_ctor(::System::Type* type,
                                                                                                    ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*>(type, serializationSurrogate));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper::SurrogateDataContract_SurrogateDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SurrogateDataContract::*)(::System::Type*, ::System::Runtime::Serialization::ISerializationSurrogate*)>(
    &::System::Runtime::Serialization::SurrogateDataContract::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6153fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract.get_SerializationSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (::System::Runtime::Serialization::SurrogateDataContract::*)()>(
    &::System::Runtime::Serialization::SurrogateDataContract::get_SerializationSurrogate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x615b3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(), { "get_SerializationSurrogate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SurrogateDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                         ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::SurrogateDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x615b3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract.SerializationSurrogateSetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::SurrogateDataContract::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::SurrogateDataContract::SerializationSurrogateSetObjectData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x615b918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                                                             { "SerializationSurrogateSetObjectData",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract.GetRealObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Serialization::IObjectReference*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::SurrogateDataContract::GetRealObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x615b9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                            { "GetRealObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::IObjectReference*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract.GetUninitializedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SurrogateDataContract::*)(::System::Type*)>(
    &::System::Runtime::Serialization::SurrogateDataContract::GetUninitializedObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x615bab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(), { "GetUninitializedObject", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract.SerializationSurrogateGetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SurrogateDataContract::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*,
                                                                                                                         ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::SurrogateDataContract::SerializationSurrogateGetObjectData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x615b550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                                                             { "SerializationSurrogateGetObjectData",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::SurrogateDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::SurrogateDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x615bb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*& System::Runtime::Serialization::SurrogateDataContract::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper* const&
System::Runtime::Serialization::SurrogateDataContract::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Runtime::Serialization::SurrogateDataContract::__cordl_internal_set_helper(::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Runtime::Serialization::SurrogateDataContract::_ctor(::System::Type* type, ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, serializationSurrogate);
}
inline ::System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Serialization::SurrogateDataContract::get_SerializationSurrogate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(), { "get_SerializationSurrogate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SurrogateDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                 ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::SurrogateDataContract::SerializationSurrogateSetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* serInfo,
                                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                                                           { "SerializationSurrogateSetObjectData",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, serInfo, context);
}
inline ::System::Object* System::Runtime::Serialization::SurrogateDataContract::GetRealObject(::System::Runtime::Serialization::IObjectReference* obj,
                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                          { "GetRealObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::IObjectReference*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::SurrogateDataContract::GetUninitializedObject(::System::Type* objType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(), { "GetUninitializedObject", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, objType);
}
inline void System::Runtime::Serialization::SurrogateDataContract::SerializationSurrogateGetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* serInfo,
                                                                                                       ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(),
                                                           { "SerializationSurrogateGetObjectData",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, serInfo, context);
}
inline ::System::Object* System::Runtime::Serialization::SurrogateDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                             ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SurrogateDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context);
}
inline ::System::Runtime::Serialization::SurrogateDataContract*
System::Runtime::Serialization::SurrogateDataContract::New_ctor(::System::Type* type, ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SurrogateDataContract*>(type, serializationSurrogate));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SurrogateDataContract::SurrogateDataContract() {}
