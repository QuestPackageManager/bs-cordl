#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\CharDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__PrimitiveDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__CharDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::CharDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CharDataContract::*)()>(&::System::Runtime::Serialization::CharDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x615b594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CharDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CharDataContract::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::CharDataContract::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x615b5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CharDataContract.get_WriteMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CharDataContract::*)()>(&::System::Runtime::Serialization::CharDataContract::get_WriteMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x615b660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CharDataContract.get_ReadMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CharDataContract::*)()>(&::System::Runtime::Serialization::CharDataContract::get_ReadMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x615b6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CharDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CharDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                    ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::CharDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x615b6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CharDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::CharDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                 ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::CharDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x615b744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), 6 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::CharDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CharDataContract::_ctor(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline ::StringW System::Runtime::Serialization::CharDataContract::get_WriteMethodName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CharDataContract::get_ReadMethodName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CharDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj,
                                                                            ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::CharDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* reader,
                                                                                        ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CharDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, context);
}
inline ::System::Runtime::Serialization::CharDataContract* System::Runtime::Serialization::CharDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CharDataContract*>());
}
inline ::System::Runtime::Serialization::CharDataContract* System::Runtime::Serialization::CharDataContract::New_ctor(::System::Xml::XmlDictionaryString* name,
                                                                                                                      ::System::Xml::XmlDictionaryString* ns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CharDataContract*>(name, ns));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CharDataContract::CharDataContract() {}
