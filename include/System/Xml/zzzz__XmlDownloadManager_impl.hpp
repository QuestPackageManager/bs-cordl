#pragma once
// IWYU pragma private; include "System/Xml/XmlDownloadManager.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDownloadManager___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDownloadManager___c__DisplayClass4_0::*)()>(&::System::Xml::XmlDownloadManager___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62dc9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager___c__DisplayClass4_0._GetStreamAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Xml::XmlDownloadManager___c__DisplayClass4_0::*)()>(
    &::System::Xml::XmlDownloadManager___c__DisplayClass4_0::_GetStreamAsync_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x62dcab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager___c__DisplayClass4_0*>(), { "<GetStreamAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Xml::XmlDownloadManager___c__DisplayClass4_0::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::System::Uri* const& System::Xml::XmlDownloadManager___c__DisplayClass4_0::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Xml::XmlDownloadManager___c__DisplayClass4_0::__cordl_internal_set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uri = value;
}
inline void System::Xml::XmlDownloadManager___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Xml::XmlDownloadManager___c__DisplayClass4_0::_GetStreamAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager___c__DisplayClass4_0*>(), { "<GetStreamAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::Xml::XmlDownloadManager___c__DisplayClass4_0* System::Xml::XmlDownloadManager___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDownloadManager___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDownloadManager___c__DisplayClass4_0::XmlDownloadManager___c__DisplayClass4_0() {}
//  Writing Method size for method: ::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::*)()>(
    &::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x62dcb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62dd348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "credentials", ty: "::System::Net::ICredentials*", modifiers: "", def_value: Some("{}") }, CppParam { name: "proxy", ty: "::System::Net::IWebProxy*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cachePolicy", ty: "::System::Net::Cache::RequestCachePolicy*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::System::Xml::XmlDownloadManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_req_5__2", ty: "::System::Net::WebRequest*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::XmlDownloadManager__GetNonFileStreamAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder, ::System::Uri* uri, ::System::Net::ICredentials* credentials,
    ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy, ::System::Xml::XmlDownloadManager* __4__this, ::System::Net::WebRequest* _req_5__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->uri = uri;
  this->credentials = credentials;
  this->proxy = proxy;
  this->cachePolicy = cachePolicy;
  this->__4__this = __4__this;
  this->_req_5__2 = _req_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5::XmlDownloadManager__GetNonFileStreamAsync_d__5() {}
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.GetStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IO::Stream* (::System::Xml::XmlDownloadManager::*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*)>(
        &::System::Xml::XmlDownloadManager::GetStream)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x62dbf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "GetStream",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::ICredentials*>(),
                                                                                       ::i2c::type_of<::System::Net::IWebProxy*>(), ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.GetNonFileStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IO::Stream* (::System::Xml::XmlDownloadManager::*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*)>(
        &::System::Xml::XmlDownloadManager::GetNonFileStream)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x62dc028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "GetNonFileStream",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::ICredentials*>(),
                                                                                       ::i2c::type_of<::System::Net::IWebProxy*>(), ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDownloadManager::*)(::StringW)>(&::System::Xml::XmlDownloadManager::Remove)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x62dc684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.GetStreamAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (
    ::System::Xml::XmlDownloadManager::*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*)>(
    &::System::Xml::XmlDownloadManager::GetStreamAsync)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x62dc7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "GetStreamAsync",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::ICredentials*>(),
                                                                                       ::i2c::type_of<::System::Net::IWebProxy*>(), ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.GetNonFileStreamAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (
    ::System::Xml::XmlDownloadManager::*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*)>(
    &::System::Xml::XmlDownloadManager::GetNonFileStreamAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x62dc9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "GetNonFileStreamAsync",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::ICredentials*>(),
                                                                                       ::i2c::type_of<::System::Net::IWebProxy*>(), ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDownloadManager::*)()>(&::System::Xml::XmlDownloadManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62dcab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Xml::XmlDownloadManager::__cordl_internal_get_connections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connections;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::XmlDownloadManager::__cordl_internal_get_connections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connections;
}
constexpr void System::Xml::XmlDownloadManager::__cordl_internal_set_connections(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connections = value;
}
inline ::System::IO::Stream* System::Xml::XmlDownloadManager::GetStream(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy,
                                                                        ::System::Net::Cache::RequestCachePolicy* cachePolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "GetStream",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::ICredentials*>(),
                                                                                     ::i2c::type_of<::System::Net::IWebProxy*>(), ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, uri, credentials, proxy, cachePolicy);
}
inline ::System::IO::Stream* System::Xml::XmlDownloadManager::GetNonFileStream(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy,
                                                                               ::System::Net::Cache::RequestCachePolicy* cachePolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "GetNonFileStream",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::ICredentials*>(),
                                                                                     ::i2c::type_of<::System::Net::IWebProxy*>(), ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, uri, credentials, proxy, cachePolicy);
}
inline void System::Xml::XmlDownloadManager::Remove(::StringW host) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>*
System::Xml::XmlDownloadManager::GetStreamAsync(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "GetStreamAsync",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::ICredentials*>(),
                                                                                     ::i2c::type_of<::System::Net::IWebProxy*>(), ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, uri, credentials, proxy, cachePolicy);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Xml::XmlDownloadManager::GetNonFileStreamAsync(::System::Uri* uri, ::System::Net::ICredentials* credentials,
                                                                                                                         ::System::Net::IWebProxy* proxy,
                                                                                                                         ::System::Net::Cache::RequestCachePolicy* cachePolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { "GetNonFileStreamAsync",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::ICredentials*>(),
                                                                                     ::i2c::type_of<::System::Net::IWebProxy*>(), ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, uri, credentials, proxy, cachePolicy);
}
inline void System::Xml::XmlDownloadManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDownloadManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlDownloadManager* System::Xml::XmlDownloadManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDownloadManager*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDownloadManager::XmlDownloadManager() {}
