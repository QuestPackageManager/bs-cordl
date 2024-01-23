#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Mono.Security.Interface::MonoTlsSettings
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(13786)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 105 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 2701 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4760 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13784)) CS Name:
// ::Mono.Security.Interface::MonoTlsSettings*
class CORDL_TYPE MonoTlsSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field <RemoteCertificateValidationCallback>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField, put = __cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField))::Mono::
      Security::Interface::MonoRemoteCertificateValidationCallback* _RemoteCertificateValidationCallback_k__BackingField;

  /// @brief Field <ClientCertificateSelectionCallback>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientCertificateSelectionCallback_k__BackingField, put = __cordl_internal_set__ClientCertificateSelectionCallback_k__BackingField))::Mono::Security::
      Interface::MonoLocalCertificateSelectionCallback* _ClientCertificateSelectionCallback_k__BackingField;

  /// @brief Field <CertificateValidationTime>k__BackingField, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__CertificateValidationTime_k__BackingField,
                      put = __cordl_internal_set__CertificateValidationTime_k__BackingField))::System::Nullable_1<::System::DateTime> _CertificateValidationTime_k__BackingField;

  /// @brief Field <TrustAnchors>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__TrustAnchors_k__BackingField,
                      put = __cordl_internal_set__TrustAnchors_k__BackingField))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _TrustAnchors_k__BackingField;

  /// @brief Field <UserSettings>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__UserSettings_k__BackingField, put = __cordl_internal_set__UserSettings_k__BackingField))::System::Object* _UserSettings_k__BackingField;

  /// @brief Field <CertificateSearchPaths>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__CertificateSearchPaths_k__BackingField,
                      put = __cordl_internal_set__CertificateSearchPaths_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _CertificateSearchPaths_k__BackingField;

  /// @brief Field <SendCloseNotify>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__SendCloseNotify_k__BackingField, put = __cordl_internal_set__SendCloseNotify_k__BackingField)) bool _SendCloseNotify_k__BackingField;

  /// @brief Field <ClientCertificateIssuers>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientCertificateIssuers_k__BackingField,
                      put = __cordl_internal_set__ClientCertificateIssuers_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _ClientCertificateIssuers_k__BackingField;

  /// @brief Field <DisallowUnauthenticatedCertificateRequest>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__DisallowUnauthenticatedCertificateRequest_k__BackingField,
                      put = __cordl_internal_set__DisallowUnauthenticatedCertificateRequest_k__BackingField)) bool _DisallowUnauthenticatedCertificateRequest_k__BackingField;

  /// @brief Field <EnabledProtocols>k__BackingField, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get__EnabledProtocols_k__BackingField,
                      put = __cordl_internal_set__EnabledProtocols_k__BackingField))::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> _EnabledProtocols_k__BackingField;

  /// @brief Field <EnabledCiphers>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__EnabledCiphers_k__BackingField,
                      put = __cordl_internal_set__EnabledCiphers_k__BackingField))::ArrayW<::Mono::Security::Interface::CipherSuiteCode,
                                                                                           ::Array<::Mono::Security::Interface::CipherSuiteCode>*> _EnabledCiphers_k__BackingField;

  /// @brief Field cloned, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_cloned, put = __cordl_internal_set_cloned)) bool cloned;

  /// @brief Field checkCertName, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCertName, put = __cordl_internal_set_checkCertName)) bool checkCertName;

  /// @brief Field checkCertRevocationStatus, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCertRevocationStatus, put = __cordl_internal_set_checkCertRevocationStatus)) bool checkCertRevocationStatus;

  /// @brief Field useServicePointManagerCallback, offset 0x73, size 0x2
  __declspec(property(get = __cordl_internal_get_useServicePointManagerCallback, put = __cordl_internal_set_useServicePointManagerCallback))::System::Nullable_1<bool> useServicePointManagerCallback;

  /// @brief Field skipSystemValidators, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get_skipSystemValidators, put = __cordl_internal_set_skipSystemValidators)) bool skipSystemValidators;

  /// @brief Field callbackNeedsChain, offset 0x76, size 0x1
  __declspec(property(get = __cordl_internal_get_callbackNeedsChain, put = __cordl_internal_set_callbackNeedsChain)) bool callbackNeedsChain;

  /// @brief Field certificateValidator, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateValidator, put = __cordl_internal_set_certificateValidator))::Mono::Security::Interface::ICertificateValidator* certificateValidator;

  /// @brief Field defaultSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultSettings, put = setStaticF_defaultSettings))::Mono::Security::Interface::MonoTlsSettings* defaultSettings;

  __declspec(property(get = get_RemoteCertificateValidationCallback,
                      put = set_RemoteCertificateValidationCallback))::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* RemoteCertificateValidationCallback;

  __declspec(property(get = get_ClientCertificateSelectionCallback,
                      put = set_ClientCertificateSelectionCallback))::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* ClientCertificateSelectionCallback;

  __declspec(property(get = get_UseServicePointManagerCallback, put = set_UseServicePointManagerCallback))::System::Nullable_1<bool> UseServicePointManagerCallback;

  __declspec(property(get = get_CallbackNeedsCertificateChain)) bool CallbackNeedsCertificateChain;

  __declspec(property(get = get_CertificateValidationTime, put = set_CertificateValidationTime))::System::Nullable_1<::System::DateTime> CertificateValidationTime;

  __declspec(property(get = get_TrustAnchors, put = set_TrustAnchors))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* TrustAnchors;

  __declspec(property(get = get_UserSettings, put = set_UserSettings))::System::Object* UserSettings;

  __declspec(property(get = get_CertificateSearchPaths, put = set_CertificateSearchPaths))::ArrayW<::StringW, ::Array<::StringW>*> CertificateSearchPaths;

  __declspec(property(get = get_SendCloseNotify, put = set_SendCloseNotify)) bool SendCloseNotify;

  __declspec(property(get = get_ClientCertificateIssuers, put = set_ClientCertificateIssuers))::ArrayW<::StringW, ::Array<::StringW>*> ClientCertificateIssuers;

  __declspec(property(get = get_DisallowUnauthenticatedCertificateRequest, put = set_DisallowUnauthenticatedCertificateRequest)) bool DisallowUnauthenticatedCertificateRequest;

  __declspec(property(get = get_EnabledProtocols, put = set_EnabledProtocols))::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> EnabledProtocols;

  __declspec(property(get = get_EnabledCiphers, put = set_EnabledCiphers))::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> EnabledCiphers;

  __declspec(property(get = get_CertificateValidator))::Mono::Security::Interface::ICertificateValidator* CertificateValidator;

  constexpr ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*& __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*> const&
  __cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() const;

  constexpr void __cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);

  constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*& __cordl_internal_get__ClientCertificateSelectionCallback_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*> const&
  __cordl_internal_get__ClientCertificateSelectionCallback_k__BackingField() const;

  constexpr void __cordl_internal_set__ClientCertificateSelectionCallback_k__BackingField(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__CertificateValidationTime_k__BackingField();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__CertificateValidationTime_k__BackingField() const;

  constexpr void __cordl_internal_set__CertificateValidationTime_k__BackingField(::System::Nullable_1<::System::DateTime> value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__TrustAnchors_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> const& __cordl_internal_get__TrustAnchors_k__BackingField() const;

  constexpr void __cordl_internal_set__TrustAnchors_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr ::System::Object*& __cordl_internal_get__UserSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__UserSettings_k__BackingField() const;

  constexpr void __cordl_internal_set__UserSettings_k__BackingField(::System::Object* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__CertificateSearchPaths_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__CertificateSearchPaths_k__BackingField() const;

  constexpr void __cordl_internal_set__CertificateSearchPaths_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr bool& __cordl_internal_get__SendCloseNotify_k__BackingField();

  constexpr bool const& __cordl_internal_get__SendCloseNotify_k__BackingField() const;

  constexpr void __cordl_internal_set__SendCloseNotify_k__BackingField(bool value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__ClientCertificateIssuers_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__ClientCertificateIssuers_k__BackingField() const;

  constexpr void __cordl_internal_set__ClientCertificateIssuers_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr bool& __cordl_internal_get__DisallowUnauthenticatedCertificateRequest_k__BackingField();

  constexpr bool const& __cordl_internal_get__DisallowUnauthenticatedCertificateRequest_k__BackingField() const;

  constexpr void __cordl_internal_set__DisallowUnauthenticatedCertificateRequest_k__BackingField(bool value);

  constexpr ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>& __cordl_internal_get__EnabledProtocols_k__BackingField();

  constexpr ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> const& __cordl_internal_get__EnabledProtocols_k__BackingField() const;

  constexpr void __cordl_internal_set__EnabledProtocols_k__BackingField(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value);

  constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*>& __cordl_internal_get__EnabledCiphers_k__BackingField();

  constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> const& __cordl_internal_get__EnabledCiphers_k__BackingField() const;

  constexpr void __cordl_internal_set__EnabledCiphers_k__BackingField(::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> value);

  constexpr bool& __cordl_internal_get_cloned();

  constexpr bool const& __cordl_internal_get_cloned() const;

  constexpr void __cordl_internal_set_cloned(bool value);

  constexpr bool& __cordl_internal_get_checkCertName();

  constexpr bool const& __cordl_internal_get_checkCertName() const;

  constexpr void __cordl_internal_set_checkCertName(bool value);

  constexpr bool& __cordl_internal_get_checkCertRevocationStatus();

  constexpr bool const& __cordl_internal_get_checkCertRevocationStatus() const;

  constexpr void __cordl_internal_set_checkCertRevocationStatus(bool value);

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_useServicePointManagerCallback();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_useServicePointManagerCallback() const;

  constexpr void __cordl_internal_set_useServicePointManagerCallback(::System::Nullable_1<bool> value);

  constexpr bool& __cordl_internal_get_skipSystemValidators();

  constexpr bool const& __cordl_internal_get_skipSystemValidators() const;

  constexpr void __cordl_internal_set_skipSystemValidators(bool value);

  constexpr bool& __cordl_internal_get_callbackNeedsChain();

  constexpr bool const& __cordl_internal_get_callbackNeedsChain() const;

  constexpr void __cordl_internal_set_callbackNeedsChain(bool value);

  constexpr ::Mono::Security::Interface::ICertificateValidator*& __cordl_internal_get_certificateValidator();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::ICertificateValidator*> const& __cordl_internal_get_certificateValidator() const;

  constexpr void __cordl_internal_set_certificateValidator(::Mono::Security::Interface::ICertificateValidator* value);

  static inline void setStaticF_defaultSettings(::Mono::Security::Interface::MonoTlsSettings* value);

  static inline ::Mono::Security::Interface::MonoTlsSettings* getStaticF_defaultSettings();

  /// @brief Method get_RemoteCertificateValidationCallback, addr 0x2402dfc, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback();

  /// @brief Method set_RemoteCertificateValidationCallback, addr 0x2402e04, size 0x8, virtual false, abstract: false, final false
  inline void set_RemoteCertificateValidationCallback(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);

  /// @brief Method get_ClientCertificateSelectionCallback, addr 0x2402e0c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback();

  /// @brief Method set_ClientCertificateSelectionCallback, addr 0x2402e14, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientCertificateSelectionCallback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);

  /// @brief Method get_UseServicePointManagerCallback, addr 0x2402e1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_UseServicePointManagerCallback();

  /// @brief Method set_UseServicePointManagerCallback, addr 0x2402e24, size 0x8, virtual false, abstract: false, final false
  inline void set_UseServicePointManagerCallback(::System::Nullable_1<bool> value);

  /// @brief Method get_CallbackNeedsCertificateChain, addr 0x2402e2c, size 0x8, virtual false, abstract: false, final false
  inline bool get_CallbackNeedsCertificateChain();

  /// @brief Method get_CertificateValidationTime, addr 0x2402e34, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_CertificateValidationTime();

  /// @brief Method set_CertificateValidationTime, addr 0x2402e40, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificateValidationTime(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method get_TrustAnchors, addr 0x2402e48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors();

  /// @brief Method set_TrustAnchors, addr 0x2402e50, size 0x8, virtual false, abstract: false, final false
  inline void set_TrustAnchors(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method get_UserSettings, addr 0x2402e58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_UserSettings();

  /// @brief Method set_UserSettings, addr 0x2402e60, size 0x8, virtual false, abstract: false, final false
  inline void set_UserSettings(::System::Object* value);

  /// @brief Method get_CertificateSearchPaths, addr 0x2402e68, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_CertificateSearchPaths();

  /// @brief Method set_CertificateSearchPaths, addr 0x2402e70, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificateSearchPaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method get_SendCloseNotify, addr 0x2402e78, size 0x8, virtual false, abstract: false, final false
  inline bool get_SendCloseNotify();

  /// @brief Method set_SendCloseNotify, addr 0x2402e80, size 0xc, virtual false, abstract: false, final false
  inline void set_SendCloseNotify(bool value);

  /// @brief Method get_ClientCertificateIssuers, addr 0x2402e8c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ClientCertificateIssuers();

  /// @brief Method set_ClientCertificateIssuers, addr 0x2402e94, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientCertificateIssuers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method get_DisallowUnauthenticatedCertificateRequest, addr 0x2402e9c, size 0x8, virtual false, abstract: false, final false
  inline bool get_DisallowUnauthenticatedCertificateRequest();

  /// @brief Method set_DisallowUnauthenticatedCertificateRequest, addr 0x2402ea4, size 0xc, virtual false, abstract: false, final false
  inline void set_DisallowUnauthenticatedCertificateRequest(bool value);

  /// @brief Method get_EnabledProtocols, addr 0x2402eb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> get_EnabledProtocols();

  /// @brief Method set_EnabledProtocols, addr 0x2402eb8, size 0x8, virtual false, abstract: false, final false
  inline void set_EnabledProtocols(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value);

  /// @brief Method get_EnabledCiphers, addr 0x2402ec0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> get_EnabledCiphers();

  /// @brief Method set_EnabledCiphers, addr 0x2402ec8, size 0x8, virtual false, abstract: false, final false
  inline void set_EnabledCiphers(::ArrayW<::Mono::Security::Interface::CipherSuiteCode, ::Array<::Mono::Security::Interface::CipherSuiteCode>*> value);

  static inline ::Mono::Security::Interface::MonoTlsSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2402ed0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DefaultSettings, addr 0x2402ee4, size 0x94, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings();

  /// @brief Method CopyDefaultSettings, addr 0x2402f78, size 0x18, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings();

  /// @brief Method get_CertificateValidator, addr 0x2402ff0, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::ICertificateValidator* get_CertificateValidator();

  /// @brief Method CloneWithValidator, addr 0x2402ff8, size 0x80, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(::Mono::Security::Interface::ICertificateValidator* validator);

  /// @brief Method Clone, addr 0x2402f90, size 0x60, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoTlsSettings* Clone();

  static inline ::Mono::Security::Interface::MonoTlsSettings* New_ctor(::Mono::Security::Interface::MonoTlsSettings* other);

  /// @brief Method .ctor, addr 0x2403078, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::Interface::MonoTlsSettings* other);

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsSettings(MonoTlsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsSettings(MonoTlsSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsSettings();

public:
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
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoTlsSettings, 0x80>, "Size mismatch!");

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

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsSettings);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsSettings*, "Mono.Security.Interface", "MonoTlsSettings");
