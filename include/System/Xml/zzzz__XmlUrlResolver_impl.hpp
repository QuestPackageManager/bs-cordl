#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Xml/zzzz__XmlResolver_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlUrlResolver_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
#include "System/Xml/zzzz__XmlUrlResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::*)()>(
    &::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x28ad004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28ad380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ofObjectToReturn", ty: "::System::Type*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "absoluteUri", ty: "::System::Uri*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::System::Xml::XmlUrlResolver*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::__XmlUrlResolver___GetEntityAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::System::Type* ofObjectToReturn, ::System::Uri* absoluteUri,
    ::System::Xml::XmlUrlResolver* __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->ofObjectToReturn = ofObjectToReturn;
  this->absoluteUri = absoluteUri;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlUrlResolver___GetEntityAsync_d__15::__XmlUrlResolver___GetEntityAsync_d__15() {}
//  Writing Method size for method: ::System::Xml::XmlUrlResolver.get_DownloadManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDownloadManager* (*)()>(&::System::Xml::XmlUrlResolver::get_DownloadManager)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28acc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), "get_DownloadManager",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlUrlResolver::*)()>(&::System::Xml::XmlUrlResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28acd70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver.GetEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(
    &::System::Xml::XmlUrlResolver::GetEntity)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x28acd78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver.ResolveUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW)>(
    &::System::Xml::XmlUrlResolver::ResolveUri)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28acef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver.GetEntityAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (
    ::System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(&::System::Xml::XmlUrlResolver::GetEntityAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x28acef8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::Net::ICredentials*& System::Xml::XmlUrlResolver::__cordl_internal_get__credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& System::Xml::XmlUrlResolver::__cordl_internal_get__credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr void System::Xml::XmlUrlResolver::__cordl_internal_set__credentials(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____credentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IWebProxy*& System::Xml::XmlUrlResolver::__cordl_internal_get__proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& System::Xml::XmlUrlResolver::__cordl_internal_get__proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxy;
}
constexpr void System::Xml::XmlUrlResolver::__cordl_internal_set__proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Xml::XmlUrlResolver::__cordl_internal_get__cachePolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachePolicy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> const& System::Xml::XmlUrlResolver::__cordl_internal_get__cachePolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachePolicy;
}
constexpr void System::Xml::XmlUrlResolver::__cordl_internal_set__cachePolicy(::System::Net::Cache::RequestCachePolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachePolicy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlUrlResolver::setStaticF_s_DownloadManager(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_DownloadManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Xml::XmlUrlResolver::getStaticF_s_DownloadManager() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_DownloadManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get>();
}
inline ::System::Xml::XmlDownloadManager* System::Xml::XmlUrlResolver::get_DownloadManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), "get_DownloadManager",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDownloadManager*, false>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlUrlResolver* System::Xml::XmlUrlResolver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlUrlResolver*>());
}
inline void System::Xml::XmlUrlResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlUrlResolver::GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, absoluteUri, role, ofObjectToReturn);
}
inline ::System::Uri* System::Xml::XmlUrlResolver::ResolveUri(::System::Uri* baseUri, ::StringW relativeUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method, baseUri, relativeUri);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* System::Xml::XmlUrlResolver::GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlUrlResolver*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*, false>(this, ___internal_method, absoluteUri, role, ofObjectToReturn);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlUrlResolver::XmlUrlResolver() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
