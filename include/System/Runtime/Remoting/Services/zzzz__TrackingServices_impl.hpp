#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Services\TrackingServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Services/zzzz__TrackingServices_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Services::TrackingServices.NotifyMarshaledObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5b2b14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::TrackingServices*>(),
                                                             { "NotifyMarshaledObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Services::TrackingServices.NotifyUnmarshaledObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5b2a4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::TrackingServices*>(),
                                                             { "NotifyUnmarshaledObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Services::TrackingServices.NotifyDisconnectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5b2ec5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::TrackingServices*>(), { "NotifyDisconnectedObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Services::TrackingServices::setStaticF__handlers(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "_handlers", ::System::Runtime::Remoting::Services::TrackingServices*>(std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Services::TrackingServices::getStaticF__handlers() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "_handlers", ::System::Runtime::Remoting::Services::TrackingServices*>();
}
inline void System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::TrackingServices*>(),
                                                           { "NotifyMarshaledObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, _cordl_or);
}
inline void System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::TrackingServices*>(),
                                                           { "NotifyUnmarshaledObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, _cordl_or);
}
inline void System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Services::TrackingServices*>(), { "NotifyDisconnectedObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Services::TrackingServices::TrackingServices() {}
