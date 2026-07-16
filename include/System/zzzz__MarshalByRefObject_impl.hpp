#pragma once
// IWYU pragma private; include "System/MarshalByRefObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::MarshalByRefObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MarshalByRefObject::*)()>(&::System::MarshalByRefObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MarshalByRefObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.get_ObjectIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ServerIdentity* (::System::MarshalByRefObject::*)()>(&::System::MarshalByRefObject::get_ObjectIdentity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c90c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MarshalByRefObject*>(), { "get_ObjectIdentity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.set_ObjectIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MarshalByRefObject::*)(::System::Runtime::Remoting::ServerIdentity*)>(&::System::MarshalByRefObject::set_ObjectIdentity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c90ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MarshalByRefObject*>(), { "set_ObjectIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::ServerIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.CreateObjRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ObjRef* (::System::MarshalByRefObject::*)(::System::Type*)>(&::System::MarshalByRefObject::CreateObjRef)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c90ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::MarshalByRefObject*>(), { ::i2c::class_of<::System::MarshalByRefObject*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.InitializeLifetimeService
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::MarshalByRefObject::*)()>(&::System::MarshalByRefObject::InitializeLifetimeService)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c90d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::MarshalByRefObject*>(), { ::i2c::class_of<::System::MarshalByRefObject*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::MarshalByRefObject::__cordl_internal_get__identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identity;
}
constexpr ::System::Object* const& System::MarshalByRefObject::__cordl_internal_get__identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identity;
}
constexpr void System::MarshalByRefObject::__cordl_internal_set__identity(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____identity = value;
}
inline void System::MarshalByRefObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MarshalByRefObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ServerIdentity* System::MarshalByRefObject::get_ObjectIdentity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MarshalByRefObject*>(), { "get_ObjectIdentity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ServerIdentity*>(this, ___internal_method);
}
inline void System::MarshalByRefObject::set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MarshalByRefObject*>(), { "set_ObjectIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::ServerIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::ObjRef* System::MarshalByRefObject::CreateObjRef(::System::Type* requestedType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::MarshalByRefObject*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*>(this, ___internal_method, requestedType);
}
inline ::System::Object* System::MarshalByRefObject::InitializeLifetimeService() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::MarshalByRefObject*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::MarshalByRefObject* System::MarshalByRefObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MarshalByRefObject*>());
}
// Ctor Parameters []
constexpr ::System::MarshalByRefObject::MarshalByRefObject() {}
