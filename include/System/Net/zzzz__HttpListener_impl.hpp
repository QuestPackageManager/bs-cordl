#pragma once
#include "System/Net/zzzz__AuthenticationSchemes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemeSelector_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/zzzz__HttpListenerPrefixCollection_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__ServiceNameStore_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ExtendedProtectionPolicy_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListener.LoadCertificateAndKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::HttpListener::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::HttpListener::LoadCertificateAndKey)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x29c09f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "LoadCertificateAndKey", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.CreateSslStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::SslStream* (
    ::System::Net::HttpListener::*)(::System::IO::Stream*, bool, ::System::Net::Security::RemoteCertificateValidationCallback*)>(&::System::Net::HttpListener::CreateSslStream)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x29c4ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "CreateSslStream", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::RemoteCertificateValidationCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x29c7d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_AuthenticationSchemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::AuthenticationSchemes (::System::Net::HttpListener::*)()>(
    &::System::Net::HttpListener::get_AuthenticationSchemes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c7f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_AuthenticationSchemes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_AuthenticationSchemeSelectorDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::AuthenticationSchemeSelector* (::System::Net::HttpListener::*)()>(
    &::System::Net::HttpListener::get_AuthenticationSchemeSelectorDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c7f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(),
                                                                               "get_AuthenticationSchemeSelectorDelegate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_IgnoreWriteExceptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_IgnoreWriteExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c7f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_IgnoreWriteExceptions",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_IsListening
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_IsListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c7f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_IsListening",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_Prefixes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerPrefixCollection* (::System::Net::HttpListener::*)()>(
    &::System::Net::HttpListener::get_Prefixes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29c3c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_Prefixes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_Realm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_Realm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c7ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_Realm",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29c8004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Close",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)(bool)>(&::System::Net::HttpListener::Close)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29c8038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Close", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)(bool)>(&::System::Net::HttpListener::Cleanup)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x29c80ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Cleanup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.BeginGetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::HttpListener::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::HttpListener::BeginGetContext)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x29c8b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "BeginGetContext", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.EndGetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext* (::System::Net::HttpListener::*)(::System::IAsyncResult*)>(
    &::System::Net::HttpListener::EndGetContext)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x29c8eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "EndGetContext", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.SelectAuthenticationScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::AuthenticationSchemes (::System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(
    &::System::Net::HttpListener::SelectAuthenticationScheme)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29c917c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "SelectAuthenticationScheme", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.GetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::GetContext)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x29c92d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "GetContext",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29c9418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::Stop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29c9488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Stop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29c94a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.CheckDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::CheckDisposed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29c7f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "CheckDisposed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.GetContextFromQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext* (::System::Net::HttpListener::*)()>(
    &::System::Net::HttpListener::GetContextFromQueue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29c8df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "GetContextFromQueue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.RegisterContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(
    &::System::Net::HttpListener::RegisterContext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x29c6354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "RegisterContext", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.UnregisterContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(
    &::System::Net::HttpListener::UnregisterContext)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x29c1d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "UnregisterContext", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.AddConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpConnection*)>(&::System::Net::HttpListener::AddConnection)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29c632c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "AddConnection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.RemoveConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpConnection*)>(
    &::System::Net::HttpListener::RemoveConnection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29c66c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "RemoveConnection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpConnection*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::HttpListener::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Mono::Security::Interface::MonoTlsProvider*& System::Net::HttpListener::__get_tlsProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsProvider;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsProvider*> const& System::Net::HttpListener::__get_tlsProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsProvider;
}
constexpr void System::Net::HttpListener::__set_tlsProvider(::Mono::Security::Interface::MonoTlsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& System::Net::HttpListener::__get_tlsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsSettings;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> const& System::Net::HttpListener::__get_tlsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsSettings;
}
constexpr void System::Net::HttpListener::__set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::HttpListener::__get_certificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& System::Net::HttpListener::__get_certificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr void System::Net::HttpListener::__set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::AuthenticationSchemes& System::Net::HttpListener::__get_auth_schemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auth_schemes;
}
constexpr ::System::Net::AuthenticationSchemes const& System::Net::HttpListener::__get_auth_schemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auth_schemes;
}
constexpr void System::Net::HttpListener::__set_auth_schemes(::System::Net::AuthenticationSchemes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___auth_schemes = value;
}
constexpr ::System::Net::HttpListenerPrefixCollection*& System::Net::HttpListener::__get_prefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerPrefixCollection*> const& System::Net::HttpListener::__get_prefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefixes;
}
constexpr void System::Net::HttpListener::__set_prefixes(::System::Net::HttpListenerPrefixCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefixes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::AuthenticationSchemeSelector*& System::Net::HttpListener::__get_auth_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auth_selector;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::AuthenticationSchemeSelector*> const& System::Net::HttpListener::__get_auth_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auth_selector;
}
constexpr void System::Net::HttpListener::__set_auth_selector(::System::Net::AuthenticationSchemeSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___auth_selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HttpListener::__get_realm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realm;
}
constexpr ::StringW const& System::Net::HttpListener::__get_realm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realm;
}
constexpr void System::Net::HttpListener::__set_realm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___realm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpListener::__get_ignore_write_exceptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignore_write_exceptions;
}
constexpr bool const& System::Net::HttpListener::__get_ignore_write_exceptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignore_write_exceptions;
}
constexpr void System::Net::HttpListener::__set_ignore_write_exceptions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignore_write_exceptions = value;
}
constexpr bool& System::Net::HttpListener::__get_listening() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listening;
}
constexpr bool const& System::Net::HttpListener::__get_listening() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listening;
}
constexpr void System::Net::HttpListener::__set_listening(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listening = value;
}
constexpr bool& System::Net::HttpListener::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::HttpListener::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::HttpListener::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Object*& System::Net::HttpListener::__get__internalLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::HttpListener::__get__internalLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalLock;
}
constexpr void System::Net::HttpListener::__set__internalLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____internalLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Net::HttpListener::__get_registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Net::HttpListener::__get_registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr void System::Net::HttpListener::__set_registry(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Net::HttpListener::__get_ctx_queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx_queue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Net::HttpListener::__get_ctx_queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx_queue;
}
constexpr void System::Net::HttpListener::__set_ctx_queue(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ctx_queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Net::HttpListener::__get_wait_queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wait_queue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Net::HttpListener::__get_wait_queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wait_queue;
}
constexpr void System::Net::HttpListener::__set_wait_queue(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wait_queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Net::HttpListener::__get_connections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connections;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Net::HttpListener::__get_connections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connections;
}
constexpr void System::Net::HttpListener::__set_connections(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ServiceNameStore*& System::Net::HttpListener::__get_defaultServiceNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultServiceNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ServiceNameStore*> const& System::Net::HttpListener::__get_defaultServiceNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultServiceNames;
}
constexpr void System::Net::HttpListener::__set_defaultServiceNames(::System::Net::ServiceNameStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultServiceNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*& System::Net::HttpListener::__get_extendedProtectionPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedProtectionPolicy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*> const&
System::Net::HttpListener::__get_extendedProtectionPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedProtectionPolicy;
}
constexpr void System::Net::HttpListener::__set_extendedProtectionPolicy(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extendedProtectionPolicy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::HttpListener::LoadCertificateAndKey(::System::Net::IPAddress* addr, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "LoadCertificateAndKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method, addr, port);
}
inline ::System::Net::Security::SslStream* System::Net::HttpListener::CreateSslStream(::System::IO::Stream* innerStream, bool ownsStream,
                                                                                      ::System::Net::Security::RemoteCertificateValidationCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "CreateSslStream", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::RemoteCertificateValidationCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslStream*, false>(this, ___internal_method, innerStream, ownsStream, callback);
}
inline ::System::Net::HttpListener* System::Net::HttpListener::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpListener*>());
}
inline void System::Net::HttpListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::AuthenticationSchemes System::Net::HttpListener::get_AuthenticationSchemes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_AuthenticationSchemes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::AuthenticationSchemes, false>(this, ___internal_method);
}
inline ::System::Net::AuthenticationSchemeSelector* System::Net::HttpListener::get_AuthenticationSchemeSelectorDelegate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(),
                                                                             "get_AuthenticationSchemeSelectorDelegate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::AuthenticationSchemeSelector*, false>(this, ___internal_method);
}
inline bool System::Net::HttpListener::get_IgnoreWriteExceptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_IgnoreWriteExceptions",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::HttpListener::get_IsListening() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_IsListening",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::HttpListenerPrefixCollection* System::Net::HttpListener::get_Prefixes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_Prefixes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerPrefixCollection*, false>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListener::get_Realm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "get_Realm",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::HttpListener::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpListener::Close(bool force) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Close", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force);
}
inline void System::Net::HttpListener::Cleanup(bool close_existing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Cleanup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, close_existing);
}
inline ::System::IAsyncResult* System::Net::HttpListener::BeginGetContext(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "BeginGetContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::Net::HttpListenerContext* System::Net::HttpListener::EndGetContext(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "EndGetContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*, false>(this, ___internal_method, asyncResult);
}
inline ::System::Net::AuthenticationSchemes System::Net::HttpListener::SelectAuthenticationScheme(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "SelectAuthenticationScheme", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::AuthenticationSchemes, false>(this, ___internal_method, context);
}
inline ::System::Net::HttpListenerContext* System::Net::HttpListener::GetContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "GetContext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*, false>(this, ___internal_method);
}
inline void System::Net::HttpListener::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpListener::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "Stop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpListener::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "System.IDisposable.Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpListener::CheckDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "CheckDisposed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::HttpListenerContext* System::Net::HttpListener::GetContextFromQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "GetContextFromQueue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*, false>(this, ___internal_method);
}
inline void System::Net::HttpListener::RegisterContext(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "RegisterContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void System::Net::HttpListener::UnregisterContext(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "UnregisterContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void System::Net::HttpListener::AddConnection(::System::Net::HttpConnection* cnc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "AddConnection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cnc);
}
inline void System::Net::HttpListener::RemoveConnection(::System::Net::HttpConnection* cnc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListener*>::get(), "RemoveConnection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cnc);
}
// Ctor Parameters []
constexpr ::System::Net::HttpListener::HttpListener() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
