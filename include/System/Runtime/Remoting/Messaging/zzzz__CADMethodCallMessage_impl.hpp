#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CADMethodCallMessage.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodCallMessage_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodCallMessage.get_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b401cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(), { "get_Uri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodCallMessage.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::CADMethodCallMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Messaging::CADMethodCallMessage::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b3a260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodCallMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)(::System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(
    &::System::Runtime::Remoting::Messaging::CADMethodCallMessage::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b401d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodCallMessage.GetArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArguments)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b403c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(), { "GetArguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodCallMessage.GetArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)(::System::Collections::ArrayList*)>(
    &::System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArgs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b4050c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(),
                                                                                           { "GetArgs", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodCallMessage.get_PropertiesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::CADMethodCallMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_PropertiesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(), { "get_PropertiesCount", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Messaging::CADMethodCallMessage::__cordl_internal_get__uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uri;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::CADMethodCallMessage::__cordl_internal_get__uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uri;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodCallMessage::__cordl_internal_set__uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uri = value;
}
inline ::StringW System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(), { "get_Uri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* System::Runtime::Remoting::Messaging::CADMethodCallMessage::Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(nullptr, ___internal_method, callMsg);
}
inline void System::Runtime::Remoting::Messaging::CADMethodCallMessage::_ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callMsg);
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArguments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(), { "GetArguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArgs(::System::Collections::ArrayList* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(), { "GetArgs", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, args);
}
inline int32_t System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_PropertiesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(), { "get_PropertiesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*
System::Runtime::Remoting::Messaging::CADMethodCallMessage::New_ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(callMsg));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CADMethodCallMessage::CADMethodCallMessage() {}
