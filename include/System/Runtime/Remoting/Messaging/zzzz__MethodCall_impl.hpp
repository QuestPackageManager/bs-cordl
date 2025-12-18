#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/MethodCall.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodCall_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IInternalMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::MethodCall::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59933e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)(
    ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*)>(&::System::Runtime::Remoting::Messaging::MethodCall::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5995a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59933dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.CopyFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&::System::Runtime::Remoting::Messaging::MethodCall::CopyFrom)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x598448c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "CopyFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.InitMethodProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::MethodCall::InitMethodProperty)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x599399c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::MethodCall::GetObjectData)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5993f9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_ArgCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_ArgCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5995b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_ArgCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_Args
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_Args)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5995b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_Args", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_LogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (
    ::System::Runtime::Remoting::Messaging::MethodCall::*)()>(&::System::Runtime::Remoting::Messaging::MethodCall::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5995b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_LogicalCallContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_MethodBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_MethodBase)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5995b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_MethodBase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_MethodName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_MethodName)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5996024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_MethodName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_MethodSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_MethodSignature)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5996058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_MethodSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_Properties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5994430;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.InitDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::InitDictionary)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5996180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_TypeName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x599627c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_TypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_Uri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59962c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_Uri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.set_Uri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::MethodCall::set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59962cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "set_Uri",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59962d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                 "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59962dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.GetArg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MethodCall::*)(int32_t)>(
    &::System::Runtime::Remoting::Messaging::MethodCall::GetArg)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59962e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "GetArg",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5996314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.ResolveMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::ResolveMethod)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5995bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "ResolveMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.CastTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Remoting::Messaging::MethodCall::*)(::StringW, ::System::Type*)>(
    &::System::Runtime::Remoting::Messaging::MethodCall::CastTo)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5996318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "CastTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.GetTypeNameFromAssemblyQualifiedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::MethodCall::GetTypeNameFromAssemblyQualifiedName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5996488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "GetTypeNameFromAssemblyQualifiedName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity* (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5996540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                    "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MethodCall::*)(::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5996548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MethodCall.get_GenericArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Runtime::Remoting::Messaging::MethodCall::*)()>(
    &::System::Runtime::Remoting::Messaging::MethodCall::get_GenericArguments)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x599644c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                               "get_GenericArguments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uri;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uri;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeName;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodName;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodName;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____methodName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__methodSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodSignature;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__methodSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodSignature;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__methodSignature(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____methodSignature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodBase*& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__methodBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodBase;
}
constexpr ::System::Reflection::MethodBase* const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__methodBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodBase;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__methodBase(::System::Reflection::MethodBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____methodBase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__callContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callContext;
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext* const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__callContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callContext;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__callContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Identity*& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__targetIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetIdentity;
}
constexpr ::System::Runtime::Remoting::Identity* const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__targetIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetIdentity;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__targetIdentity(::System::Runtime::Remoting::Identity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetIdentity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__genericArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____genericArguments;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get__genericArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____genericArguments;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set__genericArguments(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____genericArguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get_ExternalProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExternalProperties;
}
constexpr ::System::Collections::IDictionary* const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get_ExternalProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExternalProperties;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set_ExternalProperties(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExternalProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get_InternalProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalProperties;
}
constexpr ::System::Collections::IDictionary* const& System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_get_InternalProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalProperties;
}
constexpr void System::Runtime::Remoting::Messaging::MethodCall::__cordl_internal_set_InternalProperties(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InternalProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Messaging::MethodCall::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::_ctor(::System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::CopyFrom(::System::Runtime::Remoting::Messaging::IMethodMessage* call) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "CopyFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, call);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::InitMethodProperty(::StringW key, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline int32_t System::Runtime::Remoting::Messaging::MethodCall::get_ArgCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_ArgCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Messaging::MethodCall::get_Args() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_Args", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::MethodCall::get_LogicalCallContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_LogicalCallContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::MethodCall::get_MethodBase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_MethodBase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodCall::get_MethodName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_MethodName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MethodCall::get_MethodSignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_MethodSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MethodCall::get_Properties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::InitDictionary() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodCall::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_TypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodCall::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_Uri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::set_Uri(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "set_Uri",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                               "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MethodCall::GetArg(int32_t argNum) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "GetArg",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, argNum);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::ResolveMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "ResolveMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::Messaging::MethodCall::CastTo(::StringW clientType, ::System::Type* serverType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "CastTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, clientType, serverType);
}
inline ::StringW System::Runtime::Remoting::Messaging::MethodCall::GetTypeNameFromAssemblyQualifiedName(::StringW aqname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "GetTypeNameFromAssemblyQualifiedName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, aqname);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                  "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(), "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Runtime::Remoting::Messaging::MethodCall::get_GenericArguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MethodCall*>::get(),
                                                                             "get_GenericArguments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::MethodCall* System::Runtime::Remoting::Messaging::MethodCall::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::MethodCall*>(info, context));
}
inline ::System::Runtime::Remoting::Messaging::MethodCall* System::Runtime::Remoting::Messaging::MethodCall::New_ctor(::System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::MethodCall*>(msg));
}
inline ::System::Runtime::Remoting::Messaging::MethodCall* System::Runtime::Remoting::Messaging::MethodCall::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::MethodCall*>());
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr System::Runtime::Remoting::Messaging::MethodCall::operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* System::Runtime::Remoting::Messaging::MethodCall::i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr System::Runtime::Remoting::Messaging::MethodCall::operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* System::Runtime::Remoting::Messaging::MethodCall::i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr System::Runtime::Remoting::Messaging::MethodCall::operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::MethodCall::i___System__Runtime__Remoting__Messaging__IMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Runtime::Remoting::Messaging::MethodCall::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Runtime::Remoting::Messaging::MethodCall::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
constexpr System::Runtime::Remoting::Messaging::MethodCall::operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IInternalMessage"
constexpr ::System::Runtime::Remoting::Messaging::IInternalMessage* System::Runtime::Remoting::Messaging::MethodCall::i___System__Runtime__Remoting__Messaging__IInternalMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MethodCall::MethodCall() {}
