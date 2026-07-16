#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CreateXmlSerializableDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Serialization/zzzz__CreateXmlSerializableDelegate_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::CreateXmlSerializableDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CreateXmlSerializableDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Serialization::CreateXmlSerializableDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615c238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CreateXmlSerializableDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::IXmlSerializable* (::System::Runtime::Serialization::CreateXmlSerializableDelegate::*)()>(
    &::System::Runtime::Serialization::CreateXmlSerializableDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x615c2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::CreateXmlSerializableDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Xml::Serialization::IXmlSerializable* System::Runtime::Serialization::CreateXmlSerializableDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::IXmlSerializable*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* System::Runtime::Serialization::CreateXmlSerializableDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CreateXmlSerializableDelegate::CreateXmlSerializableDelegate() {}
