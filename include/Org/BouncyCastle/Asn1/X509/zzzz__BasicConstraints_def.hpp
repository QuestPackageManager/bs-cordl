#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/BasicConstraints.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicConstraints)
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
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
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
class BasicConstraints;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::BasicConstraints);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.BasicConstraints
class CORDL_TYPE BasicConstraints : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_PathLenConstraint)) ::Org::BouncyCastle::Math::BigInteger* PathLenConstraint;

  /// @brief Field cA, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cA, put = __cordl_internal_set_cA)) ::Org::BouncyCastle::Asn1::DerBoolean* cA;

  /// @brief Field pathLenConstraint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pathLenConstraint, put = __cordl_internal_set_pathLenConstraint)) ::Org::BouncyCastle::Asn1::DerInteger* pathLenConstraint;

  /// @brief Method FromExtensions, addr 0x346217c, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetInstance, addr 0x3461ea8, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x3461ebc, size 0x108, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* GetInstance(::System::Object* obj);

  /// @brief Method IsCA, addr 0x346230c, size 0x20, virtual false, abstract: false, final false
  inline bool IsCA();

  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* New_ctor(bool cA);

  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* New_ctor(int32_t pathLenConstraint);

  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3462340, size 0x13c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x346247c, size 0x200, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& __cordl_internal_get_cA() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __cordl_internal_get_cA();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_pathLenConstraint() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_pathLenConstraint();

  constexpr void __cordl_internal_set_cA(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr void __cordl_internal_set_pathLenConstraint(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x34621f4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool cA);

  /// @brief Method .ctor, addr 0x3462268, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t pathLenConstraint);

  /// @brief Method .ctor, addr 0x3461fc4, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_PathLenConstraint, addr 0x346232c, size 0x14, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PathLenConstraint();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicConstraints();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicConstraints", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicConstraints(BasicConstraints&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicConstraints", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicConstraints(BasicConstraints const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 346 };

  /// @brief Field cA, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBoolean* ___cA;

  /// @brief Field pathLenConstraint, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___pathLenConstraint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::BasicConstraints, ___cA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::BasicConstraints, ___pathLenConstraint) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::BasicConstraints, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::BasicConstraints);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::BasicConstraints*, "Org.BouncyCastle.Asn1.X509", "BasicConstraints");
