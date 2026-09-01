#pragma once
// IWYU pragma private; include "System\Reflection\ReflectionTypeLoadException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Reflection/zzzz__ReflectionTypeLoadException_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::ReflectionTypeLoadException::*)(::ArrayW<::System::Type*>, ::ArrayW<::System::Exception*>)>(
    &::System::Reflection::ReflectionTypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b810f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Exception*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::ReflectionTypeLoadException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::ReflectionTypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b81130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::ReflectionTypeLoadException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::ReflectionTypeLoadException::GetObjectData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b81258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { ::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.get_Types
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::ReflectionTypeLoadException::*)()>(
    &::System::Reflection::ReflectionTypeLoadException::get_Types)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { "get_Types", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.get_LoaderExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Exception*> (::System::Reflection::ReflectionTypeLoadException::*)()>(
    &::System::Reflection::ReflectionTypeLoadException::get_LoaderExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { "get_LoaderExceptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::ReflectionTypeLoadException::*)()>(&::System::Reflection::ReflectionTypeLoadException::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { ::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::ReflectionTypeLoadException::*)()>(&::System::Reflection::ReflectionTypeLoadException::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8152c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { ::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::ReflectionTypeLoadException::*)(bool)>(&::System::Reflection::ReflectionTypeLoadException::CreateString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b81398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { "CreateString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& System::Reflection::ReflectionTypeLoadException::__cordl_internal_get__Types_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Types_k__BackingField;
}
constexpr ::ArrayW<::System::Type*> const& System::Reflection::ReflectionTypeLoadException::__cordl_internal_get__Types_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Types_k__BackingField;
}
constexpr void System::Reflection::ReflectionTypeLoadException::__cordl_internal_set__Types_k__BackingField(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Types_k__BackingField = value;
}
constexpr ::ArrayW<::System::Exception*>& System::Reflection::ReflectionTypeLoadException::__cordl_internal_get__LoaderExceptions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoaderExceptions_k__BackingField;
}
constexpr ::ArrayW<::System::Exception*> const& System::Reflection::ReflectionTypeLoadException::__cordl_internal_get__LoaderExceptions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoaderExceptions_k__BackingField;
}
constexpr void System::Reflection::ReflectionTypeLoadException::__cordl_internal_set__LoaderExceptions_k__BackingField(::ArrayW<::System::Exception*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LoaderExceptions_k__BackingField = value;
}
inline void System::Reflection::ReflectionTypeLoadException::_ctor(::ArrayW<::System::Type*> classes, ::ArrayW<::System::Exception*> exceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Exception*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classes, exceptions);
}
inline void System::Reflection::ReflectionTypeLoadException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Reflection::ReflectionTypeLoadException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::ArrayW<::System::Type*> System::Reflection::ReflectionTypeLoadException::get_Types() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { "get_Types", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Exception*> System::Reflection::ReflectionTypeLoadException::get_LoaderExceptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { "get_LoaderExceptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Exception*>>(this, ___internal_method);
}
inline ::StringW System::Reflection::ReflectionTypeLoadException::get_Message() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::ReflectionTypeLoadException::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::ReflectionTypeLoadException::CreateString(bool isMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ReflectionTypeLoadException*>(), { "CreateString", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, isMessage);
}
inline ::System::Reflection::ReflectionTypeLoadException* System::Reflection::ReflectionTypeLoadException::New_ctor(::ArrayW<::System::Type*> classes, ::ArrayW<::System::Exception*> exceptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::ReflectionTypeLoadException*>(classes, exceptions));
}
inline ::System::Reflection::ReflectionTypeLoadException* System::Reflection::ReflectionTypeLoadException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::ReflectionTypeLoadException*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::ReflectionTypeLoadException::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::ReflectionTypeLoadException::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::ReflectionTypeLoadException::ReflectionTypeLoadException() {}
