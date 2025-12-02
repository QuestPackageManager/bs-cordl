#pragma once
// IWYU pragma private; include "Mono/Net/Security/ChainValidationHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ChainValidationHelper)
namespace Mono::Net::Security {
class ChainValidationHelper___c__DisplayClass11_0;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace Mono::Security::Interface {
class ICertificateValidator;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Security::Interface {
class ValidationResult;
}
namespace System::Net::Security {
class LocalCertSelectionCallback;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class WeakReference_1;
}
// Forward declare root types
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace Mono::Net::Security {
class ChainValidationHelper___c__DisplayClass11_0;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::ChainValidationHelper);
MARK_REF_PTR_T(::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0);
// Dependencies System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.ChainValidationHelper/<>c__DisplayClass11_0
class CORDL_TYPE ChainValidationHelper___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field settings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::Mono::Security::Interface::MonoTlsSettings* settings;

  static inline ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0* New_ctor();

  /// @brief Method <GetValidationCallback>b__0, addr 0x5dbd04c, size 0x168, virtual false, abstract: false, final false
  inline bool _GetValidationCallback_b__0(::System::Object* s, ::System::Security::Cryptography::X509Certificates::X509Certificate* c,
                                          ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::System::Net::Security::SslPolicyErrors e);

  constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get_settings() const;

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set_settings(::Mono::Security::Interface::MonoTlsSettings* value);

  /// @brief Method .ctor, addr 0x5dbc940, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChainValidationHelper___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChainValidationHelper___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChainValidationHelper___c__DisplayClass11_0(ChainValidationHelper___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChainValidationHelper___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChainValidationHelper___c__DisplayClass11_0(ChainValidationHelper___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10991 };

  /// @brief Field settings, offset: 0x10, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsSettings* ___settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0, ___settings) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.ChainValidationHelper
class CORDL_TYPE ChainValidationHelper : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0;

  __declspec(property(get = get_Settings)) ::Mono::Security::Interface::MonoTlsSettings* Settings;

  /// @brief Field certSelectionCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_certSelectionCallback, put = __cordl_internal_set_certSelectionCallback)) ::System::Net::Security::LocalCertSelectionCallback* certSelectionCallback;

  /// @brief Field certValidationCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certValidationCallback, put = __cordl_internal_set_certValidationCallback)) ::System::Net::ServerCertValidationCallback* certValidationCallback;

  /// @brief Field owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner)) ::System::WeakReference_1<::System::Net::Security::SslStream*>* owner;

  /// @brief Field provider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_provider, put = __cordl_internal_set_provider)) ::Mono::Net::Security::MobileTlsProvider* provider;

  /// @brief Field request, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::System::Net::HttpWebRequest* request;

  /// @brief Field settings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::Mono::Security::Interface::MonoTlsSettings* settings;

  /// @brief Field tlsStream, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsStream, put = __cordl_internal_set_tlsStream)) ::Mono::Net::Security::MonoTlsStream* tlsStream;

  /// @brief Convert operator to "::Mono::Security::Interface::ICertificateValidator"
  constexpr operator ::Mono::Security::Interface::ICertificateValidator*() noexcept;

  /// @brief Method Create, addr 0x5dbc5f8, size 0x90, virtual false, abstract: false, final false
  static inline ::Mono::Net::Security::ChainValidationHelper* Create(::Mono::Net::Security::MobileTlsProvider* provider, ::ByRef<::Mono::Security::Interface::MonoTlsSettings*> settings,
                                                                     ::Mono::Net::Security::MonoTlsStream* stream);

  /// @brief Method DefaultSelectionCallback, addr 0x5dbc944, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
  DefaultSelectionCallback(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                           ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  /// @brief Method GetInternalValidator, addr 0x5dbc280, size 0xdc, virtual false, abstract: false, final false
  static inline ::Mono::Net::Security::ChainValidationHelper* GetInternalValidator(::System::Net::Security::SslStream* owner, ::Mono::Net::Security::MobileTlsProvider* provider,
                                                                                   ::Mono::Security::Interface::MonoTlsSettings* settings);

  /// @brief Method GetValidationCallback, addr 0x5dbc7a0, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Net::ServerCertValidationCallback* GetValidationCallback(::Mono::Security::Interface::MonoTlsSettings* settings);

  /// @brief Method InvokeCallback, addr 0x5dbcf94, size 0xb0, virtual false, abstract: false, final false
  inline bool InvokeCallback(::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                             ::System::Net::Security::SslPolicyErrors errors);

  static inline ::Mono::Net::Security::ChainValidationHelper* New_ctor(::System::Net::Security::SslStream* owner, ::Mono::Net::Security::MobileTlsProvider* provider,
                                                                       ::Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings, ::Mono::Net::Security::MonoTlsStream* stream);

  /// @brief Method SelectClientCertificate, addr 0x5dbc998, size 0x48, virtual true, abstract: false, final true
  inline bool SelectClientCertificate(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                      ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers,
                                      ::ByRef<::System::Security::Cryptography::X509Certificates::X509Certificate*> clientCertificate);

  /// @brief Method ValidateCertificate, addr 0x5dbc9e0, size 0xd4, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::ValidationResult* ValidateCertificate(::StringW host, bool serverMode, ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                            ::System::Security::Cryptography::X509Certificates::X509Chain* chain);

  /// @brief Method ValidateChain, addr 0x5dbcb94, size 0x400, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::ValidationResult* ValidateChain(::StringW host, bool server, ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                      ::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*> chain,
                                                                      ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs,
                                                                      ::System::Net::Security::SslPolicyErrors errors);

