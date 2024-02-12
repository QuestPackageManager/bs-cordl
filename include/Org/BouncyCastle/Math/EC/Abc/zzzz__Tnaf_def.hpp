#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Math.EC.Abc::Tnaf
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1357))
// CS Name: ::Org.BouncyCastle.Math.EC.Abc::Tnaf*
class CORDL_TYPE Tnaf : public ::System::Object {
public:
  // Declarations
  /// @brief Field MinusOne, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MinusOne, put = setStaticF_MinusOne))::Org::BouncyCastle::Math::BigInteger* MinusOne;

  /// @brief Field MinusTwo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MinusTwo, put = setStaticF_MinusTwo))::Org::BouncyCastle::Math::BigInteger* MinusTwo;

  /// @brief Field MinusThree, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MinusThree, put = setStaticF_MinusThree))::Org::BouncyCastle::Math::BigInteger* MinusThree;

  /// @brief Field Four, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Four, put = setStaticF_Four))::Org::BouncyCastle::Math::BigInteger* Four;

  /// @brief Field Alpha0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Alpha0,
                             put = setStaticF_Alpha0))::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> Alpha0;

  /// @brief Field Alpha0Tnaf, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Alpha0Tnaf, put = setStaticF_Alpha0Tnaf))::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> Alpha0Tnaf;

  /// @brief Field Alpha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Alpha1,
                             put = setStaticF_Alpha1))::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> Alpha1;

  /// @brief Field Alpha1Tnaf, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Alpha1Tnaf, put = setStaticF_Alpha1Tnaf))::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> Alpha1Tnaf;

  static inline void setStaticF_MinusOne(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusOne();

  static inline void setStaticF_MinusTwo(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusTwo();

  static inline void setStaticF_MinusThree(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusThree();

  static inline void setStaticF_Four(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Four();

  static inline void setStaticF_Alpha0(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> getStaticF_Alpha0();

  static inline void setStaticF_Alpha0Tnaf(::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> value);

  static inline ::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> getStaticF_Alpha0Tnaf();

  static inline void setStaticF_Alpha1(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> getStaticF_Alpha1();

  static inline void setStaticF_Alpha1Tnaf(::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> value);

  static inline ::ArrayW<::ArrayW<int8_t, ::Array<int8_t>*>, ::Array<::ArrayW<int8_t, ::Array<int8_t>*>>*> getStaticF_Alpha1Tnaf();

  /// @brief Method Norm, addr 0xff4254, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);

  /// @brief Method Norm, addr 0xff4370, size 0xfc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* u, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* v);

  /// @brief Method Round, addr 0xff446c, size 0x3b8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Round(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda0, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda1,
                                                                       int8_t mu);

  /// @brief Method ApproximateDivisionByN, addr 0xff4850, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ApproximateDivisionByN(::Org::BouncyCastle::Math::BigInteger* k, ::Org::BouncyCastle::Math::BigInteger* s,
                                                                                             ::Org::BouncyCastle::Math::BigInteger* vm, int8_t a, int32_t m, int32_t c);

  /// @brief Method TauAdicNaf, addr 0xff49c8, size 0x3a4, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> TauAdicNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);

  /// @brief Method Tau, addr 0xff4d6c, size 0x20, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Tau(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p);

  /// @brief Method GetMu, addr 0xff4d8c, size 0x104, virtual false, abstract: false, final false
  static inline int8_t GetMu(::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve);

  /// @brief Method GetMu, addr 0xff4e90, size 0x30, virtual false, abstract: false, final false
  static inline int8_t GetMu(::Org::BouncyCastle::Math::EC::ECFieldElement* curveA);

  /// @brief Method GetMu, addr 0xff4ec0, size 0x10, virtual false, abstract: false, final false
  static inline int8_t GetMu(int32_t curveA);

  /// @brief Method GetLucas, addr 0xff4ed0, size 0x1e4, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetLucas(int8_t mu, int32_t k, bool doV);

  /// @brief Method GetTw, addr 0xff50b4, size 0x16c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* GetTw(int8_t mu, int32_t w);

  /// @brief Method GetSi, addr 0xff5220, size 0x30c, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetSi(::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve);

  /// @brief Method GetSi, addr 0xff55c4, size 0x250, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetSi(int32_t fieldSize, int32_t curveA,
                                                                                                                         ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method GetShiftsForCofactor, addr 0xff552c, size 0x98, virtual false, abstract: false, final false
  static inline int32_t GetShiftsForCofactor(::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method PartModReduction, addr 0xff5814, size 0x288, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* PartModReduction(::Org::BouncyCastle::Math::BigInteger* k, int32_t m, int8_t a,
                                                                                  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> s, int8_t mu,
                                                                                  int8_t c);

  /// @brief Method MultiplyRTnaf, addr 0xff5a9c, size 0x150, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyRTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method MultiplyTnaf, addr 0xff5bec, size 0xfc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);

  /// @brief Method MultiplyFromTnaf, addr 0xff5ce8, size 0x20c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::ArrayW<int8_t, ::Array<int8_t>*> u);

  /// @brief Method TauAdicWNaf, addr 0xff5ef4, size 0x3c0, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> TauAdicWNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t width, ::Org::BouncyCastle::Math::BigInteger* pow2w,
                                                               ::Org::BouncyCastle::Math::BigInteger* tw,
                                                               ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> alpha);

  /// @brief Method GetPreComp, addr 0xff62b4, size 0x1a4, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> GetPreComp(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p,
                                                                                                                                                  int8_t a);

  static inline ::Org::BouncyCastle::Math::EC::Abc::Tnaf* New_ctor();

  /// @brief Method .ctor, addr 0xff6b64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Tnaf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tnaf(Tnaf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tnaf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tnaf(Tnaf const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tnaf();

public:
  /// @brief Field Width offset 0xffffffff size 0x1
  static constexpr int8_t Width{ static_cast<int8_t>(0x4) };

  /// @brief Field Pow2Width offset 0xffffffff size 0x1
  static constexpr int8_t Pow2Width{ static_cast<int8_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Abc::Tnaf, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Abc
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::Tnaf);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::Tnaf*, "Org.BouncyCastle.Math.EC.Abc", "Tnaf");
