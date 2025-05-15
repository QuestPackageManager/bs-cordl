#pragma once
// IWYU pragma private; include "System/Net/Http/HttpClientHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__ClientCertificateOption_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpClientHandler)
namespace System::Net::Http {
struct ClientCertificateOption;
}
namespace System::Net::Http {
class HttpClientHandler___c;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http {
class HttpClientHandler;
}
namespace System::Net::Http {
class HttpClientHandler___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpClientHandler);
MARK_REF_PTR_T(::System::Net::Http::HttpClientHandler___c);
// Dependencies System.Object
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpClientHandler/<>c
class CORDL_TYPE HttpClientHandler___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::Http::HttpClientHandler___c* __9;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_1, put = setStaticF___9__23_1)) ::System::Net::Security::LocalCertificateSelectionCallback* __9__23_1;

  static inline ::System::Net::Http::HttpClientHandler___c* New_ctor();

  /// @brief Method .ctor, addr 0x42136e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_ClientCertificateOptions>b__23_1, addr 0x42136ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
  _set_ClientCertificateOptions_b__23_1(::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                        ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  static inline ::System::Net::Http::HttpClientHandler___c* getStaticF___9();

  static inline ::System::Net::Security::LocalCertificateSelectionCallback* getStaticF___9__23_1();

  static inline void setStaticF___9(::System::Net::Http::HttpClientHandler___c* value);

  static inline void setStaticF___9__23_1(::System::Net::Security::LocalCertificateSelectionCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClientHandler___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClientHandler___c(HttpClientHandler___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClientHandler___c(HttpClientHandler___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClientHandler___c, 0x10>, "Size mismatch!");

} // namespace System::Net::Http
// Dependencies System.Net.Http.ClientCertificateOption, System.Net.Http.HttpMessageHandler
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpClientHandler
class CORDL_TYPE HttpClientHandler : public ::System::Net::Http::HttpMessageHandler {
public:
  // Declarations
  using __c = ::System::Net::Http::HttpClientHandler___c;

  __declspec(property(get = get_ClientCertificateOptions, put = set_ClientCertificateOptions)) ::System::Net::Http::ClientCertificateOption ClientCertificateOptions;

  __declspec(property(get = get_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  /// @brief Field _clientCertificateOptions, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__clientCertificateOptions,
                      put = __cordl_internal_set__clientCertificateOptions)) ::System::Net::Http::ClientCertificateOption _clientCertificateOptions;

  /// @brief Field _delegatingHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__delegatingHandler, put = __cordl_internal_set__delegatingHandler)) ::System::Net::Http::IMonoHttpClientHandler* _delegatingHandler;

  /// @brief Method CreateDefaultHandler, addr 0x4212c84, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Net::Http::IMonoHttpClientHandler* CreateDefaultHandler();

  /// @brief Method Dispose, addr 0x4213178, size 0xb4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Net::Http::HttpClientHandler* New_ctor();

  static inline ::System::Net::Http::HttpClientHandler* New_ctor(::System::Net::Http::IMonoHttpClientHandler* handler);

  /// @brief Method SendAsync, addr 0x42135b8, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetWebRequestTimeout, addr 0x421350c, size 0xac, virtual false, abstract: false, final false
  inline void SetWebRequestTimeout(::System::TimeSpan timeout);

  /// @brief Method ThrowForModifiedManagedSslOptionsIfStarted, addr 0x4213230, size 0x104, virtual false, abstract: false, final false
  inline void ThrowForModifiedManagedSslOptionsIfStarted();

  constexpr ::System::Net::Http::ClientCertificateOption const& __cordl_internal_get__clientCertificateOptions() const;

  constexpr ::System::Net::Http::ClientCertificateOption& __cordl_internal_get__clientCertificateOptions();

  constexpr ::System::Net::Http::IMonoHttpClientHandler* const& __cordl_internal_get__delegatingHandler() const;

  constexpr ::System::Net::Http::IMonoHttpClientHandler*& __cordl_internal_get__delegatingHandler();

  constexpr void __cordl_internal_set__clientCertificateOptions(::System::Net::Http::ClientCertificateOption value);

  constexpr void __cordl_internal_set__delegatingHandler(::System::Net::Http::IMonoHttpClientHandler* value);

  /// @brief Method .ctor, addr 0x4212e84, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4212ebc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::IMonoHttpClientHandler* handler);

  /// @brief Method <set_ClientCertificateOptions>b__23_0, addr 0x4213674, size 0x14, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
  _set_ClientCertificateOptions_b__23_0(::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                        ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  /// @brief Method get_ClientCertificateOptions, addr 0x4213334, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::ClientCertificateOption get_ClientCertificateOptions();

  /// @brief Method get_ClientCertificates, addr 0x421333c, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method set_ClientCertificateOptions, addr 0x4212ef4, size 0x284, virtual false, abstract: false, final false
  inline void set_ClientCertificateOptions(::System::Net::Http::ClientCertificateOption value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClientHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClientHandler(HttpClientHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClientHandler(HttpClientHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16680 };

  /// @brief Field _delegatingHandler, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::IMonoHttpClientHandler* ____delegatingHandler;

  /// @brief Field _clientCertificateOptions, offset: 0x18, size: 0x4, def value: None
  ::System::Net::Http::ClientCertificateOption ____clientCertificateOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpClientHandler, ____delegatingHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClientHandler, ____clientCertificateOptions) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClientHandler, 0x20>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpClientHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClientHandler*, "System.Net.Http", "HttpClientHandler");
NEED_NO_BOX(::System::Net::Http::HttpClientHandler___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClientHandler___c*, "System.Net.Http", "HttpClientHandler/<>c");
