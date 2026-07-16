#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractSurrogateCaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractSurrogateCaller_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataContractSurrogate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSurrogateCaller.GetDataContractType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Runtime::Serialization::IDataContractSurrogate*, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContractSurrogateCaller::GetDataContractType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6152230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSurrogateCaller*>(),
                                                { "GetDataContractType", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSurrogateCaller.GetObjectToSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Serialization::IDataContractSurrogate*, ::System::Object*, ::System::Type*, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContractSurrogateCaller::GetObjectToSerialize)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x615231c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSurrogateCaller*>(),
                                                             { "GetObjectToSerialize",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractSurrogateCaller.GetDeserializedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Serialization::IDataContractSurrogate*, ::System::Object*, ::System::Type*, ::System::Type*)>(
    &::System::Runtime::Serialization::DataContractSurrogateCaller::GetDeserializedObject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6152410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSurrogateCaller*>(),
                                                             { "GetDeserializedObject",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Type* System::Runtime::Serialization::DataContractSurrogateCaller::GetDataContractType(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSurrogateCaller*>(),
                                              { "GetDataContractType", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, surrogate, type);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSurrogateCaller::GetObjectToSerialize(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Object* obj,
                                                                                                           ::System::Type* objType, ::System::Type* membertype) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSurrogateCaller*>(),
                                                           { "GetObjectToSerialize",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, surrogate, obj, objType, membertype);
}
inline ::System::Object* System::Runtime::Serialization::DataContractSurrogateCaller::GetDeserializedObject(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Object* obj,
                                                                                                            ::System::Type* objType, ::System::Type* memberType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractSurrogateCaller*>(),
                                                           { "GetDeserializedObject",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, surrogate, obj, objType, memberType);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContractSurrogateCaller::DataContractSurrogateCaller() {}
