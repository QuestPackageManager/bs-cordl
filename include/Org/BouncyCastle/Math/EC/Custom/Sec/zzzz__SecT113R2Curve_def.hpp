#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT113R2Curve)
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT113R2Point;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecT113R2Curve__SecT113R2LookupTable;
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
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT113R2Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecT113R2Curve__SecT113R2LookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable);
// Type: ::SecT113R2LookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1448))
// CS Name: ::SecT113R2Curve::SecT113R2LookupTable*
class CORDL_TYPE __SecT113R2Curve__SecT113R2LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __get_m_outer, put = __set_m_outer))::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* m_outer;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __get_m_table, put = __set_m_table))::ArrayW<uint64_t, ::Array<uint64_t>*> m_table;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __get_m_size, put = __set_m_size)) int32_t m_size;

  __declspec(property(get = get_Size)) int32_t Size;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve*& __get_m_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve*> const& __get_m_outer() const;

  constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_m_table();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_m_table() const;

  constexpr void __set_m_table(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr int32_t& __get_m_size();

  constexpr int32_t const& __get_m_size() const;

  constexpr void __set_m_size(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* outer,
                                                                                                             ::ArrayW<uint64_t, ::Array<uint64_t>*> table, int32_t size);

  /// @brief Method .ctor, addr 0x1006960, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* outer, ::ArrayW<uint64_t, ::Array<uint64_t>*> table, int32_t size);

  /// @brief Method get_Size, addr 0x1006aa8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Size();

  /// @brief Method Lookup, addr 0x1006ab0, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar, addr 0x1006ca8, size 0xc8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  /// @brief Method CreatePoint, addr 0x1006bc8, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  // Ctor Parameters [CppParam { name: "", ty: "__SecT113R2Curve__SecT113R2LookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SecT113R2Curve__SecT113R2LookupTable(__SecT113R2Curve__SecT113R2LookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SecT113R2Curve__SecT113R2LookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SecT113R2Curve__SecT113R2LookupTable(__SecT113R2Curve__SecT113R2LookupTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SecT113R2Curve__SecT113R2LookupTable();

public:
  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* ___m_outer;

  /// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___m_table;

  /// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable, ___m_table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable, ___m_size) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT113R2Curve
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1449))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT113R2Curve*
class CORDL_TYPE SecT113R2Curve : public ::Org::BouncyCastle::Math::EC::AbstractF2mCurve {
public:
  // Declarations
  using SecT113R2LookupTable = ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable;

  /// @brief Field m_infinity, offset 0x58, size 0x8
  __declspec(property(get = __get_m_infinity, put = __set_m_infinity))::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Point* m_infinity;

  /// @brief Field SECT113R2_AFFINE_ZS, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_SECT113R2_AFFINE_ZS,
               put = setStaticF_SECT113R2_AFFINE_ZS))::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> SECT113R2_AFFINE_ZS;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_IsKoblitz)) bool IsKoblitz;

  __declspec(property(get = get_M)) int32_t M;

  __declspec(property(get = get_IsTrinomial)) bool IsTrinomial;

  __declspec(property(get = get_K1)) int32_t K1;

  __declspec(property(get = get_K2)) int32_t K2;

  __declspec(property(get = get_K3)) int32_t K3;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Point*& __get_m_infinity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Point*> const& __get_m_infinity() const;

  constexpr void __set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Point* value);

  static inline void setStaticF_SECT113R2_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_SECT113R2_AFFINE_ZS();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* New_ctor();

  /// @brief Method .ctor, addr 0x10062f0, size 0x20c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method CloneCurve, addr 0x1006504, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method SupportsCoordinateSystem, addr 0x100655c, size 0xc, virtual true, abstract: false, final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method get_Infinity, addr 0x1006568, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_FieldSize, addr 0x1006570, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method FromBigInteger, addr 0x1006578, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method CreateRawPoint, addr 0x10065d8, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint, addr 0x10066ec, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method get_IsKoblitz, addr 0x100678c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsKoblitz();

  /// @brief Method get_M, addr 0x1006794, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_M();

  /// @brief Method get_IsTrinomial, addr 0x100679c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsTrinomial();

  /// @brief Method get_K1, addr 0x10067a4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_K1();

  /// @brief Method get_K2, addr 0x10067ac, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_K2();

  /// @brief Method get_K3, addr 0x10067b4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_K3();

  /// @brief Method CreateCacheSafeLookupTable, addr 0x10067bc, size 0x1a4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "SecT113R2Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT113R2Curve(SecT113R2Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT113R2Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT113R2Curve(SecT113R2Curve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT113R2Curve();

public:
  /// @brief Field m_infinity, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Point* ___m_infinity;

  /// @brief Field SECT113R2_DEFAULT_COORDS offset 0xffffffff size 0x4
  static constexpr int32_t SECT113R2_DEFAULT_COORDS{ static_cast<int32_t>(0x6) };

  /// @brief Field SECT113R2_FE_LONGS offset 0xffffffff size 0x4
  static constexpr int32_t SECT113R2_FE_LONGS{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve, ___m_infinity) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT113R2Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT113R2Curve__SecT113R2LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT113R2Curve/SecT113R2LookupTable");
