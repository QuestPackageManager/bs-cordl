#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationEvents.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Type*)>(
    &::System::Runtime::Serialization::SerializationEvents::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3cf89b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.GetMethodsWithAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* (
    ::System::Runtime::Serialization::SerializationEvents::*)(::System::Type*, ::System::Type*)>(&::System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3cf8ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                                                                               "GetMethodsWithAttribute", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.get_HasOnSerializingEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::SerializationEvents::*)()>(
    &::System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3cf8d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                                                                               "get_HasOnSerializingEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnSerializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3cf8d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "InvokeOnSerializing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3cf8de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "InvokeOnDeserializing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(
    ::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3cf8e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "InvokeOnDeserialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnSerialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (
    ::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*)>(
    &::System::Runtime::Serialization::SerializationEvents::AddOnSerialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3cf8e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "AddOnSerialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (
    ::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*)>(
    &::System::Runtime::Serialization::SerializationEvents::AddOnDeserialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3cf90e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "AddOnDeserialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*)>(
        &::System::Runtime::Serialization::SerializationEvents::InvokeOnDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3cf8d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "InvokeOnDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::SerializationEventHandler* (*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*,
                                                                                 ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*)>(
        &::System::Runtime::Serialization::SerializationEvents::AddOnDelegate)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3cf8ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "AddOnDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSerializingMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSerializedMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onDeserializingMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onDeserializedMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::SerializationEvents::_ctor(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute(::System::Type* attribute,
                                                                                                                                                               ::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                                                                             "GetMethodsWithAttribute", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, false>(this, ___internal_method, attribute, t);
}
inline bool System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                                                                             "get_HasOnSerializingEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "InvokeOnSerializing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, context);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "InvokeOnDeserializing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, context);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "InvokeOnDeserialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, context);
}
inline ::System::Runtime::Serialization::SerializationEventHandler*
System::Runtime::Serialization::SerializationEvents::AddOnSerialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "AddOnSerialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*, false>(this, ___internal_method, obj, handler);
}
inline ::System::Runtime::Serialization::SerializationEventHandler*
System::Runtime::Serialization::SerializationEvents::AddOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "AddOnDeserialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*, false>(this, ___internal_method, obj, handler);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDelegate(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context,
                                                                                  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* methods) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "InvokeOnDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, context, methods);
}
inline ::System::Runtime::Serialization::SerializationEventHandler*
System::Runtime::Serialization::SerializationEvents::AddOnDelegate(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler,
                                                                   ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* methods) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(), "AddOnDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*, false>(nullptr, ___internal_method, obj, handler, methods);
}
inline ::System::Runtime::Serialization::SerializationEvents* System::Runtime::Serialization::SerializationEvents::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::SerializationEvents*>(t));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationEvents::SerializationEvents() {}
