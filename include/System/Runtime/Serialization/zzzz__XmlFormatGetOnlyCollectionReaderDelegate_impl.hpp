#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlFormatGetOnlyCollectionReaderDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatGetOnlyCollectionReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6163a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
    ::System::Runtime::Serialization::CollectionDataContract*)>(&::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6163b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::Invoke(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                             ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                             ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                             ::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader, context, itemName, itemNamespace, collectionContract);
}
inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::XmlFormatGetOnlyCollectionReaderDelegate() {}
