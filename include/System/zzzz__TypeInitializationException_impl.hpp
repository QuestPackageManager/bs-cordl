#pragma once
// IWYU pragma private; include "System\TypeInitializationException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/zzzz__TypeInitializationException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::TypeInitializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeInitializationException::*)()>(&::System::TypeInitializationException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c63a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeInitializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeInitializationException::*)(::StringW, ::System::Exception*)>(&::System::TypeInitializationException::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c63ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeInitializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeInitializationException::*)(::StringW, ::StringW, ::System::Exception*)>(&::System::TypeInitializationException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c63b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeInitializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeInitializationException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TypeInitializationException::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c63b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeInitializationException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeInitializationException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TypeInitializationException::GetObjectData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c63c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(), { ::i2c::class_of<::System::TypeInitializationException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeInitializationException.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeInitializationException::*)()>(&::System::TypeInitializationException::get_TypeName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c63cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::TypeInitializationException::__cordl_internal_get__typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr ::StringW const& System::TypeInitializationException::__cordl_internal_get__typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr void System::TypeInitializationException::__cordl_internal_set__typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeName = value;
}
inline void System::TypeInitializationException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TypeInitializationException::_ctor(::StringW fullTypeName, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullTypeName, innerException);
}
inline void System::TypeInitializationException::_ctor(::StringW fullTypeName, ::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullTypeName, message, innerException);
}
inline void System::TypeInitializationException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::TypeInitializationException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypeInitializationException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::TypeInitializationException::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeInitializationException*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TypeInitializationException* System::TypeInitializationException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeInitializationException*>());
}
inline ::System::TypeInitializationException* System::TypeInitializationException::New_ctor(::StringW fullTypeName, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeInitializationException*>(fullTypeName, innerException));
}
inline ::System::TypeInitializationException* System::TypeInitializationException::New_ctor(::StringW fullTypeName, ::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeInitializationException*>(fullTypeName, message, innerException));
}
inline ::System::TypeInitializationException* System::TypeInitializationException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeInitializationException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::TypeInitializationException::TypeInitializationException() {}
