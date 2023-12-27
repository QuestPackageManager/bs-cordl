#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(V2TbsCertListGenerator)
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V2TbsCertListGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator);
// Type: Org.BouncyCastle.Asn1.X509::V2TbsCertListGenerator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(399))
// CS Name: ::Org.BouncyCastle.Asn1.X509::V2TbsCertListGenerator*
class CORDL_TYPE V2TbsCertListGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field signature, offset 0x18, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;

  /// @brief Field issuer, offset 0x20, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field thisUpdate, offset 0x28, size 0x8
  __declspec(property(get = __get_thisUpdate, put = __set_thisUpdate))::Org::BouncyCastle::Asn1::X509::Time* thisUpdate;

  /// @brief Field nextUpdate, offset 0x30, size 0x8
  __declspec(property(get = __get_nextUpdate, put = __set_nextUpdate))::Org::BouncyCastle::Asn1::X509::Time* nextUpdate;

  /// @brief Field extensions, offset 0x38, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field crlEntries, offset 0x40, size 0x8
  __declspec(property(get = __get_crlEntries, put = __set_crlEntries))::System::Collections::IList* crlEntries;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_signature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_signature() const;

  constexpr void __set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_issuer() const;

  constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_thisUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_thisUpdate() const;

  constexpr void __set_thisUpdate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_nextUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_nextUpdate() const;

  constexpr void __set_nextUpdate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_extensions() const;

  constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr ::System::Collections::IList*& __get_crlEntries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_crlEntries() const;

  constexpr void __set_crlEntries(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* New_ctor();

  /// @brief Method .ctor addr 0x119b74c size 0x6c virtual false final false
  inline void _ctor();

  /// @brief Method SetSignature addr 0x119b7b8 size 0x8 virtual false final false
  inline void SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature);

  /// @brief Method SetIssuer addr 0x119b7c0 size 0x8 virtual false final false
  inline void SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetThisUpdate addr 0x119b7c8 size 0x6c virtual false final false
  inline void SetThisUpdate(::Org::BouncyCastle::Asn1::DerUtcTime* thisUpdate);

  /// @brief Method SetNextUpdate addr 0x119b834 size 0x74 virtual false final false
  inline void SetNextUpdate(::Org::BouncyCastle::Asn1::DerUtcTime* nextUpdate);

  /// @brief Method SetThisUpdate addr 0x119b8a8 size 0x8 virtual false final false
  inline void SetThisUpdate(::Org::BouncyCastle::Asn1::X509::Time* thisUpdate);

  /// @brief Method SetNextUpdate addr 0x119b8b0 size 0x8 virtual false final false
  inline void SetNextUpdate(::Org::BouncyCastle::Asn1::X509::Time* nextUpdate);

  /// @brief Method AddCrlEntry addr 0x119b8b8 size 0xe4 virtual false final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::Asn1Sequence* crlEntry);

  /// @brief Method AddCrlEntry addr 0x119b99c size 0x8c virtual false final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::DerUtcTime* revocationDate, int32_t reason);

  /// @brief Method AddCrlEntry addr 0x119ba28 size 0x8 virtual false final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate, int32_t reason);

  /// @brief Method AddCrlEntry addr 0x119ba30 size 0x5e4 virtual false final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate, int32_t reason,
                          ::Org::BouncyCastle::Asn1::DerGeneralizedTime* invalidityDate);

  /// @brief Method AddCrlEntry addr 0x119c540 size 0x14c virtual false final false
  inline void AddCrlEntry(::Org::BouncyCastle::Asn1::DerInteger* userCertificate, ::Org::BouncyCastle::Asn1::X509::Time* revocationDate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method SetExtensions addr 0x119c68c size 0x8 virtual false final false
  inline void SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GenerateTbsCertList addr 0x119c694 size 0x4e8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GenerateTbsCertList();

  // Ctor Parameters [CppParam { name: "", ty: "V2TbsCertListGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  V2TbsCertListGenerator(V2TbsCertListGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "V2TbsCertListGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  V2TbsCertListGenerator(V2TbsCertListGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr V2TbsCertListGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*, "Org.BouncyCastle.Asn1.X509", "V2TbsCertListGenerator");
