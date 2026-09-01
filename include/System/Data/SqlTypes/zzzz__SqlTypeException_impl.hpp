#pragma once
// IWYU pragma private; include "System\Data\SqlTypes\SqlTypeException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlTypeException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlTypeException::*)()>(&::System::Data::SqlTypes::SqlTypeException::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x609b4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlTypeException::*)(::StringW)>(&::System::Data::SqlTypes::SqlTypeException::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6087344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlTypeException::*)(::StringW, ::System::Exception*)>(&::System::Data::SqlTypes::SqlTypeException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x609b540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlTypeException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Data::SqlTypes::SqlTypeException::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x609b564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException.SqlTypeExceptionSerialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::SerializationInfo* (*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Data::SqlTypes::SqlTypeException::SqlTypeExceptionSerialization)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x609b5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(),
                                                { "SqlTypeExceptionSerialization",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlTypeException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlTypeException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Data::SqlTypes::SqlTypeException::_ctor(::StringW message, ::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, e);
}
inline void System::Data::SqlTypes::SqlTypeException::_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, si, sc);
}
inline ::System::Runtime::Serialization::SerializationInfo* System::Data::SqlTypes::SqlTypeException::SqlTypeExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                                                    ::System::Runtime::Serialization::StreamingContext sc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::SqlTypes::SqlTypeException*>(),
          { "SqlTypeExceptionSerialization", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationInfo*>(nullptr, ___internal_method, si, sc);
}
inline ::System::Data::SqlTypes::SqlTypeException* System::Data::SqlTypes::SqlTypeException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlTypeException*>());
}
inline ::System::Data::SqlTypes::SqlTypeException* System::Data::SqlTypes::SqlTypeException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlTypeException*>(message));
}
inline ::System::Data::SqlTypes::SqlTypeException* System::Data::SqlTypes::SqlTypeException::New_ctor(::StringW message, ::System::Exception* e) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlTypeException*>(message, e));
}
inline ::System::Data::SqlTypes::SqlTypeException* System::Data::SqlTypes::SqlTypeException::New_ctor(::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                      ::System::Runtime::Serialization::StreamingContext sc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlTypeException*>(si, sc));
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlTypeException::SqlTypeException() {}
