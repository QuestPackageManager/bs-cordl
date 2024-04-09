#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FpCurve)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class FpPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class FpCurve;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::FpCurve);
// Type: Org.BouncyCastle.Math.EC::FpCurve
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC::FpCurve*
class CORDL_TYPE FpCurve : public ::Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
  // Declarations
  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  /// @brief Field m_infinity, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_infinity, put = __cordl_internal_set_m_infinity))::Org::BouncyCastle::Math::EC::FpPoint* m_infinity;

  /// @brief Field m_q, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_q, put = __cordl_internal_set_m_q))::Org::BouncyCastle::Math::BigInteger* m_q;

  /// @brief Field m_r, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_r, put = __cordl_internal_set_m_r))::Org::BouncyCastle::Math::BigInteger* m_r;

  /// @brief Method CloneCurve, addr 0x11bd1a0, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method CreateRawPoint, addr 0x11bd3b0, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint, addr 0x11bd438, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method FromBigInteger, addr 0x11bd27c, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ImportPoint, addr 0x11bd4d8, size 0x224, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  static inline ::Org::BouncyCastle::Math::EC::FpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  static inline ::Org::BouncyCastle::Math::EC::FpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                                 ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor);

  static inline ::Org::BouncyCastle::Math::EC::FpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  static inline ::Org::BouncyCastle::Math::EC::FpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::BigInteger* order,
                                                                 ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method SupportsCoordinateSystem, addr 0x11bd230, size 0x20, virtual true, abstract: false, final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  constexpr ::Org::BouncyCastle::Math::EC::FpPoint*& __cordl_internal_get_m_infinity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::FpPoint*> const& __cordl_internal_get_m_infinity() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_m_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_m_q() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_m_r();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_m_r() const;

  constexpr void __cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::FpPoint* value);

  constexpr void __cordl_internal_set_m_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_m_r(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x11bce1c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method .ctor, addr 0x11bce28, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* order,
                    ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method .ctor, addr 0x11bd0d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                    ::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method .ctor, addr 0x11bd0dc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                    ::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method get_FieldSize, addr 0x11bd260, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_Infinity, addr 0x11bd258, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_Q, addr 0x11bd250, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FpCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FpCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FpCurve(FpCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FpCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FpCurve(FpCurve const&) = delete;

  /// @brief Field m_q, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_q;

  /// @brief Field m_r, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_r;

  /// @brief Field m_infinity, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::FpPoint* ___m_infinity;

  /// @brief Field FP_DEFAULT_COORDS offset 0xffffffff size 0x4
  static constexpr int32_t FP_DEFAULT_COORDS{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::FpCurve, 0x68>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpCurve, ___m_q) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpCurve, ___m_r) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpCurve, ___m_infinity) == 0x60, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::FpCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::FpCurve*, "Org.BouncyCastle.Math.EC", "FpCurve");
