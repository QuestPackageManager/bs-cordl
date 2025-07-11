#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509ChainImplMono.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ChainImplMono)
namespace Mono::Security::X509 {
class X509Crl_X509CrlEntry;
}
namespace Mono::Security::X509 {
class X509Crl;
}
namespace Mono::Security::X509 {
class X509Extension;
}
namespace Mono::Security::X509 {
class X509Store;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Store;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImplMono;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ChainImplMono);
// Dependencies System.Security.Cryptography.X509Certificates.StoreLocation, System.Security.Cryptography.X509Certificates.X509ChainImpl
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainImplMono
class CORDL_TYPE X509ChainImplMono : public ::System::Security::Cryptography::X509Certificates::X509ChainImpl {
public:
  // Declarations
  __declspec(property(get = get_CertificateAuthorities)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* CertificateAuthorities;

  __declspec(property(get = get_CertificateCollection)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* CertificateCollection;

  __declspec(property(get = get_ChainElements)) ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* ChainElements;

  __declspec(property(get = get_ChainPolicy)) ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* ChainPolicy;

  __declspec(property(get =
                          get_ChainStatus)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>
      ChainStatus;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_Empty,
      put = setStaticF_Empty)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>
      Empty;

  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_LMCAStore)) ::System::Security::Cryptography::X509Certificates::X509Store* LMCAStore;

  __declspec(property(get = get_LMRootStore)) ::System::Security::Cryptography::X509Certificates::X509Store* LMRootStore;

  __declspec(property(get = get_Roots)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* Roots;

  __declspec(property(get = get_UserCAStore)) ::System::Security::Cryptography::X509Certificates::X509Store* UserCAStore;

  __declspec(property(get = get_UserRootStore)) ::System::Security::Cryptography::X509Certificates::X509Store* UserRootStore;

  /// @brief Field bce_restriction, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bce_restriction, put = __cordl_internal_set_bce_restriction)) ::System::Security::Cryptography::X509Certificates::X509ChainElement* bce_restriction;

  /// @brief Field ca_store, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_ca_store, put = __cordl_internal_set_ca_store)) ::System::Security::Cryptography::X509Certificates::X509Store* ca_store;

  /// @brief Field cas, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_cas, put = __cordl_internal_set_cas)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* cas;

  /// @brief Field collection, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_collection, put = __cordl_internal_set_collection)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection;

  /// @brief Field elements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements)) ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements;

  /// @brief Field location, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location)) ::System::Security::Cryptography::X509Certificates::StoreLocation location;

  /// @brief Field max_path_length, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_max_path_length, put = __cordl_internal_set_max_path_length)) int32_t max_path_length;

  /// @brief Field policy, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_policy, put = __cordl_internal_set_policy)) ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy;

  /// @brief Field root_store, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_root_store, put = __cordl_internal_set_root_store)) ::System::Security::Cryptography::X509Certificates::X509Store* root_store;

  /// @brief Field roots, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_roots, put = __cordl_internal_set_roots)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* roots;

  /// @brief Field status, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_status,
      put = __cordl_internal_set_status)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>
      status;

  /// @brief Field user_ca_store, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_user_ca_store, put = __cordl_internal_set_user_ca_store)) ::System::Security::Cryptography::X509Certificates::X509Store* user_ca_store;

  /// @brief Field user_root_store, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_user_root_store, put = __cordl_internal_set_user_root_store)) ::System::Security::Cryptography::X509Certificates::X509Store* user_root_store;

