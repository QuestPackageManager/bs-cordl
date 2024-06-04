#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/RemotingServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__RemotingServices_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientActivatedIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__RemotingServices_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryFormatter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::__RemotingServices__CACD._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::__RemotingServices__CACD::*)()>(
    &::System::Runtime::Remoting::__RemotingServices__CACD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282e4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::__RemotingServices__CACD*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Remoting::__RemotingServices__CACD::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::__RemotingServices__CACD::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void System::Runtime::Remoting::__RemotingServices__CACD::__cordl_internal_set_d(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___d)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Remoting::__RemotingServices__CACD::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::__RemotingServices__CACD::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void System::Runtime::Remoting::__RemotingServices__CACD::__cordl_internal_set_c(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___c)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::__RemotingServices__CACD* System::Runtime::Remoting::__RemotingServices__CACD::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::__RemotingServices__CACD*>());
}
inline void System::Runtime::Remoting::__RemotingServices__CACD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::__RemotingServices__CACD*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::__RemotingServices__CACD::__RemotingServices__CACD() {}
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.InternalExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::Reflection::MethodBase*, ::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                      ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>)>(&::System::Runtime::Remoting::RemotingServices::InternalExecute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2829fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "InternalExecute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetVirtualMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (*)(::System::Type*, ::System::Reflection::MethodBase*)>(
    &::System::Runtime::Remoting::RemotingServices::GetVirtualMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2829fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetVirtualMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.IsTransparentProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::Runtime::Remoting::RemotingServices::IsTransparentProxy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2829fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "IsTransparentProxy",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.InternalExecuteMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage* (*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(
        &::System::Runtime::Remoting::RemotingServices::InternalExecuteMessage)> {
  constexpr static std::size_t size = 0xa18;
  constexpr static std::size_t addrs = 0x282a028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "InternalExecuteMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::StringW)>(&::System::Runtime::Remoting::RemotingServices::Connect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x282aa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::RemotingServices::Connect)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x282ab98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetServerTypeForUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::System::Runtime::Remoting::RemotingServices::GetServerTypeForUri)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x282ac3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetServerTypeForUri",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Unmarshal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::RemotingServices::Unmarshal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x282af44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Unmarshal", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Unmarshal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ObjRef*, bool)>(
    &::System::Runtime::Remoting::RemotingServices::Unmarshal)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x282af9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Unmarshal", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Marshal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ObjRef* (*)(::System::MarshalByRefObject*)>(
    &::System::Runtime::Remoting::RemotingServices::Marshal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x282b5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Marshal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.Marshal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ObjRef* (*)(::System::MarshalByRefObject*, ::StringW, ::System::Type*)>(
    &::System::Runtime::Remoting::RemotingServices::Marshal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x282b644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Marshal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.NewUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::RemotingServices::NewUri)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x282b7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "NewUri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetRealProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Proxies::RealProxy* (*)(::System::Object*)>(
    &::System::Runtime::Remoting::RemotingServices::GetRealProxy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x282b6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetRealProxy",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetMethodBaseFromMethodMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(
    &::System::Runtime::Remoting::RemotingServices::GetMethodBaseFromMethodMessage)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x282c328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetMethodBaseFromMethodMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetMethodBaseFromName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Reflection::MethodBase* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Runtime::Remoting::RemotingServices::GetMethodBaseFromName)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x282c618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetMethodBaseFromName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.FindInterfaceMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Reflection::MethodBase* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Runtime::Remoting::RemotingServices::FindInterfaceMethod)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x282c7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "FindInterfaceMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::RemotingServices::GetObjectData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x282c918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.IsOneWay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MethodBase*)>(&::System::Runtime::Remoting::RemotingServices::IsOneWay)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x282c9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "IsOneWay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
        &::System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x282ca60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientProxy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x282cba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientProxy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientProxy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x282ce10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientProxy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientProxyForContextBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientProxyForContextBound)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x282ce7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientProxyForContextBound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetIdentityForUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity* (*)(::StringW)>(
    &::System::Runtime::Remoting::RemotingServices::GetIdentityForUri)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x282acf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetIdentityForUri",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.RemoveAppNameFromUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Remoting::RemotingServices::RemoveAppNameFromUri)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x282d080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "RemoveAppNameFromUri",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetOrCreateClientIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::ClientIdentity* (*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ByRef<::System::Object*>)>(
        &::System::Runtime::Remoting::RemotingServices::GetOrCreateClientIdentity)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x282d174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetOrCreateClientIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetClientChannelSinkChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (*)(::StringW, ::System::Object*, ByRef<::StringW>)>(
    &::System::Runtime::Remoting::RemotingServices::GetClientChannelSinkChain)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x282cce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetClientChannelSinkChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateContextBoundObjectIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ClientActivatedIdentity* (*)(::System::Type*)>(
    &::System::Runtime::Remoting::RemotingServices::CreateContextBoundObjectIdentity)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x282e0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateContextBoundObjectIdentity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateClientActivatedServerIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ClientActivatedIdentity* (*)(::System::MarshalByRefObject*, ::System::Type*, ::StringW)>(
    &::System::Runtime::Remoting::RemotingServices::CreateClientActivatedServerIdentity)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x282c1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientActivatedServerIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.CreateWellKnownServerIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::ServerIdentity* (*)(::System::Type*, ::StringW, ::System::Runtime::Remoting::WellKnownObjectMode)>(
        &::System::Runtime::Remoting::RemotingServices::CreateWellKnownServerIdentity)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2829ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateWellKnownServerIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownObjectMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.RegisterServerIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ServerIdentity*)>(
    &::System::Runtime::Remoting::RemotingServices::RegisterServerIdentity)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x282bb34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "RegisterServerIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetProxyForRemoteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*)>(
    &::System::Runtime::Remoting::RemotingServices::GetProxyForRemoteObject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x282b504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetProxyForRemoteObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetRemoteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*)>(
    &::System::Runtime::Remoting::RemotingServices::GetRemoteObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x282ab24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetRemoteObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.SerializeCallData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::Object*)>(
    &::System::Runtime::Remoting::RemotingServices::SerializeCallData)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x282e2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "SerializeCallData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.DeserializeCallData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Runtime::Remoting::RemotingServices::DeserializeCallData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x282e538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "DeserializeCallData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.SerializeExceptionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::Exception*)>(
    &::System::Runtime::Remoting::RemotingServices::SerializeExceptionData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x282ea0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "SerializeExceptionData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.RegisterInternalChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Runtime::Remoting::RemotingServices::RegisterInternalChannels)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2829e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(),
                                                                               "RegisterInternalChannels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.DisposeIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::Identity*)>(&::System::Runtime::Remoting::RemotingServices::DisposeIdentity)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x282d644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "DisposeIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetMessageTargetIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::RemotingServices::GetMessageTargetIdentity)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x282ecc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetMessageTargetIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.SetMessageTargetIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Identity*)>(
    &::System::Runtime::Remoting::RemotingServices::SetMessageTargetIdentity)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x282effc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "SetMessageTargetIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.UpdateOutArgObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::ParameterInfo*, ::System::Object*, ::System::Object*)>(
    &::System::Runtime::Remoting::RemotingServices::UpdateOutArgObject)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x282f110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "UpdateOutArgObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingServices.GetNormalizedUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Remoting::RemotingServices::GetNormalizedUri)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x282d008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetNormalizedUri",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::RemotingServices::setStaticF_uri_hash(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "uri_hash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingServices::getStaticF_uri_hash() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "uri_hash",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF__serializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "_serializationFormatter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>(
      std::forward<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>(value));
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Runtime::Remoting::RemotingServices::getStaticF__serializationFormatter() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "_serializationFormatter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF__deserializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "_deserializationFormatter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>(
      std::forward<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>(value));
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Runtime::Remoting::RemotingServices::getStaticF__deserializationFormatter() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "_deserializationFormatter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_app_id(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "app_id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::RemotingServices::getStaticF_app_id() {
  return ::cordl_internals::getStaticField<::StringW, "app_id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_app_id_lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "app_id_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::getStaticF_app_id_lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "app_id_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_next_id(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "next_id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Remoting::RemotingServices::getStaticF_next_id() {
  return ::cordl_internals::getStaticField<int32_t, "next_id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_FieldSetterMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "FieldSetterMethod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::RemotingServices::getStaticF_FieldSetterMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "FieldSetterMethod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>();
}
inline void System::Runtime::Remoting::RemotingServices::setStaticF_FieldGetterMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "FieldGetterMethod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::RemotingServices::getStaticF_FieldGetterMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "FieldGetterMethod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get>();
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::InternalExecute(::System::Reflection::MethodBase* method, ::System::Object* obj,
                                                                                      ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                                                                      ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> out_args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "InternalExecute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, method, obj, parameters, out_args);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetVirtualMethod(::System::Type* type, ::System::Reflection::MethodBase* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetVirtualMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, type, method);
}
inline bool System::Runtime::Remoting::RemotingServices::IsTransparentProxy(::System::Object* proxy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "IsTransparentProxy",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, proxy);
}
inline ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*
System::Runtime::Remoting::RemotingServices::InternalExecuteMessage(::System::MarshalByRefObject* target, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "InternalExecuteMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, false>(nullptr, ___internal_method, target, reqMsg);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::Connect(::System::Type* classToProxy, ::StringW url) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, classToProxy, url);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::Connect(::System::Type* classToProxy, ::StringW url, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, classToProxy, url, data);
}
inline ::System::Type* System::Runtime::Remoting::RemotingServices::GetServerTypeForUri(::StringW URI) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetServerTypeForUri",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, URI);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Unmarshal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objectRef);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef, bool fRefine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Unmarshal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objectRef, fRefine);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::RemotingServices::Marshal(::System::MarshalByRefObject* Obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Marshal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*, false>(nullptr, ___internal_method, Obj);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::RemotingServices::Marshal(::System::MarshalByRefObject* Obj, ::StringW ObjURI, ::System::Type* RequestedType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "Marshal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*, false>(nullptr, ___internal_method, Obj, ObjURI, RequestedType);
}
inline ::StringW System::Runtime::Remoting::RemotingServices::NewUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "NewUri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::RemotingServices::GetRealProxy(::System::Object* proxy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetRealProxy",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Proxies::RealProxy*, false>(nullptr, ___internal_method, proxy);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetMethodBaseFromMethodMessage(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetMethodBaseFromMethodMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, msg);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetMethodBaseFromName(::System::Type* type, ::StringW methodName,
                                                                                                            ::ArrayW<::System::Type*, ::Array<::System::Type*>*> signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetMethodBaseFromName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, type, methodName, signature);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::FindInterfaceMethod(::System::Type* type, ::StringW methodName,
                                                                                                          ::ArrayW<::System::Type*, ::Array<::System::Type*>*> signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "FindInterfaceMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, type, methodName, signature);
}
inline void System::Runtime::Remoting::RemotingServices::GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                       ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, info, context);
}
inline bool System::Runtime::Remoting::RemotingServices::IsOneWay(::System::Reflection::MethodBase* method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "IsOneWay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, method);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::CreateClientProxy(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry,
                                                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientProxy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, entry, activationAttributes);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::CreateClientProxy(::System::Type* objectType, ::StringW url,
                                                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientProxy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objectType, url, activationAttributes);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::CreateClientProxy(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientProxy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, entry);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::CreateClientProxyForContextBound(::System::Type* type,
                                                                                                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientProxyForContextBound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type, activationAttributes);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::RemotingServices::GetIdentityForUri(::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetIdentityForUri",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*, false>(nullptr, ___internal_method, uri);
}
inline ::StringW System::Runtime::Remoting::RemotingServices::RemoveAppNameFromUri(::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "RemoveAppNameFromUri",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, uri);
}
inline ::System::Runtime::Remoting::ClientIdentity* System::Runtime::Remoting::RemotingServices::GetOrCreateClientIdentity(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType,
                                                                                                                           ByRef<::System::Object*> clientProxy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetOrCreateClientIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ClientIdentity*, false>(nullptr, ___internal_method, objRef, proxyType, clientProxy);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::RemotingServices::GetClientChannelSinkChain(::StringW url, ::System::Object* channelData,
                                                                                                                                    ByRef<::StringW> objectUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetClientChannelSinkChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(nullptr, ___internal_method, url, channelData, objectUri);
}
inline ::System::Runtime::Remoting::ClientActivatedIdentity* System::Runtime::Remoting::RemotingServices::CreateContextBoundObjectIdentity(::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateContextBoundObjectIdentity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ClientActivatedIdentity*, false>(nullptr, ___internal_method, objectType);
}
inline ::System::Runtime::Remoting::ClientActivatedIdentity* System::Runtime::Remoting::RemotingServices::CreateClientActivatedServerIdentity(::System::MarshalByRefObject* realObject,
                                                                                                                                              ::System::Type* objectType, ::StringW objectUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateClientActivatedServerIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ClientActivatedIdentity*, false>(nullptr, ___internal_method, realObject, objectType, objectUri);
}
inline ::System::Runtime::Remoting::ServerIdentity* System::Runtime::Remoting::RemotingServices::CreateWellKnownServerIdentity(::System::Type* objectType, ::StringW objectUri,
                                                                                                                               ::System::Runtime::Remoting::WellKnownObjectMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "CreateWellKnownServerIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownObjectMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ServerIdentity*, false>(nullptr, ___internal_method, objectType, objectUri, mode);
}
inline void System::Runtime::Remoting::RemotingServices::RegisterServerIdentity(::System::Runtime::Remoting::ServerIdentity* identity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "RegisterServerIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, identity);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::GetProxyForRemoteObject(::System::Runtime::Remoting::ObjRef* objref, ::System::Type* classToProxy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetProxyForRemoteObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objref, classToProxy);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::GetRemoteObject(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetRemoteObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objRef, proxyType);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Runtime::Remoting::RemotingServices::SerializeCallData(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "SerializeCallData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, obj);
}
inline ::System::Object* System::Runtime::Remoting::RemotingServices::DeserializeCallData(::ArrayW<uint8_t, ::Array<uint8_t>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "DeserializeCallData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Runtime::Remoting::RemotingServices::SerializeExceptionData(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "SerializeExceptionData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, ex);
}
inline void System::Runtime::Remoting::RemotingServices::RegisterInternalChannels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(),
                                                                             "RegisterInternalChannels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::RemotingServices::DisposeIdentity(::System::Runtime::Remoting::Identity* ident) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "DisposeIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ident);
}
inline ::System::Runtime::Remoting::Identity* System::Runtime::Remoting::RemotingServices::GetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetMessageTargetIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Identity*, false>(nullptr, ___internal_method, msg);
}
inline void System::Runtime::Remoting::RemotingServices::SetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Identity* ident) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "SetMessageTargetIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg, ident);
}
inline bool System::Runtime::Remoting::RemotingServices::UpdateOutArgObject(::System::Reflection::ParameterInfo* pi, ::System::Object* local, ::System::Object* remote) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "UpdateOutArgObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pi, local, remote);
}
inline ::StringW System::Runtime::Remoting::RemotingServices::GetNormalizedUri(::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingServices*>::get(), "GetNormalizedUri",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, uri);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::RemotingServices::RemotingServices() {}
