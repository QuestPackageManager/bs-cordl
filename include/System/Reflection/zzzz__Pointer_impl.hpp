#pragma once
// IWYU pragma private; include "System\Reflection\Pointer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__Pointer_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Pointer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Pointer::*)(void*, ::System::Type*)>(&::System::Reflection::Pointer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Pointer*>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Pointer.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(void*, ::System::Type*)>(&::System::Reflection::Pointer::Box)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b80dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Pointer*>(), { "Box", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Pointer.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::Object*)>(&::System::Reflection::Pointer::Unbox)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b80f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Pointer*>(), { "Unbox", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Pointer.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Reflection::Pointer::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Reflection::Pointer::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b80fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Pointer*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
constexpr void*& System::Reflection::Pointer::__cordl_internal_get__ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ptr;
}
constexpr void* const& System::Reflection::Pointer::__cordl_internal_get__ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ptr;
}
constexpr void System::Reflection::Pointer::__cordl_internal_set__ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ptr = value;
}
constexpr ::System::Type*& System::Reflection::Pointer::__cordl_internal_get__ptrType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ptrType;
}
constexpr ::System::Type* const& System::Reflection::Pointer::__cordl_internal_get__ptrType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ptrType;
}
constexpr void System::Reflection::Pointer::__cordl_internal_set__ptrType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ptrType = value;
}
inline void System::Reflection::Pointer::_ctor(void* ptr, ::System::Type* ptrType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Pointer*>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr, ptrType);
}
inline ::System::Object* System::Reflection::Pointer::Box(void* ptr, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Pointer*>(), { "Box", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, ptr, type);
}
inline void* System::Reflection::Pointer::Unbox(::System::Object* ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Pointer*>(), { "Unbox", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, ptr);
}
inline void System::Reflection::Pointer::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Pointer*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Reflection::Pointer* System::Reflection::Pointer::New_ctor(void* ptr, ::System::Type* ptrType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::Pointer*>(ptr, ptrType));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::Pointer::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::Pointer::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::Pointer::Pointer() {}
