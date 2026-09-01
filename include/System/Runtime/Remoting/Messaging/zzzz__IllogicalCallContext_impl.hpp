#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\IllogicalCallContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IllogicalCallContext_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IllogicalCallContext.get_Datastore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::IllogicalCallContext::get_Datastore)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b3e8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "get_Datastore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IllogicalCallContext.get_HostContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HostContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3e934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "get_HostContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IllogicalCallContext.set_HostContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::IllogicalCallContext::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::IllogicalCallContext::set_HostContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3e93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "set_HostContext", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IllogicalCallContext.get_HasUserData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HasUserData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b3e944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "get_HasUserData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IllogicalCallContext.FreeNamedDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::IllogicalCallContext::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::IllogicalCallContext::FreeNamedDataSlot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b3e800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "FreeNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IllogicalCallContext.CreateCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IllogicalCallContext* (::System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::IllogicalCallContext::CreateCopy)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5b3e970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "CreateCopy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::IllogicalCallContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::IllogicalCallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::IllogicalCallContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3ebb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::Messaging::IllogicalCallContext::__cordl_internal_get_m_Datastore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Datastore;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Remoting::Messaging::IllogicalCallContext::__cordl_internal_get_m_Datastore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Datastore;
}
constexpr void System::Runtime::Remoting::Messaging::IllogicalCallContext::__cordl_internal_set_m_Datastore(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Datastore = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::IllogicalCallContext::__cordl_internal_get_m_HostContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HostContext;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::IllogicalCallContext::__cordl_internal_get_m_HostContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HostContext;
}
constexpr void System::Runtime::Remoting::Messaging::IllogicalCallContext::__cordl_internal_set_m_HostContext(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HostContext = value;
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::Messaging::IllogicalCallContext::get_Datastore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "get_Datastore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HostContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "get_HostContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::IllogicalCallContext::set_HostContext(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "set_HostContext", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HasUserData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "get_HasUserData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::IllogicalCallContext::FreeNamedDataSlot(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "FreeNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* System::Runtime::Remoting::Messaging::IllogicalCallContext::CreateCopy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { "CreateCopy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::IllogicalCallContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* System::Runtime::Remoting::Messaging::IllogicalCallContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext::IllogicalCallContext() {}
