#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ClientIdentity.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ClientIdentity::*)(::StringW, ::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::ClientIdentity::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b1eedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity.get_ClientProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::MarshalByRefObject* (::System::Runtime::Remoting::ClientIdentity::*)()>(
    &::System::Runtime::Remoting::ClientIdentity::get_ClientProxy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b1efd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), { "get_ClientProxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity.set_ClientProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ClientIdentity::*)(::System::MarshalByRefObject*)>(
    &::System::Runtime::Remoting::ClientIdentity::set_ClientProxy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b1f05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), { "set_ClientProxy", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity.CreateObjRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ObjRef* (::System::Runtime::Remoting::ClientIdentity::*)(::System::Type*)>(
    &::System::Runtime::Remoting::ClientIdentity::CreateObjRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1f0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), { ::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ClientIdentity.get_TargetUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::ClientIdentity::*)()>(&::System::Runtime::Remoting::ClientIdentity::get_TargetUri)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b1f0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), { "get_TargetUri", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::WeakReference*& System::Runtime::Remoting::ClientIdentity::__cordl_internal_get__proxyReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyReference;
}
constexpr ::System::WeakReference* const& System::Runtime::Remoting::ClientIdentity::__cordl_internal_get__proxyReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyReference;
}
constexpr void System::Runtime::Remoting::ClientIdentity::__cordl_internal_set__proxyReference(::System::WeakReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proxyReference = value;
}
inline void System::Runtime::Remoting::ClientIdentity::_ctor(::StringW objectUri, ::System::Runtime::Remoting::ObjRef* objRef) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::ObjRef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectUri, objRef);
}
inline ::System::MarshalByRefObject* System::Runtime::Remoting::ClientIdentity::get_ClientProxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), { "get_ClientProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::MarshalByRefObject*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ClientIdentity::set_ClientProxy(::System::MarshalByRefObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), { "set_ClientProxy", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ClientIdentity::CreateObjRef(::System::Type* requestedType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*>(this, ___internal_method, requestedType);
}
inline ::StringW System::Runtime::Remoting::ClientIdentity::get_TargetUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ClientIdentity*>(), { "get_TargetUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ClientIdentity* System::Runtime::Remoting::ClientIdentity::New_ctor(::StringW objectUri, ::System::Runtime::Remoting::ObjRef* objRef) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ClientIdentity*>(objectUri, objRef));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ClientIdentity::ClientIdentity() {}
