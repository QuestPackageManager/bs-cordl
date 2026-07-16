#pragma once
// IWYU pragma private; include "System/BadImageFormatException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/zzzz__BadImageFormatException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::BadImageFormatException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BadImageFormatException::*)()>(&::System::BadImageFormatException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bacf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BadImageFormatException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BadImageFormatException::*)(::StringW)>(&::System::BadImageFormatException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bacfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BadImageFormatException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BadImageFormatException::*)(::StringW, ::System::Exception*)>(&::System::BadImageFormatException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bacfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BadImageFormatException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BadImageFormatException::*)(::StringW, ::StringW)>(&::System::BadImageFormatException::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5bad008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BadImageFormatException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BadImageFormatException::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                   ::System::Runtime::Serialization::StreamingContext)>(&::System::BadImageFormatException::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bad03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BadImageFormatException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BadImageFormatException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::BadImageFormatException::GetObjectData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bad0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ::i2c::class_of<::System::BadImageFormatException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BadImageFormatException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::BadImageFormatException::*)()>(&::System::BadImageFormatException::get_Message)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bad204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ::i2c::class_of<::System::BadImageFormatException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BadImageFormatException.SetMessageField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BadImageFormatException::*)()>(&::System::BadImageFormatException::SetMessageField)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bad21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { "SetMessageField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BadImageFormatException.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::BadImageFormatException::*)()>(&::System::BadImageFormatException::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5bad298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ::i2c::class_of<::System::BadImageFormatException*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::BadImageFormatException::__cordl_internal_get__fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileName;
}
constexpr ::StringW const& System::BadImageFormatException::__cordl_internal_get__fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileName;
}
constexpr void System::BadImageFormatException::__cordl_internal_set__fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileName = value;
}
constexpr ::StringW& System::BadImageFormatException::__cordl_internal_get__fusionLog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fusionLog;
}
constexpr ::StringW const& System::BadImageFormatException::__cordl_internal_get__fusionLog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fusionLog;
}
constexpr void System::BadImageFormatException::__cordl_internal_set__fusionLog(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fusionLog = value;
}
inline void System::BadImageFormatException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::BadImageFormatException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::BadImageFormatException::_ctor(::StringW message, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inner);
}
inline void System::BadImageFormatException::_ctor(::StringW message, ::StringW fileName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, fileName);
}
inline void System::BadImageFormatException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::BadImageFormatException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::BadImageFormatException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::BadImageFormatException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::BadImageFormatException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::BadImageFormatException::SetMessageField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BadImageFormatException*>(), { "SetMessageField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::BadImageFormatException::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::BadImageFormatException*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::BadImageFormatException* System::BadImageFormatException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::BadImageFormatException*>());
}
inline ::System::BadImageFormatException* System::BadImageFormatException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::BadImageFormatException*>(message));
}
inline ::System::BadImageFormatException* System::BadImageFormatException::New_ctor(::StringW message, ::System::Exception* inner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::BadImageFormatException*>(message, inner));
}
inline ::System::BadImageFormatException* System::BadImageFormatException::New_ctor(::StringW message, ::StringW fileName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::BadImageFormatException*>(message, fileName));
}
inline ::System::BadImageFormatException* System::BadImageFormatException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::BadImageFormatException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::BadImageFormatException::BadImageFormatException() {}
