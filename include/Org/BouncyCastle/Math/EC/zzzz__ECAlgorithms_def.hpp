#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/ECAlgorithms.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECAlgorithms)
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECAlgorithms;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECAlgorithms);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.ECAlgorithms
class CORDL_TYPE ECAlgorithms : public ::System::Object {
public:
  // Declarations
  /// @brief Method CleanPoint, addr 0x24d1cc4, size 0xdc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* CleanPoint(::Org::BouncyCastle::Math::EC::ECCurve* c, ::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method ImplCheckResult, addr 0x24d0cf8, size 0x70, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplCheckResult(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method ImplShamirsTrickFixedPoint, addr 0x24d1da0, size 0x48c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickFixedPoint(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k,
                                                                                   ::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Math::BigInteger* l);

  /// @brief Method ImplShamirsTrickJsf, addr 0x24d138c, size 0x4bc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickJsf(::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* k,
                                                                            ::Org::BouncyCastle::Math::EC::ECPoint* Q, ::Org::BouncyCastle::Math::BigInteger* l);

  /// @brief Method ImplShamirsTrickWNaf, addr 0x24d0fd0, size 0x360, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* k,
                                                                             ::Org::BouncyCastle::Math::EC::ECPoint* Q, ::Org::BouncyCastle::Math::BigInteger* l);

  /// @brief Method ImplShamirsTrickWNaf, addr 0x24d24c8, size 0x32c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint* P,
                                                                             ::Org::BouncyCastle::Math::BigInteger* k, ::Org::BouncyCastle::Math::BigInteger* l);

  /// @brief Method ImplShamirsTrickWNaf, addr 0x24d222c, size 0x29c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> preCompP,
                                                                             ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> preCompNegP,
                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> wnafP,
                                                                             ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> preCompQ,
                                                                             ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> preCompNegQ,
                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> wnafQ);

  /// @brief Method ImplSumOfMultiplies, addr 0x24d2afc, size 0x498, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplSumOfMultiplies(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                            ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> ps,
                                                                            ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ks);

  /// @brief Method ImplSumOfMultiplies, addr 0x24d27f4, size 0x308, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint*
  ImplSumOfMultiplies(::ArrayW<bool, ::Array<bool>*> negs,
                      ::ArrayW<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, ::Array<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>*> infos,
                      ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> wnafs);

  /// @brief Method ImplSumOfMultiplies, addr 0x24d0d68, size 0x268, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplSumOfMultiplies(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> ps,
                                                                            ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ks);

  /// @brief Method ImplSumOfMultipliesGlv, addr 0x24d092c, size 0x3cc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImplSumOfMultipliesGlv(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> ps,
                                                                               ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ks,
                                                                               ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism);

  /// @brief Method ImportPoint, addr 0x24d087c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(::Org::BouncyCastle::Math::EC::ECCurve* c, ::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method IsF2mCurve, addr 0x24d0104, size 0x24, virtual false, abstract: false, final false
  static inline bool IsF2mCurve(::Org::BouncyCastle::Math::EC::ECCurve* c);

  /// @brief Method IsF2mField, addr 0x24d0128, size 0x184, virtual false, abstract: false, final false
  static inline bool IsF2mField(::Org::BouncyCastle::Math::Field::IFiniteField* field);

  /// @brief Method IsFpCurve, addr 0x24d02ac, size 0x24, virtual false, abstract: false, final false
  static inline bool IsFpCurve(::Org::BouncyCastle::Math::EC::ECCurve* c);

  /// @brief Method IsFpField, addr 0x24d02d0, size 0xac, virtual false, abstract: false, final false
  static inline bool IsFpField(::Org::BouncyCastle::Math::Field::IFiniteField* field);

  /// @brief Method MontgomeryTrick, addr 0x24d1848, size 0x8, virtual false, abstract: false, final false
  static inline void MontgomeryTrick(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, int32_t off, int32_t len);

  /// @brief Method MontgomeryTrick, addr 0x24d1850, size 0x2c4, virtual false, abstract: false, final false
  static inline void MontgomeryTrick(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, int32_t off, int32_t len,
                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  static inline ::Org::BouncyCastle::Math::EC::ECAlgorithms* New_ctor();

  /// @brief Method ReferenceMultiply, addr 0x24d1b14, size 0x140, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ReferenceMultiply(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method ShamirsTrick, addr 0x24d1330, size 0x5c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ShamirsTrick(::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* k, ::Org::BouncyCastle::Math::EC::ECPoint* Q,
                                                                     ::Org::BouncyCastle::Math::BigInteger* l);

  /// @brief Method SumOfMultiplies, addr 0x24d037c, size 0x28c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* SumOfMultiplies(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> ps,
                                                                        ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ks);

  /// @brief Method SumOfTwoMultiplies, addr 0x24d0608, size 0x274, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* SumOfTwoMultiplies(::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                           ::Org::BouncyCastle::Math::EC::ECPoint* Q, ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method ValidatePoint, addr 0x24d1c54, size 0x70, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method .ctor, addr 0x24d2f94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECAlgorithms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECAlgorithms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECAlgorithms(ECAlgorithms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECAlgorithms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECAlgorithms(ECAlgorithms const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1565 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECAlgorithms, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECAlgorithms*, "Org.BouncyCastle.Math.EC", "ECAlgorithms");
