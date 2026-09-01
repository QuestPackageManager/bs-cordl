#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\ObjRefSurrogate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ObjRefSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ObjRefSurrogate.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ObjRefSurrogate::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*,
                                                                                                                         ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Remoting::Messaging::ObjRefSurrogate::GetObjectData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b4a1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ObjRefSurrogate.SetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Remoting::Messaging::ObjRefSurrogate::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                ::System::Runtime::Serialization::ISurrogateSelector*)>(&::System::Runtime::Remoting::Messaging::ObjRefSurrogate::SetObjectData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b4a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ObjRefSurrogate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ObjRefSurrogate::*)()>(&::System::Runtime::Remoting::Messaging::ObjRefSurrogate::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4a380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::ObjRefSurrogate::GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si,
                                                                                 ::System::Runtime::Serialization::StreamingContext sc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, si, sc);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::ObjRefSurrogate::SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si,
                                                                                              ::System::Runtime::Serialization::StreamingContext sc,
                                                                                              ::System::Runtime::Serialization::ISurrogateSelector* selector) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, si, sc, selector);
}
inline void System::Runtime::Remoting::Messaging::ObjRefSurrogate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::ObjRefSurrogate* System::Runtime::Remoting::Messaging::ObjRefSurrogate::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
constexpr System::Runtime::Remoting::Messaging::ObjRefSurrogate::operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
constexpr ::System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Remoting::Messaging::ObjRefSurrogate::i___System__Runtime__Serialization__ISerializationSurrogate() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ObjRefSurrogate::ObjRefSurrogate() {}
