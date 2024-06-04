#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CommitmentTypeIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CommitmentTypeIdentifier)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CommitmentTypeIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier);
// Type: Org.BouncyCastle.Asn1.Esf::CommitmentTypeIdentifier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CommitmentTypeIdentifier*
class CORDL_TYPE CommitmentTypeIdentifier : public ::System::Object {
public:
  // Declarations
  /// @brief Field ProofOfApproval, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProofOfApproval, put = setStaticF_ProofOfApproval))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ProofOfApproval;

  /// @brief Field ProofOfCreation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProofOfCreation, put = setStaticF_ProofOfCreation))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ProofOfCreation;

  /// @brief Field ProofOfDelivery, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProofOfDelivery, put = setStaticF_ProofOfDelivery))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ProofOfDelivery;

  /// @brief Field ProofOfOrigin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProofOfOrigin, put = setStaticF_ProofOfOrigin))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ProofOfOrigin;

  /// @brief Field ProofOfReceipt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProofOfReceipt, put = setStaticF_ProofOfReceipt))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ProofOfReceipt;

  /// @brief Field ProofOfSender, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProofOfSender, put = setStaticF_ProofOfSender))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ProofOfSender;

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier* New_ctor();

  /// @brief Method .ctor, addr 0x10f443c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfApproval();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfCreation();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfDelivery();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfOrigin();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfReceipt();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ProofOfSender();

  static inline void setStaticF_ProofOfApproval(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ProofOfCreation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ProofOfDelivery(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ProofOfOrigin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ProofOfReceipt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ProofOfSender(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommitmentTypeIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommitmentTypeIdentifier(CommitmentTypeIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommitmentTypeIdentifier(CommitmentTypeIdentifier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeIdentifier");
