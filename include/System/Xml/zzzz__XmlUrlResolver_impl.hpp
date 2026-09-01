#pragma once
// IWYU pragma private; include "System\Xml\XmlUrlResolver.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Xml/zzzz__XmlResolver_impl.hpp"
#include "System/Xml/zzzz__XmlUrlResolver_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
#include "System/Xml/zzzz__XmlUrlResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlUrlResolver__GetEntityAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUrlResolver__GetEntityAsync_d__15::*)()>(&::System::Xml::XmlUrlResolver__GetEntityAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x62e7854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver__GetEntityAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver__GetEntityAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUrlResolver__GetEntityAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Xml::XmlUrlResolver__GetEntityAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62e7c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver__GetEntityAsync_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlUrlResolver__GetEntityAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver__GetEntityAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Xml::XmlUrlResolver__GetEntityAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver__GetEntityAsync_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Xml::XmlUrlResolver__GetEntityAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Xml::XmlUrlResolver__GetEntityAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ofObjectToReturn", ty: "::System::Type*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "absoluteUri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Xml::XmlUrlResolver*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Xml::XmlUrlResolver__GetEntityAsync_d__15::XmlUrlResolver__GetEntityAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::System::Type* ofObjectToReturn, ::System::Uri* absoluteUri,
    ::System::Xml::XmlUrlResolver* __4__this, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->ofObjectToReturn = ofObjectToReturn;
  this->absoluteUri = absoluteUri;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlUrlResolver__GetEntityAsync_d__15::XmlUrlResolver__GetEntityAsync_d__15() {}
//  Writing Method size for method: ::System::Xml::XmlUrlResolver.get_DownloadManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDownloadManager* (*)()>(&::System::Xml::XmlUrlResolver::get_DownloadManager)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62e754c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver*>(), { "get_DownloadManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUrlResolver::*)()>(&::System::Xml::XmlUrlResolver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62e7618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver.GetEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(&::System::Xml::XmlUrlResolver::GetEntity)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x62e761c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver*>(), { ::i2c::class_of<::System::Xml::XmlUrlResolver*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver.ResolveUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW)>(&::System::Xml::XmlUrlResolver::ResolveUri)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62e7758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver*>(), { ::i2c::class_of<::System::Xml::XmlUrlResolver*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUrlResolver.GetEntityAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (::System::Xml::XmlUrlResolver::*)(::System::Uri*, ::StringW, ::System::Type*)>(
    &::System::Xml::XmlUrlResolver::GetEntityAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x62e775c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver*>(), { ::i2c::class_of<::System::Xml::XmlUrlResolver*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::ICredentials*& System::Xml::XmlUrlResolver::__cordl_internal_get__credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr ::System::Net::ICredentials* const& System::Xml::XmlUrlResolver::__cordl_internal_get__credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr void System::Xml::XmlUrlResolver::__cordl_internal_set__credentials(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____credentials = value;
}
constexpr ::System::Net::IWebProxy*& System::Xml::XmlUrlResolver::__cordl_internal_get__proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxy;
}
constexpr ::System::Net::IWebProxy* const& System::Xml::XmlUrlResolver::__cordl_internal_get__proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxy;
}
constexpr void System::Xml::XmlUrlResolver::__cordl_internal_set__proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proxy = value;
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Xml::XmlUrlResolver::__cordl_internal_get__cachePolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachePolicy;
}
constexpr ::System::Net::Cache::RequestCachePolicy* const& System::Xml::XmlUrlResolver::__cordl_internal_get__cachePolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachePolicy;
}
constexpr void System::Xml::XmlUrlResolver::__cordl_internal_set__cachePolicy(::System::Net::Cache::RequestCachePolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachePolicy = value;
}
inline void System::Xml::XmlUrlResolver::setStaticF_s_DownloadManager(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_DownloadManager", ::System::Xml::XmlUrlResolver*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Xml::XmlUrlResolver::getStaticF_s_DownloadManager() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_DownloadManager", ::System::Xml::XmlUrlResolver*>();
}
inline ::System::Xml::XmlDownloadManager* System::Xml::XmlUrlResolver::get_DownloadManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver*>(), { "get_DownloadManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDownloadManager*>(nullptr, ___internal_method);
}
inline void System::Xml::XmlUrlResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUrlResolver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlUrlResolver::GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUrlResolver*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, absoluteUri, role, ofObjectToReturn);
}
inline ::System::Uri* System::Xml::XmlUrlResolver::ResolveUri(::System::Uri* baseUri, ::StringW relativeUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUrlResolver*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, baseUri, relativeUri);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* System::Xml::XmlUrlResolver::GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUrlResolver*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, absoluteUri, role, ofObjectToReturn);
}
inline ::System::Xml::XmlUrlResolver* System::Xml::XmlUrlResolver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlUrlResolver*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlUrlResolver::XmlUrlResolver() {}
