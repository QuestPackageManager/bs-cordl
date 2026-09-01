#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SerializationEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEvents_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventHandler_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Type*)>(
    &::System::Runtime::Serialization::SerializationEvents::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b4c630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.GetMethodsWithAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* (
    ::System::Runtime::Serialization::SerializationEvents::*)(::System::Type*, ::System::Type*)>(&::System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5b4c75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                             { "GetMethodsWithAttribute", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.get_HasOnSerializingEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::SerializationEvents::*)()>(
    &::System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b4c984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(), { "get_HasOnSerializingEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnSerializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b4c9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                { "InvokeOnSerializing", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b4ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                { "InvokeOnDeserializing", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b4ca9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                { "InvokeOnDeserialized", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnSerialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (
    ::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*)>(
    &::System::Runtime::Serialization::SerializationEvents::AddOnSerialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b4caf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                { "AddOnSerialized", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (
    ::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*)>(
    &::System::Runtime::Serialization::SerializationEvents::AddOnDeserialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b4ccf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                { "AddOnDeserialized", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*)>(
        &::System::Runtime::Serialization::SerializationEvents::InvokeOnDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b4c9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                             { "InvokeOnDelegate",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*,
                                                                                                                        ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*)>(
    &::System::Runtime::Serialization::SerializationEvents::AddOnDelegate)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5b4cb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                             { "AddOnDelegate",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationEventHandler*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& System::Runtime::Serialization::SerializationEvents::__cordl_internal_get__onSerializingMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSerializingMethods;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* const& System::Runtime::Serialization::SerializationEvents::__cordl_internal_get__onSerializingMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSerializingMethods;
}
constexpr void System::Runtime::Serialization::SerializationEvents::__cordl_internal_set__onSerializingMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onSerializingMethods = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& System::Runtime::Serialization::SerializationEvents::__cordl_internal_get__onSerializedMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSerializedMethods;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* const& System::Runtime::Serialization::SerializationEvents::__cordl_internal_get__onSerializedMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSerializedMethods;
}
constexpr void System::Runtime::Serialization::SerializationEvents::__cordl_internal_set__onSerializedMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onSerializedMethods = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& System::Runtime::Serialization::SerializationEvents::__cordl_internal_get__onDeserializingMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDeserializingMethods;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* const& System::Runtime::Serialization::SerializationEvents::__cordl_internal_get__onDeserializingMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDeserializingMethods;
}
constexpr void System::Runtime::Serialization::SerializationEvents::__cordl_internal_set__onDeserializingMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onDeserializingMethods = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& System::Runtime::Serialization::SerializationEvents::__cordl_internal_get__onDeserializedMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDeserializedMethods;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* const& System::Runtime::Serialization::SerializationEvents::__cordl_internal_get__onDeserializedMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDeserializedMethods;
}
constexpr void System::Runtime::Serialization::SerializationEvents::__cordl_internal_set__onDeserializedMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onDeserializedMethods = value;
}
inline void System::Runtime::Serialization::SerializationEvents::_ctor(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute(::System::Type* attribute,
                                                                                                                                                               ::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                                                         { "GetMethodsWithAttribute", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>(this, ___internal_method, attribute, t);
}
inline bool System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(), { "get_HasOnSerializingEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                              { "InvokeOnSerializing", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, context);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                              { "InvokeOnDeserializing", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, context);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                              { "InvokeOnDeserialized", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, context);
}
inline ::System::Runtime::Serialization::SerializationEventHandler*
System::Runtime::Serialization::SerializationEvents::AddOnSerialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                              { "AddOnSerialized", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*>(this, ___internal_method, obj, handler);
}
inline ::System::Runtime::Serialization::SerializationEventHandler*
System::Runtime::Serialization::SerializationEvents::AddOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                              { "AddOnDeserialized", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*>(this, ___internal_method, obj, handler);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDelegate(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context,
                                                                                  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* methods) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                                                         { "InvokeOnDelegate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, context, methods);
}
inline ::System::Runtime::Serialization::SerializationEventHandler*
System::Runtime::Serialization::SerializationEvents::AddOnDelegate(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler,
                                                                   ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* methods) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEvents*>(),
                                                           { "AddOnDelegate",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationEventHandler*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*>(nullptr, ___internal_method, obj, handler, methods);
}
inline ::System::Runtime::Serialization::SerializationEvents* System::Runtime::Serialization::SerializationEvents::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SerializationEvents*>(t));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationEvents::SerializationEvents() {}
