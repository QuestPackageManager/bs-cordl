#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\CADSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CADSerializer_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.DeserializeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::IO::MemoryStream*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(
    &::System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b3c5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(),
                            { "DeserializeMessage", {}, { ::i2c::type_of<::System::IO::MemoryStream*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.SerializeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MemoryStream* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b3c0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(),
                                                                                           { "SerializeMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.DeserializeObjectSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b3c980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(), { "DeserializeObjectSafe", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MemoryStream* (*)(::System::Object*)>(&::System::Runtime::Remoting::Channels::CADSerializer::SerializeObject)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b3cac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(), { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.DeserializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IO::MemoryStream*)>(&::System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b3ca24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(), { "DeserializeObject", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage(::System::IO::MemoryStream* mem,
                                                                                                                                ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(),
                          { "DeserializeMessage", {}, { ::i2c::type_of<::System::IO::MemoryStream*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(nullptr, ___internal_method, mem, msg);
}
inline ::System::IO::MemoryStream* System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(),
                                                                                         { "SerializeMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*>(nullptr, ___internal_method, msg);
}
inline ::System::Object* System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe(::ArrayW<uint8_t> mem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(), { "DeserializeObjectSafe", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, mem);
}
inline ::System::IO::MemoryStream* System::Runtime::Remoting::Channels::CADSerializer::SerializeObject(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(), { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*>(nullptr, ___internal_method, obj);
}
inline ::System::Object* System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject(::System::IO::MemoryStream* mem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CADSerializer*>(), { "DeserializeObject", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, mem);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::CADSerializer::CADSerializer() {}
