#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/GeneralSubtree.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(GeneralSubtree)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralSubtree;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::GeneralSubtree);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.GeneralSubtree
class CORDL_TYPE GeneralSubtree : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Base)) ::Org::BouncyCastle::Asn1::X509::GeneralName* Base;

  __declspec(property(get = get_Maximum)) ::Org::BouncyCastle::Math::BigInteger* Maximum;

  __declspec(property(get = get_Minimum)) ::Org::BouncyCastle::Math::BigInteger* Minimum;

  /// @brief Field baseName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseName, put = __cordl_internal_set_baseName)) ::Org::BouncyCastle::Asn1::X509::GeneralName* baseName;

  /// @brief Field maximum, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_maximum, put = __cordl_internal_set_maximum)) ::Org::BouncyCastle::Asn1::DerInteger* maximum;

  /// @brief Field minimum, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_minimum, put = __cordl_internal_set_minimum)) ::Org::BouncyCastle::Asn1::DerInteger* minimum;

  /// @brief Method GetInstance, addr 0x2608cec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o, bool isExplicit);

  /// @brief Method GetInstance, addr 0x2608d68, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName, ::Org::BouncyCastle::Math::BigInteger* minimum,
                                                                          ::Org::BouncyCastle::Math::BigInteger* maximum);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2608e9c, size 0x17c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_baseName() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_baseName();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_maximum() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_maximum();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_minimum() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_minimum();

  constexpr void __cordl_internal_set_baseName(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_maximum(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_minimum(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x2608ca0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName);

  /// @brief Method .ctor, addr 0x2608bfc, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName, ::Org::BouncyCastle::Math::BigInteger* minimum, ::Org::BouncyCastle::Math::BigInteger* maximum);

  /// @brief Method .ctor, addr 0x2608978, size 0x284, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Base, addr 0x2608e0c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Base();

  /// @brief Method get_Maximum, addr 0x2608e88, size 0x14, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Maximum();

  /// @brief Method get_Minimum, addr 0x2608e14, size 0x74, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Minimum();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralSubtree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneralSubtree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralSubtree(GeneralSubtree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralSubtree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralSubtree(GeneralSubtree const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 363 };

  /// @brief Field baseName, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___baseName;

  /// @brief Field minimum, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___minimum;

  /// @brief Field maximum, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___maximum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralSubtree, ___baseName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralSubtree, ___minimum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralSubtree, ___maximum) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::GeneralSubtree, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralSubtree);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralSubtree*, "Org.BouncyCastle.Asn1.X509", "GeneralSubtree");
