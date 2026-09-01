#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\IntDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__PrimitiveDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__IntDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IntDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::IntDataContract::*)()>(&::System::Runtime::Serialization::IntDataContract::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x615c2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IntDataContract.get_WriteMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::IntDataContract::*)()>(&::System::Runtime::Serialization::IntDataContract::get_WriteMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x615c368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IntDataContract.get_ReadMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::IntDataContract::*)()>(&::System::Runtime::Serialization::IntDataContract::get_ReadMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x615c3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IntDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::IntDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                   ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::IntDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x615c3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::IntDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::IntDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::IntDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x615c444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), 6 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::IntDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::IntDataContract::get_WriteMethodName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::IntDataContract::get_ReadMethodName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::IntDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj,
                                                                           ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::IntDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* reader,
                                                                                       ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IntDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, context);
}
inline ::System::Runtime::Serialization::IntDataContract* System::Runtime::Serialization::IntDataContract::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::IntDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::IntDataContract::IntDataContract() {}
