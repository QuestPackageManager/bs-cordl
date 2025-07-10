#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoTlsSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTlsSettings)
namespace Mono::Security::Interface {
struct CipherSuiteCode;
}
namespace Mono::Security::Interface {
class ICertificateValidator;
}
namespace Mono::Security::Interface {
class MonoLocalCertificateSelectionCallback;
}
namespace Mono::Security::Interface {
class MonoRemoteCertificateValidationCallback;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::MonoTlsSettings);
// Dependencies Mono.Security.Interface.TlsProtocols, System.DateTime, System.Nullable`1<T>, System.Object
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: Mono.Security.Interface.MonoTlsSettings
class CORDL_TYPE MonoTlsSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CallbackNeedsCertificateChain)) bool CallbackNeedsCertificateChain;

  __declspec(property(get = get_CertificateSearchPaths, put = set_CertificateSearchPaths)) ::ArrayW<::StringW, ::Array<::StringW>*> CertificateSearchPaths;

  __declspec(property(get = get_CertificateValidationTime, put = set_CertificateValidationTime)) ::System::Nullable_1<::System::DateTime> CertificateValidationTime;

  __declspec(property(get = get_CertificateValidator)) ::Mono::Security::Interface::ICertificateValidator* CertificateValidator;

  __declspec(property(get = get_ClientCertificateIssuers, put = set_ClientCertificateIssuers)) ::ArrayW<::StringW, ::Array<::StringW>*> ClientCertificateIssuers;

  __declspec(property(get = get_ClientCertificateSelectionCallback,
                      put = set_ClientCertificateSelectionCallback)) ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* ClientCertificateSelectionCallback;

  __declspec(property(get = get_DisallowUnauthenticatedCertificateRequest, put = set_DisallowUnauthenticatedCertificateRequest)) bool DisallowUnauthenticatedCertificateRequest;

  __declspec(property(get = get_EnabledCiphers, put = set_EnabledCiphers)) ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>
      EnabledCiphers;

  __declspec(property(get = get_EnabledProtocols, put = set_EnabledProtocols)) ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> EnabledProtocols;

  __declspec(property(get = get_RemoteCertificateValidationCallback,
                      put = set_RemoteCertificateValidationCallback)) ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* RemoteCertificateValidationCallback;

  __declspec(property(get = get_SendCloseNotify, put = set_SendCloseNotify)) bool SendCloseNotify;

  __declspec(property(get = get_TrustAnchors, put = set_TrustAnchors)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* TrustAnchors;

  __declspec(property(get = get_UseServicePointManagerCallback, put = set_UseServicePointManagerCallback)) ::System::Nullable_1<bool> UseServicePointManagerCallback;

  __declspec(property(get = get_UserSettings, put = set_UserSettings)) ::System::Object* UserSettings;

  /// @brief Field <CertificateSearchPaths>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__CertificateSearchPaths_k__BackingField, put = __cordl_internal_set__CertificateSearchPaths_k__BackingField)) ::ArrayW<::StringW, ::Array<::StringW>*>
      _CertificateSearchPaths_k__BackingField;

  /// @brief Field <CertificateValidationTime>k__BackingField, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__CertificateValidationTime_k__BackingField,
                      put = __cordl_internal_set__CertificateValidationTime_k__BackingField)) ::System::Nullable_1<::System::DateTime>
      _CertificateValidationTime_k__BackingField;

  /// @brief Field <ClientCertificateIssuers>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientCertificateIssuers_k__BackingField,
                      put = __cordl_internal_set__ClientCertificateIssuers_k__BackingField)) ::ArrayW<::StringW, ::Array<::StringW>*>
      _ClientCertificateIssuers_k__BackingField;

  /// @brief Field <ClientCertificateSelectionCallback>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientCertificateSelectionCallback_k__BackingField,
                      put = __cordl_internal_set__ClientCertificateSelectionCallback_k__BackingField)) ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*
      _ClientCertificateSelectionCallback_k__BackingField;

  /// @brief Field <DisallowUnauthenticatedCertificateRequest>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__DisallowUnauthenticatedCertificateRequest_k__BackingField,
                      put = __cordl_internal_set__DisallowUnauthenticatedCertificateRequest_k__BackingField)) bool _DisallowUnauthenticatedCertificateRequest_k__BackingField;

  /// @brief Field <EnabledCiphers>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__EnabledCiphers_k__BackingField,
                      put = __cordl_internal_set__EnabledCiphers_k__BackingField)) ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>
      _EnabledCiphers_k__BackingField;

  /// @brief Field <EnabledProtocols>k__BackingField, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get__EnabledProtocols_k__BackingField,
                      put = __cordl_internal_set__EnabledProtocols_k__BackingField)) ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>
      _EnabledProtocols_k__BackingField;

  /// @brief Field <RemoteCertificateValidationCallback>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField,
                      put = __cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField)) ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*
      _RemoteCertificateValidationCallback_k__BackingField;

  /// @brief Field <SendCloseNotify>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__SendCloseNotify_k__BackingField, put = __cordl_internal_set__SendCloseNotify_k__BackingField)) bool _SendCloseNotify_k__BackingField;

  /// @brief Field <TrustAnchors>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__TrustAnchors_k__BackingField,
                      put = __cordl_internal_set__TrustAnchors_k__BackingField)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _TrustAnchors_k__BackingField;

  /// @brief Field <UserSettings>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__UserSettings_k__BackingField, put = __cordl_internal_set__UserSettings_k__BackingField)) ::System::Object* _UserSettings_k__BackingField;

  /// @brief Field callbackNeedsChain, offset 0x76, size 0x1
  __declspec(property(get = __cordl_internal_get_callbackNeedsChain, put = __cordl_internal_set_callbackNeedsChain)) bool callbackNeedsChain;

  /// @brief Field certificateValidator, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateValidator, put = __cordl_internal_set_certificateValidator)) ::Mono::Security::Interface::ICertificateValidator* certificateValidator;

  /// @brief Field checkCertName, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCertName, put = __cordl_internal_set_checkCertName)) bool checkCertName;

  /// @brief Field checkCertRevocationStatus, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCertRevocationStatus, put = __cordl_internal_set_checkCertRevocationStatus)) bool checkCertRevocationStatus;

  /// @brief Field cloned, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_cloned, put = __cordl_internal_set_cloned)) bool cloned;

  /// @brief Field defaultSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultSettings, put = setStaticF_defaultSettings)) ::Mono::Security::Interface::MonoTlsSettings* defaultSettings;

  /// @brief Field skipSystemValidators, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get_skipSystemValidators, put = __cordl_internal_set_skipSystemValidators)) bool skipSystemValidators;

  /// @brief Field useServicePointManagerCallback, offset 0x73, size 0x2
  __declspec(property(get = __cordl_internal_get_useServicePointManagerCallback, put = __cordl_internal_set_useServicePointManagerCallback)) ::System::Nullable_1<bool> useServicePointManagerCallback;

  /// @brief Method Clone, addr 0x3c4627c, size 0x58, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoTlsSettings* Clone();

  /// @brief Method CloneWithValidator, addr 0x3c462dc, size 0x80, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(::Mono::Security::Interface::ICertificateValidator* validator);

  /// @brief Method CopyDefaultSettings, addr 0x3c46264, size 0x18, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings();

  static inline ::Mono::Security::Interface::MonoTlsSettings* New_ctor();

  static inline ::Mono::Security::Interface::MonoTlsSettings* New_ctor(::Mono::Security::Interface::MonoTlsSettings* other);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__CertificateSearchPaths_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__CertificateSearchPaths_k__BackingField();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__CertificateValidationTime_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__CertificateValidationTime_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__ClientCertificateIssuers_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__ClientCertificateIssuers_k__BackingField();

  constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* const& __cordl_internal_get__ClientCertificateSelectionCallback_k__BackingField() const;

  constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*& __cordl_internal_get__ClientCertificateSelectionCallback_k__BackingField();

  constexpr bool const& __cordl_internal_get__DisallowUnauthenticatedCertificateRequest_k__BackingField() const;

  constexpr bool& __cordl_internal_get__DisallowUnauthenticatedCertificateRequest_k__BackingField();

  constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> const& __cordl_internal_get__EnabledCiphers_k__BackingField() const;

  constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>& __cordl_internal_get__EnabledCiphers_k__BackingField();

  constexpr ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> const& __cordl_internal_get__EnabledProtocols_k__BackingField() const;

  constexpr ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>& __cordl_internal_get__EnabledProtocols_k__BackingField();

  constexpr ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* const& __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() const;

  constexpr ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*& __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField();

  constexpr bool const& __cordl_internal_get__SendCloseNotify_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SendCloseNotify_k__BackingField();

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get__TrustAnchors_k__BackingField() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__TrustAnchors_k__BackingField();

  constexpr ::System::Object* const& __cordl_internal_get__UserSettings_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__UserSettings_k__BackingField();

  constexpr bool const& __cordl_internal_get_callbackNeedsChain() const;

  constexpr bool& __cordl_internal_get_callbackNeedsChain();

  constexpr ::Mono::Security::Interface::ICertificateValidator* const& __cordl_internal_get_certificateValidator() const;

  constexpr ::Mono::Security::Interface::ICertificateValidator*& __cordl_internal_get_certificateValidator();

  constexpr bool const& __cordl_internal_get_checkCertName() const;

  constexpr bool& __cordl_internal_get_checkCertName();

  constexpr bool const& __cordl_internal_get_checkCertRevocationStatus() const;

  constexpr bool& __cordl_internal_get_checkCertRevocationStatus();

  constexpr bool const& __cordl_internal_get_cloned() const;

  constexpr bool& __cordl_internal_get_cloned();

  constexpr bool const& __cordl_internal_get_skipSystemValidators() const;

  constexpr bool& __cordl_internal_get_skipSystemValidators();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_useServicePointManagerCallback() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_useServicePointManagerCallback();

  constexpr void __cordl_internal_set__CertificateSearchPaths_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__CertificateValidationTime_k__BackingField(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__ClientCertificateIssuers_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__ClientCertificateSelectionCallback_k__BackingField(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);

  constexpr void __cordl_internal_set__DisallowUnauthenticatedCertificateRequest_k__BackingField(bool value);

  constexpr void __cordl_internal_set__EnabledCiphers_k__BackingField(::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> value);

  constexpr void __cordl_internal_set__EnabledProtocols_k__BackingField(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value);

  constexpr void __cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);

  constexpr void __cordl_internal_set__SendCloseNotify_k__BackingField(bool value);

  constexpr void __cordl_internal_set__TrustAnchors_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr void __cordl_internal_set__UserSettings_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set_callbackNeedsChain(bool value);

  constexpr void __cordl_internal_set_certificateValidator(::Mono::Security::Interface::ICertificateValidator* value);

  constexpr void __cordl_internal_set_checkCertName(bool value);

  constexpr void __cordl_internal_set_checkCertRevocationStatus(bool value);

  constexpr void __cordl_internal_set_cloned(bool value);

  constexpr void __cordl_internal_set_skipSystemValidators(bool value);

  constexpr void __cordl_internal_set_useServicePointManagerCallback(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x3c461c4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c4635c, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::Interface::MonoTlsSettings* other);

  static inline ::Mono::Security::Interface::MonoTlsSettings* getStaticF_defaultSettings();

  /// @brief Method get_CallbackNeedsCertificateChain, addr 0x3c46120, size 0x8, virtual false, abstract: false, final false
  inline bool get_CallbackNeedsCertificateChain();

  /// @brief Method get_CertificateSearchPaths, addr 0x3c4615c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_CertificateSearchPaths();

  /// @brief Method get_CertificateValidationTime, addr 0x3c46128, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_CertificateValidationTime();

  /// @brief Method get_CertificateValidator, addr 0x3c462d4, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::ICertificateValidator* get_CertificateValidator();

  /// @brief Method get_ClientCertificateIssuers, addr 0x3c46180, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ClientCertificateIssuers();

  /// @brief Method get_ClientCertificateSelectionCallback, addr 0x3c46100, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback();

  /// @brief Method get_DefaultSettings, addr 0x3c461d8, size 0x8c, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings();

  /// @brief Method get_DisallowUnauthenticatedCertificateRequest, addr 0x3c46190, size 0x8, virtual false, abstract: false, final false
  inline bool get_DisallowUnauthenticatedCertificateRequest();

  /// @brief Method get_EnabledCiphers, addr 0x3c461b4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> get_EnabledCiphers();

  /// @brief Method get_EnabledProtocols, addr 0x3c461a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> get_EnabledProtocols();

  /// @brief Method get_RemoteCertificateValidationCallback, addr 0x3c460f0, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback();

  /// @brief Method get_SendCloseNotify, addr 0x3c4616c, size 0x8, virtual false, abstract: false, final false
  inline bool get_SendCloseNotify();

  /// @brief Method get_TrustAnchors, addr 0x3c4613c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors();

  /// @brief Method get_UseServicePointManagerCallback, addr 0x3c46110, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_UseServicePointManagerCallback();

  /// @brief Method get_UserSettings, addr 0x3c4614c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_UserSettings();

  static inline void setStaticF_defaultSettings(::Mono::Security::Interface::MonoTlsSettings* value);

  /// @brief Method set_CertificateSearchPaths, addr 0x3c46164, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificateSearchPaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_CertificateValidationTime, addr 0x3c46134, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificateValidationTime(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method set_ClientCertificateIssuers, addr 0x3c46188, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientCertificateIssuers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_ClientCertificateSelectionCallback, addr 0x3c46108, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientCertificateSelectionCallback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);

  /// @brief Method set_DisallowUnauthenticatedCertificateRequest, addr 0x3c46198, size 0xc, virtual false, abstract: false, final false
  inline void set_DisallowUnauthenticatedCertificateRequest(bool value);

  /// @brief Method set_EnabledCiphers, addr 0x3c461bc, size 0x8, virtual false, abstract: false, final false
  inline void set_EnabledCiphers(::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> value);

  /// @brief Method set_EnabledProtocols, addr 0x3c461ac, size 0x8, virtual false, abstract: false, final false
  inline void set_EnabledProtocols(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value);

  /// @brief Method set_RemoteCertificateValidationCallback, addr 0x3c460f8, size 0x8, virtual false, abstract: false, final false
  inline void set_RemoteCertificateValidationCallback(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);

  /// @brief Method set_SendCloseNotify, addr 0x3c46174, size 0xc, virtual false, abstract: false, final false
  inline void set_SendCloseNotify(bool value);

  /// @brief Method set_TrustAnchors, addr 0x3c46144, size 0x8, virtual false, abstract: false, final false
  inline void set_TrustAnchors(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method set_UseServicePointManagerCallback, addr 0x3c46118, size 0x8, virtual false, abstract: false, final false
  inline void set_UseServicePointManagerCallback(::System::Nullable_1<bool> value);

  /// @brief Method set_UserSettings, addr 0x3c46154, size 0x8, virtual false, abstract: false, final false
  inline void set_UserSettings(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsSettings(MonoTlsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsSettings(MonoTlsSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15964 };

  /// @brief Field <RemoteCertificateValidationCallback>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* ____RemoteCertificateValidationCallback_k__BackingField;

  /// @brief Field <ClientCertificateSelectionCallback>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* ____ClientCertificateSelectionCallback_k__BackingField;

  /// @brief Field <CertificateValidationTime>k__BackingField, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____CertificateValidationTime_k__BackingField;

  /// @brief Field <TrustAnchors>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ____TrustAnchors_k__BackingField;

  /// @brief Field <UserSettings>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____UserSettings_k__BackingField;

  /// @brief Field <CertificateSearchPaths>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____CertificateSearchPaths_k__BackingField;

  /// @brief Field <SendCloseNotify>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____SendCloseNotify_k__BackingField;

  /// @brief Field <ClientCertificateIssuers>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____ClientCertificateIssuers_k__BackingField;

  /// @brief Field <DisallowUnauthenticatedCertificateRequest>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____DisallowUnauthenticatedCertificateRequest_k__BackingField;

  /// @brief Field <EnabledProtocols>k__BackingField, offset: 0x5c, size: 0x8, def value: None
  ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> ____EnabledProtocols_k__BackingField;

  /// @brief Field <EnabledCiphers>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> ____EnabledCiphers_k__BackingField;

  /// @brief Field cloned, offset: 0x70, size: 0x1, def value: None
  bool ___cloned;

  /// @brief Field checkCertName, offset: 0x71, size: 0x1, def value: None
  bool ___checkCertName;

  /// @brief Field checkCertRevocationStatus, offset: 0x72, size: 0x1, def value: None
  bool ___checkCertRevocationStatus;

  /// @brief Field useServicePointManagerCallback, offset: 0x73, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___useServicePointManagerCallback;

  /// @brief Field skipSystemValidators, offset: 0x75, size: 0x1, def value: None
  bool ___skipSystemValidators;

  /// @brief Field callbackNeedsChain, offset: 0x76, size: 0x1, def value: None
  bool ___callbackNeedsChain;

  /// @brief Field certificateValidator, offset: 0x78, size: 0x8, def value: None
  ::Mono::Security::Interface::ICertificateValidator* ___certificateValidator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____RemoteCertificateValidationCallback_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____ClientCertificateSelectionCallback_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____CertificateValidationTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____TrustAnchors_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____UserSettings_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____CertificateSearchPaths_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____SendCloseNotify_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____ClientCertificateIssuers_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____DisallowUnauthenticatedCertificateRequest_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____EnabledProtocols_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ____EnabledCiphers_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ___cloned) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ___checkCertName) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ___checkCertRevocationStatus) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ___useServicePointManagerCallback) == 0x73, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ___skipSystemValidators) == 0x75, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ___callbackNeedsChain) == 0x76, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsSettings, ___certificateValidator) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoTlsSettings, 0x80>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsSettings);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsSettings*, "Mono.Security.Interface", "MonoTlsSettings");
