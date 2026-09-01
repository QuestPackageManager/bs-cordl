#pragma once
// IWYU pragma private; include "System\Net\WebProxy.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebProxy_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__AutoWebProxyScriptEngine_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6424cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Uri*, bool, ::ArrayW<::StringW>, ::System::Net::ICredentials*)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6424d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_Credentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6425024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "get_Credentials", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_UseDefaultCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x642502c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "get_UseDefaultCredentials", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_UseDefaultCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(bool)>(&::System::Net::WebProxy::set_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x64250ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "set_UseDefaultCredentials", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::GetProxy)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6425124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "GetProxy", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.UpdateRegExList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(bool)>(&::System::Net::WebProxy::UpdateRegExList)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6424de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "UpdateRegExList", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsMatchInBypassList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsMatchInBypassList)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x64253d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsMatchInBypassList", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsLocal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6425574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsLocal", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsLocalInProxyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsLocalInProxyHash)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64256e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsLocalInProxyHash", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsBypassed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsBypassed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64257c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsBypassed", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsBypassedManual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsBypassedManual)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6425304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsBypassedManual", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x64258f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Net::WebProxy::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6425c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Net::WebProxy::GetObjectData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6425c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { ::i2c::class_of<::System::Net::WebProxy*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_ScriptEngine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::AutoWebProxyScriptEngine* (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_ScriptEngine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6425da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "get_ScriptEngine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.CreateDefaultProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::WebProxy::CreateDefaultProxy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6425db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "CreateDefaultProxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(bool)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6425e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.UnsafeUpdateFromRegistry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::UnsafeUpdateFromRegistry)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6425c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "UnsafeUpdateFromRegistry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetProxyAuto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*, ::by_ref<::System::Uri*>)>(&::System::Net::WebProxy::GetProxyAuto)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64252a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "GetProxyAuto", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsBypassedAuto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*, ::by_ref<bool>)>(&::System::Net::WebProxy::IsBypassedAuto)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64258a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsBypassedAuto", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.AreAllBypassed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(&::System::Net::WebProxy::AreAllBypassed)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6425e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(),
                                                             { "AreAllBypassed", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.ProxyUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::StringW)>(&::System::Net::WebProxy::ProxyUri)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64260f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "ProxyUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::WebProxy::__cordl_internal_get__UseRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseRegistry;
}
constexpr bool const& System::Net::WebProxy::__cordl_internal_get__UseRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseRegistry;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__UseRegistry(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseRegistry = value;
}
constexpr bool& System::Net::WebProxy::__cordl_internal_get__BypassOnLocal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BypassOnLocal;
}
constexpr bool const& System::Net::WebProxy::__cordl_internal_get__BypassOnLocal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BypassOnLocal;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__BypassOnLocal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BypassOnLocal = value;
}
constexpr bool& System::Net::WebProxy::__cordl_internal_get_m_EnableAutoproxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableAutoproxy;
}
constexpr bool const& System::Net::WebProxy::__cordl_internal_get_m_EnableAutoproxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableAutoproxy;
}
constexpr void System::Net::WebProxy::__cordl_internal_set_m_EnableAutoproxy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableAutoproxy = value;
}
constexpr ::System::Uri*& System::Net::WebProxy::__cordl_internal_get__ProxyAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyAddress;
}
constexpr ::System::Uri* const& System::Net::WebProxy::__cordl_internal_get__ProxyAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyAddress;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__ProxyAddress(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProxyAddress = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::WebProxy::__cordl_internal_get__BypassList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BypassList;
}
constexpr ::System::Collections::ArrayList* const& System::Net::WebProxy::__cordl_internal_get__BypassList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BypassList;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__BypassList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BypassList = value;
}
constexpr ::System::Net::ICredentials*& System::Net::WebProxy::__cordl_internal_get__Credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::WebProxy::__cordl_internal_get__Credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Credentials;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__Credentials(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Credentials = value;
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*>& System::Net::WebProxy::__cordl_internal_get__RegExBypassList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RegExBypassList;
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*> const& System::Net::WebProxy::__cordl_internal_get__RegExBypassList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RegExBypassList;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__RegExBypassList(::ArrayW<::System::Text::RegularExpressions::Regex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RegExBypassList = value;
}
constexpr ::System::Collections::Hashtable*& System::Net::WebProxy::__cordl_internal_get__ProxyHostAddresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyHostAddresses;
}
constexpr ::System::Collections::Hashtable* const& System::Net::WebProxy::__cordl_internal_get__ProxyHostAddresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyHostAddresses;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__ProxyHostAddresses(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProxyHostAddresses = value;
}
constexpr ::System::Net::AutoWebProxyScriptEngine*& System::Net::WebProxy::__cordl_internal_get_m_ScriptEngine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScriptEngine;
}
constexpr ::System::Net::AutoWebProxyScriptEngine* const& System::Net::WebProxy::__cordl_internal_get_m_ScriptEngine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScriptEngine;
}
constexpr void System::Net::WebProxy::__cordl_internal_set_m_ScriptEngine(::System::Net::AutoWebProxyScriptEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScriptEngine = value;
}
inline void System::Net::WebProxy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebProxy::_ctor(::System::Uri* Address, bool BypassOnLocal, ::ArrayW<::StringW> BypassList, ::System::Net::ICredentials* Credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address, BypassOnLocal, BypassList, Credentials);
}
inline ::System::Net::ICredentials* System::Net::WebProxy::get_Credentials() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "get_Credentials", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline bool System::Net::WebProxy::get_UseDefaultCredentials() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "get_UseDefaultCredentials", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebProxy::set_UseDefaultCredentials(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "set_UseDefaultCredentials", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::WebProxy::GetProxy(::System::Uri* destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "GetProxy", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, destination);
}
inline void System::Net::WebProxy::UpdateRegExList(bool canThrow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "UpdateRegExList", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canThrow);
}
inline bool System::Net::WebProxy::IsMatchInBypassList(::System::Uri* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsMatchInBypassList", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input);
}
inline bool System::Net::WebProxy::IsLocal(::System::Uri* host) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsLocal", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline bool System::Net::WebProxy::IsLocalInProxyHash(::System::Uri* host) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsLocalInProxyHash", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline bool System::Net::WebProxy::IsBypassed(::System::Uri* host) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsBypassed", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline bool System::Net::WebProxy::IsBypassedManual(::System::Uri* host) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsBypassedManual", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline void System::Net::WebProxy::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebProxy::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                            ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebProxy::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebProxy*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Net::AutoWebProxyScriptEngine* System::Net::WebProxy::get_ScriptEngine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "get_ScriptEngine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::AutoWebProxyScriptEngine*>(this, ___internal_method);
}
inline ::System::Net::IWebProxy* System::Net::WebProxy::CreateDefaultProxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "CreateDefaultProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline void System::Net::WebProxy::_ctor(bool enableAutoproxy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableAutoproxy);
}
inline void System::Net::WebProxy::UnsafeUpdateFromRegistry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "UnsafeUpdateFromRegistry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::WebProxy::GetProxyAuto(::System::Uri* destination, ::by_ref<::System::Uri*> proxyUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "GetProxyAuto", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, proxyUri);
}
inline bool System::Net::WebProxy::IsBypassedAuto(::System::Uri* destination, ::by_ref<bool> isBypassed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "IsBypassedAuto", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, isBypassed);
}
inline bool System::Net::WebProxy::AreAllBypassed(::System::Collections::Generic::IEnumerable_1<::StringW>* proxies, bool checkFirstOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(),
                                                           { "AreAllBypassed", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, proxies, checkFirstOnly);
}
inline ::System::Uri* System::Net::WebProxy::ProxyUri(::StringW proxyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebProxy*>(), { "ProxyUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, proxyName);
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>());
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::System::Uri* Address, bool BypassOnLocal, ::ArrayW<::StringW> BypassList, ::System::Net::ICredentials* Credentials) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address, BypassOnLocal, BypassList, Credentials));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(serializationInfo, streamingContext));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(bool enableAutoproxy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(enableAutoproxy));
}
/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr System::Net::WebProxy::operator ::System::Net::IWebProxy*() noexcept {
  return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* System::Net::WebProxy::i___System__Net__IWebProxy() noexcept {
  return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::WebProxy::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::WebProxy::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebProxy::WebProxy() {}
