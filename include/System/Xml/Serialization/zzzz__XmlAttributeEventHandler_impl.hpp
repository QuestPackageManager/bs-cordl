#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlAttributeEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeEventHandler_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAttributeEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Serialization::XmlAttributeEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x62eb340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAttributeEventHandler::*)(::System::Object*, ::System::Xml::Serialization::XmlAttributeEventArgs*)>(
    &::System::Xml::Serialization::XmlAttributeEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62eb488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeEventHandler*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlAttributeEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlAttributeEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Serialization::XmlAttributeEventHandler::Invoke(::System::Object* sender, ::System::Xml::Serialization::XmlAttributeEventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlAttributeEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Xml::Serialization::XmlAttributeEventHandler* System::Xml::Serialization::XmlAttributeEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlAttributeEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlAttributeEventHandler::XmlAttributeEventHandler() {}
