#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CommitmentTypeQualifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CommitmentTypeQualifier)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
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
class CommitmentTypeQualifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.CommitmentTypeQualifier
class CORDL_TYPE CommitmentTypeQualifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CommitmentTypeIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CommitmentTypeIdentifier;

  __declspec(property(get = get_Qualifier)) ::Org::BouncyCastle::Asn1::Asn1Object* Qualifier;

  /// @brief Field commitmentTypeIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_commitmentTypeIdentifier,
                      put = __cordl_internal_set_commitmentTypeIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier;

  /// @brief Field qualifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_qualifier, put = __cordl_internal_set_qualifier)) ::Org::BouncyCastle::Asn1::Asn1Object* qualifier;

  /// @brief Method GetInstance, addr 0x324a654, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier,
                                                                                  ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x324a7e8, size 0x154, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_commitmentTypeIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_commitmentTypeIdentifier();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& __cordl_internal_get_qualifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_qualifier();

  constexpr void __cordl_internal_set_commitmentTypeIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_qualifier(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x324a39c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier);

  /// @brief Method .ctor, addr 0x324a3a4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier, ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier);

  /// @brief Method .ctor, addr 0x324a41c, size 0x238, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CommitmentTypeIdentifier, addr 0x324a7d8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CommitmentTypeIdentifier();

  /// @brief Method get_Qualifier, addr 0x324a7e0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Qualifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommitmentTypeQualifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeQualifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommitmentTypeQualifier(CommitmentTypeQualifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeQualifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommitmentTypeQualifier(CommitmentTypeQualifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 137 };

  /// @brief Field commitmentTypeIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___commitmentTypeIdentifier;

  /// @brief Field qualifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___qualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier, ___commitmentTypeIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier, ___qualifier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier*, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeQualifier");
