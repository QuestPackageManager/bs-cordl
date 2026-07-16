#pragma once
// IWYU pragma private; include "System/UnitySerializationHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/zzzz__UnitySerializationHolder_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::UnitySerializationHolder.AddElementTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*)>(
    &::System::UnitySerializationHolder::AddElementTypes)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5c88ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(),
                                                { "AddElementTypes", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnitySerializationHolder.MakeElementTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::UnitySerializationHolder::*)(::System::Type*)>(&::System::UnitySerializationHolder::MakeElementTypes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c88ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(), { "MakeElementTypes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnitySerializationHolder.GetUnitySerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, int32_t)>(&::System::UnitySerializationHolder::GetUnitySerializationInfo)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c88fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(),
                                                { "GetUnitySerializationInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnitySerializationHolder.GetUnitySerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*)>(
    &::System::UnitySerializationHolder::GetUnitySerializationInfo)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5c890ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(),
                                         { "GetUnitySerializationInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnitySerializationHolder.GetUnitySerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, int32_t, ::StringW, ::System::Reflection::RuntimeAssembly*)>(
    &::System::UnitySerializationHolder::GetUnitySerializationInfo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c89470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(), { "GetUnitySerializationInfo",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::RuntimeAssembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnitySerializationHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UnitySerializationHolder::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                    ::System::Runtime::Serialization::StreamingContext)>(&::System::UnitySerializationHolder::_ctor)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x5c895dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnitySerializationHolder.ThrowInsufficientInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UnitySerializationHolder::*)(::StringW)>(&::System::UnitySerializationHolder::ThrowInsufficientInformation)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c899d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(), { "ThrowInsufficientInformation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnitySerializationHolder.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UnitySerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::UnitySerializationHolder::GetObjectData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c89ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(), { ::i2c::class_of<::System::UnitySerializationHolder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnitySerializationHolder.GetRealObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::UnitySerializationHolder::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::UnitySerializationHolder::GetRealObject)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5c89b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(), { ::i2c::class_of<::System::UnitySerializationHolder*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& System::UnitySerializationHolder::__cordl_internal_get_m_instantiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_instantiation;
}
constexpr ::ArrayW<::System::Type*> const& System::UnitySerializationHolder::__cordl_internal_get_m_instantiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_instantiation;
}
constexpr void System::UnitySerializationHolder::__cordl_internal_set_m_instantiation(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_instantiation = value;
}
constexpr ::ArrayW<int32_t>& System::UnitySerializationHolder::__cordl_internal_get_m_elementTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_elementTypes;
}
constexpr ::ArrayW<int32_t> const& System::UnitySerializationHolder::__cordl_internal_get_m_elementTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_elementTypes;
}
constexpr void System::UnitySerializationHolder::__cordl_internal_set_m_elementTypes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_elementTypes = value;
}
constexpr int32_t& System::UnitySerializationHolder::__cordl_internal_get_m_genericParameterPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_genericParameterPosition;
}
constexpr int32_t const& System::UnitySerializationHolder::__cordl_internal_get_m_genericParameterPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_genericParameterPosition;
}
constexpr void System::UnitySerializationHolder::__cordl_internal_set_m_genericParameterPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_genericParameterPosition = value;
}
constexpr ::System::Type*& System::UnitySerializationHolder::__cordl_internal_get_m_declaringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_declaringType;
}
constexpr ::System::Type* const& System::UnitySerializationHolder::__cordl_internal_get_m_declaringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_declaringType;
}
constexpr void System::UnitySerializationHolder::__cordl_internal_set_m_declaringType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_declaringType = value;
}
constexpr ::System::Reflection::MethodBase*& System::UnitySerializationHolder::__cordl_internal_get_m_declaringMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_declaringMethod;
}
constexpr ::System::Reflection::MethodBase* const& System::UnitySerializationHolder::__cordl_internal_get_m_declaringMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_declaringMethod;
}
constexpr void System::UnitySerializationHolder::__cordl_internal_set_m_declaringMethod(::System::Reflection::MethodBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_declaringMethod = value;
}
constexpr ::StringW& System::UnitySerializationHolder::__cordl_internal_get_m_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_data;
}
constexpr ::StringW const& System::UnitySerializationHolder::__cordl_internal_get_m_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_data;
}
constexpr void System::UnitySerializationHolder::__cordl_internal_set_m_data(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_data = value;
}
constexpr ::StringW& System::UnitySerializationHolder::__cordl_internal_get_m_assemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_assemblyName;
}
constexpr ::StringW const& System::UnitySerializationHolder::__cordl_internal_get_m_assemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_assemblyName;
}
constexpr void System::UnitySerializationHolder::__cordl_internal_set_m_assemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_assemblyName = value;
}
constexpr int32_t& System::UnitySerializationHolder::__cordl_internal_get_m_unityType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_unityType;
}
constexpr int32_t const& System::UnitySerializationHolder::__cordl_internal_get_m_unityType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_unityType;
}
constexpr void System::UnitySerializationHolder::__cordl_internal_set_m_unityType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_unityType = value;
}
inline ::System::RuntimeType* System::UnitySerializationHolder::AddElementTypes(::System::Runtime::Serialization::SerializationInfo* info, ::System::RuntimeType* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(),
                                              { "AddElementTypes", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(nullptr, ___internal_method, info, type);
}
inline ::System::Type* System::UnitySerializationHolder::MakeElementTypes(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(), { "MakeElementTypes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline void System::UnitySerializationHolder::GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, int32_t unityType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(),
                                              { "GetUnitySerializationInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, info, unityType);
}
inline void System::UnitySerializationHolder::GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(),
                                       { "GetUnitySerializationInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, info, type);
}
inline void System::UnitySerializationHolder::GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, int32_t unityType, ::StringW data,
                                                                        ::System::Reflection::RuntimeAssembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(), { "GetUnitySerializationInfo",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<int32_t>(),
                                                                                                   ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::RuntimeAssembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, info, unityType, data, assembly);
}
inline void System::UnitySerializationHolder::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::UnitySerializationHolder::ThrowInsufficientInformation(::StringW field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnitySerializationHolder*>(), { "ThrowInsufficientInformation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline void System::UnitySerializationHolder::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UnitySerializationHolder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Object* System::UnitySerializationHolder::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UnitySerializationHolder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline ::System::UnitySerializationHolder* System::UnitySerializationHolder::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::UnitySerializationHolder*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::UnitySerializationHolder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::UnitySerializationHolder::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::UnitySerializationHolder::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::UnitySerializationHolder::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::UnitySerializationHolder::UnitySerializationHolder() {}
