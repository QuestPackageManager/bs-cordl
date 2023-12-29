#pragma once
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
// Type: Org.BouncyCastle.Asn1.Microsoft::MicrosoftObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Microsoft {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(194))
// CS Name: ::Org.BouncyCastle.Asn1.Microsoft::MicrosoftObjectIdentifiers*
class CORDL_TYPE MicrosoftObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field Microsoft, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Microsoft, put = setStaticF_Microsoft))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Microsoft;

  /// @brief Field MicrosoftCertTemplateV1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MicrosoftCertTemplateV1, put = setStaticF_MicrosoftCertTemplateV1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCertTemplateV1;

  /// @brief Field MicrosoftCAVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MicrosoftCAVersion, put = setStaticF_MicrosoftCAVersion))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCAVersion;

  /// @brief Field MicrosoftPrevCACertHash, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MicrosoftPrevCACertHash, put = setStaticF_MicrosoftPrevCACertHash))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftPrevCACertHash;

  /// @brief Field MicrosoftCrlNextPublish, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MicrosoftCrlNextPublish, put = setStaticF_MicrosoftCrlNextPublish))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCrlNextPublish;

  /// @brief Field MicrosoftCertTemplateV2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MicrosoftCertTemplateV2, put = setStaticF_MicrosoftCertTemplateV2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftCertTemplateV2;

  /// @brief Field MicrosoftAppPolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MicrosoftAppPolicies, put = setStaticF_MicrosoftAppPolicies))::Org::BouncyCastle::Asn1::DerObjectIdentifier* MicrosoftAppPolicies;

  static inline void setStaticF_Microsoft(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Microsoft();

  static inline void setStaticF_MicrosoftCertTemplateV1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftCertTemplateV1();

  static inline void setStaticF_MicrosoftCAVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftCAVersion();

  static inline void setStaticF_MicrosoftPrevCACertHash(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftPrevCACertHash();

  static inline void setStaticF_MicrosoftCrlNextPublish(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftCrlNextPublish();

  static inline void setStaticF_MicrosoftCertTemplateV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftCertTemplateV2();

  static inline void setStaticF_MicrosoftAppPolicies(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MicrosoftAppPolicies();

  static inline ::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0xf05aec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MicrosoftObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MicrosoftObjectIdentifiers(MicrosoftObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MicrosoftObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MicrosoftObjectIdentifiers(MicrosoftObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MicrosoftObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Microsoft
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers*, "Org.BouncyCastle.Asn1.Microsoft", "MicrosoftObjectIdentifiers");