  /// @brief Method ValidateChain, addr 0x5dbcab4, size 0xe0, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::ValidationResult* ValidateChain(::StringW host, bool server, ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                      ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                      ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs,
                                                                      ::System::Net::Security::SslPolicyErrors errors);

  constexpr ::System::Net::Security::LocalCertSelectionCallback* const& __cordl_internal_get_certSelectionCallback() const;

  constexpr ::System::Net::Security::LocalCertSelectionCallback*& __cordl_internal_get_certSelectionCallback();

  constexpr ::System::Net::ServerCertValidationCallback* const& __cordl_internal_get_certValidationCallback() const;

  constexpr ::System::Net::ServerCertValidationCallback*& __cordl_internal_get_certValidationCallback();

  constexpr ::System::WeakReference_1<::System::Net::Security::SslStream*>* const& __cordl_internal_get_owner() const;

  constexpr ::System::WeakReference_1<::System::Net::Security::SslStream*>*& __cordl_internal_get_owner();

  constexpr ::Mono::Net::Security::MobileTlsProvider* const& __cordl_internal_get_provider() const;

  constexpr ::Mono::Net::Security::MobileTlsProvider*& __cordl_internal_get_provider();

  constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get_request() const;

  constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get_request();

  constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get_settings() const;

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get_settings();

  constexpr ::Mono::Net::Security::MonoTlsStream* const& __cordl_internal_get_tlsStream() const;

  constexpr ::Mono::Net::Security::MonoTlsStream*& __cordl_internal_get_tlsStream();

  constexpr void __cordl_internal_set_certSelectionCallback(::System::Net::Security::LocalCertSelectionCallback* value);

  constexpr void __cordl_internal_set_certValidationCallback(::System::Net::ServerCertValidationCallback* value);

  constexpr void __cordl_internal_set_owner(::System::WeakReference_1<::System::Net::Security::SslStream*>* value);

  constexpr void __cordl_internal_set_provider(::Mono::Net::Security::MobileTlsProvider* value);

  constexpr void __cordl_internal_set_request(::System::Net::HttpWebRequest* value);

  constexpr void __cordl_internal_set_settings(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr void __cordl_internal_set_tlsStream(::Mono::Net::Security::MonoTlsStream* value);

  /// @brief Method .ctor, addr 0x5dbc35c, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Security::SslStream* owner, ::Mono::Net::Security::MobileTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings,
                    ::Mono::Net::Security::MonoTlsStream* stream);

  /// @brief Method get_Settings, addr 0x5dbc990, size 0x8, virtual true, abstract: false, final true
  inline ::Mono::Security::Interface::MonoTlsSettings* get_Settings();

  /// @brief Convert to "::Mono::Security::Interface::ICertificateValidator"
  constexpr ::Mono::Security::Interface::ICertificateValidator* i___Mono__Security__Interface__ICertificateValidator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChainValidationHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChainValidationHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChainValidationHelper(ChainValidationHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChainValidationHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChainValidationHelper(ChainValidationHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10992 };

  /// @brief Field owner, offset: 0x10, size: 0x8, def value: None
  ::System::WeakReference_1<::System::Net::Security::SslStream*>* ___owner;

  /// @brief Field settings, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsSettings* ___settings;

  /// @brief Field provider, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::MobileTlsProvider* ___provider;

  /// @brief Field certValidationCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Net::ServerCertValidationCallback* ___certValidationCallback;

  /// @brief Field certSelectionCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Security::LocalCertSelectionCallback* ___certSelectionCallback;

  /// @brief Field tlsStream, offset: 0x38, size: 0x8, def value: None
  ::Mono::Net::Security::MonoTlsStream* ___tlsStream;

  /// @brief Field request, offset: 0x40, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::ChainValidationHelper, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::ChainValidationHelper, ___settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::ChainValidationHelper, ___provider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::ChainValidationHelper, ___certValidationCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::ChainValidationHelper, ___certSelectionCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::ChainValidationHelper, ___tlsStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::ChainValidationHelper, ___request) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::ChainValidationHelper, 0x48>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::ChainValidationHelper);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::ChainValidationHelper*, "Mono.Net.Security", "ChainValidationHelper");
NEED_NO_BOX(::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*, "Mono.Net.Security", "ChainValidationHelper/<>c__DisplayClass11_0");
