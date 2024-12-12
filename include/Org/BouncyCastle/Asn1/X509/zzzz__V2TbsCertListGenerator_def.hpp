#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/V2TbsCertListGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(V2TbsCertListGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V2TbsCertListGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.V2TbsCertListGenerator
class CORDL_TYPE V2TbsCertListGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field crlEntries, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_crlEntries, put = __cordl_internal_set_crlEntries)) ::System::Collections::IList* crlEntries;

  /// @brief Field extensions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field issuer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field nextUpdate, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nextUpdate, put = __cordl_internal_set_nextUpdate)) ::Org::BouncyCastle::Asn1::X509::Time* nextUpdate;

  /// @brief Field signature, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;

  /// @brief Field thisUpdate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_thisUpdate, put = __cordl_internal_set_thisUpdate)) ::Org::BouncyCastle::Asn1::X509::Time* thisUpdate;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method AddCrlEntry, addr 0x2611ec0, size 0xe4, virtual false, abstract: false, final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::Asn1Sequence* crlEntry);

  /// @brief Method AddCrlEntry, addr 0x2611fa4, size 0x84, virtual false, abstract: false, final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::DerUtcTime* revocationDate, int32_t reason);

  /// @brief Method AddCrlEntry, addr 0x2612b10, size 0x148, virtual false, abstract: false, final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method AddCrlEntry, addr 0x2612028, size 0x8, virtual false, abstract: false, final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate, int32_t reason);

  /// @brief Method AddCrlEntry, addr 0x2612030, size 0x5a4, virtual false, abstract: false, final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate, int32_t reason,
                          ::Org::BouncyCastle::Asn1::DerGeneralizedTime* invalidityDate);

  /// @brief Method GenerateTbsCertList, addr 0x2612c60, size 0x4dc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GenerateTbsCertList();

  static inline ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* New_ctor();

  /// @brief Method SetExtensions, addr 0x2612c58, size 0x8, virtual false, abstract: false, final false
  inline void SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method SetIssuer, addr 0x2611dd4, size 0x8, virtual false, abstract: false, final false
  inline void SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetNextUpdate, addr 0x2611e40, size 0x70, virtual false, abstract: false, final false
  inline void SetNextUpdate(::Org::BouncyCastle::Asn1::DerUtcTime* nextUpdate);

  /// @brief Method SetNextUpdate, addr 0x2611eb8, size 0x8, virtual false, abstract: false, final false
  inline void SetNextUpdate(::Org::BouncyCastle::Asn1::X509::Time* nextUpdate);

  /// @brief Method SetSignature, addr 0x2611dcc, size 0x8, virtual false, abstract: false, final false
  inline void SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature);

  /// @brief Method SetThisUpdate, addr 0x2611ddc, size 0x64, virtual false, abstract: false, final false
  inline void SetThisUpdate(::Org::BouncyCastle::Asn1::DerUtcTime* thisUpdate);

  /// @brief Method SetThisUpdate, addr 0x2611eb0, size 0x8, virtual false, abstract: false, final false
  inline void SetThisUpdate(::Org::BouncyCastle::Asn1::X509::Time* thisUpdate);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_crlEntries() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_crlEntries();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_issuer();

  constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& __cordl_internal_get_nextUpdate() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __cordl_internal_get_nextUpdate();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_signature() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_signature();

  constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& __cordl_internal_get_thisUpdate() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __cordl_internal_get_thisUpdate();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_crlEntries(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_nextUpdate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr void __cordl_internal_set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_thisUpdate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x2611d68, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr V2TbsCertListGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "V2TbsCertListGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  V2TbsCertListGenerator(V2TbsCertListGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "V2TbsCertListGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  V2TbsCertListGenerator(V2TbsCertListGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 399 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field signature, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signature;

  /// @brief Field issuer, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___issuer;

  /// @brief Field thisUpdate, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___thisUpdate;

  /// @brief Field nextUpdate, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___nextUpdate;

  /// @brief Field extensions, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  /// @brief Field crlEntries, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IList* ___crlEntries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, ___signature) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, ___issuer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, ___thisUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, ___nextUpdate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, ___extensions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, ___crlEntries) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*, "Org.BouncyCastle.Asn1.X509", "V2TbsCertListGenerator");
