#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Smime/SmimeCapabilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SmimeCapabilities)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Smime.SmimeCapabilities
class CORDL_TYPE SmimeCapabilities : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field Aes128Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes128Cbc, put = setStaticF_Aes128Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Aes128Cbc;

  /// @brief Field Aes192Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes192Cbc, put = setStaticF_Aes192Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Aes192Cbc;

  /// @brief Field Aes256Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes256Cbc, put = setStaticF_Aes256Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Aes256Cbc;

  /// @brief Field CannotDecryptAny, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CannotDecryptAny, put = setStaticF_CannotDecryptAny)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CannotDecryptAny;

  /// @brief Field Cast5Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Cast5Cbc, put = setStaticF_Cast5Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Cast5Cbc;

  /// @brief Field DesCbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DesCbc, put = setStaticF_DesCbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesCbc;

  /// @brief Field DesEde3Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DesEde3Cbc, put = setStaticF_DesEde3Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesEde3Cbc;

  /// @brief Field IdeaCbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdeaCbc, put = setStaticF_IdeaCbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdeaCbc;

  /// @brief Field PreferSignedData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PreferSignedData, put = setStaticF_PreferSignedData)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PreferSignedData;

  /// @brief Field RC2Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RC2Cbc, put = setStaticF_RC2Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* RC2Cbc;

  /// @brief Field SmimeCapabilitesVersions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SmimeCapabilitesVersions, put = setStaticF_SmimeCapabilitesVersions)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SmimeCapabilitesVersions;

  /// @brief Field capabilities, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_capabilities, put = __cordl_internal_set_capabilities)) ::Org::BouncyCastle::Asn1::Asn1Sequence* capabilities;

  /// @brief Method DoGetCapabilitiesForOid, addr 0x24f5014, size 0x640, virtual false, abstract: false, final false
  inline void DoGetCapabilitiesForOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability, ::System::Collections::IList* list);

  /// @brief Method GetCapabilities, addr 0x24f4fa0, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* GetCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability);

  /// @brief Method GetCapabilitiesForOid, addr 0x24f5654, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IList* GetCapabilitiesForOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability);

  /// @brief Method GetInstance, addr 0x24f4d44, size 0x234, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24f580c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_capabilities() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_capabilities();

  constexpr void __cordl_internal_set_capabilities(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x24f4f78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Aes128Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Aes192Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Aes256Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CannotDecryptAny();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Cast5Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde3Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdeaCbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PreferSignedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SmimeCapabilitesVersions();

  static inline void setStaticF_Aes128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Aes192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Aes256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_Cast5Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdeaCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SmimeCapabilitesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmimeCapabilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmimeCapabilities(SmimeCapabilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmimeCapabilities(SmimeCapabilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 292 };

  /// @brief Field capabilities, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___capabilities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities, ___capabilities) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*, "Org.BouncyCastle.Asn1.Smime", "SmimeCapabilities");
