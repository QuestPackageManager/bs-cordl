#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/MonoMethodMessage.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MonoMethodMessage_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__AsyncResult_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallType_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IInternalMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MCMDictionary_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.InitMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::System::Reflection::RuntimeMethodInfo*, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::InitMessage)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5b47348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                             { "InitMessage", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::System::Reflection::MethodBase*, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b475c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(
    ::System::Reflection::MethodInfo*, ::ArrayW<::System::Object*>, ::ArrayW<::System::Object*>)>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b47680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.GetMethodInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW)>(&::System::Runtime::Remoting::Messaging::MonoMethodMessage::GetMethodInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b477a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                                                           { "GetMethodInfo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::System::Type*, ::StringW, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b47844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Properties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b4787c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_Properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_ArgCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ArgCount)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b478e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_ArgCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_Args
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Args)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b479a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_Args", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_LogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b479a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_LogicalCallContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.set_LogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::set_LogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b479b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                             { "set_LogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_MethodBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b479b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_MethodBase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_MethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b479c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_MethodName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_MethodSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodSignature)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b479e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_MethodSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_TypeName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b47b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b47b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_Uri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.set_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b47b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "set_Uri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.GetArg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(int32_t)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::GetArg)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b47b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "GetArg", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b47b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_OutArgCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b47ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_OutArgCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_OutArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgs)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b47c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_OutArgs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_ReturnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ReturnValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b47d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_ReturnValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Identity* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b47d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                                                           { "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b47d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                { "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_AsyncResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::AsyncResult* (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_AsyncResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b47d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_AsyncResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.get_CallType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::CallType (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::get_CallType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b47920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_CallType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MonoMethodMessage.NeedsOutProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::MonoMethodMessage::*)(::by_ref<int32_t>)>(
    &::System::Runtime::Remoting::Messaging::MonoMethodMessage::NeedsOutProcessing)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b47d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "NeedsOutProcessing", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::RuntimeMethodInfo*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::System::Reflection::RuntimeMethodInfo* const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_method(::System::Reflection::RuntimeMethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_args(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___args = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___names;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___names;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_names(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___names = value;
}
constexpr ::ArrayW<uint8_t>& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_arg_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arg_types;
}
constexpr ::ArrayW<uint8_t> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_arg_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arg_types;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_arg_types(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arg_types = value;
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext* const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_ctx(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctx = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_rval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rval;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_rval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rval;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_rval(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rval = value;
}
constexpr ::System::Exception*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_exc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exc;
}
constexpr ::System::Exception* const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_exc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exc;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_exc(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exc = value;
}
constexpr ::System::Runtime::Remoting::Messaging::AsyncResult*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_asyncResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncResult;
}
constexpr ::System::Runtime::Remoting::Messaging::AsyncResult* const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_asyncResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncResult;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_asyncResult(::System::Runtime::Remoting::Messaging::AsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncResult = value;
}
constexpr ::System::Runtime::Remoting::Messaging::CallType& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_call_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_type;
}
constexpr ::System::Runtime::Remoting::Messaging::CallType const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_call_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_type;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_call_type(::System::Runtime::Remoting::Messaging::CallType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___call_type = value;
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uri = value;
}
constexpr ::System::Runtime::Remoting::Messaging::MCMDictionary*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___properties;
}
constexpr ::System::Runtime::Remoting::Messaging::MCMDictionary* const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___properties;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_properties(::System::Runtime::Remoting::Messaging::MCMDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___properties = value;
}
constexpr ::System::Runtime::Remoting::Identity*& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identity;
}
constexpr ::System::Runtime::Remoting::Identity* const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identity;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_identity(::System::Runtime::Remoting::Identity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___identity = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_methodSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodSignature;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_get_methodSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodSignature;
}
constexpr void System::Runtime::Remoting::Messaging::MonoMethodMessage::__cordl_internal_set_methodSignature(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methodSignature = value;
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::InitMessage(::System::Reflection::RuntimeMethodInfo* method, ::ArrayW<::System::Object*> out_args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                           { "InitMessage", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, out_args);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor(::System::Reflection::MethodBase* method, ::ArrayW<::System::Object*> out_args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, out_args);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor(::System::Reflection::MethodInfo* minfo, ::ArrayW<::System::Object*> in_args, ::ArrayW<::System::Object*> out_args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minfo, in_args, out_args);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Messaging::MonoMethodMessage::GetMethodInfo(::System::Type* type, ::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                                                         { "GetMethodInfo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, type, methodName);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::_ctor(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Object*> in_args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, methodName, in_args);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_Properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ArgCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_ArgCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Args() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_Args", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_LogicalCallContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_LogicalCallContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                           { "set_LogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodBase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_MethodBase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_MethodName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodSignature() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_MethodSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MonoMethodMessage::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_Uri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::set_Uri(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "set_Uri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MonoMethodMessage::GetArg(int32_t arg_num) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "GetArg", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, arg_num);
}
inline ::System::Exception* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_OutArgCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_OutArgs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ReturnValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_ReturnValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                                                                         { "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(),
                                              { "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", {}, { ::i2c::type_of<::System::Runtime::Remoting::Identity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_AsyncResult() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_AsyncResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::AsyncResult*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::CallType System::Runtime::Remoting::Messaging::MonoMethodMessage::get_CallType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "get_CallType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::CallType>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::MonoMethodMessage::NeedsOutProcessing(::by_ref<int32_t> outCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(), { "NeedsOutProcessing", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outCount);
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(::System::Reflection::MethodBase* method,
                                                                                                                                    ::ArrayW<::System::Object*> out_args) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(method, out_args));
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage*
System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(::System::Reflection::MethodInfo* minfo, ::ArrayW<::System::Object*> in_args, ::ArrayW<::System::Object*> out_args) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(minfo, in_args, out_args));
}
inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(::System::Type* type, ::StringW methodName,
                                                                                                                                    ::ArrayW<::System::Object*> in_args) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MonoMethodMessage*>(type, methodName, in_args));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::i___System__Runtime__Remoting__Messaging__IMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*
System::Runtime::Remoting::Messaging::MonoMethodMessage::i___System__Runtime__Remoting__Messaging__IMethodReturnMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
constexpr System::Runtime::Remoting::Messaging::MonoMethodMessage::operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IInternalMessage"
constexpr ::System::Runtime::Remoting::Messaging::IInternalMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::i___System__Runtime__Remoting__Messaging__IInternalMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MonoMethodMessage::MonoMethodMessage() {}
