#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IDataContractSurrogate.hpp"
#include "System/Runtime/Serialization/zzzz__IDataContractSurrogate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IDataContractSurrogate.GetDataContractType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::IDataContractSurrogate::*)(::System::Type*)>(
    &::System::Runtime::Serialization::IDataContractSurrogate::GetDataContractType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IDataContractSurrogate.GetObjectToSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::IDataContractSurrogate::*)(::System::Object*, ::System::Type*)>(
    &::System::Runtime::Serialization::IDataContractSurrogate::GetObjectToSerialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IDataContractSurrogate.GetDeserializedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::IDataContractSurrogate::*)(::System::Object*, ::System::Type*)>(
    &::System::Runtime::Serialization::IDataContractSurrogate::GetDeserializedObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Type* System::Runtime::Serialization::IDataContractSurrogate::GetDataContractType(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline ::System::Object* System::Runtime::Serialization::IDataContractSurrogate::GetObjectToSerialize(::System::Object* obj, ::System::Type* targetType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, targetType);
}
inline ::System::Object* System::Runtime::Serialization::IDataContractSurrogate::GetDeserializedObject(::System::Object* obj, ::System::Type* targetType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IDataContractSurrogate*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, targetType);
}
