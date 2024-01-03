#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractF2mCurve)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mCurve;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::AbstractF2mCurve);
// Type: Org.BouncyCastle.Math.EC::AbstractF2mCurve
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1443))
// CS Name: ::Org.BouncyCastle.Math.EC::AbstractF2mCurve*
class CORDL_TYPE AbstractF2mCurve : public ::Org::BouncyCastle::Math::EC::ECCurve {
public:
  // Declarations
  /// @brief Field si, offset 0x50, size 0x8
  __declspec(property(get = __get_si, put = __set_si))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> si;

  __declspec(property(get = get_IsKoblitz)) bool IsKoblitz;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>& __get_si();

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> const& __get_si() const;

  constexpr void __set_si(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value);

  /// @brief Method Inverse, addr 0x1002888, size 0x8c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* Inverse(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method BuildField, addr 0x1002914, size 0x1e0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Field::IFiniteField* BuildField(int32_t m, int32_t k1, int32_t k2, int32_t k3);

  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mCurve* New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3);

  /// @brief Method .ctor, addr 0x1002af4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3);

  /// @brief Method CreatePoint, addr 0x1002b28, size 0x160, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);

  /// @brief Method IsValidFieldElement, addr 0x1002c88, size 0x54, virtual true, abstract: false, final false
  inline bool IsValidFieldElement(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method RandomFieldElement, addr 0x1002cdc, size 0x48, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method RandomFieldElementMult, addr 0x1002d24, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method DecompressPoint, addr 0x1002df8, size 0x214, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int32_t yTilde, ::Org::BouncyCastle::Math::BigInteger* X1);

  /// @brief Method SolveQuadraticEquation, addr 0x100300c, size 0x2ec, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SolveQuadraticEquation(::Org::BouncyCastle::Math::EC::ECFieldElement* beta);

  /// @brief Method GetSi, addr 0x10032f8, size 0xf4, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetSi();

  /// @brief Method get_IsKoblitz, addr 0x10033ec, size 0x84, virtual true, abstract: false, final false
  inline bool get_IsKoblitz();

  /// @brief Method ImplRandomFieldElementMult, addr 0x1002db8, size 0x40, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ImplRandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r, int32_t m);

  // Ctor Parameters [CppParam { name: "", ty: "AbstractF2mCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractF2mCurve(AbstractF2mCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractF2mCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractF2mCurve(AbstractF2mCurve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractF2mCurve();

public:
  /// @brief Field si, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ___si;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractF2mCurve, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::AbstractF2mCurve, ___si) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractF2mCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractF2mCurve*, "Org.BouncyCastle.Math.EC", "AbstractF2mCurve");