  /// @brief Field working_issuer_name, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_working_issuer_name,
                      put = __cordl_internal_set_working_issuer_name)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* working_issuer_name;

  /// @brief Field working_public_key, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_working_public_key, put = __cordl_internal_set_working_public_key)) ::System::Security::Cryptography::AsymmetricAlgorithm* working_public_key;

  /// @brief Method AddStatus, addr 0x443f588, size 0x4, virtual true, abstract: false, final false
  inline void AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error);

  /// @brief Method Build, addr 0x443f58c, size 0x5bc, virtual true, abstract: false, final false
  inline bool Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method BuildChainFrom, addr 0x443fb48, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags BuildChainFrom(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method CheckCrls, addr 0x4442058, size 0x380, virtual false, abstract: false, final false
  static inline ::Mono::Security::X509::X509Crl* CheckCrls(::StringW subject, ::StringW ski, ::Mono::Security::X509::X509Store* store);

  /// @brief Method CheckRevocation, addr 0x44415f0, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, int32_t ca,
                                                                                                  bool online);

  /// @brief Method CheckRevocation, addr 0x44416bc, size 0x1e0, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                                                  ::System::Security::Cryptography::X509Certificates::X509Certificate2* ca_cert, bool online);

  /// @brief Method CheckRevocationOnChain, addr 0x4441058, size 0x1e8, virtual false, abstract: false, final false
  inline void CheckRevocationOnChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag);

  /// @brief Method FindCrl, addr 0x444189c, size 0x174, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Crl* FindCrl(::System::Security::Cryptography::X509Certificates::X509Certificate2* caCertificate);

  /// @brief Method FindParent, addr 0x44406b0, size 0x114, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* FindParent(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method GetAuthorityKeyIdentifier, addr 0x4440a18, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GetAuthorityKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method GetAuthorityKeyIdentifier, addr 0x4441564, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW GetAuthorityKeyIdentifier(::Mono::Security::X509::X509Crl* crl);

  /// @brief Method GetAuthorityKeyIdentifier, addr 0x4441400, size 0x164, virtual false, abstract: false, final false
  static inline ::StringW GetAuthorityKeyIdentifier(::Mono::Security::X509::X509Extension* ext);

  /// @brief Method GetSubjectKeyIdentifier, addr 0x4440ab0, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW GetSubjectKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method IsChainComplete, addr 0x44407c4, size 0xc8, virtual false, abstract: false, final false
  inline bool IsChainComplete(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method IsSelfIssued, addr 0x4440b68, size 0x48, virtual false, abstract: false, final false
  inline bool IsSelfIssued(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method IsSignedWith, addr 0x44412cc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSignedWith(::System::Security::Cryptography::X509Certificates::X509Certificate2* _cordl_signed, ::System::Security::Cryptography::AsymmetricAlgorithm* pubkey);

  static inline ::System::Security::Cryptography::X509Certificates::X509ChainImplMono* New_ctor(bool useMachineContext);

  /// @brief Method PrepareForNextCertificate, addr 0x4440e60, size 0x1f8, virtual false, abstract: false, final false
  inline void PrepareForNextCertificate(int32_t n);

  /// @brief Method Process, addr 0x4440bb0, size 0x2b0, virtual false, abstract: false, final false
  inline void Process(int32_t n);

  /// @brief Method ProcessCertificateExtensions, addr 0x4441308, size 0xf8, virtual false, abstract: false, final false
  inline void ProcessCertificateExtensions(::System::Security::Cryptography::X509Certificates::X509ChainElement* element);

  /// @brief Method ProcessCrlEntryExtensions, addr 0x4441a10, size 0x308, virtual false, abstract: false, final false
  inline bool ProcessCrlEntryExtensions(::Mono::Security::X509::X509Crl_X509CrlEntry* entry);

  /// @brief Method ProcessCrlExtensions, addr 0x4441d18, size 0x340, virtual false, abstract: false, final false
  inline bool ProcessCrlExtensions(::Mono::Security::X509::X509Crl* crl);

  /// @brief Method Reset, addr 0x443fd64, size 0xcc, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SelectBestFromCollection, addr 0x444088c, size 0x18c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* SelectBestFromCollection(::System::Security::Cryptography::X509Certificates::X509Certificate2* child,
                                                                                                        ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* c);

  /// @brief Method ValidateChain, addr 0x443fc30, size 0x114, virtual false, abstract: false, final false
  inline void ValidateChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag);

  /// @brief Method WrapUp, addr 0x4441240, size 0x8c, virtual false, abstract: false, final false
  inline void WrapUp();

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElement* const& __cordl_internal_get_bce_restriction() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElement*& __cordl_internal_get_bce_restriction();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Store* const& __cordl_internal_get_ca_store() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& __cordl_internal_get_ca_store();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& __cordl_internal_get_cas() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& __cordl_internal_get_cas();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& __cordl_internal_get_collection() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& __cordl_internal_get_collection();

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* const& __cordl_internal_get_elements() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& __cordl_internal_get_elements();

  constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation const& __cordl_internal_get_location() const;

  constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation& __cordl_internal_get_location();

  constexpr int32_t const& __cordl_internal_get_max_path_length() const;

  constexpr int32_t& __cordl_internal_get_max_path_length();

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* const& __cordl_internal_get_policy() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& __cordl_internal_get_policy();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Store* const& __cordl_internal_get_root_store() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& __cordl_internal_get_root_store();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& __cordl_internal_get_roots() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& __cordl_internal_get_roots();

  constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> const&
  __cordl_internal_get_status() const;

  constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>& __cordl_internal_get_status();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Store* const& __cordl_internal_get_user_ca_store() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& __cordl_internal_get_user_ca_store();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Store* const& __cordl_internal_get_user_root_store() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& __cordl_internal_get_user_root_store();

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* const& __cordl_internal_get_working_issuer_name() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& __cordl_internal_get_working_issuer_name();

  constexpr ::System::Security::Cryptography::AsymmetricAlgorithm* const& __cordl_internal_get_working_public_key() const;

  constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& __cordl_internal_get_working_public_key();

  constexpr void __cordl_internal_set_bce_restriction(::System::Security::Cryptography::X509Certificates::X509ChainElement* value);

  constexpr void __cordl_internal_set_ca_store(::System::Security::Cryptography::X509Certificates::X509Store* value);

  constexpr void __cordl_internal_set_cas(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value);

  constexpr void __cordl_internal_set_collection(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value);

  constexpr void __cordl_internal_set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* value);

  constexpr void __cordl_internal_set_location(::System::Security::Cryptography::X509Certificates::StoreLocation value);

  constexpr void __cordl_internal_set_max_path_length(int32_t value);

  constexpr void __cordl_internal_set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);

  constexpr void __cordl_internal_set_root_store(::System::Security::Cryptography::X509Certificates::X509Store* value);

  constexpr void __cordl_internal_set_roots(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value);

  constexpr void
  __cordl_internal_set_status(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> value);

  constexpr void __cordl_internal_set_user_ca_store(::System::Security::Cryptography::X509Certificates::X509Store* value);

  constexpr void __cordl_internal_set_user_root_store(::System::Security::Cryptography::X509Certificates::X509Store* value);

  constexpr void __cordl_internal_set_working_issuer_name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value);

  constexpr void __cordl_internal_set_working_public_key(::System::Security::Cryptography::AsymmetricAlgorithm* value);

  /// @brief Method .ctor, addr 0x443f440, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(bool useMachineContext);

  static inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> getStaticF_Empty();

  /// @brief Method get_CertificateAuthorities, addr 0x44400dc, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_CertificateAuthorities();

  /// @brief Method get_CertificateCollection, addr 0x4440388, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_CertificateCollection();

  /// @brief Method get_ChainElements, addr 0x443f514, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();

  /// @brief Method get_ChainPolicy, addr 0x443f51c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy();

  /// @brief Method get_ChainStatus, addr 0x443f524, size 0x64, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> get_ChainStatus();

  /// @brief Method get_IsValid, addr 0x443f50c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Method get_LMCAStore, addr 0x44401a0, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Store* get_LMCAStore();

  /// @brief Method get_LMRootStore, addr 0x443fef4, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Store* get_LMRootStore();

  /// @brief Method get_Roots, addr 0x443fe30, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Roots();

  /// @brief Method get_UserCAStore, addr 0x4440294, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Store* get_UserCAStore();

  /// @brief Method get_UserRootStore, addr 0x443ffe8, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Store* get_UserRootStore();

  static inline void
  setStaticF_Empty(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainImplMono();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ChainImplMono", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ChainImplMono(X509ChainImplMono&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ChainImplMono", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ChainImplMono(X509ChainImplMono const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9328 };

  /// @brief Field location, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::StoreLocation ___location;

  /// @brief Field elements, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* ___elements;

  /// @brief Field policy, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* ___policy;

  /// @brief Field status, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> ___status;

  /// @brief Field max_path_length, offset: 0x30, size: 0x4, def value: None
  int32_t ___max_path_length;

  /// @brief Field working_issuer_name, offset: 0x38, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* ___working_issuer_name;

  /// @brief Field working_public_key, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Cryptography::AsymmetricAlgorithm* ___working_public_key;

  /// @brief Field bce_restriction, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainElement* ___bce_restriction;

  /// @brief Field roots, offset: 0x50, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* ___roots;

  /// @brief Field cas, offset: 0x58, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* ___cas;

  /// @brief Field root_store, offset: 0x60, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Store* ___root_store;

  /// @brief Field ca_store, offset: 0x68, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Store* ___ca_store;

  /// @brief Field user_root_store, offset: 0x70, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Store* ___user_root_store;

  /// @brief Field user_ca_store, offset: 0x78, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Store* ___user_ca_store;

  /// @brief Field collection, offset: 0x80, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* ___collection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___location) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___elements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___policy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___status) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___max_path_length) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___working_issuer_name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___working_public_key) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___bce_restriction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___roots) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___cas) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___root_store) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___ca_store) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___user_root_store) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___user_ca_store) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainImplMono, ___collection) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainImplMono, 0x88>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainImplMono);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainImplMono*, "System.Security.Cryptography.X509Certificates", "X509ChainImplMono");
