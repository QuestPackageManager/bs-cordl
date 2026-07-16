#pragma once
// IWYU pragma private; include "System/ArgumentOutOfRangeException.hpp"
#include "System/zzzz__ArgumentException_impl.hpp"
#include "System/zzzz__ArgumentOutOfRangeException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ArgumentOutOfRangeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ArgumentOutOfRangeException::*)()>(&::System::ArgumentOutOfRangeException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bac778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArgumentOutOfRangeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ArgumentOutOfRangeException::*)(::StringW)>(&::System::ArgumentOutOfRangeException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bac7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArgumentOutOfRangeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ArgumentOutOfRangeException::*)(::StringW, ::StringW)>(&::System::ArgumentOutOfRangeException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ba8170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArgumentOutOfRangeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ArgumentOutOfRangeException::*)(::StringW, ::System::Object*, ::StringW)>(&::System::ArgumentOutOfRangeException::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ba93fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArgumentOutOfRangeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ArgumentOutOfRangeException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::ArgumentOutOfRangeException::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bac848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArgumentOutOfRangeException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ArgumentOutOfRangeException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::ArgumentOutOfRangeException::GetObjectData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bac904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(), { ::i2c::class_of<::System::ArgumentOutOfRangeException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArgumentOutOfRangeException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ArgumentOutOfRangeException::*)()>(&::System::ArgumentOutOfRangeException::get_Message)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bac9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(), { ::i2c::class_of<::System::ArgumentOutOfRangeException*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::ArgumentOutOfRangeException::__cordl_internal_get__actualValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actualValue;
}
constexpr ::System::Object* const& System::ArgumentOutOfRangeException::__cordl_internal_get__actualValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actualValue;
}
constexpr void System::ArgumentOutOfRangeException::__cordl_internal_set__actualValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____actualValue = value;
}
inline void System::ArgumentOutOfRangeException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ArgumentOutOfRangeException::_ctor(::StringW paramName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paramName);
}
inline void System::ArgumentOutOfRangeException::_ctor(::StringW paramName, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paramName, message);
}
inline void System::ArgumentOutOfRangeException::_ctor(::StringW paramName, ::System::Object* actualValue, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paramName, actualValue, message);
}
inline void System::ArgumentOutOfRangeException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ArgumentOutOfRangeException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::ArgumentOutOfRangeException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ArgumentOutOfRangeException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::ArgumentOutOfRangeException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ArgumentOutOfRangeException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ArgumentOutOfRangeException* System::ArgumentOutOfRangeException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ArgumentOutOfRangeException*>());
}
inline ::System::ArgumentOutOfRangeException* System::ArgumentOutOfRangeException::New_ctor(::StringW paramName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ArgumentOutOfRangeException*>(paramName));
}
inline ::System::ArgumentOutOfRangeException* System::ArgumentOutOfRangeException::New_ctor(::StringW paramName, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ArgumentOutOfRangeException*>(paramName, message));
}
inline ::System::ArgumentOutOfRangeException* System::ArgumentOutOfRangeException::New_ctor(::StringW paramName, ::System::Object* actualValue, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ArgumentOutOfRangeException*>(paramName, actualValue, message));
}
inline ::System::ArgumentOutOfRangeException* System::ArgumentOutOfRangeException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ArgumentOutOfRangeException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException() {}
