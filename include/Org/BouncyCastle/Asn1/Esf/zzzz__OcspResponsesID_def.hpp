#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OcspResponsesID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OcspResponsesID)
namespace Org::BouncyCastle::Asn1::Esf {
class OcspIdentifier;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OcspResponsesID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.OcspResponsesID
class CORDL_TYPE OcspResponsesID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_OcspIdentifier)) ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* OcspIdentifier;

  __declspec(property(get = get_OcspRepHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHash* OcspRepHash;

  /// @brief Field ocspIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ocspIdentifier, put = __cordl_internal_set_ocspIdentifier)) ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier;

  /// @brief Field ocspRepHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ocspRepHash, put = __cordl_internal_set_ocspRepHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash;

  /// @brief Method GetInstance, addr 0x2321748, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2321ed8, size 0x12c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* const& __cordl_internal_get_ocspIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*& __cordl_internal_get_ocspIdentifier();

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash* const& __cordl_internal_get_ocspRepHash() const;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& __cordl_internal_get_ocspRepHash();

  constexpr void __cordl_internal_set_ocspIdentifier(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* value);

  constexpr void __cordl_internal_set_ocspRepHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value);

  /// @brief Method .ctor, addr 0x2321e48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier);

  /// @brief Method .ctor, addr 0x2321e50, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash);

  /// @brief Method .ctor, addr 0x2321c90, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_OcspIdentifier, addr 0x2321ec8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* get_OcspIdentifier();

  /// @brief Method get_OcspRepHash, addr 0x2321ed0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* get_OcspRepHash();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspResponsesID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspResponsesID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspResponsesID(OcspResponsesID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspResponsesID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspResponsesID(OcspResponsesID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 147 };

  /// @brief Field ocspIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ___ocspIdentifier;

  /// @brief Field ocspRepHash, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherHash* ___ocspRepHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID, ___ocspIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID, ___ocspRepHash) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*, "Org.BouncyCastle.Asn1.Esf", "OcspResponsesID");
