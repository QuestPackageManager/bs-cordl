#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ConstructionCall.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodCall_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Type*)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b3037c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b410a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.InitDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b4114c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_IsContextOk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b41278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_IsContextOk", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_IsContextOk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(bool)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b41280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "set_IsContextOk", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ActivationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b41288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_ActivationType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ActivationTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b41334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_ActivationTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_Activator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4133c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_Activator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_Activator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Remoting::Activation::IActivator*)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b41344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                           { "set_Activator", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IActivator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_CallSiteActivationAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4134c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_CallSiteActivationAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.SetActivationAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b41354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                           { "SetActivationAttributes", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ContextProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b4135c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_ContextProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.InitMethodProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5b413c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5b41ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b420c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_SourceProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Proxies::RemotingProxy* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b42120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_SourceProxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_SourceProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Remoting::Proxies::RemotingProxy*)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b42128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                           { "set_SourceProxy", {}, { ::i2c::type_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Activation::IActivator*& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__activator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activator;
}
constexpr ::System::Runtime::Remoting::Activation::IActivator* const& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__activator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activator;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_set__activator(::System::Runtime::Remoting::Activation::IActivator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activator = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__activationAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationAttributes;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__activationAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationAttributes;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_set__activationAttributes(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activationAttributes = value;
}
constexpr ::System::Collections::IList*& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__contextProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextProperties;
}
constexpr ::System::Collections::IList* const& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__contextProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextProperties;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_set__contextProperties(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contextProperties = value;
}
constexpr ::System::Type*& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__activationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationType;
}
constexpr ::System::Type* const& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__activationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationType;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_set__activationType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activationType = value;
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__activationTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationTypeName;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__activationTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationTypeName;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_set__activationTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activationTypeName = value;
}
constexpr bool& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__isContextOk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isContextOk;
}
constexpr bool const& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__isContextOk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isContextOk;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_set__isContextOk(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isContextOk = value;
}
constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy*& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__sourceProxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceProxy;
}
constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy* const& System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_get__sourceProxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceProxy;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__cordl_internal_set__sourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sourceProxy = value;
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_IsContextOk", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "set_IsContextOk", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_ActivationType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_ActivationTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_Activator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator(::System::Runtime::Remoting::Activation::IActivator* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                         { "set_Activator", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IActivator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_CallSiteActivationAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes(::ArrayW<::System::Object*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                         { "SetActivationAttributes", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::System::Collections::IList* System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_ContextProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty(::StringW key, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(), { "get_SourceProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Proxies::RemotingProxy*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ConstructionCall*>(),
                                                                                         { "set_SourceProxy", {}, { ::i2c::type_of<::System::Runtime::Remoting::Proxies::RemotingProxy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Messaging::ConstructionCall::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::ConstructionCall*>(type));
}
inline ::System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Messaging::ConstructionCall::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::ConstructionCall*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IConstructionCallMessage"
constexpr System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Activation::IConstructionCallMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Activation::IConstructionCallMessage"
constexpr ::System::Runtime::Remoting::Activation::IConstructionCallMessage*
System::Runtime::Remoting::Messaging::ConstructionCall::i___System__Runtime__Remoting__Activation__IConstructionCallMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::ConstructionCall::i___System__Runtime__Remoting__Messaging__IMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* System::Runtime::Remoting::Messaging::ConstructionCall::i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* System::Runtime::Remoting::Messaging::ConstructionCall::i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ConstructionCall::ConstructionCall() {}
