#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EtsiQCObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class EtsiQCObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::EtsiQCObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::EtsiQCObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(328))
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::EtsiQCObjectIdentifiers*
class CORDL_TYPE EtsiQCObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field IdEtsiQcs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdEtsiQcs, put = setStaticF_IdEtsiQcs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcs;

  /// @brief Field IdEtsiQcsQcCompliance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdEtsiQcsQcCompliance, put = setStaticF_IdEtsiQcsQcCompliance))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcsQcCompliance;

  /// @brief Field IdEtsiQcsLimitValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdEtsiQcsLimitValue, put = setStaticF_IdEtsiQcsLimitValue))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcsLimitValue;

  /// @brief Field IdEtsiQcsRetentionPeriod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdEtsiQcsRetentionPeriod, put = setStaticF_IdEtsiQcsRetentionPeriod))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcsRetentionPeriod;

  /// @brief Field IdEtsiQcsQcSscd, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdEtsiQcsQcSscd, put = setStaticF_IdEtsiQcsQcSscd))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdEtsiQcsQcSscd;

  static inline void setStaticF_IdEtsiQcs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEtsiQcs();

  static inline void setStaticF_IdEtsiQcsQcCompliance(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEtsiQcsQcCompliance();

  static inline void setStaticF_IdEtsiQcsLimitValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEtsiQcsLimitValue();

  static inline void setStaticF_IdEtsiQcsRetentionPeriod(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEtsiQcsRetentionPeriod();

  static inline void setStaticF_IdEtsiQcsQcSscd(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEtsiQcsQcSscd();

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::EtsiQCObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0x100f7ac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EtsiQCObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EtsiQCObjectIdentifiers(EtsiQCObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EtsiQCObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EtsiQCObjectIdentifiers(EtsiQCObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EtsiQCObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::EtsiQCObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::EtsiQCObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::EtsiQCObjectIdentifiers*, "Org.BouncyCastle.Asn1.X509.Qualified", "EtsiQCObjectIdentifiers");
