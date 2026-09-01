#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializationCollectionFixupCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationCollectionFixupCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationCollectionFixupCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Serialization::XmlSerializationCollectionFixupCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x62fcfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationCollectionFixupCallback::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationCollectionFixupCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62fd124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlSerializationCollectionFixupCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Serialization::XmlSerializationCollectionFixupCallback::Invoke(::System::Object* collection, ::System::Object* collectionItems) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, collectionItems);
}
inline ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* System::Xml::Serialization::XmlSerializationCollectionFixupCallback::New_ctor(::System::Object* object,
                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback::XmlSerializationCollectionFixupCallback() {}
