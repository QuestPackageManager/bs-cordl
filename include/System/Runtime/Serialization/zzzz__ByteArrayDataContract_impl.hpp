#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ByteArrayDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__PrimitiveDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ByteArrayDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ByteArrayDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ByteArrayDataContract::*)()>(&::System::Runtime::Serialization::ByteArrayDataContract::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x615e054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ByteArrayDataContract.get_WriteMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ByteArrayDataContract::*)()>(
    &::System::Runtime::Serialization::ByteArrayDataContract::get_WriteMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x615e104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ByteArrayDataContract.get_ReadMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ByteArrayDataContract::*)()>(
    &::System::Runtime::Serialization::ByteArrayDataContract::get_ReadMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x615e148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ByteArrayDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ByteArrayDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                         ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::ByteArrayDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x615e18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ByteArrayDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::ByteArrayDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::ByteArrayDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x615e21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), 6 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ByteArrayDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ByteArrayDataContract::get_WriteMethodName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ByteArrayDataContract::get_ReadMethodName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ByteArrayDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj,
                                                                                 ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::ByteArrayDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* reader,
                                                                                             ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ByteArrayDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, context);
}
inline ::System::Runtime::Serialization::ByteArrayDataContract* System::Runtime::Serialization::ByteArrayDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ByteArrayDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ByteArrayDataContract::ByteArrayDataContract() {}
