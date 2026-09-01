#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\CrlDistPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CrlDistPoint)
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlDistPoint;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::X509::CrlDistPoint*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::X509::CrlDistPoint*, "Org.BouncyCastle.Asn1.X509", "CrlDistPoint");
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.CrlDistPoint
class CORDL_TYPE CrlDistPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Method FromExtensions, addr 0x3659d78, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetDistributionPoints, addr 0x3659e64, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::DistributionPoint*> GetDistributionPoints();

  /// @brief Method GetInstance, addr 0x3659cc0, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x3659cd4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::DistributionPoint*> points);

  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x365a0e8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x365a0f0, size 0x170, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_seq() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_seq();

  constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x3659dfc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::DistributionPoint*> points);

  /// @brief Method .ctor, addr 0x3659d70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlDistPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlDistPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlDistPoint(CrlDistPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlDistPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlDistPoint(CrlDistPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 352 };

  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CrlDistPoint, ___seq) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::CrlDistPoint) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
