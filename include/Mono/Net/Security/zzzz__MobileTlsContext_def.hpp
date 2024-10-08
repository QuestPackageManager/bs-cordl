#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileTlsContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MobileTlsContext)
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
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
class IDisposable;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Mono::Net::Security {
class MobileTlsContext;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MobileTlsContext);
// Type: Mono.Net.Security::MobileTlsContext
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// CS Name: ::Mono.Net.Security::MobileTlsContext*
class CORDL_TYPE MobileTlsContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AskForClientCertificate)) bool AskForClientCertificate;

  __declspec(property(get = get_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  __declspec(property(get = get_IsServer)) bool IsServer;

  __declspec(property(get = get_LocalClientCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* LocalClientCertificate;

  __declspec(property(get = get_LocalServerCertificate, put = set_LocalServerCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* LocalServerCertificate;

  __declspec(property(get = get_Parent)) ::Mono::Net::Security::MobileAuthenticatedStream* Parent;

  __declspec(property(get = get_RemoteCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2* RemoteCertificate;

  __declspec(property(get = get_ServerName)) ::StringW ServerName;

  __declspec(property(get = get_Settings)) ::Mono::Security::Interface::MonoTlsSettings* Settings;

  __declspec(property(get = get_TargetHost)) ::StringW TargetHost;

  /// @brief Field <AskForClientCertificate>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__AskForClientCertificate_k__BackingField,
                      put = __cordl_internal_set__AskForClientCertificate_k__BackingField)) bool _AskForClientCertificate_k__BackingField;

  /// @brief Field <ClientCertificates>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientCertificates_k__BackingField,
                      put =
                          __cordl_internal_set__ClientCertificates_k__BackingField)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _ClientCertificates_k__BackingField;

  /// @brief Field <EnabledProtocols>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__EnabledProtocols_k__BackingField,
                      put = __cordl_internal_set__EnabledProtocols_k__BackingField)) ::System::Security::Authentication::SslProtocols _EnabledProtocols_k__BackingField;

  /// @brief Field <IsServer>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__IsServer_k__BackingField, put = __cordl_internal_set__IsServer_k__BackingField)) bool _IsServer_k__BackingField;

  /// @brief Field <LocalServerCertificate>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__LocalServerCertificate_k__BackingField,
                      put = __cordl_internal_set__LocalServerCertificate_k__BackingField)) ::System::Security::Cryptography::X509Certificates::X509Certificate* _LocalServerCertificate_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField,
                      put = __cordl_internal_set__Options_k__BackingField)) ::Mono::Net::Security::MonoSslAuthenticationOptions* _Options_k__BackingField;

  /// @brief Field <Parent>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Parent_k__BackingField,
                      put = __cordl_internal_set__Parent_k__BackingField)) ::Mono::Net::Security::MobileAuthenticatedStream* _Parent_k__BackingField;

  /// @brief Field <ServerName>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ServerName_k__BackingField, put = __cordl_internal_set__ServerName_k__BackingField)) ::StringW _ServerName_k__BackingField;

  /// @brief Field <TargetHost>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetHost_k__BackingField, put = __cordl_internal_set__TargetHost_k__BackingField)) ::StringW _TargetHost_k__BackingField;

  /// @brief Field certificateValidator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateValidator, put = __cordl_internal_set_certificateValidator)) ::Mono::Net::Security::ChainValidationHelper* certificateValidator;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x409d678, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x409f660, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x409f664, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FinishHandshake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void FinishHandshake();

  static inline ::Mono::Net::Security::MobileTlsContext* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  /// @brief Method PendingRenegotiation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool PendingRenegotiation();

  /// @brief Method ProcessHandshake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ProcessHandshake();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ValueTuple_2<int32_t, bool> Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Renegotiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Renegotiate();

  /// @brief Method SelectClientCertificate, addr 0x4097aac, size 0x4f4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* SelectClientCertificate(::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  /// @brief Method Shutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Shutdown();

  /// @brief Method StartHandshake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StartHandshake();

  /// @brief Method ValidateCertificate, addr 0x4096964, size 0x50, virtual false, abstract: false, final false
  inline bool ValidateCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* leaf, ::System::Security::Cryptography::X509Certificates::X509Chain* chain);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ValueTuple_2<int32_t, bool> Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr bool const& __cordl_internal_get__AskForClientCertificate_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AskForClientCertificate_k__BackingField();

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__ClientCertificates_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> const& __cordl_internal_get__ClientCertificates_k__BackingField() const;

  constexpr ::System::Security::Authentication::SslProtocols const& __cordl_internal_get__EnabledProtocols_k__BackingField() const;

  constexpr ::System::Security::Authentication::SslProtocols& __cordl_internal_get__EnabledProtocols_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsServer_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsServer_k__BackingField();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get__LocalServerCertificate_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& __cordl_internal_get__LocalServerCertificate_k__BackingField() const;

  constexpr ::Mono::Net::Security::MonoSslAuthenticationOptions*& __cordl_internal_get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MonoSslAuthenticationOptions*> const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& __cordl_internal_get__Parent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileAuthenticatedStream*> const& __cordl_internal_get__Parent_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ServerName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ServerName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__TargetHost_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TargetHost_k__BackingField();

  constexpr ::Mono::Net::Security::ChainValidationHelper*& __cordl_internal_get_certificateValidator();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::ChainValidationHelper*> const& __cordl_internal_get_certificateValidator() const;

  constexpr void __cordl_internal_set__AskForClientCertificate_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ClientCertificates_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr void __cordl_internal_set__EnabledProtocols_k__BackingField(::System::Security::Authentication::SslProtocols value);

  constexpr void __cordl_internal_set__IsServer_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LocalServerCertificate_k__BackingField(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

  constexpr void __cordl_internal_set__Options_k__BackingField(::Mono::Net::Security::MonoSslAuthenticationOptions* value);

  constexpr void __cordl_internal_set__Parent_k__BackingField(::Mono::Net::Security::MobileAuthenticatedStream* value);

  constexpr void __cordl_internal_set__ServerName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__TargetHost_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_certificateValidator(::Mono::Net::Security::ChainValidationHelper* value);

  /// @brief Method .ctor, addr 0x4095c34, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  /// @brief Method get_AskForClientCertificate, addr 0x409f640, size 0x8, virtual false, abstract: false, final false
  inline bool get_AskForClientCertificate();

  /// @brief Method get_ClientCertificates, addr 0x409f648, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method get_IsAuthenticated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsAuthenticated();

  /// @brief Method get_IsServer, addr 0x409f628, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsServer();

  /// @brief Method get_LocalClientCertificate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate();

  /// @brief Method get_LocalServerCertificate, addr 0x409f650, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalServerCertificate();

  /// @brief Method get_Parent, addr 0x409f620, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Net::Security::MobileAuthenticatedStream* get_Parent();

  /// @brief Method get_RemoteCertificate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_RemoteCertificate();

  /// @brief Method get_ServerName, addr 0x409f638, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ServerName();

  /// @brief Method get_Settings, addr 0x40965e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoTlsSettings* get_Settings();

  /// @brief Method get_TargetHost, addr 0x409f630, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetHost();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_LocalServerCertificate, addr 0x409f658, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileTlsContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileTlsContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileTlsContext(MobileTlsContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileTlsContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileTlsContext(MobileTlsContext const&) = delete;

  /// @brief Field certificateValidator, offset: 0x10, size: 0x8, def value: None
  ::Mono::Net::Security::ChainValidationHelper* ___certificateValidator;

  /// @brief Field <Options>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Mono::Net::Security::MonoSslAuthenticationOptions* ____Options_k__BackingField;

  /// @brief Field <Parent>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* ____Parent_k__BackingField;

  /// @brief Field <IsServer>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____IsServer_k__BackingField;

  /// @brief Field <TargetHost>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____TargetHost_k__BackingField;

  /// @brief Field <ServerName>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____ServerName_k__BackingField;

  /// @brief Field <AskForClientCertificate>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____AskForClientCertificate_k__BackingField;

  /// @brief Field <EnabledProtocols>k__BackingField, offset: 0x44, size: 0x4, def value: None
  ::System::Security::Authentication::SslProtocols ____EnabledProtocols_k__BackingField;

  /// @brief Field <ClientCertificates>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ____ClientCertificates_k__BackingField;

  /// @brief Field <LocalServerCertificate>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate* ____LocalServerCertificate_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileTlsContext, 0x58>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ___certificateValidator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____Options_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____Parent_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____IsServer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____TargetHost_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____ServerName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____AskForClientCertificate_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____EnabledProtocols_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____ClientCertificates_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileTlsContext, ____LocalServerCertificate_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MobileTlsContext);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileTlsContext*, "Mono.Net.Security", "MobileTlsContext");
