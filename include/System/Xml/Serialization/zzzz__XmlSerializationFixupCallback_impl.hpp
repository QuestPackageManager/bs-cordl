#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializationFixupCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationFixupCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationFixupCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationFixupCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Serialization::XmlSerializationFixupCallback::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x62fd138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationFixupCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationFixupCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationFixupCallback::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationFixupCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62fd27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationFixupCallback*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationFixupCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlSerializationFixupCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationFixupCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Serialization::XmlSerializationFixupCallback::Invoke(::System::Object* fixup) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationFixupCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixup);
}
inline ::System::Xml::Serialization::XmlSerializationFixupCallback* System::Xml::Serialization::XmlSerializationFixupCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationFixupCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationFixupCallback::XmlSerializationFixupCallback() {}
