#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Abc/Tnaf.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tnaf)
namespace Org::BouncyCastle::Math::EC::Abc {
class SimpleBigDecimal;
}
namespace Org::BouncyCastle::Math::EC::Abc {
class ZTauElement;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mCurve;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Abc {
class Tnaf;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Abc::Tnaf);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Abc.Tnaf
class CORDL_TYPE Tnaf : public ::System::Object {
public:
  // Declarations
  /// @brief Field Alpha0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Alpha0, put = setStaticF_Alpha0)) ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> Alpha0;

  /// @brief Field Alpha0Tnaf, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Alpha0Tnaf, put = setStaticF_Alpha0Tnaf)) ::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> Alpha0Tnaf;

  /// @brief Field Alpha1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Alpha1, put = setStaticF_Alpha1)) ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> Alpha1;

  /// @brief Field Alpha1Tnaf, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Alpha1Tnaf, put = setStaticF_Alpha1Tnaf)) ::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> Alpha1Tnaf;

  /// @brief Field Four, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Four, put = setStaticF_Four)) ::Org::BouncyCastle::Math::BigInteger* Four;

  /// @brief Field MinusOne, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MinusOne, put = setStaticF_MinusOne)) ::Org::BouncyCastle::Math::BigInteger* MinusOne;

  /// @brief Field MinusThree, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MinusThree, put = setStaticF_MinusThree)) ::Org::BouncyCastle::Math::BigInteger* MinusThree;

  /// @brief Field MinusTwo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MinusTwo, put = setStaticF_MinusTwo)) ::Org::BouncyCastle::Math::BigInteger* MinusTwo;

  /// @brief Method ApproximateDivisionByN, addr 0x244c2c8, size 0x174, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ApproximateDivisionByN(::Org::BouncyCastle::Math::BigInteger* k, ::Org::BouncyCastle::Math::BigInteger* s,
                                                                                             ::Org::BouncyCastle::Math::BigInteger* vm, int8_t a, int32_t m, int32_t c);

  /// @brief Method GetLucas, addr 0x244c93c, size 0x1e0, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetLucas(int8_t mu, int32_t k, bool doV);

  /// @brief Method GetMu, addr 0x244c7fc, size 0x100, virtual false, abstract: false, final false
  static inline int8_t GetMu(::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve);

  /// @brief Method GetMu, addr 0x244c8fc, size 0x30, virtual false, abstract: false, final false
  static inline int8_t GetMu(::Org::BouncyCastle::Math::EC::ECFieldElement* curveA);

  /// @brief Method GetMu, addr 0x244c92c, size 0x10, virtual false, abstract: false, final false
  static inline int8_t GetMu(int32_t curveA);

  /// @brief Method GetPreComp, addr 0x244dcf0, size 0x1a4, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> GetPreComp(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p,
                                                                                                                                                  int8_t a);

  /// @brief Method GetShiftsForCofactor, addr 0x244cf90, size 0x94, virtual false, abstract: false, final false
  static inline int32_t GetShiftsForCofactor(::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method GetSi, addr 0x244cc88, size 0x308, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetSi(::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve);

  /// @brief Method GetSi, addr 0x244d024, size 0x250, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetSi(int32_t fieldSize, int32_t curveA,
                                                                                                                         ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method GetTw, addr 0x244cb1c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* GetTw(int8_t mu, int32_t w);

  /// @brief Method MultiplyFromTnaf, addr 0x244d744, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::ArrayW<int8_t, ::Array<int8_t>*> u);

  /// @brief Method MultiplyRTnaf, addr 0x244d4f8, size 0x150, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyRTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method MultiplyTnaf, addr 0x244d648, size 0xfc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);

  static inline ::Org::BouncyCastle::Math::EC::Abc::Tnaf* New_ctor();

  /// @brief Method Norm, addr 0x244bce0, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);

  /// @brief Method Norm, addr 0x244bdf8, size 0xf8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* u, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* v);

  /// @brief Method PartModReduction, addr 0x244d274, size 0x284, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* PartModReduction(::Org::BouncyCastle::Math::BigInteger* k, int32_t m, int8_t a,
                                                                                  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> s, int8_t mu,
                                                                                  int8_t c);

  /// @brief Method Round, addr 0x244bef0, size 0x3ac, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Round(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda0, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda1,
                                                                       int8_t mu);

  /// @brief Method Tau, addr 0x244c7dc, size 0x20, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Tau(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p);

  /// @brief Method TauAdicNaf, addr 0x244c43c, size 0x3a0, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> TauAdicNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);

  /// @brief Method TauAdicWNaf, addr 0x244d934, size 0x3bc, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> TauAdicWNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t width, ::Org::BouncyCastle::Math::BigInteger* pow2w,
                                                               ::Org::BouncyCastle::Math::BigInteger* tw,
                                                               ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> alpha);

  /// @brief Method .ctor, addr 0x244e4d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> getStaticF_Alpha0();

  static inline ::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> getStaticF_Alpha0Tnaf();

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> getStaticF_Alpha1();

  static inline ::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> getStaticF_Alpha1Tnaf();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Four();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusOne();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusThree();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusTwo();

  static inline void setStaticF_Alpha0(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> value);

  static inline void setStaticF_Alpha0Tnaf(::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> value);

  static inline void setStaticF_Alpha1(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> value);

  static inline void setStaticF_Alpha1Tnaf(::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> value);

  static inline void setStaticF_Four(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_MinusOne(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_MinusThree(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_MinusTwo(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tnaf();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tnaf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tnaf(Tnaf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tnaf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tnaf(Tnaf const&) = delete;

  /// @brief Field Pow2Width offset 0xffffffff size 0x1
  static constexpr int8_t Pow2Width{ static_cast<int8_t>(0x10) };

  /// @brief Field Width offset 0xffffffff size 0x1
  static constexpr int8_t Width{ static_cast<int8_t>(0x4) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Abc::Tnaf, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Abc
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::Tnaf);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::Tnaf*, "Org.BouncyCastle.Math.EC.Abc", "Tnaf");
