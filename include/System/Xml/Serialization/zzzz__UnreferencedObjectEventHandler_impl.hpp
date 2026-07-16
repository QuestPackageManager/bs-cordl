#pragma once
// IWYU pragma private; include "System/Xml/Serialization/UnreferencedObjectEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/Serialization/zzzz__UnreferencedObjectEventHandler_def.hpp"
#include "System/Xml/Serialization/zzzz__UnreferencedObjectEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::UnreferencedObjectEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::UnreferencedObjectEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Serialization::UnreferencedObjectEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x62e60d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::UnreferencedObjectEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::UnreferencedObjectEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::UnreferencedObjectEventHandler::*)(
    ::System::Object*, ::System::Xml::Serialization::UnreferencedObjectEventArgs*)>(&::System::Xml::Serialization::UnreferencedObjectEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62e6218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::UnreferencedObjectEventHandler*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::UnreferencedObjectEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::UnreferencedObjectEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::UnreferencedObjectEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Serialization::UnreferencedObjectEventHandler::Invoke(::System::Object* sender, ::System::Xml::Serialization::UnreferencedObjectEventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::UnreferencedObjectEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Xml::Serialization::UnreferencedObjectEventHandler* System::Xml::Serialization::UnreferencedObjectEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::UnreferencedObjectEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::UnreferencedObjectEventHandler::UnreferencedObjectEventHandler() {}
