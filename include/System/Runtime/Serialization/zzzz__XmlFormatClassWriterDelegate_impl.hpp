#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlFormatClassWriterDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatClassWriterDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatClassWriterDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatClassWriterDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Serialization::XmlFormatClassWriterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61644c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatClassWriterDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatClassWriterDelegate::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*,
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatClassWriterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x616460c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XmlFormatClassWriterDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Runtime::Serialization::XmlFormatClassWriterDelegate::Invoke(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                 ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context,
                                                                                 ::System::Runtime::Serialization::ClassDataContract* dataContract) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, context, dataContract);
}
inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* System::Runtime::Serialization::XmlFormatClassWriterDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatClassWriterDelegate::XmlFormatClassWriterDelegate() {}
