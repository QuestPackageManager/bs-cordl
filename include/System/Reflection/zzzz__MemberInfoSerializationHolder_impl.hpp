#pragma once
// IWYU pragma private; include "System/Reflection/MemberInfoSerializationHolder.hpp"
#include "System/Reflection/zzzz__MemberTypes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__MemberInfoSerializationHolder_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder.GetSerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::StringW, ::System::RuntimeType*, ::StringW, ::System::Reflection::MemberTypes)>(
    &::System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b838ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(),
                                                             { "GetSerializationInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::MemberTypes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder.GetSerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::StringW, ::System::RuntimeType*, ::StringW, ::StringW, ::System::Reflection::MemberTypes, ::ArrayW<::System::Type*>)>(
        &::System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5b838bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(),
                                                                                           { "GetSerializationInfo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::System::Reflection::MemberTypes>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::MemberInfoSerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::MemberInfoSerializationHolder::_ctor)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5b83bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::MemberInfoSerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::MemberInfoSerializationHolder::GetObjectData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b83eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(),
                                                                                          { ::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder.GetRealObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::MemberInfoSerializationHolder::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Reflection::MemberInfoSerializationHolder::GetRealObject)> {
  constexpr static std::size_t size = 0xb2c;
  constexpr static std::size_t addrs = 0x5b83f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(),
                                                                                          { ::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_memberName;
}
constexpr ::StringW const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_memberName;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_memberName = value;
}
constexpr ::System::RuntimeType*& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_reflectedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reflectedType;
}
constexpr ::System::RuntimeType* const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_reflectedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reflectedType;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_reflectedType(::System::RuntimeType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_reflectedType = value;
}
constexpr ::StringW& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signature;
}
constexpr ::StringW const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signature;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_signature(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_signature = value;
}
constexpr ::StringW& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_signature2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signature2;
}
constexpr ::StringW const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_signature2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signature2;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_signature2(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_signature2 = value;
}
constexpr ::System::Reflection::MemberTypes& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_memberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_memberType;
}
constexpr ::System::Reflection::MemberTypes const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_memberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_memberType;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_memberType(::System::Reflection::MemberTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_memberType = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_info;
}
constexpr ::System::Runtime::Serialization::SerializationInfo* const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_info;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_info(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_info = value;
}
inline void System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass,
                                                                                    ::StringW signature, ::System::Reflection::MemberTypes type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(),
                                                           { "GetSerializationInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::MemberTypes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, info, name, reflectedClass, signature, type);
}
inline void System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass,
                                                                                    ::StringW signature, ::StringW signature2, ::System::Reflection::MemberTypes type,
                                                                                    ::ArrayW<::System::Type*> genericArguments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(),
                                                                                         { "GetSerializationInfo",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::System::Reflection::MemberTypes>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, info, name, reflectedClass, signature, signature2, type, genericArguments);
}
inline void System::Reflection::MemberInfoSerializationHolder::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Reflection::MemberInfoSerializationHolder::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Reflection::MemberInfoSerializationHolder::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberInfoSerializationHolder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline ::System::Reflection::MemberInfoSerializationHolder* System::Reflection::MemberInfoSerializationHolder::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                        ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::MemberInfoSerializationHolder*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::MemberInfoSerializationHolder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::MemberInfoSerializationHolder::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::Reflection::MemberInfoSerializationHolder::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::Reflection::MemberInfoSerializationHolder::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::MemberInfoSerializationHolder::MemberInfoSerializationHolder() {}
