#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__MethodCall_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Type*)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x233f144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23525a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.InitDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x235263c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_IsContextOk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235276c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                               "get_IsContextOk", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_IsContextOk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(bool)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2352774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "set_IsContextOk",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ActivationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2352780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                               "get_ActivationType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ActivationTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                               "get_ActivationTypeName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_Activator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                               "get_Activator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_Activator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(
    ::System::Runtime::Remoting::Activation::IActivator*)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "set_Activator", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IActivator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_CallSiteActivationAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (
    ::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&::System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                               "get_CallSiteActivationAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.SetActivationAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "SetActivationAttributes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_ContextProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2352870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                               "get_ContextProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.InitMethodProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x23528dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2352fa8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23535d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.get_SourceProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Proxies::RemotingProxy* (::System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(
    &::System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2353630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                               "get_SourceProxy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCall.set_SourceProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCall::*)(
    ::System::Runtime::Remoting::Proxies::RemotingProxy*)>(&::System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2353638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "set_SourceProxy", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IConstructionCallMessage"
constexpr System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Activation::IConstructionCallMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr System::Runtime::Remoting::Messaging::ConstructionCall::operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
constexpr ::System::Runtime::Remoting::Activation::IActivator*& System::Runtime::Remoting::Messaging::ConstructionCall::__get__activator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activator;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Activation::IActivator*> const& System::Runtime::Remoting::Messaging::ConstructionCall::__get__activator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activator;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__set__activator(::System::Runtime::Remoting::Activation::IActivator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationAttributes;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationAttributes;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__set__activationAttributes(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activationAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& System::Runtime::Remoting::Messaging::ConstructionCall::__get__contextProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextProperties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& System::Runtime::Remoting::Messaging::ConstructionCall::__get__contextProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextProperties;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__set__contextProperties(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contextProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationType;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__set__activationType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activationType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationTypeName;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::ConstructionCall::__get__activationTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationTypeName;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__set__activationTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activationTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Remoting::Messaging::ConstructionCall::__get__isContextOk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isContextOk;
}
constexpr bool const& System::Runtime::Remoting::Messaging::ConstructionCall::__get__isContextOk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isContextOk;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__set__isContextOk(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isContextOk = value;
}
constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy*& System::Runtime::Remoting::Messaging::ConstructionCall::__get__sourceProxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceProxy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Proxies::RemotingProxy*> const& System::Runtime::Remoting::Messaging::ConstructionCall::__get__sourceProxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceProxy;
}
constexpr void System::Runtime::Remoting::Messaging::ConstructionCall::__set__sourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sourceProxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Messaging::ConstructionCall::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::ConstructionCall*>(type));
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Messaging::ConstructionCall::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::ConstructionCall*>(info, context));
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "InitDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "get_IsContextOk", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "set_IsContextOk",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "get_ActivationType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "get_ActivationTypeName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "get_Activator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator(::System::Runtime::Remoting::Activation::IActivator* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "set_Activator", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IActivator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "get_CallSiteActivationAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes(::ArrayW<::System::Object*, ::Array<::System::Object*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "SetActivationAttributes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
inline ::System::Collections::IList* System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "get_ContextProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty(::StringW key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "InitMethodProperty", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "get_Properties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(),
                                                                             "get_SourceProxy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Proxies::RemotingProxy*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCall*>::get(), "set_SourceProxy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ConstructionCall::ConstructionCall() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
