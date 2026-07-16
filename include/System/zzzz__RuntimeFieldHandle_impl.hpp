#pragma once
// IWYU pragma private; include "System/RuntimeFieldHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeFieldInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
//  Writing Method size for method: ::System::RuntimeFieldHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeFieldHandle::*)(::System::IntPtr)>(&::System::RuntimeFieldHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c95654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeFieldHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeFieldHandle::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                              ::System::Runtime::Serialization::StreamingContext)>(&::System::RuntimeFieldHandle::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c9565c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeFieldHandle.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::RuntimeFieldHandle::*)()>(&::System::RuntimeFieldHandle::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c957e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeFieldHandle.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeFieldHandle::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                              ::System::Runtime::Serialization::StreamingContext)>(&::System::RuntimeFieldHandle::GetObjectData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c957e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::RuntimeFieldHandle>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeFieldHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeFieldHandle::*)(::System::Object*)>(&::System::RuntimeFieldHandle::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c95974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(), { ::i2c::class_of<::System::RuntimeFieldHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeFieldHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::RuntimeFieldHandle::*)()>(&::System::RuntimeFieldHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c95a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(), { ::i2c::class_of<::System::RuntimeFieldHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeFieldHandle.SetValueInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*)>(&::System::RuntimeFieldHandle::SetValueInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c95a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(),
                            { "SetValueInternal", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeFieldHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::RuntimeFieldInfo*, ::System::Object*, ::System::Object*, ::System::RuntimeType*,
                                                                ::System::Reflection::FieldAttributes, ::System::RuntimeType*, ::by_ref<bool>)>(&::System::RuntimeFieldHandle::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c95a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(),
                                                             { "SetValue",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::RuntimeFieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::Reflection::FieldAttributes>(),
                                                                 ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeFieldHandle.SetValueDirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::RuntimeFieldInfo*, ::System::RuntimeType*, void*, ::System::Object*, ::System::RuntimeType*)>(
    &::System::RuntimeFieldHandle::SetValueDirect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c95a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(), { "SetValueDirect",
                                                                               {},
                                                                               { ::i2c::type_of<::System::Reflection::RuntimeFieldInfo*>(), ::i2c::type_of<::System::RuntimeType*>(),
                                                                                 ::i2c::type_of<void*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
inline void System::RuntimeFieldHandle::_ctor(::System::IntPtr v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void System::RuntimeFieldHandle::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline ::System::IntPtr System::RuntimeFieldHandle::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void System::RuntimeFieldHandle::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline bool System::RuntimeFieldHandle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeFieldHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::RuntimeFieldHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeFieldHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::RuntimeFieldHandle::SetValueInternal(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(),
                                       { "SetValueInternal", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fi, obj, value);
}
inline void System::RuntimeFieldHandle::SetValue(::System::Reflection::RuntimeFieldInfo* field, ::System::Object* obj, ::System::Object* value, ::System::RuntimeType* fieldType,
                                                 ::System::Reflection::FieldAttributes fieldAttr, ::System::RuntimeType* declaringType, ::by_ref<bool> domainInitialized) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(),
                                                           { "SetValue",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::RuntimeFieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::Reflection::FieldAttributes>(),
                                                               ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, field, obj, value, fieldType, fieldAttr, declaringType, domainInitialized);
}
inline void System::RuntimeFieldHandle::SetValueDirect(::System::Reflection::RuntimeFieldInfo* field, ::System::RuntimeType* fieldType, void* pTypedRef, ::System::Object* value,
                                                       ::System::RuntimeType* contextType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeFieldHandle>(), { "SetValueDirect",
                                                                             {},
                                                                             { ::i2c::type_of<::System::Reflection::RuntimeFieldInfo*>(), ::i2c::type_of<::System::RuntimeType*>(),
                                                                               ::i2c::type_of<void*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, field, fieldType, pTypedRef, value, contextType);
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::RuntimeFieldHandle::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::RuntimeFieldHandle::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::RuntimeFieldHandle::RuntimeFieldHandle(::System::IntPtr value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::System::RuntimeFieldHandle::RuntimeFieldHandle() {}
