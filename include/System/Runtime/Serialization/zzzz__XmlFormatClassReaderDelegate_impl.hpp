#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlFormatClassReaderDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatClassReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatClassReaderDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatClassReaderDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Serialization::XmlFormatClassReaderDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x616377c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatClassReaderDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlFormatClassReaderDelegate::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*,
                                                                       ::ArrayW<::System::Xml::XmlDictionaryString*>, ::ArrayW<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::XmlFormatClassReaderDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61638c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XmlFormatClassReaderDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatClassReaderDelegate::Invoke(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                              ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                              ::ArrayW<::System::Xml::XmlDictionaryString*> memberNames,
                                                                                              ::ArrayW<::System::Xml::XmlDictionaryString*> memberNamespaces) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context, memberNames, memberNamespaces);
}
inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* System::Runtime::Serialization::XmlFormatClassReaderDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatClassReaderDelegate::XmlFormatClassReaderDelegate() {}
