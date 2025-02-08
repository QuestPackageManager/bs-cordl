#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Microsoft/MicrosoftObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MicrosoftObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Microsoft {
class MicrosoftObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Microsoft {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Microsoft.MicrosoftObjectIdentifiers
class CORDL_TYPE MicrosoftObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field Microsoft, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Microsoft, put = setStaticF_Microsoft)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Microsoft;

  /// @brief Field MicrosoftAppPolicies, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MicrosoftAppPolicies, put = setStaticF_MicrosoftAppPolicies)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftAppPolicies;

  /// @brief Field MicrosoftCAVersion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MicrosoftCAVersion, put = setStaticF_MicrosoftCAVersion)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCAVersion;

  /// @brief Field MicrosoftCertTemplateV1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MicrosoftCertTemplateV1, put = setStaticF_MicrosoftCertTemplateV1)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCertTemplateV1;

  /// @brief Field MicrosoftCertTemplateV2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MicrosoftCertTemplateV2, put = setStaticF_MicrosoftCertTemplateV2)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCertTemplateV2;

  /// @brief Field MicrosoftCrlNextPublish, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MicrosoftCrlNextPublish, put = setStaticF_MicrosoftCrlNextPublish)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCrlNextPublish;

  /// @brief Field MicrosoftPrevCACertHash, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MicrosoftPrevCACertHash, put = setStaticF_MicrosoftPrevCACertHash)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftPrevCACertHash;

  static inline ::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x2402224, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Microsoft();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftAppPolicies();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftCAVersion();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftCertTemplateV1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftCertTemplateV2();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftCrlNextPublish();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftPrevCACertHash();

  static inline void setStaticF_Microsoft(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MicrosoftAppPolicies(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MicrosoftCAVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MicrosoftCertTemplateV1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MicrosoftCertTemplateV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MicrosoftCrlNextPublish(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_MicrosoftPrevCACertHash(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MicrosoftObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MicrosoftObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MicrosoftObjectIdentifiers(MicrosoftObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MicrosoftObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MicrosoftObjectIdentifiers(MicrosoftObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 194 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Microsoft
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers*, "Org.BouncyCastle.Asn1.Microsoft", "MicrosoftObjectIdentifiers");
