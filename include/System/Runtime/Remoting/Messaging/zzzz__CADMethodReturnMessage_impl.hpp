#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CADMethodReturnMessage.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADArgHolder_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b40524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*)>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::_ctor)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5b405b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b40930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(), { "GetArguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b40a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                           { "GetArgs", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetReturnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b40a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                           { "GetReturnValue", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b40a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                           { "GetException", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.get_PropertiesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b40b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(), { "get_PropertiesCount", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__returnValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnValue;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__returnValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnValue;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_set__returnValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____returnValue = value;
}
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder*& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder* const& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_set__exception(::System::Runtime::Remoting::Messaging::CADArgHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exception = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sig;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sig;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_set__sig(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sig = value;
}
inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(nullptr, ___internal_method, callMsg);
}
inline void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, retMsg);
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(), { "GetArguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs(::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                         { "GetArgs", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, args);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue(::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                         { "GetReturnValue", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
inline ::System::Exception* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException(::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(),
                                                                                         { "GetException", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, args);
}
inline int32_t System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(), { "get_PropertiesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*
System::Runtime::Remoting::Messaging::CADMethodReturnMessage::New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(retMsg));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::CADMethodReturnMessage() {}
