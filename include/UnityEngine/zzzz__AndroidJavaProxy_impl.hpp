#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaProxy.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaClass_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "UnityEngine/zzzz__GlobalJavaObjectRef_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaProxy::*)(::StringW)>(&::UnityEngine::AndroidJavaProxy::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a27f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaProxy::*)(::UnityEngine::AndroidJavaClass*)>(&::UnityEngine::AndroidJavaProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a283d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaClass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJavaProxy::*)()>(&::UnityEngine::AndroidJavaProxy::Finalize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a283d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (::UnityEngine::AndroidJavaProxy::*)(::StringW, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::AndroidJavaProxy::Invoke)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x6a28450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (::UnityEngine::AndroidJavaProxy::*)(::StringW, ::ArrayW<::UnityEngine::AndroidJavaObject*>)>(
    &::UnityEngine::AndroidJavaProxy::Invoke)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6a298cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::AndroidJavaProxy::*)(::StringW, ::System::IntPtr)>(&::UnityEngine::AndroidJavaProxy::Invoke)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6a28050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AndroidJavaProxy::*)(::UnityEngine::AndroidJavaObject*)>(&::UnityEngine::AndroidJavaProxy::equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a2a60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.hashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AndroidJavaProxy::*)()>(&::UnityEngine::AndroidJavaProxy::hashCode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6a2a664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.toString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AndroidJavaProxy::*)()>(&::UnityEngine::AndroidJavaProxy::toString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a2a824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.GetProxyObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (::UnityEngine::AndroidJavaProxy::*)()>(&::UnityEngine::AndroidJavaProxy::GetProxyObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a2a88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { "GetProxyObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaProxy.GetRawProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::AndroidJavaProxy::*)()>(&::UnityEngine::AndroidJavaProxy::GetRawProxy)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a2a768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { "GetRawProxy", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AndroidJavaClass*& UnityEngine::AndroidJavaProxy::__cordl_internal_get_javaInterface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___javaInterface;
}
constexpr ::UnityEngine::AndroidJavaClass* const& UnityEngine::AndroidJavaProxy::__cordl_internal_get_javaInterface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___javaInterface;
}
constexpr void UnityEngine::AndroidJavaProxy::__cordl_internal_set_javaInterface(::UnityEngine::AndroidJavaClass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___javaInterface = value;
}
constexpr ::System::IntPtr& UnityEngine::AndroidJavaProxy::__cordl_internal_get_proxyObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxyObject;
}
constexpr ::System::IntPtr const& UnityEngine::AndroidJavaProxy::__cordl_internal_get_proxyObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxyObject;
}
constexpr void UnityEngine::AndroidJavaProxy::__cordl_internal_set_proxyObject(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___proxyObject = value;
}
inline void UnityEngine::AndroidJavaProxy::setStaticF_s_JavaLangSystemClass(::UnityEngine::GlobalJavaObjectRef* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GlobalJavaObjectRef*, "s_JavaLangSystemClass", ::UnityEngine::AndroidJavaProxy*>(std::forward<::UnityEngine::GlobalJavaObjectRef*>(value));
}
inline ::UnityEngine::GlobalJavaObjectRef* UnityEngine::AndroidJavaProxy::getStaticF_s_JavaLangSystemClass() {
  return ::cordl_internals::getStaticField<::UnityEngine::GlobalJavaObjectRef*, "s_JavaLangSystemClass", ::UnityEngine::AndroidJavaProxy*>();
}
inline void UnityEngine::AndroidJavaProxy::setStaticF_s_HashCodeMethodID(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_HashCodeMethodID", ::UnityEngine::AndroidJavaProxy*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::AndroidJavaProxy::getStaticF_s_HashCodeMethodID() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_HashCodeMethodID", ::UnityEngine::AndroidJavaProxy*>();
}
inline void UnityEngine::AndroidJavaProxy::_ctor(::StringW javaInterface) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, javaInterface);
}
inline void UnityEngine::AndroidJavaProxy::_ctor(::UnityEngine::AndroidJavaClass* javaInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaClass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, javaInterface);
}
inline void UnityEngine::AndroidJavaProxy::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::AndroidJavaProxy::Invoke(::StringW methodName, ::ArrayW<::System::Object*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(this, ___internal_method, methodName, args);
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::AndroidJavaProxy::Invoke(::StringW methodName, ::ArrayW<::UnityEngine::AndroidJavaObject*> javaArgs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(this, ___internal_method, methodName, javaArgs);
}
inline ::System::IntPtr UnityEngine::AndroidJavaProxy::Invoke(::StringW methodName, ::System::IntPtr javaArgs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, methodName, javaArgs);
}
inline bool UnityEngine::AndroidJavaProxy::equals(::UnityEngine::AndroidJavaObject* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::AndroidJavaProxy::hashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::AndroidJavaProxy::toString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::AndroidJavaProxy::GetProxyObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { "GetProxyObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AndroidJavaProxy::GetRawProxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJavaProxy*>(), { "GetRawProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::UnityEngine::AndroidJavaProxy* UnityEngine::AndroidJavaProxy::New_ctor(::StringW javaInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AndroidJavaProxy*>(javaInterface));
}
inline ::UnityEngine::AndroidJavaProxy* UnityEngine::AndroidJavaProxy::New_ctor(::UnityEngine::AndroidJavaClass* javaInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AndroidJavaProxy*>(javaInterface));
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaProxy::AndroidJavaProxy() {}
