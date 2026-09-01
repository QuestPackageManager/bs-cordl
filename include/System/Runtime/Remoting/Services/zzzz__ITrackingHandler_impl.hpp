#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Services\ITrackingHandler.hpp"
#include "System/Runtime/Remoting/Services/zzzz__ITrackingHandler_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Services::ITrackingHandler.DisconnectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Services::ITrackingHandler::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Services::ITrackingHandler::DisconnectedObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Services::ITrackingHandler.MarshaledObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Services::ITrackingHandler::*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::Services::ITrackingHandler::MarshaledObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Services::ITrackingHandler.UnmarshaledObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Services::ITrackingHandler::*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::Services::ITrackingHandler::UnmarshaledObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(), 2 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Services::ITrackingHandler::DisconnectedObject(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void System::Runtime::Remoting::Services::ITrackingHandler::MarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, _cordl_or);
}
inline void System::Runtime::Remoting::Services::ITrackingHandler::UnmarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Services::ITrackingHandler*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, _cordl_or);
}
