#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberX509CertificateUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatSaberX509CertificateUtility)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberX509CertificateUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberX509CertificateUtility);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberX509CertificateUtility
class CORDL_TYPE BeatSaberX509CertificateUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field _rootCertificates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__rootCertificates, put = setStaticF__rootCertificates)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*,
                                                                                                        ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>
      _rootCertificates;

  /// @brief Field kBeatSaberDotComRootCertificate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kBeatSaberDotComRootCertificate, put = setStaticF_kBeatSaberDotComRootCertificate)) ::StringW kBeatSaberDotComRootCertificate;

  /// @brief Method GetRootCertificates, addr 0x31a1f10, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> GetRootCertificates();

  /// @brief Method GetRootCertificatesRaw, addr 0x31a2018, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetRootCertificatesRaw();

  static inline ::GlobalNamespace::BeatSaberX509CertificateUtility* New_ctor();

  /// @brief Method .ctor, addr 0x31a20d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>
  getStaticF__rootCertificates();

  static inline ::StringW getStaticF_kBeatSaberDotComRootCertificate();

  static inline void
  setStaticF__rootCertificates(::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> value);

  static inline void setStaticF_kBeatSaberDotComRootCertificate(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberX509CertificateUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberX509CertificateUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberX509CertificateUtility(BeatSaberX509CertificateUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberX509CertificateUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberX509CertificateUtility(BeatSaberX509CertificateUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18915 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberX509CertificateUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatSaberX509CertificateUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberX509CertificateUtility*, "", "BeatSaberX509CertificateUtility");
