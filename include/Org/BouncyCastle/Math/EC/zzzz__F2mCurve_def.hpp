#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/F2mCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(F2mCurve)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class F2mCurve_DefaultF2mLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class F2mPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class F2mCurve;
}
namespace Org::BouncyCastle::Math::EC {
class F2mCurve_DefaultF2mLookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::F2mCurve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable);
// Dependencies Org.BouncyCastle.Math.EC.AbstractECLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable
class CORDL_TYPE F2mCurve_DefaultF2mLookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_outer, put = __cordl_internal_set_m_outer)) ::Org::BouncyCastle::Math::EC::F2mCurve* m_outer;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_size, put = __cordl_internal_set_m_size)) int32_t m_size;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_table, put = __cordl_internal_set_m_table)) ::ArrayW<int64_t, ::Array<int64_t>*> m_table;

  /// @brief Method CreatePoint, addr 0x24d0108, size 0x1d8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<int64_t, ::Array<int64_t>*> x, ::ArrayW<int64_t, ::Array<int64_t>*> y);

  /// @brief Method Lookup, addr 0x24cff94, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar, addr 0x24d02e0, size 0x138, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  static inline ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable* New_ctor(::Org::BouncyCastle::Math::EC::F2mCurve* outer, ::ArrayW<int64_t, ::Array<int64_t>*> table, int32_t size);

  constexpr ::Org::BouncyCastle::Math::EC::F2mCurve* const& __cordl_internal_get_m_outer() const;

  constexpr ::Org::BouncyCastle::Math::EC::F2mCurve*& __cordl_internal_get_m_outer();

  constexpr int32_t const& __cordl_internal_get_m_size() const;

  constexpr int32_t& __cordl_internal_get_m_size();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get_m_table() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get_m_table();

  constexpr void __cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::F2mCurve* value);

  constexpr void __cordl_internal_set_m_size(int32_t value);

  constexpr void __cordl_internal_set_m_table(::ArrayW<int64_t, ::Array<int64_t>*> value);

  /// @brief Method .ctor, addr 0x24cff50, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::F2mCurve* outer, ::ArrayW<int64_t, ::Array<int64_t>*> table, int32_t size);

  /// @brief Method get_Size, addr 0x24cff8c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr F2mCurve_DefaultF2mLookupTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "F2mCurve_DefaultF2mLookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  F2mCurve_DefaultF2mLookupTable(F2mCurve_DefaultF2mLookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "F2mCurve_DefaultF2mLookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  F2mCurve_DefaultF2mLookupTable(F2mCurve_DefaultF2mLookupTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1567 };

  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::F2mCurve* ___m_outer;

  /// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___m_table;

  /// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable, ___m_table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable, ___m_size) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
// Dependencies Org.BouncyCastle.Math.EC.AbstractF2mCurve
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.F2mCurve
class CORDL_TYPE F2mCurve : public ::Org::BouncyCastle::Math::EC::AbstractF2mCurve {
public:
  // Declarations
  using DefaultF2mLookupTable = ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_Infinity)) ::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_K1)) int32_t K1;

  __declspec(property(get = get_K2)) int32_t K2;

  __declspec(property(get = get_K3)) int32_t K3;

  __declspec(property(get = get_M)) int32_t M;

  /// @brief Field k1, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_k1, put = __cordl_internal_set_k1)) int32_t k1;

  /// @brief Field k2, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_k2, put = __cordl_internal_set_k2)) int32_t k2;

  /// @brief Field k3, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_k3, put = __cordl_internal_set_k3)) int32_t k3;

  /// @brief Field m, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m, put = __cordl_internal_set_m)) int32_t m;

  /// @brief Field m_infinity, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_infinity, put = __cordl_internal_set_m_infinity)) ::Org::BouncyCastle::Math::EC::F2mPoint* m_infinity;

  /// @brief Method CloneCurve, addr 0x24cf838, size 0xac, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method CreateCacheSafeLookupTable, addr 0x24cfd68, size 0x1bc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  /// @brief Method CreateDefaultMultiplier, addr 0x24cf900, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();

  /// @brief Method CreateRawPoint, addr 0x24cfc08, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint, addr 0x24cfc88, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method FromBigInteger, addr 0x24cf98c, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method IsTrinomial, addr 0x24cfd30, size 0x20, virtual false, abstract: false, final false
  inline bool IsTrinomial();

  static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                                  ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor);

  static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                                  ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor);

  static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                                                                  ::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::BigInteger* order,
                                                                  ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method SupportsCoordinateSystem, addr 0x24cf8e4, size 0x1c, virtual true, abstract: false, final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  constexpr int32_t const& __cordl_internal_get_k1() const;

  constexpr int32_t& __cordl_internal_get_k1();

  constexpr int32_t const& __cordl_internal_get_k2() const;

  constexpr int32_t& __cordl_internal_get_k2();

  constexpr int32_t const& __cordl_internal_get_k3() const;

  constexpr int32_t& __cordl_internal_get_k3();

  constexpr int32_t const& __cordl_internal_get_m() const;

  constexpr int32_t& __cordl_internal_get_m();

  constexpr ::Org::BouncyCastle::Math::EC::F2mPoint* const& __cordl_internal_get_m_infinity() const;

  constexpr ::Org::BouncyCastle::Math::EC::F2mPoint*& __cordl_internal_get_m_infinity();

  constexpr void __cordl_internal_set_k1(int32_t value);

  constexpr void __cordl_internal_set_k2(int32_t value);

  constexpr void __cordl_internal_set_k3(int32_t value);

  constexpr void __cordl_internal_set_m(int32_t value);

  constexpr void __cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::F2mPoint* value);

  /// @brief Method .ctor, addr 0x24cf444, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method .ctor, addr 0x24cf640, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* order,
                    ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method .ctor, addr 0x24cf674, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method .ctor, addr 0x24cf474, size 0x1cc, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* order,
                    ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method .ctor, addr 0x24cf75c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b,
                    ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method get_FieldSize, addr 0x24cf984, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_Infinity, addr 0x24cfd20, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_K1, addr 0x24cfd50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_K1();

  /// @brief Method get_K2, addr 0x24cfd58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_K2();

  /// @brief Method get_K3, addr 0x24cfd60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_K3();

  /// @brief Method get_M, addr 0x24cfd28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_M();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr F2mCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "F2mCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  F2mCurve(F2mCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "F2mCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  F2mCurve(F2mCurve const&) = delete;

  /// @brief Field F2M_DEFAULT_COORDS offset 0xffffffff size 0x4
  static constexpr int32_t F2M_DEFAULT_COORDS{ static_cast<int32_t>(0x6) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1568 };

  /// @brief Field m, offset: 0x58, size: 0x4, def value: None
  int32_t ___m;

  /// @brief Field k1, offset: 0x5c, size: 0x4, def value: None
  int32_t ___k1;

  /// @brief Field k2, offset: 0x60, size: 0x4, def value: None
  int32_t ___k2;

  /// @brief Field k3, offset: 0x64, size: 0x4, def value: None
  int32_t ___k3;

  /// @brief Field m_infinity, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::F2mPoint* ___m_infinity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mCurve, ___m) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mCurve, ___k1) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mCurve, ___k2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mCurve, ___k3) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mCurve, ___m_infinity) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::F2mCurve, 0x70>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::F2mCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::F2mCurve*, "Org.BouncyCastle.Math.EC", "F2mCurve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*, "Org.BouncyCastle.Math.EC", "F2mCurve/DefaultF2mLookupTable");
