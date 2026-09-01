#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\MethodResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodResponse_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IInternalMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(
    ::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(&::System::Runtime::Remoting::Messaging::MethodResponse::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b47cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(
    ::System::Object*, ::ArrayW<::System::Object*>, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b47df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                                                               ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(
    ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*)>(&::System::Runtime::Remoting::Messaging::MethodResponse::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5b47ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::MethodResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b48104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.InitMethodProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::InitMethodProperty)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x5b482c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                           { "InitMethodProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_ArgCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&::System::Runtime::Remoting::Messaging::MethodResponse::get_ArgCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b487e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_ArgCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_Args
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_Args)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b487f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_Args", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b48800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_LogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b48808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_LogicalCallContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_MethodBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_MethodBase)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b48860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_MethodBase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_MethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_MethodName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b48974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_MethodName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_MethodSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_MethodSignature)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b48aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_MethodSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_OutArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_OutArgs)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b48c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_OutArgs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_Properties)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b48cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_ReturnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_ReturnValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b48e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_ReturnValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::get_TypeName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b48a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.get_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(&::System::Runtime::Remoting::Messaging::MethodResponse::get_Uri)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b48e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_Uri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.set_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(::StringW)>(&::System::Runtime::Remoting::Messaging::MethodResponse::set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b48f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "set_Uri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b48f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b48f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                           { "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.GetArg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MethodResponse::*)(int32_t)>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::GetArg)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b48f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "GetArg", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::MethodResponse::GetObjectData)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5b48f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Identity* (::System::Runtime::Remoting::Messaging::MethodResponse::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                           { "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodResponse.System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodResponse::*)(::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                { "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodName;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodName;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____methodName = value;
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uri;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uri;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uri = value;
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeName = value;
}
constexpr ::System::Reflection::MethodBase*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__methodBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodBase;
}
constexpr ::System::Reflection::MethodBase* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__methodBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodBase;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__methodBase(::System::Reflection::MethodBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____methodBase = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__returnValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnValue;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__returnValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnValue;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__returnValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____returnValue = value;
}
constexpr ::System::Exception*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr ::System::Exception* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exception = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__methodSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodSignature;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__methodSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodSignature;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__methodSignature(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____methodSignature = value;
}
constexpr ::System::Runtime::Remoting::Messaging::ArgInfo*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__inArgInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inArgInfo;
}
constexpr ::System::Runtime::Remoting::Messaging::ArgInfo* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__inArgInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inArgInfo;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__inArgInfo(::System::Runtime::Remoting::Messaging::ArgInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inArgInfo = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__args(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____args = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__outArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outArgs;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__outArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outArgs;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__outArgs(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outArgs = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__callMsg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callMsg;
}
constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__callMsg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callMsg;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__callMsg(::System::Runtime::Remoting::Messaging::IMethodCallMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callMsg = value;
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__callContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callContext;
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__callContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callContext;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__callContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callContext = value;
}
constexpr ::System::Runtime::Remoting::Identity*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__targetIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetIdentity;
}
constexpr ::System::Runtime::Remoting::Identity* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get__targetIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetIdentity;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set__targetIdentity(::System::Runtime::Remoting::Identity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetIdentity = value;
}
constexpr ::System::Collections::IDictionary*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get_ExternalProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExternalProperties;
}
constexpr ::System::Collections::IDictionary* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get_ExternalProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExternalProperties;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set_ExternalProperties(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExternalProperties = value;
}
constexpr ::System::Collections::IDictionary*& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get_InternalProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalProperties;
}
constexpr ::System::Collections::IDictionary* const& System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_get_InternalProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalProperties;
}
constexpr void System::Runtime::Remoting::Messaging::MethodResponse::__cordl_internal_set_InternalProperties(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InternalProperties = value;
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::_ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, msg);
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::_ctor(::System::Object* returnValue, ::ArrayW<::System::Object*> outArgs,
                                                                        ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx,
                                                                        ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                                                             ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnValue, outArgs, callCtx, msg);
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::_ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg,
                                                                        ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, retmsg);
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::InitMethodProperty(::StringW key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                         { "InitMethodProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline int32_t System::Runtime::Remoting::Messaging::MethodResponse::get_ArgCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_ArgCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::MethodResponse::get_Args() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_Args", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Exception* System::Runtime::Remoting::Messaging::MethodResponse::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::MethodResponse::get_LogicalCallContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_LogicalCallContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::MethodResponse::get_MethodBase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_MethodBase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodResponse::get_MethodName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_MethodName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MethodResponse::get_MethodSignature() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_MethodSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::MethodResponse::get_OutArgs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_OutArgs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MethodResponse::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MethodResponse::get_ReturnValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_ReturnValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodResponse::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodResponse::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "get_Uri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::set_Uri(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "set_Uri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                         { "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MethodResponse::GetArg(int32_t argNum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), { "GetArg", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, argNum);
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                                                                         { "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodResponse::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MethodResponse*>(),
                                              { "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::MethodResponse* System::Runtime::Remoting::Messaging::MethodResponse::New_ctor(::System::Exception* e,
                                                                                                                              ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MethodResponse*>(e, msg));
}
inline ::System::Runtime::Remoting::Messaging::MethodResponse* System::Runtime::Remoting::Messaging::MethodResponse::New_ctor(::System::Object* returnValue, ::ArrayW<::System::Object*> outArgs,
                                                                                                                              ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx,
                                                                                                                              ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MethodResponse*>(returnValue, outArgs, callCtx, msg));
}
inline ::System::Runtime::Remoting::Messaging::MethodResponse* System::Runtime::Remoting::Messaging::MethodResponse::New_ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg,
                                                                                                                              ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MethodResponse*>(msg, retmsg));
}
inline ::System::Runtime::Remoting::Messaging::MethodResponse* System::Runtime::Remoting::Messaging::MethodResponse::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MethodResponse*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
constexpr System::Runtime::Remoting::Messaging::MethodResponse::operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*
System::Runtime::Remoting::Messaging::MethodResponse::i___System__Runtime__Remoting__Messaging__IMethodReturnMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr System::Runtime::Remoting::Messaging::MethodResponse::operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* System::Runtime::Remoting::Messaging::MethodResponse::i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr System::Runtime::Remoting::Messaging::MethodResponse::operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::MethodResponse::i___System__Runtime__Remoting__Messaging__IMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Runtime::Remoting::Messaging::MethodResponse::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Runtime::Remoting::Messaging::MethodResponse::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
constexpr System::Runtime::Remoting::Messaging::MethodResponse::operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IInternalMessage"
constexpr ::System::Runtime::Remoting::Messaging::IInternalMessage* System::Runtime::Remoting::Messaging::MethodResponse::i___System__Runtime__Remoting__Messaging__IInternalMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MethodResponse::MethodResponse() {}
