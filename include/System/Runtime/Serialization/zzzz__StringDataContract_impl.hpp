#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\StringDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__PrimitiveDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__StringDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::StringDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::StringDataContract::*)()>(&::System::Runtime::Serialization::StringDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615d680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StringDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::StringDataContract::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::StringDataContract::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x615d6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StringDataContract.get_WriteMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::StringDataContract::*)()>(
    &::System::Runtime::Serialization::StringDataContract::get_WriteMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x615d74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StringDataContract.get_ReadMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::StringDataContract::*)()>(
    &::System::Runtime::Serialization::StringDataContract::get_ReadMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x615d790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StringDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::StringDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                      ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::StringDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x615d7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StringDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::StringDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                   ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::StringDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x615d828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), 6 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::StringDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::StringDataContract::_ctor(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline ::StringW System::Runtime::Serialization::StringDataContract::get_WriteMethodName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::StringDataContract::get_ReadMethodName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::StringDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj,
                                                                              ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::StringDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* reader,
                                                                                          ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::StringDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, context);
}
inline ::System::Runtime::Serialization::StringDataContract* System::Runtime::Serialization::StringDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::StringDataContract*>());
}
inline ::System::Runtime::Serialization::StringDataContract* System::Runtime::Serialization::StringDataContract::New_ctor(::System::Xml::XmlDictionaryString* name,
                                                                                                                          ::System::Xml::XmlDictionaryString* ns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::StringDataContract*>(name, ns));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::StringDataContract::StringDataContract() {}
