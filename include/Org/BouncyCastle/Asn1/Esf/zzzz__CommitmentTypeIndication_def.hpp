#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication);
// Type: Org.BouncyCastle.Asn1.Esf::CommitmentTypeIndication
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(136))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CommitmentTypeIndication*
class CORDL_TYPE CommitmentTypeIndication : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field commitmentTypeId, offset 0x10, size 0x8
  __declspec(property(get = __get_commitmentTypeId, put = __set_commitmentTypeId))::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId;

  /// @brief Field commitmentTypeQualifier, offset 0x18, size 0x8
  __declspec(property(get = __get_commitmentTypeQualifier, put = __set_commitmentTypeQualifier))::Org::BouncyCastle::Asn1::Asn1Sequence* commitmentTypeQualifier;

  __declspec(property(get = get_CommitmentTypeID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CommitmentTypeID;

  __declspec(property(get = get_CommitmentTypeQualifier))::Org::BouncyCastle::Asn1::Asn1Sequence* CommitmentTypeQualifier;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_commitmentTypeId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_commitmentTypeId() const;

  constexpr void __set_commitmentTypeId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_commitmentTypeQualifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_commitmentTypeQualifier() const;

  constexpr void __set_commitmentTypeQualifier(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance, addr 0xe8f3c8, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe8f550, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId);

  /// @brief Method .ctor, addr 0xe8f808, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId,
                                                                                   ::Org::BouncyCastle::Asn1::Asn1Sequence* commitmentTypeQualifier);

  /// @brief Method .ctor, addr 0xe8f810, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId, ::Org::BouncyCastle::Asn1::Asn1Sequence* commitmentTypeQualifier);

  /// @brief Method get_CommitmentTypeID, addr 0xe8f894, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CommitmentTypeID();

  /// @brief Method get_CommitmentTypeQualifier, addr 0xe8f89c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_CommitmentTypeQualifier();

  /// @brief Method ToAsn1Object, addr 0xe8f8a4, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIndication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommitmentTypeIndication(CommitmentTypeIndication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIndication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommitmentTypeIndication(CommitmentTypeIndication const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommitmentTypeIndication();

public:
  /// @brief Field commitmentTypeId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___commitmentTypeId;

  /// @brief Field commitmentTypeQualifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___commitmentTypeQualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication, ___commitmentTypeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication, ___commitmentTypeQualifier) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeIndication");
