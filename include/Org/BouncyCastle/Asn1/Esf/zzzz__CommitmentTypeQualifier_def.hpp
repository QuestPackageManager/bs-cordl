#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CommitmentTypeQualifier)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CommitmentTypeQualifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier);
// Type: Org.BouncyCastle.Asn1.Esf::CommitmentTypeQualifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(137))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CommitmentTypeQualifier*
class CORDL_TYPE CommitmentTypeQualifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field commitmentTypeIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_commitmentTypeIdentifier, put = __set_commitmentTypeIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier;

  /// @brief Field qualifier, offset 0x18, size 0x8
  __declspec(property(get = __get_qualifier, put = __set_qualifier))::Org::BouncyCastle::Asn1::Asn1Object* qualifier;

  __declspec(property(get = get_CommitmentTypeIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CommitmentTypeIdentifier;

  __declspec(property(get = get_Qualifier))::Org::BouncyCastle::Asn1::Asn1Object* Qualifier;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_commitmentTypeIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_commitmentTypeIdentifier() const;

  constexpr void __set_commitmentTypeIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_qualifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_qualifier() const;

  constexpr void __set_qualifier(::Org::BouncyCastle::Asn1::Asn1Object* value);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier);

  /// @brief Method .ctor, addr 0xe8f9ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier,
                                                                                  ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier);

  /// @brief Method .ctor, addr 0xe8f9f4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeIdentifier, ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier);

  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe8fa88, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe8fcd4, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier* GetInstance(::System::Object* obj);

  /// @brief Method get_CommitmentTypeIdentifier, addr 0xe8fe5c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CommitmentTypeIdentifier();

  /// @brief Method get_Qualifier, addr 0xe8fe64, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Qualifier();

  /// @brief Method ToAsn1Object, addr 0xe8fe6c, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeQualifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommitmentTypeQualifier(CommitmentTypeQualifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeQualifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommitmentTypeQualifier(CommitmentTypeQualifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommitmentTypeQualifier();

public:
  /// @brief Field commitmentTypeIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___commitmentTypeIdentifier;

  /// @brief Field qualifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___qualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier, ___commitmentTypeIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier, ___qualifier) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier*, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeQualifier");
