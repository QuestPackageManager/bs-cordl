#pragma once
// IWYU pragma private; include "System/ObjectDisposedException.hpp"
#include "System/zzzz__InvalidOperationException_impl.hpp"
#include "System/zzzz__ObjectDisposedException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::ObjectDisposedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ObjectDisposedException::*)()>(&::System::ObjectDisposedException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c55480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObjectDisposedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ObjectDisposedException::*)(::StringW)>(&::System::ObjectDisposedException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c55514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObjectDisposedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ObjectDisposedException::*)(::StringW, ::StringW)>(&::System::ObjectDisposedException::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c554e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObjectDisposedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ObjectDisposedException::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                   ::System::Runtime::Serialization::StreamingContext)>(&::System::ObjectDisposedException::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c55580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObjectDisposedException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ObjectDisposedException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::ObjectDisposedException::GetObjectData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c55610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { ::i2c::class_of<::System::ObjectDisposedException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObjectDisposedException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ObjectDisposedException::*)()>(&::System::ObjectDisposedException::get_Message)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c55734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { ::i2c::class_of<::System::ObjectDisposedException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ObjectDisposedException.get_ObjectName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ObjectDisposedException::*)()>(&::System::ObjectDisposedException::get_ObjectName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c556d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { "get_ObjectName", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ObjectDisposedException::__cordl_internal_get__objectName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectName;
}
constexpr ::StringW const& System::ObjectDisposedException::__cordl_internal_get__objectName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectName;
}
constexpr void System::ObjectDisposedException::__cordl_internal_set__objectName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectName = value;
}
inline void System::ObjectDisposedException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ObjectDisposedException::_ctor(::StringW objectName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectName);
}
inline void System::ObjectDisposedException::_ctor(::StringW objectName, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectName, message);
}
inline void System::ObjectDisposedException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::ObjectDisposedException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ObjectDisposedException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::ObjectDisposedException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ObjectDisposedException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ObjectDisposedException::get_ObjectName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ObjectDisposedException*>(), { "get_ObjectName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ObjectDisposedException* System::ObjectDisposedException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ObjectDisposedException*>());
}
inline ::System::ObjectDisposedException* System::ObjectDisposedException::New_ctor(::StringW objectName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ObjectDisposedException*>(objectName));
}
inline ::System::ObjectDisposedException* System::ObjectDisposedException::New_ctor(::StringW objectName, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ObjectDisposedException*>(objectName, message));
}
inline ::System::ObjectDisposedException* System::ObjectDisposedException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ObjectDisposedException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::ObjectDisposedException::ObjectDisposedException() {}
