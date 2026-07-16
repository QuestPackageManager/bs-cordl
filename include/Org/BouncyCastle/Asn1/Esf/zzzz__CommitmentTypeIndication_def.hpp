#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CommitmentTypeIndication.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CommitmentTypeIndication)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CommitmentTypeIndication;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeIndication");
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.CommitmentTypeIndication
class CORDL_TYPE CommitmentTypeIndication : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CommitmentTypeID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CommitmentTypeID;

  __declspec(property(get = get_CommitmentTypeQualifier)) ::Org::BouncyCastle::Asn1::Asn1Sequence* CommitmentTypeQualifier;

  /// @brief Field commitmentTypeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_commitmentTypeId, put = __cordl_internal_set_commitmentTypeId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId;

  /// @brief Field commitmentTypeQualifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_commitmentTypeQualifier, put = __cordl_internal_set_commitmentTypeQualifier)) ::Org::BouncyCastle::Asn1::Asn1Sequence* commitmentTypeQualifier;

  /// @brief Method GetInstance, addr 0x336ddcc, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId,
                                                                                   ::Org::BouncyCastle::Asn1::Asn1Sequence* commitmentTypeQualifier);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x336e274, size 0x154, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_commitmentTypeId() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_commitmentTypeId();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_commitmentTypeQualifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_commitmentTypeQualifier();

  constexpr void __cordl_internal_set_commitmentTypeId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_commitmentTypeQualifier(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x336e1fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId);

  /// @brief Method .ctor, addr 0x336e204, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId, ::Org::BouncyCastle::Asn1::Asn1Sequence* commitmentTypeQualifier);

  /// @brief Method .ctor, addr 0x336df50, size 0x2ac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CommitmentTypeID, addr 0x336e264, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CommitmentTypeID();

  /// @brief Method get_CommitmentTypeQualifier, addr 0x336e26c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_CommitmentTypeQualifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommitmentTypeIndication();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIndication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommitmentTypeIndication(CommitmentTypeIndication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIndication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommitmentTypeIndication(CommitmentTypeIndication const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 136 };

  /// @brief Field commitmentTypeId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___commitmentTypeId;

  /// @brief Field commitmentTypeQualifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___commitmentTypeQualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication, ___commitmentTypeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication, ___commitmentTypeQualifier) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
